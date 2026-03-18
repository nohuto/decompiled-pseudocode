/*
 * XREFs of NtGdiDdDDICreateDCFromMemory @ 0x1401AA4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x140015860 (--1DCOBJA@@QEAA@XZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1400181B8 (--0SURFREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDC__@@@Z @ 0x1401AAAF8 (--0DCOBJA@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDC__@@@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1401AAB58 (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1401AABD0 (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x140347AD0 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtGdiDdDDICreateDCFromMemory(char *Src)
{
  unsigned int v2; // r8d
  ULONG *v3; // r13
  int v4; // esi
  FLONG flBlue; // edi
  ULONG v6; // r15d
  FLONG flGreen; // r14d
  unsigned __int64 v8; // rcx
  int v9; // eax
  Gre::Base *v10; // rcx
  void *v11; // r12
  char v13; // si
  unsigned int v14; // esi
  char *v15; // r14
  FLONG v16; // r9d
  ULONG v17; // esi
  HPALETTE Palette; // rax
  HPALETTE v19; // rdi
  SIZE_T v20; // r14
  unsigned int v21; // edx
  unsigned __int64 v22; // r8
  struct Gre::Base::SESSION_GLOBALS *v23; // rsi
  __int64 v24; // r8
  __int64 v25; // rax
  HDC DisplayDC; // rax
  __int64 v27; // r9
  HSURF hsurf; // [rsp+30h] [rbp-5F8h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-5F0h]
  ULONG cColors[2]; // [rsp+40h] [rbp-5E8h]
  HDC v31; // [rsp+48h] [rbp-5E0h] BYREF
  unsigned int v32; // [rsp+50h] [rbp-5D8h]
  SIZEL sizl; // [rsp+58h] [rbp-5D0h]
  struct Gre::Base::SESSION_GLOBALS *v34[2]; // [rsp+60h] [rbp-5C8h] BYREF
  __int64 v35; // [rsp+70h] [rbp-5B8h] BYREF
  volatile void *Address[2]; // [rsp+78h] [rbp-5B0h] BYREF
  LONG lWidth[4]; // [rsp+88h] [rbp-5A0h]
  void *Srca[2]; // [rsp+98h] [rbp-590h]
  __int64 v39; // [rsp+A8h] [rbp-580h]
  char *v40; // [rsp+B0h] [rbp-578h]
  _BYTE v41[32]; // [rsp+B8h] [rbp-570h] BYREF
  __int64 v42; // [rsp+D8h] [rbp-550h]
  void *v43; // [rsp+E0h] [rbp-548h]
  _QWORD v44[8]; // [rsp+F0h] [rbp-538h] BYREF
  _BYTE v45[112]; // [rsp+130h] [rbp-4F8h] BYREF
  _BYTE v46[96]; // [rsp+1A0h] [rbp-488h] BYREF
  _BYTE v47[1024]; // [rsp+200h] [rbp-428h] BYREF

  v40 = Src;
  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v46);
  v31 = 0LL;
  hsurf = 0LL;
  Length = 0LL;
  *(_OWORD *)Address = 0LL;
  *(_OWORD *)lWidth = 0LL;
  *(_OWORD *)Srca = 0LL;
  v39 = 0LL;
  RtlCopyFromUser(Address, Src, 0x38uLL);
  sizl = (SIZEL)__PAIR64__(lWidth[0], HIDWORD(Address[1]));
  v2 = lWidth[0];
  if ( SHIDWORD(Address[1]) <= 0 || lWidth[0] <= 0 )
    goto LABEL_14;
  cColors[0] = 0;
  v3 = 0LL;
  switch ( LODWORD(Address[1]) )
  {
    case 0x14:
      v6 = 5;
      goto LABEL_28;
    case 0x15:
    case 0x16:
      v6 = 6;
LABEL_28:
      flGreen = 65280;
      flBlue = 255;
      v4 = 16711680;
      break;
    case 0x17:
      v4 = 63488;
      flBlue = 31;
      v6 = 4;
      flGreen = 2016;
      break;
    case 0x18:
    case 0x19:
      v4 = 31744;
      flBlue = 31;
      v6 = 4;
      flGreen = 992;
      break;
    case 0x29:
      v6 = 3;
      if ( Srca[0] )
      {
        RtlCopyFromUser(v47, Srca[0], 0x400uLL);
        v3 = (ULONG *)v47;
        v2 = lWidth[0];
      }
      else
      {
        v3 = (ULONG *)&unk_140372170;
      }
      cColors[0] = 256;
      v4 = 0;
      flGreen = 0;
      flBlue = 0;
      break;
    default:
      goto LABEL_14;
  }
  v8 = v2 * (unsigned __int64)(unsigned int)lWidth[1];
  v9 = -1;
  if ( v8 <= 0xFFFFFFFF )
    v9 = v2 * lWidth[1];
  LODWORD(Length) = v9;
  v32 = v8 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v8 > 0xFFFFFFFF )
    goto LABEL_14;
  ProbeForWrite(Address[0], Length, 4u);
  v11 = GrepSecureVirtualMemory((void *)Address[0], Length, 4u);
  v43 = v11;
  if ( !v11 )
    goto LABEL_14;
  v34[0] = Gre::Base::Globals(v10);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v35, (_QWORD *)v34[0]);
  DCOBJA::DCOBJA((DCOBJA *)v44, v34[0], *(HDC *)&lWidth[2]);
  if ( !v44[0] )
  {
    GrepUnsecureVirtualMemory(v11);
    DCOBJA::~DCOBJA((DCOBJA *)v44);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v35);
LABEL_14:
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v46);
    return 3221225485LL;
  }
  Length = *(_QWORD *)(v44[0] + 48LL);
  v16 = v4;
  v17 = cColors[0];
  Palette = EngCreatePalette((unsigned int)(v6 > 3) + 1, cColors[0], v3, v16, flGreen, flBlue);
  v19 = Palette;
  *(_QWORD *)cColors = Palette;
  if ( Palette )
  {
    v20 = Length;
    if ( v17 == 256 && !v3 )
      DxEngSyncPaletteTableWithDevice(Palette, (HDEV)Length);
    hsurf = (HSURF)EngCreateBitmap(sizl, lWidth[1], v6, 1u, (PVOID)Address[0]);
    DxEngSetPaletteState(v19, v21, v22);
    if ( hsurf )
    {
      v23 = v34[0];
      SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)v34, (_QWORD *)v34[0]);
      SURFREF::SURFREF((SURFREF *)v41);
      LOBYTE(v24) = 5;
      v25 = HmgShareLock(v23, hsurf, v24, 16LL);
      v42 = v25;
      if ( v25 )
      {
        v13 = 1;
        DxEngSelectPaletteToSurface((struct _SURFOBJ *)(v25 + 24), v19);
        *(_QWORD *)(v42 + 224) = v11;
        *(_DWORD *)(v42 + 112) |= 0x100000u;
        *(_DWORD *)(v42 + 112) |= 0x4000u;
        *(_DWORD *)(v42 + 112) |= 0x200u;
      }
      else
      {
        v13 = 0;
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v41);
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        (__int64)v34[0]);
      if ( v13 )
      {
        DisplayDC = (HDC)GreCreateDisplayDC(v20, 1LL);
        v31 = DisplayDC;
        if ( DisplayDC )
        {
          APIDCOBJ::APIDCOBJ((APIDCOBJ *)v45, DisplayDC);
          LOBYTE(v27) = 7;
          GrepSelectBitmap(v34, v45, hsurf, v27);
          GreSetBitmapOwner(hsurf, 2147483650LL);
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v45);
        }
      }
    }
  }
  if ( v31 )
  {
    v14 = v32;
  }
  else
  {
    if ( hsurf )
    {
      EngDeleteSurface(hsurf);
      hsurf = 0LL;
    }
    else
    {
      GrepUnsecureVirtualMemory(v11);
    }
    v14 = -1073741801;
  }
  v15 = v40;
  RtlCopyToUser(v40 + 40, &v31, 8uLL);
  RtlCopyToUser(v15 + 48, &hsurf, 8uLL);
  if ( v19 )
    EngDeletePalette(v19);
  DCOBJA::~DCOBJA((DCOBJA *)v44);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v35);
  ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v46);
  return v14;
}
