/*
 * XREFs of ?BoundBufferedOutput@CInteractionContextWrapper@@AEAAX_K@Z @ 0x18016FCAC
 * Callers:
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18016FB44 (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?PeekFirst@?$CQueue@PEAVCBufferedInteractionOutput@@@@QEAAPEAXPEAXPEAPEAVCBufferedInteractionOutput@@@Z @ 0x18017048C (-PeekFirst@-$CQueue@PEAVCBufferedInteractionOutput@@@@QEAAPEAXPEAXPEAPEAVCBufferedInteractionOut.c)
 */

void __fastcall CInteractionContextWrapper::BoundBufferedOutput(CInteractionContextWrapper *this, __int64 a2)
{
  char *v4; // rbx
  _QWORD *v5; // rbp
  char *v6; // rdx
  __int64 v7; // rax
  char *v8; // rbx
  _QWORD *v9; // rdi
  char *v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 124) >= 0x7D0u )
  {
    v4 = (char *)this + 480;
    do
    {
      v5 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 24));
      v6 = *(char **)v4;
      v7 = **(_QWORD **)v4;
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || *(char **)(v7 + 8) != v6 )
        __fastfail(3u);
      *(_QWORD *)v4 = v7;
      *(_QWORD *)(v7 + 8) = v4;
      if ( v6 != v4 )
      {
        v5 = (_QWORD *)*((_QWORD *)v6 + 2);
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
        --*((_DWORD *)v4 + 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 24));
      v12 = v5;
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v5);
    }
    while ( *((_DWORD *)this + 124) >= 0x7D0u );
  }
  v8 = (char *)this + 480;
  while ( CQueue<CBufferedInteractionOutput *>::PeekFirst(v8, a2, &v12) )
  {
    v9 = v12;
    if ( (unsigned __int64)(a2 - *v12) <= 0x1E8480 )
      break;
    EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 24));
    v10 = *(char **)v8;
    v11 = **(_QWORD **)v8;
    if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 || *(char **)(v11 + 8) != v10 )
      __fastfail(3u);
    *(_QWORD *)v8 = v11;
    *(_QWORD *)(v11 + 8) = v8;
    if ( v10 != v8 )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      --*((_DWORD *)v8 + 4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 24));
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v9);
  }
}
