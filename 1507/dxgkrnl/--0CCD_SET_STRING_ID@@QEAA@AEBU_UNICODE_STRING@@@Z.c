/*
 * XREFs of ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00675B8
 * Callers:
 *     ?SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C005EF4C (-SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00632C4 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C0065D8C (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     _CcdRetrieveSetIdFromRegistry @ 0x1C009D484 (_CcdRetrieveSetIdFromRegistry.c)
 * Callees:
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0066FC8 (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z @ 0x1C006775C (-_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::CCD_SET_STRING_ID(
        CCD_SET_STRING_ID *this,
        const struct _UNICODE_STRING *a2)
{
  char *v2; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rax

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
    v8 = 0LL;
    if ( (a2->Length & 0xFFFE) != 0 )
    {
      do
      {
        v7 = *((_QWORD *)v2 + 1);
        v6 = (unsigned int)v8;
        v8 = (unsigned int)(v8 + 1);
        *(_BYTE *)(v6 + v7) = a2->Buffer[v6];
      }
      while ( (unsigned int)v8 < a2->Length >> 1 );
    }
    *(_WORD *)v2 = a2->Length >> 1;
    v5 = 0;
  }
  *(_DWORD *)this = v5;
  if ( *(_WORD *)v2 > 0x4000u )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v11);
  }
  CCD_SET_STRING_ID::_ParseMonitorDescriptors(this, v6, v8, v9);
  return this;
}
