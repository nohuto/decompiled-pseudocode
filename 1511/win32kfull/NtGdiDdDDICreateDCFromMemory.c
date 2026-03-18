/*
 * XREFs of NtGdiDdDDICreateDCFromMemory @ 0x1C007F000
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C003A6FC (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C003A728 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     DxEngSelectPaletteToSurface @ 0x1C007F4E0 (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C007F560 (DxEngSetPaletteState.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C02625F4 (DxEngSyncPaletteTableWithDevice.c)
 */

__int64 __fastcall NtGdiDdDDICreateDCFromMemory(unsigned __int64 a1)
{
  HSURF Bitmap; // rdi
  unsigned __int64 v2; // rax
  ULONG v3; // r13d
  _OWORD *v4; // rdx
  _OWORD *v5; // rax
  __int64 v6; // rcx
  ULONG *v7; // rax
  int v8; // esi
  int v9; // r14d
  FLONG flBlue; // ebx
  int v12; // r15d
  HANDLE v13; // r12
  FLONG v14; // r9d
  ULONG *v15; // rsi
  ULONG v16; // r14d
  HPALETTE Palette; // rax
  HPALETTE v18; // rbx
  SURFOBJ *v19; // rax
  SURFOBJ *v20; // rsi
  __int64 v21; // rax
  __int64 DisplayDC; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // r8
  __int64 *v25; // rdx
  HSURF *v26; // rdx
  DYNAMICMODECHANGESHARELOCK *v27; // rcx
  DYNAMICMODECHANGESHARELOCK *v28; // rcx
  FLONG flGreen; // [rsp+20h] [rbp-4D8h]
  SIZE_T Length; // [rsp+30h] [rbp-4C8h]
  SIZE_T Lengtha; // [rsp+30h] [rbp-4C8h]
  char v32[8]; // [rsp+38h] [rbp-4C0h] BYREF
  ULONG *pulColors; // [rsp+40h] [rbp-4B8h]
  HSURF hsurf; // [rsp+48h] [rbp-4B0h]
  ULONG cColors[2]; // [rsp+50h] [rbp-4A8h]
  __int64 v36; // [rsp+58h] [rbp-4A0h]
  _QWORD v37[2]; // [rsp+60h] [rbp-498h] BYREF
  HANDLE v38; // [rsp+70h] [rbp-488h]
  __m256i Address; // [rsp+78h] [rbp-480h]
  __int128 v40; // [rsp+98h] [rbp-460h]
  __int64 v41; // [rsp+A8h] [rbp-450h]
  unsigned __int64 v42; // [rsp+B0h] [rbp-448h]
  _BYTE v43[1024]; // [rsp+C0h] [rbp-438h] BYREF

  v42 = a1;
  v36 = 0LL;
  Bitmap = 0LL;
  hsurf = 0LL;
  v38 = 0LL;
  HIDWORD(Length) = 0;
  v2 = a1;
  if ( a1 >= W32UserProbeAddress )
    v2 = W32UserProbeAddress;
  Address = *(__m256i *)v2;
  v40 = *(_OWORD *)(v2 + 32);
  v41 = *(_QWORD *)(v2 + 48);
  cColors[0] = 0;
  pulColors = 0LL;
  if ( Address.m256i_i32[2] == 20 )
  {
    v3 = 5;
    goto LABEL_23;
  }
  if ( Address.m256i_i32[2] <= 20 )
    return 3221225485LL;
  if ( Address.m256i_i32[2] <= 22 )
  {
    v3 = 6;
LABEL_23:
    v9 = 65280;
    flBlue = 255;
    v8 = 16711680;
    goto LABEL_24;
  }
  if ( Address.m256i_i32[2] == 23 )
  {
    v8 = 63488;
    flBlue = 31;
    v3 = 4;
    v9 = 2016;
    goto LABEL_24;
  }
  if ( Address.m256i_i32[2] <= 25 )
  {
    v8 = 31744;
    flBlue = 31;
    v3 = 4;
    v9 = 992;
    goto LABEL_24;
  }
  if ( Address.m256i_i32[2] != 41 )
    return 3221225485LL;
  v3 = 3;
  v4 = (_OWORD *)v40;
  if ( (_QWORD)v40 )
  {
    if ( (__int64)v40 + 1024 < (unsigned __int64)v40 || (unsigned __int64)(v40 + 1024) > W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    v5 = v43;
    v6 = 8LL;
    do
    {
      *v5 = *v4;
      v5[1] = v4[1];
      v5[2] = v4[2];
      v5[3] = v4[3];
      v5[4] = v4[4];
      v5[5] = v4[5];
      v5[6] = v4[6];
      v5 += 8;
      *(v5 - 1) = v4[7];
      v4 += 8;
      --v6;
    }
    while ( v6 );
    v7 = (ULONG *)v43;
  }
  else
  {
    v7 = (ULONG *)&unk_1C02E05E0;
  }
  pulColors = v7;
  cColors[0] = 256;
  v8 = 0;
  v9 = 0;
  flBlue = 0;
LABEL_24:
  if ( Address.m256i_u32[4] * (unsigned __int64)Address.m256i_u32[5] > 0xFFFFFFFF )
  {
    LODWORD(Length) = -1;
    v12 = -1073741675;
  }
  else
  {
    LODWORD(Length) = Address.m256i_i32[4] * Address.m256i_i32[5];
    v12 = 0;
  }
  if ( v12 < 0 )
    return 3221225485LL;
  ProbeForWrite((volatile void *)Address.m256i_i64[0], Length, 4u);
  v13 = MmSecureVirtualMemory((PVOID)Address.m256i_i64[0], Length, 4u);
  v38 = v13;
  if ( !v13 )
    return 3221225485LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v32);
  MDCOBJA::MDCOBJA((MDCOBJA *)v37, (HDC)Address.m256i_i64[3]);
  if ( !v37[0] )
  {
    MmUnsecureVirtualMemory(v13);
    DCOBJA::~DCOBJA((DCOBJA *)v37);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v28);
    return 3221225485LL;
  }
  Lengtha = *(_QWORD *)(v37[0] + 48LL);
  flGreen = v9;
  v14 = v8;
  v15 = pulColors;
  v16 = cColors[0];
  Palette = EngCreatePalette((unsigned int)(v3 > 3) + 1, cColors[0], pulColors, v14, flGreen, flBlue);
  v18 = Palette;
  *(_QWORD *)cColors = Palette;
  if ( !Palette )
    goto LABEL_38;
  if ( v16 == 256 && !v15 )
    DxEngSyncPaletteTableWithDevice(Palette);
  pulColors = *(ULONG **)((char *)&Address.m256i_i64[1] + 4);
  Bitmap = (HSURF)EngCreateBitmap(
                    *(SIZEL *)((char *)&Address.m256i_u64[1] + 4),
                    Address.m256i_i32[5],
                    v3,
                    1u,
                    (PVOID)Address.m256i_i64[0]);
  hsurf = Bitmap;
  DxEngSetPaletteState(v18);
  if ( Bitmap && (v19 = EngLockSurface(Bitmap), (v20 = v19) != 0LL) )
  {
    DxEngSelectPaletteToSurface(v19, v18);
    v21 = SURFOBJ_TO_SURFACE(v20);
    *(_QWORD *)(v21 + 216) = v13;
    *(_DWORD *)(v21 + 112) |= 0x104200u;
    EngUnlockSurface(v20);
    DisplayDC = GreCreateDisplayDC(Lengtha, 1LL);
    v23 = DisplayDC;
    v36 = DisplayDC;
    if ( DisplayDC )
    {
      hbmSelectBitmap(DisplayDC, Bitmap, 0LL, 1LL);
      GreSetBitmapOwner(Bitmap, 2147483650LL);
    }
  }
  else
  {
LABEL_38:
    v23 = 0LL;
  }
  if ( !v23 )
  {
    if ( Bitmap )
    {
      EngDeleteSurface(Bitmap);
      hsurf = 0LL;
    }
    else
    {
      MmUnsecureVirtualMemory(v13);
    }
    v12 = -1073741801;
  }
  v24 = v42;
  v25 = (__int64 *)(v42 + 40);
  if ( v42 + 40 >= W32UserProbeAddress )
    v25 = (__int64 *)W32UserProbeAddress;
  *v25 = v36;
  v26 = (HSURF *)(v24 + 48);
  if ( v24 + 48 >= W32UserProbeAddress )
    v26 = (HSURF *)W32UserProbeAddress;
  *v26 = hsurf;
  if ( v18 )
    EngDeletePalette(v18);
  DCOBJA::~DCOBJA((DCOBJA *)v37);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v27);
  return (unsigned int)v12;
}
