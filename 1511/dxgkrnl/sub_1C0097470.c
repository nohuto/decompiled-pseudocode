/*
 * XREFs of sub_1C0097470 @ 0x1C0097470
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall sub_1C0097470(__int64 *a1, unsigned int *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  _QWORD *v13; // rax
  __int64 result; // rax
  DXGFASTMUTEX *v15; // [rsp+20h] [rbp-18h] BYREF
  char v16; // [rsp+28h] [rbp-10h]

  v2 = *a2;
  v4 = *a1;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v6 + 144) )
      ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v6 + 128));
  }
  v7 = a1[2] + 24 * v2;
  v15 = *(DXGFASTMUTEX **)v7;
  v16 = 0;
  if ( !v15 )
  {
    v8 = WdLogNewEntry5_WdAssertion(3 * v2);
    *(_QWORD *)(v8 + 24) = 451LL;
    WdLogEvent5_WdAssertion(v8);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)v15 == CurrentThread )
  {
    v10 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v10 + 24) = 458LL;
    WdLogEvent5_WdAssertion(v10);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v15);
  v11 = *((unsigned int *)a1 + 2);
  v12 = 0;
  v13 = *(_QWORD **)(v7 + 8);
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
  if ( v16 )
  {
    v16 = 0;
    DXGFASTMUTEX::Release(v15);
  }
  result = 0LL;
  a2[1] = v12;
  return result;
}
