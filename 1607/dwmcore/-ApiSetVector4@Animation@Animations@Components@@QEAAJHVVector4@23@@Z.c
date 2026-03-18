/*
 * XREFs of ?ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z @ 0x180191DB4
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x180085F78 (-SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z.c)
 *     ?CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z @ 0x1800AB890 (-CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetVector4(__int64 a1, int a2, _OWORD *a3)
{
  int v6; // eax
  struct Components::Animations::Input *v7; // rbx
  int v8; // edi
  __int64 v9; // rax
  _OWORD v12[2]; // [rsp+20h] [rbp-28h]
  struct Components::Animations::Input *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v6 = Components::Animations::ConstantInput::CreateInstance(&v13);
  v7 = v13;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = 0LL;
    v12[0] = *a3;
    do
    {
      *((double *)v7 + v9 + 2) = *((float *)v12 + v9);
      ++v9;
    }
    while ( v9 < 4 );
    *((_DWORD *)v7 + 3) = 69;
    v8 = Components::Animations::Sequence::SetKeyframeValue(*(Components::Animations::Sequence **)(a1 + 16), a2, v7);
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
