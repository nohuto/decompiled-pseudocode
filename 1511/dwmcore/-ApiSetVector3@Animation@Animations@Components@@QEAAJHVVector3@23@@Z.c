/*
 * XREFs of ?ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z @ 0x180161A68
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800F7D98 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Release@Input@Animations@Components@@QEAAXXZ @ 0x1800BA524 (-Release@Input@Animations@Components@@QEAAXXZ.c)
 *     ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x180163448 (-SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z.c)
 *     ?CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18016549C (-CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetVector3(__int64 a1, int a2, __int64 a3)
{
  int v6; // eax
  Components::Animations::Input *v7; // rbx
  int v8; // edi
  struct Components::Animations::Input *v9; // r8
  float v10; // xmm1_4
  double v11; // xmm0_8
  float v13; // [rsp+28h] [rbp-20h]
  Components::Animations::Input *v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0LL;
  v6 = Components::Animations::ConstantInput::CreateInstance(&v14);
  v7 = v14;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = v14;
    LODWORD(v10) = HIDWORD(*(_QWORD *)a3);
    v11 = COERCE_FLOAT(*(_QWORD *)a3);
    v13 = *(float *)(a3 + 8);
    *((_QWORD *)v14 + 5) = 0LL;
    *((double *)v7 + 2) = v11;
    *((double *)v7 + 3) = v10;
    *((double *)v7 + 4) = v13;
    *((_DWORD *)v7 + 3) = 52;
    v8 = Components::Animations::Sequence::SetKeyframeValue(*(Components::Animations::Sequence **)(a1 + 24), a2, v9);
    if ( v8 >= 0 )
      v8 = 0;
  }
  if ( v7 )
    Components::Animations::Input::Release(v7);
  return (unsigned int)v8;
}
