/*
 * XREFs of DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C00C6030
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_K@Z @ 0x1C0093C38 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_K@Z.c)
 */

__int64 __fastcall DxgkImmediateSignalSynchronizationObjectByReference(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  DXGADAPTERSYNCOBJECT *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD **)a1;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 156LL) & 4) != 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)(v2 + 4));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
    v11 = v2 + 30;
    if ( (_QWORD *)*v11 == v11 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v12 + 24) = 784LL;
      WdLogEvent5_WdAssertion(v12);
    }
    v13 = (_QWORD *)*v11;
    if ( v15[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
    v6 = a2;
    v5 = (DXGADAPTERSYNCOBJECT *)(v13 - 5);
  }
  else
  {
    v5 = (DXGADAPTERSYNCOBJECT *)(v2 + 30);
    v6 = a2;
  }
  v8 = DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(v5, (struct DXGSYNCOBJECT *)v2, v6);
  if ( v8 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v14 + 32) = v8;
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
  }
  return (unsigned int)v8;
}
