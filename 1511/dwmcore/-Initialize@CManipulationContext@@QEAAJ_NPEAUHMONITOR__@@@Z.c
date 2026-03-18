/*
 * XREFs of ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z @ 0x180005608
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180004334 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180004BE0 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180143E50 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x180003710 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1800A7CCC (--0CInteractionProcessor@@QEAA@XZ.c)
 */

__int64 __fastcall CManipulationContext::Initialize(CManipulationContext *this, char a2, HMONITOR a3)
{
  __int64 v6; // rax
  void (__fastcall ***v7)(_QWORD); // rdi
  __int64 v8; // rbx
  CInteractionRoot *v9; // rcx

  *((_DWORD *)this + 26) = 0;
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)this + 14);
  *((_DWORD *)this + 30) = 0;
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)this + 16);
  *((_BYTE *)this + 28) &= ~1u;
  *((_QWORD *)this + 4) = a3;
  *((_BYTE *)this + 28) |= a2 & 1;
  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         688LL);
  v7 = (void (__fastcall ***)(_QWORD))v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = &CMILRefCountBase::`vftable';
    *(_DWORD *)(v6 + 16) = 0;
    *(_QWORD *)v6 = &CInteractionRoot::`vftable'{for `IInteractionResource'};
    *(_QWORD *)(v6 + 8) = &CInteractionRoot::`vftable'{for `CMILRefCountBase'};
    *(_QWORD *)(v6 + 24) = 0LL;
    CInteractionProcessor::CInteractionProcessor((CInteractionProcessor *)(v6 + 32));
  }
  else
  {
    v7 = 0LL;
  }
  if ( *((void (__fastcall ****)(_QWORD))this + 17) != v7 )
  {
    if ( v7 )
      (**v7)(v7);
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
