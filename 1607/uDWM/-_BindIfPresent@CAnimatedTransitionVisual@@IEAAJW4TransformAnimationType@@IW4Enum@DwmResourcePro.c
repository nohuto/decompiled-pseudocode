/*
 * XREFs of ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@IW4Enum@DwmResourceProperty@@@Z @ 0x1800134C0
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800135E0 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x1800402A0 (-_EnsureResources@CAnimationResource@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     Template_qqqp @ 0x18009A4A4 (Template_qqqp.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_BindIfPresent(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // ebx
  __int64 v7; // rdi
  int v9; // eax
  int v10; // eax
  int v11; // edx

  v4 = 0;
  v7 = *(_QWORD *)(a1 + 8LL * a2 + 600);
  if ( v7 )
  {
    v9 = CAnimationResource::_EnsureResources(*(CAnimationResource **)(a1 + 8LL * a2 + 600));
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1BCu);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v7 + 16) + 16LL)
                                                                      + 792LL))(
              *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL),
              *(unsigned int *)(*(_QWORD *)(v7 + 16) + 24LL),
              a3,
              a4);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1C1u);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          Template_qqqp(
            *(_QWORD *)(v7 + 16),
            v11,
            *(_DWORD *)(*(_QWORD *)(v7 + 16) + 24LL),
            a3,
            a4,
            *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL));
        *(_DWORD *)(v7 + 84) = a3;
        *(_DWORD *)(v7 + 88) = a4;
      }
    }
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x819u);
  }
  return (unsigned int)v4;
}
