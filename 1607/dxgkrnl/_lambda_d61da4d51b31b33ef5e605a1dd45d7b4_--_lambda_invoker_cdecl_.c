/*
 * XREFs of _lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_ @ 0x1C0091070
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

__int64 __fastcall lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  struct DXGFASTMUTEX *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned int v12; // ebp
  _QWORD *v13; // rax
  __int64 v15; // rax
  int v16; // r9d
  _BYTE v17[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 && *(struct _KTHREAD **)(v2 + 8) == KeGetCurrentThread() )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v15 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v15);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v2, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v16 = *(_DWORD *)(v2 + 16);
      if ( v16 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v5, &EventBlockThread, v6, v16);
    }
    ExAcquirePushLockSharedEx(v2, 0LL);
  }
  v7 = *a2;
  if ( *(_QWORD *)a1 )
    DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)a1 + 16LL));
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(struct DXGFASTMUTEX **)(v8 + 24 * v7);
  v10 = v8 + 24 * v7;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, v9);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v11 = *(unsigned int *)(a1 + 8);
  v12 = 0;
  v13 = *(_QWORD **)(v10 + 8);
  if ( (_DWORD)v11 )
  {
    do
    {
      if ( *v13 )
        ++v12;
      ++v13;
      --v11;
    }
    while ( v11 );
  }
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  a2[1] = v12;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
