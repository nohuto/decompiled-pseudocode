/*
 * XREFs of ??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z @ 0x1C008E570
 * Callers:
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00B4C5C (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00B85CC (--0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 * Callees:
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C008DFDC (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x1C008E5CC (-_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::CCD_SET_STRING_ID(CCD_SET_STRING_ID *this, const struct _STRING *a2)
{
  _WORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // rax

  *(_DWORD *)this = 0;
  v3 = (_WORD *)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 16) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *(_DWORD *)this = CCD_SET_STRING_ID::_CopyString((struct _STRING *)((char *)this + 8), a2);
  if ( *v3 > 0x4000u )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v6);
  }
  CCD_SET_STRING_ID::_ParseMonitorDescriptors(this);
  return this;
}
