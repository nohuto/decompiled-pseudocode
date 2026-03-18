/*
 * XREFs of NtGdiDdDDICreateDCFromMemory @ 0x1C00EAC10
 * Callers:
 *     <none>
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     DxEngSelectPaletteToSurface @ 0x1C00EB124 (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C00EB1A8 (DxEngSetPaletteState.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00EB21C (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C015B938 (--1MDCOBJA@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C0263E74 (DxEngSyncPaletteTableWithDevice.c)
 */

__int64 __fastcall NtGdiDdDDICreateDCFromMemory(unsigned __int64 a1)
{
  HSURF v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  unsigned int v4; // r13d
  _OWORD *v5; // rdx
  _OWORD *v6; // rax
  __int64 v7; // rcx
  ULONG *v8; // rax
  int v9; // esi
  int v10; // r14d
  FLONG flBlue; // edi
  int v12; // r15d
  HANDLE v13; // r12
  FLONG v14; // r9d
  ULONG *v15; // rsi
  ULONG v16; // r14d
  HPALETTE Palette; // rax
  HPALETTE v18; // rdi
  struct _SURFOBJ *LockedBitmap; // rax
  SURFOBJ *v20; // rax
  SURFOBJ *v21; // rsi
  __int64 v22; // rax
  __int64 DisplayDC; // rax
  unsigned __int64 v24; // r8
  __int64 *v25; // rdx
  HSURF *v26; // rdx
  DYNAMICMODECHANGESHARELOCK *v27; // rcx
  DYNAMICMODECHANGESHARELOCK *v29; // rcx
  FLONG flGreen; // [rsp+20h] [rbp-4E8h]
  SIZE_T Length; // [rsp+30h] [rbp-4D8h]
  SIZE_T Lengtha; // [rsp+30h] [rbp-4D8h]
  char v33[8]; // [rsp+38h] [rbp-4D0h] BYREF
  HSURF hsurf; // [rsp+40h] [rbp-4C8h]
  ULONG *pulColors; // [rsp+48h] [rbp-4C0h]
  ULONG cColors; // [rsp+50h] [rbp-4B8h]
  __int64 v37; // [rsp+58h] [rbp-4B0h]
  struct tagSIZE v38; // [rsp+60h] [rbp-4A8h]
  __int64 v39; // [rsp+68h] [rbp-4A0h]
  unsigned __int64 v40; // [rsp+70h] [rbp-498h]
  _QWORD v41[2]; // [rsp+78h] [rbp-490h] BYREF
  HANDLE v42; // [rsp+88h] [rbp-480h]
  volatile void *Address[2]; // [rsp+90h] [rbp-478h]
  HDC v44[2]; // [rsp+A0h] [rbp-468h]
  __int128 v45; // [rsp+B0h] [rbp-458h]
  __int64 v46; // [rsp+C0h] [rbp-448h]
  _BYTE v47[1024]; // [rsp+D0h] [rbp-438h] BYREF

  v40 = a1;
  v39 = 0LL;
  v37 = 0LL;
  v1 = 0LL;
  hsurf = 0LL;
  v42 = 0LL;
  HIDWORD(Length) = 0;
  v2 = a1;
  if ( a1 >= W32UserProbeAddress )
    v2 = W32UserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)v2;
  *(_OWORD *)v44 = *(_OWORD *)(v2 + 16);
  v45 = *(_OWORD *)(v2 + 32);
  v46 = *(_QWORD *)(v2 + 48);
  v38 = (struct tagSIZE)__PAIR64__((unsigned int)v44[0], HIDWORD(Address[1]));
  v3 = LODWORD(v44[0]);
  if ( SHIDWORD(Address[1]) <= 0 || SLODWORD(v44[0]) <= 0 )
    return 3221225485LL;
  cColors = 0;
  pulColors = 0LL;
  if ( LODWORD(Address[1]) == 20 )
  {
    v4 = 5;
    goto LABEL_24;
  }
  if ( SLODWORD(Address[1]) <= 20 )
    return 3221225485LL;
  if ( SLODWORD(Address[1]) <= 22 )
  {
    v4 = 6;
LABEL_24:
    v10 = 65280;
    flBlue = 255;
    v9 = 16711680;
    goto LABEL_25;
  }
  if ( LODWORD(Address[1]) == 23 )
  {
    v9 = 63488;
    flBlue = 31;
    v4 = 4;
    v10 = 2016;
    goto LABEL_25;
  }
  if ( SLODWORD(Address[1]) <= 25 )
  {
    v9 = 31744;
    flBlue = 31;
    v4 = 4;
    v10 = 992;
    goto LABEL_25;
  }
  if ( LODWORD(Address[1]) != 41 )
    return 3221225485LL;
  v4 = 3;
  v5 = (_OWORD *)v45;
  if ( (_QWORD)v45 )
  {
    if ( (__int64)v45 + 1024 < (unsigned __int64)v45 || (unsigned __int64)(v45 + 1024) > W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    v6 = v47;
    v7 = 8LL;
    do
    {
      *v6 = *v5;
      v6[1] = v5[1];
      v6[2] = v5[2];
      v6[3] = v5[3];
      v6[4] = v5[4];
      v6[5] = v5[5];
      v6[6] = v5[6];
      v6 += 8;
      *(v6 - 1) = v5[7];
      v5 += 8;
      --v7;
    }
    while ( v7 );
    v8 = (ULONG *)v47;
  }
  else
  {
    v8 = (ULONG *)&unk_1C02E15B0;
  }
  pulColors = v8;
  cColors = 256;
  v9 = 0;
  v10 = 0;
  flBlue = 0;
LABEL_25:
  if ( v3 * (unsigned __int64)HIDWORD(v44[0]) > 0xFFFFFFFF )
  {
    LODWORD(Length) = -1;
    v12 = -1073741675;
  }
  else
  {
    LODWORD(Length) = v3 * HIDWORD(v44[0]);
    v12 = 0;
  }
  if ( v12 < 0 )
    return 3221225485LL;
  ProbeForWrite(Address[0], Length, 4u);
  v13 = MmSecureVirtualMemory((PVOID)Address[0], Length, 4u);
  v42 = v13;
  if ( !v13 )
    return 3221225485LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v33);
  MDCOBJA::MDCOBJA((MDCOBJA *)v41, v44[1]);
  if ( !v41[0] )
  {
    MmUnsecureVirtualMemory(v13);
    MDCOBJA::~MDCOBJA((MDCOBJA *)v41);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v29);
    return 3221225485LL;
  }
  Lengtha = *(_QWORD *)(v41[0] + 48LL);
  flGreen = v10;
  v14 = v9;
  v15 = pulColors;
  v16 = cColors;
  Palette = EngCreatePalette((unsigned int)(v4 > 3) + 1, cColors, pulColors, v14, flGreen, flBlue);
  v18 = Palette;
  pulColors = (ULONG *)Palette;
  if ( Palette )
  {
    if ( v16 == 256 && !v15 )
      DxEngSyncPaletteTableWithDevice(Palette);
    LockedBitmap = EngCreateLockedBitmap(v38, HIDWORD(v44[0]), v4, 1u, (void *)Address[0]);
    if ( LockedBitmap )
      v1 = LockedBitmap->hsurf;
    else
      v1 = 0LL;
    hsurf = v1;
    DxEngSetPaletteState(v18);
    if ( v1 )
    {
      v20 = EngLockSurface(v1);
      v21 = v20;
      if ( v20 )
      {
        DxEngSelectPaletteToSurface(v20, v18);
        v22 = SURFOBJ_TO_SURFACE(v21);
        *(_QWORD *)(v22 + 216) = v13;
        *(_DWORD *)(v22 + 112) |= 0x104200u;
        EngUnlockSurface(v21);
        DisplayDC = GreCreateDisplayDC(Lengtha, 1LL);
        v39 = DisplayDC;
        v37 = DisplayDC;
        if ( DisplayDC )
        {
          hbmSelectBitmap(DisplayDC, v1, 0LL);
          GreSetBitmapOwner(v1, 2147483650LL);
        }
      }
      EngUnlockSurface(v21);
    }
  }
  if ( !v39 )
  {
    if ( v1 )
    {
      EngDeleteSurface(v1);
      hsurf = 0LL;
    }
    else
    {
      MmUnsecureVirtualMemory(v13);
    }
    v12 = -1073741801;
  }
  v24 = v40;
  v25 = (__int64 *)(v40 + 40);
  if ( v40 + 40 >= W32UserProbeAddress )
    v25 = (__int64 *)W32UserProbeAddress;
  *v25 = v37;
  v26 = (HSURF *)(v24 + 48);
  if ( v24 + 48 >= W32UserProbeAddress )
    v26 = (HSURF *)W32UserProbeAddress;
  *v26 = hsurf;
  if ( v18 )
    EngDeletePalette(v18);
  MDCOBJA::~MDCOBJA((MDCOBJA *)v41);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v27);
  return (unsigned int)v12;
}
