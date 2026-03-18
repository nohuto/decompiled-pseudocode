/*
 * XREFs of ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z @ 0x180007B24
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180006A00 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180007390 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180171590 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x18000866C (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1800A4F0C (--0CInteractionProcessor@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationContext::Initialize(CManipulationContext *this, bool a2, HMONITOR a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  CInteractionRoot *v9; // rcx

  *((_DWORD *)this + 26) = 0;
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((char *)this + 112);
  *((_DWORD *)this + 30) = 0;
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((char *)this + 128);
  *((_BYTE *)this + 28) &= ~1u;
  *((_QWORD *)this + 4) = a3;
  *((_BYTE *)this + 28) |= a2;
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   976LL);
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x3D0uLL);
    v7[1] = &CMILRefCountBase::`vftable';
    *((_DWORD *)v7 + 4) = 0;
    *v7 = &CInteractionRoot::`vftable'{for `IInteractionResource'};
    v7[1] = &CInteractionRoot::`vftable'{for `CMILRefCountBase'};
    v7[3] = 0LL;
    CInteractionProcessor::CInteractionProcessor((CInteractionProcessor *)(v7 + 4));
  }
  else
  {
    v7 = 0LL;
  }
  if ( *((_QWORD **)this + 17) != v7 )
  {
    if ( v7 )
      (*(void (__fastcall **)(_QWORD *))*v7)(v7);
    v8 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = v7;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  v9 = (CInteractionRoot *)*((_QWORD *)this + 17);
  if ( v9 )
    return CInteractionRoot::Initialize(v9, this, a2);
  else
    return 2147942414LL;
}
