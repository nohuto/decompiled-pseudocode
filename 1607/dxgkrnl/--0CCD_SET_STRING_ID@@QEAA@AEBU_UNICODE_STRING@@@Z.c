/*
 * XREFs of ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C008DE4C
 * Callers:
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C008C930 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     _CcdRetrieveSetIdFromRegistry @ 0x1C00B5D44 (_CcdRetrieveSetIdFromRegistry.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00B6CAC (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C00B9650 (-SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C008DFDC (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z @ 0x1C008E60C (-_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::CCD_SET_STRING_ID(
        CCD_SET_STRING_ID *this,
        const struct _UNICODE_STRING *a2)
{
  char *v2; // rdi
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  __int64 v10; // rax

  v2 = (char *)this + 8;
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 16) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v5 = CCD_SET_STRING_ID::_ReallocString((struct _STRING *)((char *)this + 8), a2->Length >> 1);
  if ( v5 >= 0 )
  {
    v7 = 0;
    if ( (a2->Length & 0xFFFE) != 0 )
    {
      do
      {
        v6 = *((_QWORD *)v2 + 1);
        v8 = v7++;
        *(_BYTE *)(v8 + v6) = a2->Buffer[v8];
      }
      while ( v7 < a2->Length >> 1 );
    }
    *(_WORD *)v2 = a2->Length >> 1;
    v5 = 0;
  }
  *(_DWORD *)this = v5;
  if ( *(_WORD *)v2 > 0x4000u )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v10);
  }
  CCD_SET_STRING_ID::_ParseMonitorDescriptors(this);
  return this;
}
