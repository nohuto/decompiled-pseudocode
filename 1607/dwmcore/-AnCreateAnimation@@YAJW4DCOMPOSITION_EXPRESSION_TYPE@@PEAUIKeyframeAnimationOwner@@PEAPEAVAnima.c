/*
 * XREFs of ?AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnimation@Animations@Components@@@Z @ 0x1800B186C
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180061650 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationType@23@VDwm__Rendering__AsyncAnimationCallback@23@@Z @ 0x1800866A8 (-ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationTy.c)
 *     ?AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z @ 0x1800B23B0 (-AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AnCreateAnimation(int a1, __int64 a2, struct Components::Animations::Animation **a3)
{
  void *(__fastcall *v6)(WPF::ProcessHeapImpl *, size_t); // rax
  struct Components::Animations::Animation *v7; // rax
  struct Components::Animations::Animation *v8; // rdi
  int v9; // r8d
  int v10; // ebx
  int v11; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  __int64 v17; // [rsp+48h] [rbp+20h] BYREF

  v6 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v6 == WPF::ProcessHeapImpl::AllocClear )
    v7 = (struct Components::Animations::Animation *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x70uLL);
  else
    v7 = (struct Components::Animations::Animation *)v6(WPF::g_pProcessHeap, 112LL);
  v8 = v7;
  if ( !v7 )
  {
    v11 = -2147024882;
    goto LABEL_10;
  }
  *(_QWORD *)v7 = &Components::Animations::Animation::`vftable'{for `Components::Animations::SharedObject'};
  *((_QWORD *)v7 + 1) = &Components::Animations::Animation::`vftable'{for `Components::Animations::Dwm__IRenderPropertyBag'};
  *((_QWORD *)v7 + 2) = 0LL;
  *((_QWORD *)v7 + 3) = 0LL;
  *((_QWORD *)v7 + 9) = &Components::Animations::Dwm__Rendering__AsyncAnimationCallback::`vftable';
  v9 = 18;
  v10 = a1 - 18;
  if ( v10 )
  {
    v13 = v10 - 17;
    if ( v13 )
    {
      v14 = v13 - 17;
      if ( v14 )
      {
        v15 = v14 - 17;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            if ( v16 != 1 )
            {
              v11 = -2147024809;
              goto LABEL_10;
            }
            v9 = 71;
          }
          else
          {
            v9 = 70;
          }
        }
        else
        {
          v9 = 69;
        }
      }
      else
      {
        v9 = 52;
      }
    }
    else
    {
      v9 = 35;
    }
  }
  v11 = Components::Animations::Animation::ApiCreate((__int64)v7, a2, v9, &v17);
  if ( v11 < 0 )
  {
LABEL_10:
    AnDestroyAnimation(v8);
    *a3 = 0LL;
    return (unsigned int)v11;
  }
  *a3 = v8;
  return 0;
}
