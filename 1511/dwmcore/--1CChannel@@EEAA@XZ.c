/*
 * XREFs of ??1CChannel@@EEAA@XZ @ 0x1800FF988
 * Callers:
 *     ??_ECChannel@@EEAAPEAXI@Z @ 0x1800FFAB0 (--_ECChannel@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x1800A257C (-DeInit@CCriticalSection@@QEAAXXZ.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x1800FC0C0 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 */

void __fastcall CChannel::~CChannel(CChannel *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  __int64 **v4; // r14
  __int64 *v5; // r15
  __int64 v6; // rax
  WPF::ProcessHeapImpl *v7; // rdi
  CCommandBatch *v8; // rcx
  WPF::ProcessHeapImpl *v9; // rdi

  *(_QWORD *)this = &CChannel::`vftable';
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v2 + 8));
    *((_QWORD *)this + 7) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 11);
  if ( v3 )
    CloseHandle(v3);
  v4 = (__int64 **)((char *)this + 72);
  while ( *v4 != (__int64 *)v4 )
  {
    v5 = *v4;
    v6 = **v4;
    if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    v7 = WPF::g_pProcessHeap;
    *v4 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v4;
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, v5);
  }
  v8 = (CCommandBatch *)*((_QWORD *)this + 22);
  if ( v8 )
    CCommandBatch::`scalar deleting destructor'(v8);
  *((_QWORD *)this + 22) = 0LL;
  CCriticalSection::DeInit((struct _RTL_CRITICAL_SECTION *)((char *)this + 184));
  CCriticalSection::DeInit((struct _RTL_CRITICAL_SECTION *)((char *)this + 96));
  v9 = WPF::g_pProcessHeap;
  *((_QWORD *)this + 3) = &HANDLE_TABLE::`vftable';
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, *((_QWORD *)this + 6));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
