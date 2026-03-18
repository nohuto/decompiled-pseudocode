/*
 * XREFs of ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0286F94
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C001EF54 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C001D81C (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C001D83C (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C001F12C (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C001F1BC (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C00203CC (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C0020C90 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C00F0B68 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 *     ??$SafeDivide@KKK@@YAJKKPEAK@Z @ 0x1C0101F58 (--$SafeDivide@KKK@@YAJKKPEAK@Z.c)
 *     ?vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z @ 0x1C01C3120 (-vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z.c)
 *     ?ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C02689F0 (-ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C02872F0 (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C028731C (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 */

__int64 __fastcall MAPPER::bFoundForcedMatch(MAPPER *this, struct _UNIVERSAL_FONT_ID *a2)
{
  unsigned int v2; // edi
  struct PFF *v4; // rax
  _QWORD *v5; // rax
  struct PFE *PFEFromUFI; // rsi
  int *v7; // r11
  int v8; // r9d
  char *v9; // r14
  __int64 v10; // rax
  MAPPER *v11; // rcx
  signed int v12; // r8d
  int v13; // r10d
  int v14; // eax
  __int64 v15; // r9
  int v16; // r8d
  __int64 v17; // rcx
  signed int v18; // r15d
  int v19; // edx
  unsigned int v20; // eax
  int v21; // r10d
  int v22; // r11d
  int v23; // r10d
  int v24; // r11d
  _QWORD v26[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v27; // [rsp+30h] [rbp-10h]
  struct PFT *v28; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v29; // [rsp+90h] [rbp+50h] BYREF
  int v30; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  if ( !*(_DWORD *)a2 )
    return 0LL;
  if ( *(_DWORD *)a2 == 1 )
  {
    v28 = gpPFTDevice;
    v4 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v28, *(_QWORD *)(**(_QWORD **)this + 48LL), 0LL);
    if ( !v4 )
      return 0LL;
    v5 = (_QWORD *)((char *)v4 + 112);
    if ( !v5 )
      return 0LL;
    v26[0] = v5;
    v26[1] = *v5;
    v27 = 0LL;
    PFEFromUFI = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v26);
    if ( !PFEFromUFI )
      return 0LL;
    v8 = *v7;
    do
    {
      if ( *((_DWORD *)PFEFromUFI + 23) == v8
        && *((_DWORD *)PFEFromUFI + 24) == v7[1]
        && (*((_DWORD *)PFEFromUFI + 3) & 2) == 0 )
      {
        break;
      }
      PFEFromUFI = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v26);
    }
    while ( PFEFromUFI );
  }
  else
  {
    PFEFromUFI = ppfeGetPFEFromUFI(a2, 0, 1);
  }
  if ( PFEFromUFI )
  {
    *((_DWORD *)this + 48) = 1;
    v9 = (char *)this + 256;
    *((_DWORD *)this + 49) = 1;
    *((_DWORD *)this + 47) = 0;
    v10 = *((_QWORD *)PFEFromUFI + 4);
    *((_QWORD *)this + 32) = v10;
    v11 = (MAPPER *)*(unsigned int *)(v10 + 48);
    if ( ((unsigned int)v11 & 0x3000010) == 0 )
    {
      if ( (*((_DWORD *)this + 63) & 2) != 0 )
        v12 = *(__int16 *)(v10 + 56);
      else
        v12 = *(__int16 *)(v10 + 60) + *(__int16 *)(v10 + 62);
      v13 = *((_DWORD *)this + 41);
      if ( v12 < v13
        && (LOBYTE(v11) = ((unsigned int)v11 & 0x100000) != 0,
            ((unsigned __int8)v11 & ((*((_DWORD *)this + 63) & 0x8000) == 0)) != 0)
        && v13 > 7 * v12 / 4 )
      {
        if ( !MAPPER::bWin31BitmapHeightScaling(v11, v13, v12, (int *)&v28) )
          return v2;
        v14 = (int)v28;
        if ( (unsigned int)v28 > 8 )
          v14 = 8;
        *((_DWORD *)this + 49) = v14;
      }
      else
      {
        *((_DWORD *)this + 49) = 1;
      }
    }
    v15 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v15 + 20)
      && (*(_BYTE *)(*(_QWORD *)v9 + 52LL) & 1) == 0
      && (unsigned int)IFIOBJ::bSimItalic((MAPPER *)((char *)this + 256)) )
    {
      *((_DWORD *)this + 47) = 0x4000;
    }
    v16 = *((_DWORD *)this + 63);
    if ( (v16 & 0x200000) == 0
      && *(unsigned __int16 *)(*(_QWORD *)v9 + 46LL) - *((_DWORD *)this + 43) < 0
      && *((_DWORD *)this + 43) - *(unsigned __int16 *)(*(_QWORD *)v9 + 46LL) > 150
      && IFIOBJ::pvSimBold((MAPPER *)((char *)this + 256)) )
    {
      *((_DWORD *)this + 47) |= 0x2000u;
    }
    v17 = *(_QWORD *)v9;
    if ( (*(_DWORD *)(*(_QWORD *)v9 + 48LL) & 0x2000010) != 0 )
      goto LABEL_58;
    v18 = *(__int16 *)(v17 + 76);
    *((_DWORD *)this + 48) = 1;
    if ( *(_DWORD *)(v15 + 4) )
    {
      if ( (v16 & 4) == 0 )
        MAPPER::bCalculateWishCell(this);
      LOBYTE(v17) = (*(_DWORD *)(*(_QWORD *)v9 + 48LL) & 0x100000) != 0;
      if ( ((unsigned __int8)v17 & ((*((_DWORD *)this + 63) & 0x8000) == 0)) == 0 )
        goto LABEL_58;
      v19 = *((_DWORD *)this + 42);
      if ( v19 <= v18 )
        goto LABEL_58;
      if ( (unsigned int)MAPPER::bWin31BitmapWidthScaling((MAPPER *)v17, v19, v18, (int *)&v28) )
      {
        v20 = (unsigned int)v28;
LABEL_55:
        if ( v20 > 5 )
          v20 = 5;
        *((_DWORD *)this + 48) = v20;
        goto LABEL_58;
      }
      return v2;
    }
    if ( (*(_DWORD *)(v17 + 48) & 0x100000) != 0 && (v16 & 0x8000) == 0 )
    {
      v21 = *(_DWORD *)(v17 + 128);
      v22 = *(_DWORD *)(v17 + 132);
      LODWORD(v28) = 0;
      v29 = 0;
      if ( v21 != v22 || *((_DWORD *)this + 61) != *((_DWORD *)this + 62) )
      {
        if ( (unsigned int)SafeDivide<unsigned long,unsigned long,unsigned long>(
                             100 * *((_DWORD *)this + 62),
                             *((_DWORD *)this + 61),
                             (int *)&v28)
          || (unsigned int)SafeDivide<long,long,long>(100 * v23, v24, &v30)
          || (unsigned int)SafeDivide<long,long,long>(v30, *((_DWORD *)this + 49), (int *)&v29) )
        {
          return v2;
        }
        if ( (unsigned int)v28 <= (3 * v29) >> 1 )
          goto LABEL_58;
        if ( !v29 )
          return v2;
        v20 = (unsigned int)v28 / v29;
LABEL_54:
        *((_DWORD *)this + 48) = v20;
        goto LABEL_55;
      }
      v20 = *((_DWORD *)this + 49);
      if ( v20 != 1 )
        goto LABEL_54;
    }
LABEL_58:
    MAPPER::vSetBest(this, PFEFromUFI, 1, 1u);
    return 1;
  }
  return 0LL;
}
