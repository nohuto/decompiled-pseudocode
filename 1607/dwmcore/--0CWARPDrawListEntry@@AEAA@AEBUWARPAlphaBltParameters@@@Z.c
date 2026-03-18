/*
 * XREFs of ??0CWARPDrawListEntry@@AEAA@AEBUWARPAlphaBltParameters@@@Z @ 0x180136F18
 * Callers:
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@PEAPEAV1@@Z @ 0x180137314 (-Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SetSourcePixelToTargetPixelTransform@CWARPDrawListEntry@@AEAAXAEBUD2D_MATRIX_4X4_F@@@Z @ 0x1800C0248 (-SetSourcePixelToTargetPixelTransform@CWARPDrawListEntry@@AEAAXAEBUD2D_MATRIX_4X4_F@@@Z.c)
 *     ??0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z @ 0x18010F6F0 (--0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z.c)
 *     ?ExtendModeToWarpAddressMode@@YA?AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z @ 0x1801373A0 (-ExtendModeToWarpAddressMode@@YA-AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z.c)
 *     ?InterpolationModeToWarpFilterMode2@@YA?AW4Enum@WarpFilterMode2@@AEBW4D2D1_INTERPOLATION_MODE@@@Z @ 0x1801373CC (-InterpolationModeToWarpFilterMode2@@YA-AW4Enum@WarpFilterMode2@@AEBW4D2D1_INTERPOLATION_MODE@@@.c)
 */

