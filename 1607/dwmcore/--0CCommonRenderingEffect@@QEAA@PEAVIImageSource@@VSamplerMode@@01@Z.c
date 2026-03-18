/*
 * XREFs of ??0CCommonRenderingEffect@@QEAA@PEAVIImageSource@@VSamplerMode@@01@Z @ 0x180110ED0
 * Callers:
 *     ??$New@VCCommonRenderingEffect@@AEAPEAVIImageSource@@AEAVSamplerMode@@AEAPEAV2@AEAV3@@?$IfaceBuffer@UIRenderingEffect@@$0DA@@@QEAAPEAVCCommonRenderingEffect@@AEAPEAVIImageSource@@AEAVSamplerMode@@01@Z @ 0x180111078 (--$New@VCCommonRenderingEffect@@AEAPEAVIImageSource@@AEAVSamplerMode@@AEAPEAV2@AEAV3@@-$IfaceBuf.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommonRenderingEffect::CCommonRenderingEffect(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v9; // ebx
  char v10; // al
  int v11; // ebp
  unsigned int v12; // eax
  unsigned int near **v13; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = &CCommonRenderingEffect::`vftable';
  `vector constructor iterator'(
    (TemporaryConfiguration *)(a1 + 24),
    3LL,
    2LL,
    (void (__fastcall *)(TemporaryConfiguration *))SamplerMode::SamplerMode);
  v9 = 0;
  *(_QWORD *)(a1 + 8) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 16) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  *(_WORD *)(a1 + 24) = *(_WORD *)a3;
  v10 = *(_BYTE *)(a3 + 2);
  v11 = 1;
  *(_BYTE *)(a1 + 26) = v10;
  *(_WORD *)(a1 + 27) = *(_WORD *)a5;
  *(_BYTE *)(a1 + 29) = *(_BYTE *)(a5 + 2);
  if ( a2 )
  {
    v11 = 3;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL))(a2) )
      v11 = 11;
  }
  if ( a4 )
    v11 |= 4u;
  v12 = 0;
  v13 = &CCommonRenderingEffect::s_rgCommonPixelShadersBitFlags;
  while ( v11 != *(_DWORD *)v13 )
  {
    ++v12;
    v13 = (unsigned int near **)((char *)v13 + 4);
    if ( v12 >= 0xC )
      goto LABEL_15;
  }
  v9 = v12;
LABEL_15:
  result = a1;
  *(_DWORD *)(a1 + 32) = v9;
  return result;
}
