/*
 * XREFs of ?Initialize@CInteraction@@MEAAJXZ @ 0x18005A2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z @ 0x18005A8EC (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CInteraction::Initialize(CInteraction *this)
{
  __int64 v2; // rsi
  __int64 v3; // rax

  v2 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         64LL);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 8) = &CMILRefCountBase::`vftable';
    *(_DWORD *)(v2 + 16) = 0;
    *(_QWORD *)v2 = &CInteractionContextWrapper::`vftable'{for `IInteractionContextWrapper'};
    *(_QWORD *)(v2 + 8) = &CInteractionContextWrapper::`vftable'{for `CMILRefCountBase'};
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_DWORD *)(v2 + 60) = 0;
    *(_BYTE *)(v2 + 56) &= ~1u;
    *(_QWORD *)(v2 + 40) = 0LL;
    *(_QWORD *)(v2 + 48) = 1065353216LL;
    *(_QWORD *)(v2 + 32) = 0LL;
  }
  else
  {
    v2 = 0LL;
  }
  if ( !v2 )
    return 2147942414LL;
  v3 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         64LL);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 8) = &CMILRefCountBase::`vftable';
    *(_DWORD *)(v3 + 16) = 0;
    *(_QWORD *)v3 = &CInteractionContextWrapper::`vftable'{for `IInteractionContextWrapper'};
    *(_QWORD *)(v3 + 8) = &CInteractionContextWrapper::`vftable'{for `CMILRefCountBase'};
    *(_QWORD *)(v3 + 24) = 0LL;
    *(_DWORD *)(v3 + 60) = 0;
    *(_BYTE *)(v3 + 56) &= ~1u;
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_QWORD *)(v3 + 48) = 1065353216LL;
    *(_QWORD *)(v3 + 32) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
    return CInteractionProcessor::Initialize(
             (CInteraction *)((char *)this + 216),
             (struct IInteractionContextWrapper *)v2,
             (struct IInteractionContextWrapper *)v3);
  else
    return 2147942414LL;
}