CWARPDrawListEntry *__fastcall CWARPDrawListEntry::CWARPDrawListEntry(
        CWARPDrawListEntry *this,
        const struct WARPAlphaBltParameters *a2)
{
  int v4; // ecx
  __int64 v5; // rcx
  unsigned int v6; // esi
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r10
  int v11; // eax
  __int64 v12; // r10
  int v13; // eax
  __int64 v14; // r10
  int v15; // eax
  __int64 v16; // r10
  __int64 v17; // r9
  CWARPDrawListEntry *result; // rax

  CDrawListEntry::CDrawListEntry(this, a2);
  *(_QWORD *)this = &CWARPDrawListEntry::`vftable';
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 22) = 3840LL;
  `vector constructor iterator'(
    (CWARPDrawListEntry *)((char *)this + 224),
    64LL,
    2LL,
    (void (__fastcall *)(TemporaryConfiguration *))WarpTextureState::WarpTextureState);
  *((_BYTE *)this + 352) = 0;
  *((_BYTE *)this + 353) = *((_BYTE *)a2 + 246);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 7);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_OWORD *)this + 3) = *(_OWORD *)((char *)a2 + 36);
  v4 = *((_DWORD *)a2 + 8);
  if ( v4 )
  {
    if ( v4 == 1 )
      *((_DWORD *)this + 44) &= 0xFFFFFF3F;
  }
  else
  {
    *((_DWORD *)this + 44) &= ~0x80u;
    *((_DWORD *)this + 44) |= 0x40u;
  }
  if ( *((_BYTE *)a2 + 247) )
    CWARPDrawListEntry::SetSourcePixelToTargetPixelTransform(this, (const struct D2D_MATRIX_4X4_F *)((char *)a2 + 180));
  else
    memset_0((char *)this + 184, 0, 0x24uLL);
  v5 = *((_QWORD *)a2 + 7);
  v6 = 0;
  if ( v5 )
  {
    *((_QWORD *)this + 10) = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *((_DWORD *)this + 22) = *((_DWORD *)a2 + 16);
    v7 = (unsigned __int64)this + 112;
    *((_DWORD *)this + 23) = *((_DWORD *)a2 + 17);
    *((_DWORD *)this + 24) = *((_DWORD *)a2 + 18);
    *((_DWORD *)this + 25) = *((_DWORD *)a2 + 19);
    *((_DWORD *)this + 26) = *((_DWORD *)a2 + 20);
    *((_DWORD *)this + 27) = *((_DWORD *)a2 + 21);
    if ( *((_BYTE *)a2 + 244) )
    {
      *(_DWORD *)v7 = *((_DWORD *)a2 + 22);
      *((_DWORD *)this + 30) = *((_DWORD *)a2 + 24);
      *((_DWORD *)this + 29) = *((_DWORD *)a2 + 23);
      *((_DWORD *)this + 31) = *((_DWORD *)a2 + 25);
    }
    else
    {
      *(_QWORD *)v7 = 0LL;
      *((_QWORD *)this + 15) = 0LL;
    }
    *((_QWORD *)this + 29) = (char *)this + 88;
    *((_DWORD *)this + 56) = 0;
    *((_DWORD *)this + 57) = 0;
    *((_QWORD *)this + 31) = v7 & -(__int64)(*((_BYTE *)a2 + 244) != 0);
    *((_DWORD *)this + 69) = ExtendModeToWarpAddressMode((char *)a2 + 104);
    *((_DWORD *)this + 70) = ExtendModeToWarpAddressMode((char *)a2 + 108);
    *((_DWORD *)this + 68) = InterpolationModeToWarpFilterMode2((char *)a2 + 112);
    v6 = 1;
    *((_DWORD *)this + 65) = 0;
    *((_QWORD *)this + 33) = 1LL;
  }
  v8 = *((_QWORD *)a2 + 15);
  if ( v8 )
  {
    *((_QWORD *)this + 16) = v8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    *((_DWORD *)this + 34) = *((_DWORD *)a2 + 32);
    v9 = (unsigned __int64)this + 160;
    *((_DWORD *)this + 35) = *((_DWORD *)a2 + 33);
    *((_DWORD *)this + 36) = *((_DWORD *)a2 + 34);
    *((_DWORD *)this + 37) = *((_DWORD *)a2 + 35);
    *((_DWORD *)this + 38) = *((_DWORD *)a2 + 36);
    *((_DWORD *)this + 39) = *((_DWORD *)a2 + 37);
    if ( *((_BYTE *)a2 + 245) )
    {
      *(_DWORD *)v9 = *((_DWORD *)a2 + 38);
      *((_DWORD *)this + 42) = *((_DWORD *)a2 + 40);
      *((_DWORD *)this + 41) = *((_DWORD *)a2 + 39);
      *((_DWORD *)this + 43) = *((_DWORD *)a2 + 41);
    }
    else
    {
      *(_QWORD *)v9 = 0LL;
      *((_QWORD *)this + 21) = 0LL;
    }
    v10 = (unsigned __int64)v6 << 6;
    *(_QWORD *)((char *)this + v10 + 232) = (char *)this + 136;
    *(_DWORD *)((char *)this + v10 + 224) = v6;
    *(_DWORD *)((char *)this + v10 + 228) = 0;
    *(_QWORD *)((char *)this + v10 + 248) = v9 & -(__int64)(*((_BYTE *)a2 + 245) != 0);
    v11 = ExtendModeToWarpAddressMode((char *)a2 + 168);
    *(_DWORD *)((char *)this + v12 + 276) = v11;
    v13 = ExtendModeToWarpAddressMode((char *)a2 + 172);
    *(_DWORD *)((char *)this + v14 + 280) = v13;
    v15 = InterpolationModeToWarpFilterMode2((char *)a2 + 176);
    *(_DWORD *)((char *)this + v16 + 272) = v15;
    *(_QWORD *)((char *)this + v16 + 260) = 0LL;
    LOBYTE(v6) = v6 + 1;
    *(_DWORD *)((char *)this + v16 + 268) = 1;
    *((_DWORD *)this + 16 * v17 + 64) = 4;
  }
  *((_DWORD *)this + 44) &= 0xFFFFFFC3;
  result = this;
  *((_DWORD *)this + 44) |= 4 * (v6 & 0xF);
  return result;
}
