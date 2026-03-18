/*
 * XREFs of ?PeekNextMessage@CChannel@@QEAAJPEAUMIL_MESSAGE@@_KPEAH@Z @ 0x1800A0484
 * Callers:
 *     ?MilComposition_PeekNextMessage@@YAJPEAUMIL_CHANNEL__@@PEAUMIL_MESSAGE@@_KPEAH@Z @ 0x1800A3700 (-MilComposition_PeekNextMessage@@YAJPEAUMIL_CHANNEL__@@PEAUMIL_MESSAGE@@_KPEAH@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall CChannel::PeekNextMessage(CChannel *this, struct MIL_MESSAGE *a2, unsigned __int64 a3, int *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  __int64 **v9; // rbx
  __int64 *v10; // rsi
  __int64 v11; // rax
  size_t v12; // r8
  size_t v14; // r8

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v9 = (__int64 **)((char *)this + 72);
  if ( *v9 == (__int64 *)v9 )
  {
    *a4 = 0;
    v14 = 28LL;
    if ( a3 < 0x1C )
      v14 = a3;
    memset_0(a2, 0, v14);
  }
  else
  {
    v10 = *v9;
    v11 = **v9;
    if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v11 + 8) != v10 )
      __fastfail(3u);
    v12 = 28LL;
    *v9 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v9;
    if ( a3 < 0x1C )
      v12 = a3;
    memcpy_0(a2, v10 + 2, v12);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v10);
    *a4 = 1;
  }
  LeaveCriticalSection(v4);
  return 0LL;
}
