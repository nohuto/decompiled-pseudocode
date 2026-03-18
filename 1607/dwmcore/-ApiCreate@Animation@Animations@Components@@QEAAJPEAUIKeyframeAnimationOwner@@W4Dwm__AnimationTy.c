/*
 * XREFs of ?ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationType@23@VDwm__Rendering__AsyncAnimationCallback@23@@Z @ 0x1800866A8
 * Callers:
 *     ?AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnimation@Animations@Components@@@Z @ 0x1800B186C (-AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnima.c)
 * Callees:
 *     ??_GSequence@Animations@Components@@QEAAPEAXI@Z @ 0x180085FA4 (--_GSequence@Animations@Components@@QEAAPEAXI@Z.c)
 *     ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x1800AB51C (-Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiCreate(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v8; // edi
  Components::Animations::Sequence *v9; // rcx
  struct Components::Animations::Sequence *v10; // rax
  struct Components::Animations::Sequence *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v8 = Components::Animations::Sequence::Create(&v12);
  if ( v8 < 0 )
  {
    v9 = v12;
  }
  else
  {
    *(_BYTE *)(a1 + 104) &= ~8u;
    v9 = 0LL;
    *(_DWORD *)(a1 + 88) = 0;
    *(_DWORD *)(a1 + 84) = 0;
    *(_DWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 60) = 0;
    *(_DWORD *)(a1 + 80) = 0;
    v10 = v12;
    v8 = 0;
    *(_DWORD *)(a1 + 64) = a3;
    *(_QWORD *)(a1 + 16) = v10;
    *(_QWORD *)(a1 + 96) = a2;
    *(_DWORD *)(a1 + 56) = 1065353216;
  }
  if ( v9 )
    Components::Animations::Sequence::`scalar deleting destructor'(v9);
  *a4 = &Components::Animations::Dwm__Rendering__AsyncAnimationCallback::`vftable';
  return (unsigned int)v8;
}
