/*
 * XREFs of ?ApiSetQuaternion@Animation@Animations@Components@@QEAAJHUQuaternion@23@@Z @ 0x1801618EC
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800F7D98 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Release@Input@Animations@Components@@QEAAXXZ @ 0x1800BA524 (-Release@Input@Animations@Components@@QEAAXXZ.c)
 *     ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x180163448 (-SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z.c)
 *     ?CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18016549C (-CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetQuaternion(__int64 a1, int a2, const __m128i *a3)
{
  int v6; // eax
  Components::Animations::Input *v7; // rbx
  int v8; // edi
  __m128 v9; // xmm3
  struct Components::Animations::Input *v10; // r8
  float v11; // xmm1_4
  float v12; // xmm2_4
  Components::Animations::Input *v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0LL;
  v6 = Components::Animations::ConstantInput::CreateInstance(&v14);
  v7 = v14;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = (__m128)_mm_loadu_si128(a3);
    v10 = v14;
    *((double *)v14 + 2) = v9.m128_f32[0];
    v11 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
    v12 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
    v9.m128_i32[0] = a3->m128i_i32[3];
    *((double *)v7 + 3) = v11;
    *((double *)v7 + 4) = v12;
    *((double *)v7 + 5) = v9.m128_f32[0];
    *((_DWORD *)v7 + 3) = 71;
    v8 = Components::Animations::Sequence::SetKeyframeValue(*(Components::Animations::Sequence **)(a1 + 24), a2, v10);
    if ( v8 >= 0 )
      v8 = 0;
  }
  if ( v7 )
    Components::Animations::Input::Release(v7);
  return (unsigned int)v8;
}
