/*
 * XREFs of ?ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z @ 0x1801619BC
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800F7D98 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Release@Input@Animations@Components@@QEAAXXZ @ 0x1800BA524 (-Release@Input@Animations@Components@@QEAAXXZ.c)
 *     ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x180163448 (-SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z.c)
 *     ?CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18016549C (-CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetVector2(
        __int64 a1,
        int a2,
        Components::Animations::Input *a3)
{
  int v5; // eax
  Components::Animations::Input *v6; // rbx
  int v7; // edi
  __int64 i; // rax
  Components::Animations::Input *v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v5 = Components::Animations::ConstantInput::CreateInstance(&v11);
  v6 = v11;
  v7 = v5;
  if ( v5 >= 0 )
  {
    v11 = a3;
    for ( i = 0LL; i < 2; ++i )
      *((double *)v6 + i + 2) = *((float *)&v11 + i);
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_DWORD *)v6 + 3) = 35;
    v7 = Components::Animations::Sequence::SetKeyframeValue(*(Components::Animations::Sequence **)(a1 + 24), a2, v6);
    if ( v7 >= 0 )
      v7 = 0;
  }
  if ( v6 )
    Components::Animations::Input::Release(v6);
  return (unsigned int)v7;
}
