/*
 * XREFs of NtGdiDdDDICreateDCFromMemory @ 0x1C0007B20
 * Callers:
 *     <none>
 * Callees:
 *     DxEngSetPaletteState @ 0x1C0008140 (DxEngSetPaletteState.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0008180 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C00499E8 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     DxEngSelectPaletteToSurface @ 0x1C00F0558 (DxEngSelectPaletteToSurface.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C0158A20 (--1MDCOBJA@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0257CE4 (--0SURFREF@@QEAA@XZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C025FF8C (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C025FFE0 (DxEngSyncPaletteTableWithDevice.c)
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
  int v9; // r14d
  int v10; // r15d
  FLONG flBlue; // esi
  int v12; // r12d
  HANDLE v13; // rax
  void *v14; // rdi
  FLONG v15; // r9d
  ULONG *v16; // r14
  ULONG v17; // r15d
  HPALETTE Palette; // rax
  HPALETTE v19; // rsi
  __int64 LockedBitmap; // rax
  SURFOBJ *v21; // r13
  char v22; // r14
  DYNAMICMODECHANGESHARELOCK *v23; // rcx
  SURFOBJ *v24; // rax
  SURFOBJ *v25; // r15
  __int64 v26; // rax
  __int64 DisplayDC; // rax
  unsigned __int64 v28; // r8
  __int64 *v29; // rdx
  HSURF *v30; // rdx
  DYNAMICMODECHANGESHARELOCK *v31; // rcx
  DYNAMICMODECHANGESHARELOCK *v33; // rcx
  FLONG flGreen; // [rsp+20h] [rbp-508h]
  char v35; // [rsp+30h] [rbp-4F8h] BYREF
  char v36[7]; // [rsp+31h] [rbp-4F7h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-4F0h]
  ULONG cColors; // [rsp+40h] [rbp-4E8h]
  HSURF hsurf; // [rsp+48h] [rbp-4E0h]
  ULONG *pulColors; // [rsp+50h] [rbp-4D8h]
  __int64 v41; // [rsp+58h] [rbp-4D0h]
  HANDLE v42; // [rsp+60h] [rbp-4C8h]
  unsigned __int64 v43; // [rsp+68h] [rbp-4C0h]
  __int64 v44; // [rsp+70h] [rbp-4B8h]
  volatile void *Address[2]; // [rsp+78h] [rbp-4B0h]
  HDC v46[2]; // [rsp+88h] [rbp-4A0h]
  __int128 v47; // [rsp+98h] [rbp-490h]
  __int64 v48; // [rsp+A8h] [rbp-480h]
  unsigned __int64 v49; // [rsp+B0h] [rbp-478h]
  _QWORD v50[2]; // [rsp+B8h] [rbp-470h] BYREF
  _BYTE v51[32]; // [rsp+C8h] [rbp-460h] BYREF
  __int64 v52; // [rsp+E8h] [rbp-440h]
  _BYTE v53[1024]; // [rsp+F0h] [rbp-438h] BYREF

  v49 = a1;
  v44 = 0LL;
  v41 = 0LL;
  v1 = 0LL;
  hsurf = 0LL;
  v42 = 0LL;
  Length = 0LL;
  v2 = a1;
  if ( a1 >= W32UserProbeAddress )
    v2 = W32UserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)v2;
  *(_OWORD *)v46 = *(_OWORD *)(v2 + 16);
  v47 = *(_OWORD *)(v2 + 32);
  v48 = *(_QWORD *)(v2 + 48);
  v43 = __PAIR64__((unsigned int)v46[0], HIDWORD(Address[1]));
  v3 = LODWORD(v46[0]);
  if ( SHIDWORD(Address[1]) <= 0 || SLODWORD(v46[0]) <= 0 )
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
    v9 = 16711680;
    flBlue = 255;
    goto LABEL_25;
  }
  if ( LODWORD(Address[1]) == 23 )
  {
    flBlue = 31;
    v4 = 4;
    v9 = 63488;
    v10 = 2016;
    goto LABEL_25;
  }
  if ( SLODWORD(Address[1]) <= 25 )
  {
    flBlue = 31;
    v4 = 4;
    v9 = 31744;
    v10 = 992;
    goto LABEL_25;
  }
  if ( LODWORD(Address[1]) != 41 )
    return 3221225485LL;
  v4 = 3;
  v5 = (_OWORD *)v47;
  if ( (_QWORD)v47 )
  {
    if ( (__int64)v47 + 1024 < (unsigned __int64)v47 || (unsigned __int64)(v47 + 1024) > W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    v6 = v53;
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
    v8 = (ULONG *)v53;
  }
  else
  {
    v8 = (ULONG *)&unk_1C02E7BD0;
  }
  pulColors = v8;
  cColors = 256;
  v9 = 0;
  v10 = 0;
  flBlue = 0;
LABEL_25:
  if ( v3 * (unsigned __int64)HIDWORD(v46[0]) > 0xFFFFFFFF )
  {
    LODWORD(Length) = -1;
    v12 = -1073741675;
  }
  else
  {
    LODWORD(Length) = v3 * HIDWORD(v46[0]);
    v12 = 0;
  }
  if ( v12 < 0 )
    return 3221225485LL;
  ProbeForWrite(Address[0], Length, 4u);
  v13 = (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails)
      ? (HANDLE)GrepSecureVirtualMemory(Address[0], Length, 4LL)
      : MmSecureVirtualMemory((PVOID)Address[0], Length, 4u);
  v42 = v13;
  v14 = v13;
  if ( !v13 )
    return 3221225485LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v35);
  MDCOBJA::MDCOBJA((MDCOBJA *)v50, v46[1]);
  if ( !v50[0] )
  {
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(v14);
    else
      MmUnsecureVirtualMemory(v14);
    MDCOBJA::~MDCOBJA((MDCOBJA *)v50);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v33);
    return 3221225485LL;
  }
  Length = *(_QWORD *)(v50[0] + 48LL);
  flGreen = v10;
  v15 = v9;
  v16 = pulColors;
  v17 = cColors;
  Palette = EngCreatePalette((unsigned int)(v4 > 3) + 1, cColors, pulColors, v15, flGreen, flBlue);
  v19 = Palette;
  pulColors = (ULONG *)Palette;
  if ( Palette )
  {
    if ( v17 == 256 && !v16 )
      DxEngSyncPaletteTableWithDevice(Palette);
    LockedBitmap = EngCreateLockedBitmap(v43, HIDWORD(v46[0]), v4, 1LL, Address[0]);
    v21 = (SURFOBJ *)LockedBitmap;
    if ( LockedBitmap )
      v1 = *(HSURF *)(LockedBitmap + 8);
    else
      v1 = 0LL;
    hsurf = v1;
    DxEngSetPaletteState(v19);
    if ( v1 )
    {
      v22 = 0;
      if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_Servicing_DynamicModeChange_31627929_31627929_FeatureDescriptorDetails) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v36);
        SURFREF::SURFREF((SURFREF *)v51);
        SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)v51, v1);
        if ( (unsigned int)DWMSPRITEREF::bValid((DWMSPRITEREF *)v51) )
        {
          v22 = 1;
          DxEngSelectPaletteToSurface(v52 + 24, v19);
          *(_QWORD *)(v52 + 224) = v14;
          *(_DWORD *)(v52 + 112) |= 0x100000u;
          *(_DWORD *)(v52 + 112) |= 0x4000u;
          *(_DWORD *)(v52 + 112) |= 0x200u;
        }
        else
        {
          v22 = 0;
        }
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v51);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v23);
      }
      else
      {
        v24 = EngLockSurface(v1);
        v25 = v24;
        if ( v24 )
        {
          v22 = 1;
          DxEngSelectPaletteToSurface(v24, v19);
          v26 = SURFOBJ_TO_SURFACE(v25);
          *(_QWORD *)(v26 + 224) = v14;
          *(_DWORD *)(v26 + 112) |= 0x104200u;
          EngUnlockSurface(v25);
        }
      }
      if ( v22 )
      {
        DisplayDC = GreCreateDisplayDC(Length, 1LL);
        v44 = DisplayDC;
        v41 = DisplayDC;
        if ( DisplayDC )
        {
          hbmSelectBitmap(DisplayDC, v1, 0LL, 1LL);
          GreSetBitmapOwner(v1, 2147483650LL);
        }
      }
      EngUnlockSurface(v21);
    }
  }
  if ( !v44 )
  {
    if ( v1 )
    {
      EngDeleteSurface(v1);
      hsurf = 0LL;
    }
    else if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
    {
      GrepUnsecureVirtualMemory(v14);
    }
    else
    {
      MmUnsecureVirtualMemory(v14);
    }
    v12 = -1073741801;
  }
  v28 = v49;
  v29 = (__int64 *)(v49 + 40);
  if ( v49 + 40 >= W32UserProbeAddress )
    v29 = (__int64 *)W32UserProbeAddress;
  *v29 = v41;
  v30 = (HSURF *)(v28 + 48);
  if ( v28 + 48 >= W32UserProbeAddress )
    v30 = (HSURF *)W32UserProbeAddress;
  *v30 = hsurf;
  if ( v19 )
    EngDeletePalette(v19);
  MDCOBJA::~MDCOBJA((MDCOBJA *)v50);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v31);
  return (unsigned int)v12;
}
