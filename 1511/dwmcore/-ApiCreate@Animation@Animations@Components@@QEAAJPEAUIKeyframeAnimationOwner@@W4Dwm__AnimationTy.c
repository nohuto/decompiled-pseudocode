/*
 * XREFs of ?ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationType@23@VDwm__Rendering__AsyncAnimationCallback@23@@Z @ 0x180160DF0
 * Callers:
 *     ?AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnimation@Animations@Components@@@Z @ 0x180160A20 (-AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnima.c)
 * Callees:
 *     ??_GSequence@Animations@Components@@QEAAPEAXI@Z @ 0x18016099C (--_GSequence@Animations@Components@@QEAAPEAXI@Z.c)
 *     ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18016454C (-Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiCreate(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v8; // edi
  Components::Animations::Sequence *v9; // rcx
  Components::Animations::Sequence *v10; // rax
  Components::Animations::Sequence *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v8 = Components::Animations::Sequence::Create(&v12);
  if ( v8 < 0 )
  {
    v9 = v12;
  }
  else
  {
    *(_BYTE *)(a1 + 252) &= ~8u;
    v9 = 0LL;
    *(_DWORD *)(a1 + 248) = 0;
    *(_DWORD *)(a1 + 244) = 0;
    *(_DWORD *)(a1 + 224) = 0;
    *(_DWORD *)(a1 + 216) = 0;
    *(_DWORD *)(a1 + 220) = 0;
    *(_DWORD *)(a1 + 240) = 0;
    v10 = v12;
    v8 = 0;
    *(_DWORD *)(a1 + 228) = a3;
    *(_QWORD *)(a1 + 24) = v10;
    *(_QWORD *)(a1 + 256) = a2;
  }
  if ( v9 )
    Components::Animations::Sequence::`scalar deleting destructor'(v9);
  *a4 = &Components::Animations::Dwm__Rendering__AsyncAnimationCallback::`vftable';
  return (unsigned int)v8;
}
