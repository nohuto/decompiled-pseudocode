/*
 * XREFs of ?ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z @ 0x180191C28
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x180085F78 (-SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z.c)
 *     ?CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z @ 0x1800AB890 (-CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetVector2(
        __int64 a1,
        int a2,
        struct Components::Animations::Input *a3)
{
  int v5; // eax
  struct Components::Animations::Input *v6; // rbx
  int v7; // edi
  __int64 i; // rax
  struct Components::Animations::Input *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v5 = Components::Animations::ConstantInput::CreateInstance(&v12);
  v6 = v12;
  v7 = v5;
  if ( v5 >= 0 )
  {
    v12 = a3;
    for ( i = 0LL; i < 2; ++i )
      *((double *)v6 + i + 2) = *((float *)&v12 + i);
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_DWORD *)v6 + 3) = 35;
    v7 = Components::Animations::Sequence::SetKeyframeValue(*(Components::Animations::Sequence **)(a1 + 16), a2, v6);
    if ( v7 >= 0 )
      v7 = 0;
  }
  if ( v6 )
  {
    if ( (*((_DWORD *)v6 + 2))-- == 1 )
      (*(void (__fastcall **)(struct Components::Animations::Input *))(*(_QWORD *)v6 + 48LL))(v6);
  }
  return (unsigned int)v7;
}
