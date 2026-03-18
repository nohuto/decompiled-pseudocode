/*
 * XREFs of ?_SaveTopologySetCallback@?A0x55dd27e3@@YAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B1810
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C009D124 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 */

__int64 __fastcall `anonymous namespace'::_SaveTopologySetCallback(
        _anonymous_namespace_ *this,
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *a2,
        void *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v8; // rax

  v4 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::SaveTopology(this, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v8[3] = v6;
    v8[4] = a2;
    v8[5] = *((_QWORD *)a2 + 8);
    WdLogEvent5_WdError(v8);
  }
  return (unsigned int)v6;
}
