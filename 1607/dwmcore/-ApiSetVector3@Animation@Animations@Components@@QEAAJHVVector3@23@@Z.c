/*
 * XREFs of ?ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z @ 0x180191CE0
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x180085F78 (-SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z.c)
 *     ?CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z @ 0x1800AB890 (-CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetVector3(__int64 a1, int a2, __int64 a3)
{
  int v6; // eax
  struct Components::Animations::Input *v7; // rbx
  int v8; // edi
  struct Components::Animations::Input *v9; // r8
  float v10; // xmm1_4
  double v11; // xmm0_8
  float v14; // [rsp+28h] [rbp-20h]
  struct Components::Animations::Input *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  v6 = Components::Animations::ConstantInput::CreateInstance(&v15);
  v7 = v15;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = v15;
    LODWORD(v10) = HIDWORD(*(_QWORD *)a3);
    v11 = COERCE_FLOAT(*(_QWORD *)a3);
    v14 = *(float *)(a3 + 8);
    *((_QWORD *)v15 + 5) = 0LL;
    *((double *)v7 + 2) = v11;
    *((double *)v7 + 3) = v10;
    *((double *)v7 + 4) = v14;
    *((_DWORD *)v7 + 3) = 52;
    v8 = Components::Animations::Sequence::SetKeyframeValue(*(Components::Animations::Sequence **)(a1 + 16), a2, v9);
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
