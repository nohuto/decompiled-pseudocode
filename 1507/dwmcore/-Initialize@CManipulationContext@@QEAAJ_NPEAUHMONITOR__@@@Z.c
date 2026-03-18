/*
 * XREFs of ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z @ 0x1801302E8
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x18012AB28 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012B110 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x1801310B0 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x18005A7BC (--0CInteractionProcessor@@QEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x18010CFDC (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2B4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CManipulationContext::Initialize(CManipulationContext *this, char a2, HMONITOR a3)
{
  __int64 v6; // rax
  void (__fastcall ***v7)(_QWORD); // rdi
  __int64 v8; // rbx
  CInteractionRoot *v9; // rcx

  *((_DWORD *)this + 26) = 0;
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)this + 14);
  *((_BYTE *)this + 28) &= ~1u;
  *((_QWORD *)this + 4) = a3;
  *((_BYTE *)this + 28) |= a2 & 1;
  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         424LL);
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
  if ( *((void (__fastcall ****)(_QWORD))this + 15) != v7 )
  {
    if ( v7 )
      (**v7)(v7);
    v8 = *((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = v7;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  v9 = (CInteractionRoot *)*((_QWORD *)this + 15);
  if ( v9 )
    return CInteractionRoot::Initialize(v9, this, a2);
  else
    return 2147942414LL;
}
