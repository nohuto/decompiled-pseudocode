/*
 * XREFs of ??1CChannelContext@@UEAA@XZ @ 0x1800A4294
 * Callers:
 *     ??_ECChannelContext@@UEAAPEAXI@Z @ 0x1800A43C0 (--_ECChannelContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CChannelContext::~CChannelContext(CChannelContext *this)
{
  __int64 v1; // rdi
  __int64 v3; // rdi

  v1 = *((_QWORD *)this + 3);
  *(_QWORD *)this = &CChannelContext::`vftable';
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
    *((_QWORD *)this + 3) = 0LL;
  }
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 5));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
