/*
 * XREFs of DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C00AFAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_K@Z @ 0x1C008340C (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_K@Z.c)
 */

__int64 __fastcall DxgkImmediateSignalSynchronizationObjectByReference(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  DXGADAPTERSYNCOBJECT *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rdi
  __int64 v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rax
  _BYTE v18[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD **)a1;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 132LL) & 4) != 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (struct DXGFASTMUTEX *const)(v2 + 4));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    v14 = v2 + 27;
    if ( (_QWORD *)*v14 == v14 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      *(_QWORD *)(v15 + 24) = 830LL;
      WdLogEvent5_WdAssertion(v15);
    }
    v16 = (_QWORD *)*v14;
    if ( v18[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
    v6 = a2;
    v5 = (DXGADAPTERSYNCOBJECT *)(v16 - 5);
  }
  else
  {
    v5 = (DXGADAPTERSYNCOBJECT *)(v2 + 27);
    v6 = a2;
  }
  v8 = DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(v5, (struct DXGSYNCOBJECT *)v2, v6);
  if ( v8 < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v17 + 32) = v8;
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdError(v17);
  }
  return (unsigned int)v8;
}
