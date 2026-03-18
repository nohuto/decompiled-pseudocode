/*
 * XREFs of ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C006766C
 * Callers:
 *     ?SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C005EF4C (-SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0063E1C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006419C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C0065150 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C0065230 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C009EFC8 (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ?_GetDescriptorLength@CCD_SET_STRING_ID@@AEBAGI@Z @ 0x1C0066F9C (-_GetDescriptorLength@CCD_SET_STRING_ID@@AEBAGI@Z.c)
 *     ?_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z @ 0x1C006775C (-_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z.c)
 */

const struct _STRING *__fastcall CCD_SET_STRING_ID::GetConnectedSetStr(CCD_SET_STRING_ID *this)
{
  _WORD *v1; // rsi
  __int64 v2; // rbp
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // r11
  unsigned __int16 DescriptorLength; // di

  v1 = (_WORD *)((char *)this + 40);
  v2 = 0LL;
  if ( !*((_WORD *)this + 20) )
  {
    v5 = CCD_SET_STRING_ID::_ReallocString((struct _STRING *)((char *)this + 40), *((_WORD *)this + 4));
    *(_DWORD *)this = v5;
    if ( v5 >= 0 )
    {
      *v1 = 0;
      if ( *((_WORD *)this + 16) )
      {
        do
        {
          v6 = *((_QWORD *)this + 3);
          DescriptorLength = CCD_SET_STRING_ID::_GetDescriptorLength(this, *(unsigned __int16 *)(v6 + 8 * v2 + 6));
          memmove(
            (void *)(*((_QWORD *)this + 6) + (unsigned __int16)*v1),
            (const void *)(*((_QWORD *)this + 2) + *(unsigned __int16 *)(v6 + 8 * v7)),
            DescriptorLength);
          *v1 += DescriptorLength;
          if ( *v1 >= *((_WORD *)this + 4) )
            break;
          v2 = (unsigned int)(v2 + 1);
          *(_BYTE *)((unsigned __int16)(*v1)++ + *((_QWORD *)this + 6)) = 94;
        }
        while ( (unsigned int)v2 < *((unsigned __int16 *)this + 16) );
      }
    }
  }
  return (const struct _STRING *)v1;
}
