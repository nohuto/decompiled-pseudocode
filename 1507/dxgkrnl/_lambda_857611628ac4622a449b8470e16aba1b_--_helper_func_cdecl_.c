/*
 * XREFs of _lambda_857611628ac4622a449b8470e16aba1b_::_helper_func_cdecl_ @ 0x1C008CAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall lambda_857611628ac4622a449b8470e16aba1b_::_helper_func_cdecl_(
        __int64 *a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // rcx
  unsigned int v13; // ebp
  _QWORD *v14; // rax
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  DXGFASTMUTEX *v18; // [rsp+20h] [rbp-18h] BYREF
  char v19; // [rsp+28h] [rbp-10h]

  v4 = *a2;
  v6 = *a1;
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v8 + 144) )
      ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v8 + 128));
  }
  v9 = 3 * v4;
  v10 = a1[2] + 24 * v4;
  v18 = *(DXGFASTMUTEX **)v10;
  v19 = 0;
  if ( !v18 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v9, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 421LL;
    WdLogEvent5_WdAssertion(v16);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v18 + 1) == CurrentThread )
  {
    v17 = WdLogNewEntry5_WdAssertion(CurrentThread, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v17);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v18);
  v12 = *((unsigned int *)a1 + 2);
  v13 = 0;
  v14 = *(_QWORD **)(v10 + 8);
  if ( (_DWORD)v12 )
  {
    do
    {
      if ( *v14 )
        ++v13;
      ++v14;
      --v12;
    }
    while ( v12 );
  }
  if ( v19 )
  {
    v19 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v18);
  }
  result = 0LL;
  a2[1] = v13;
  return result;
}
