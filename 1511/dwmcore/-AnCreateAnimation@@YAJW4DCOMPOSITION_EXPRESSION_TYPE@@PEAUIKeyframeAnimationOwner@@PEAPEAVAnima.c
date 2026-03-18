/*
 * XREFs of ?AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnimation@Animations@Components@@@Z @ 0x180160A20
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800F7D98 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z @ 0x180160B7C (-AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z.c)
 *     ?ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationType@23@VDwm__Rendering__AsyncAnimationCallback@23@@Z @ 0x180160DF0 (-ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationTy.c)
 */

__int64 __fastcall AnCreateAnimation(int a1, __int64 a2, struct Components::Animations::Animation **a3)
{
  __int64 v6; // rax
  struct Components::Animations::Animation *v7; // rbx
  int v8; // edi
  __int64 v10; // r8
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  char v16; // [rsp+58h] [rbp+20h] BYREF

  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         264LL);
  v7 = (struct Components::Animations::Animation *)v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = &Components::Animations::Animation::`vftable'{for `Components::Animations::SharedObject'};
    *(_QWORD *)(v6 + 8) = &Components::Animations::Animation::`vftable'{for `Components::Animations::Dwm__IRenderPropertyBag'};
    *(_QWORD *)(v6 + 16) = &Components::Animations::Animation::`vftable'{for `Components::Animations::Dwm__IDispatcher'};
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_DWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 32) = v6 + 48;
    *(_DWORD *)(v6 + 44) = 8;
    *(_QWORD *)(v6 + 112) = 0LL;
    *(_DWORD *)(v6 + 128) = 0;
    *(_QWORD *)(v6 + 120) = v6 + 136;
    *(_DWORD *)(v6 + 132) = 8;
    *(_QWORD *)(v6 + 200) = 0LL;
    *(_QWORD *)(v6 + 232) = &Components::Animations::Dwm__Rendering__AsyncAnimationCallback::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v10 = 18LL;
    v11 = a1 - 18;
    if ( v11 )
    {
      v12 = v11 - 17;
      if ( v12 )
      {
        v13 = v12 - 17;
        if ( v13 )
        {
          v14 = v13 - 17;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              if ( v15 != 1 )
              {
                v8 = -2147024809;
                goto LABEL_6;
              }
              v10 = 71LL;
            }
            else
            {
              v10 = 70LL;
            }
          }
          else
          {
            v10 = 69LL;
          }
        }
        else
        {
          v10 = 52LL;
        }
      }
      else
      {
        v10 = 35LL;
      }
    }
    v8 = Components::Animations::Animation::ApiCreate(v7, a2, v10, &v16);
    if ( v8 >= 0 )
    {
      *a3 = v7;
      return 0;
    }
  }
  else
  {
    v8 = -2147024882;
  }
LABEL_6:
  AnDestroyAnimation(v7);
  *a3 = 0LL;
  return (unsigned int)v8;
}
