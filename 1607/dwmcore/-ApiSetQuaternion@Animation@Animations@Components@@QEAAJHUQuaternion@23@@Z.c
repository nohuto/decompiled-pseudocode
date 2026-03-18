/*
 * XREFs of ?ApiSetQuaternion@Animation@Animations@Components@@QEAAJHUQuaternion@23@@Z @ 0x180191B4C
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x180085F78 (-SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z.c)
 *     ?CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z @ 0x1800AB890 (-CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetQuaternion(__int64 a1, int a2, const __m128i *a3)
{
  int v6; // eax
  struct Components::Animations::Input *v7; // rbx
  int v8; // edi
  __m128 v9; // xmm3
  struct Components::Animations::Input *v10; // r8
  struct Components::Animations::Input *v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  v6 = Components::Animations::ConstantInput::CreateInstance(&v13);
  v7 = v13;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = (__m128)_mm_loadu_si128(a3);
    v10 = v13;
    *((double *)v13 + 2) = v9.m128_f32[0];
    *((double *)v7 + 3) = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
    *((double *)v7 + 4) = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
    *((double *)v7 + 5) = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
    *((_DWORD *)v7 + 3) = 71;
    v8 = Components::Animations::Sequence::SetKeyframeValue(*(Components::Animations::Sequence **)(a1 + 16), a2, v10);
    if ( v8 >= 0 )
      v8 = 0;
  }
  if ( v7 )
  {
    if ( (*((_DWORD *)v7 + 2))-- == 1 )
      (*(void (__fastcall **)(struct Components::Animations::Input *))(*(_QWORD *)v7 + 48LL))(v7);
  }
  return (unsigned int)v8;
}
