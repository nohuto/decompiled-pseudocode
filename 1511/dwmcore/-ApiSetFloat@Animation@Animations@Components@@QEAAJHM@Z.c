/*
 * XREFs of ?ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z @ 0x1801616F4
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800F7D98 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Release@Input@Animations@Components@@QEAAXXZ @ 0x1800BA524 (-Release@Input@Animations@Components@@QEAAXXZ.c)
 *     ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x180163448 (-SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z.c)
 *     ?CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18016549C (-CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetFloat(
        Components::Animations::Sequence **this,
        int a2,
        float a3)
{
  int v5; // eax
  Components::Animations::Input *v6; // rbx
  int v7; // edi
  Components::Animations::Input *v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  v5 = Components::Animations::ConstantInput::CreateInstance(&v9);
  v6 = v9;
  v7 = v5;
  if ( v5 >= 0 )
  {
    *((_QWORD *)v9 + 3) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((double *)v6 + 2) = a3;
    *((_DWORD *)v6 + 3) = 18;
    v7 = Components::Animations::Sequence::SetKeyframeValue(this[3], a2, v6);
    if ( v7 >= 0 )
      v7 = 0;
  }
  if ( v6 )
    Components::Animations::Input::Release(v6);
  return (unsigned int)v7;
}
