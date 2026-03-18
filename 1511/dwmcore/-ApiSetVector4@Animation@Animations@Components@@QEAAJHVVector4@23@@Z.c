/*
 * XREFs of ?ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z @ 0x180161B30
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800F7D98 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Release@Input@Animations@Components@@QEAAXXZ @ 0x1800BA524 (-Release@Input@Animations@Components@@QEAAXXZ.c)
 *     ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x180163448 (-SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z.c)
 *     ?CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18016549C (-CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetVector4(__int64 a1, int a2, _OWORD *a3)
{
  int v6; // eax
  Components::Animations::Input *v7; // rbx
  int v8; // edi
  __int64 v9; // rax
  _OWORD v11[2]; // [rsp+20h] [rbp-28h]
  Components::Animations::Input *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v6 = Components::Animations::ConstantInput::CreateInstance(&v12);
  v7 = v12;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = 0LL;
    v11[0] = *a3;
    do
    {
      *((double *)v7 + v9 + 2) = *((float *)v11 + v9);
      ++v9;
    }
    while ( v9 < 4 );
    *((_DWORD *)v7 + 3) = 69;
    v8 = Components::Animations::Sequence::SetKeyframeValue(*(Components::Animations::Sequence **)(a1 + 24), a2, v7);
    if ( v8 >= 0 )
      v8 = 0;
  }
  if ( v7 )
    Components::Animations::Input::Release(v7);
  return (unsigned int)v8;
}
