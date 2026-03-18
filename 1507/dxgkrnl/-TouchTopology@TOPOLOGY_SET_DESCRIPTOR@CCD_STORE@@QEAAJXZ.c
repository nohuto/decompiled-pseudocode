/*
 * XREFs of ?TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ @ 0x1C009CA70
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C009D124 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_UpdateTimestampTopologySetCallback@?A0x55dd27e3@@YAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00BBBE0 (-_UpdateTimestampTopologySetCallback@-A0x55dd27e3@@YAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TouchTopology(CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this)
{
  const WCHAR *v2; // rdx
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rdi
  _QWORD *v7; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = (const WCHAR *)*((_QWORD *)this + 8);
  v8 = MEMORY[0xFFFFF78000000014];
  v3 = RtlWriteRegistryValue(0x40000000u, v2, L"Timestamp", 0xBu, &v8, 8u);
  v5 = v3;
  if ( v3 < 0 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v7[3] = v5;
    v7[4] = SHIDWORD(v8);
    v7[5] = (unsigned int)v8;
    v7[6] = *((int *)this + 15);
    v7[7] = *((unsigned int *)this + 14);
    WdLogEvent5_WdError(v7);
  }
  else
  {
    *((_QWORD *)this + 7) = v8;
  }
  return (unsigned int)v5;
}
