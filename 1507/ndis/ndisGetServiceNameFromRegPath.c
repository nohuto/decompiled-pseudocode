/*
 * XREFs of ndisGetServiceNameFromRegPath @ 0x1C00AE844
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C001C6DC (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ndisRegisterMiniportDriver @ 0x1C00F4828 (ndisRegisterMiniportDriver.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall ndisGetServiceNameFromRegPath(__int64 a1, __int64 a2)
{
  char v2; // r9
  unsigned __int16 v3; // r11
  __int64 v4; // rbx
  unsigned __int16 result; // ax
  unsigned __int16 i; // r8
  _WORD *v7; // r10
  __int16 v8; // cx

  if ( a2 && a1 && *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_DWORD *)a2 = 0;
    v2 = 1;
    v3 = 0;
    v4 = *(_QWORD *)(a1 + 8);
    result = *(_WORD *)a1 & 0xFFFE;
    for ( i = 0; i < result; result = *(_WORD *)a1 >> 1 )
    {
      v7 = (_WORD *)(v4 + 2LL * i);
      if ( *v7 == 92 )
      {
        v2 = 1;
      }
      else if ( v2 )
      {
        *(_QWORD *)(a2 + 8) = v7;
        v3 = i;
        v2 = 0;
      }
      ++i;
    }
    if ( *(_QWORD *)(a2 + 8) )
    {
      result = 2 * v3;
      v8 = *(_WORD *)a1 - 2 * v3;
      *(_WORD *)(a2 + 2) = v8;
      *(_WORD *)a2 = v8;
    }
  }
  return result;
}
