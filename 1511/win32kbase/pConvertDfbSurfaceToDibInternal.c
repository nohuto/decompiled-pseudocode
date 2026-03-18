/*
 * XREFs of pConvertDfbSurfaceToDibInternal @ 0x1C005B1A0
 * Callers:
 *     pConvertDfbSurfaceToDib2 @ 0x1C005B100 (pConvertDfbSurfaceToDib2.c)
 * Callees:
 *     IsUserReleaseRedirectionBitmapSupported_0 @ 0x1C0001658 (IsUserReleaseRedirectionBitmapSupported_0.c)
 *     UserReleaseRedirectionBitmap_0 @ 0x1C0001660 (UserReleaseRedirectionBitmap_0.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0024A30 (--1SURFMEM@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002C080 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C144 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C0036050 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C005AF20 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x1C005B360 (bMigrateSurfaceForConversion.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B5010 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 */

SURFACE *__fastcall pConvertDfbSurfaceToDibInternal(SURFACE *this, int a2)
{
  int v2; // eax
  SURFACE *v5; // rsi
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r8d
  SURFACE *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  SURFACE *v18; // [rsp+60h] [rbp-49h] BYREF
  char v19; // [rsp+68h] [rbp-41h]
  int v20; // [rsp+6Ch] [rbp-3Dh]
  int v21; // [rsp+70h] [rbp-39h] BYREF
  __int64 v22; // [rsp+74h] [rbp-35h]
  _BYTE v23[20]; // [rsp+7Ch] [rbp-2Dh]
  _BYTE v24[80]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v25; // [rsp+110h] [rbp+67h] BYREF

  v2 = *((_DWORD *)this + 28);
  v5 = 0LL;
  if ( (v2 & 0x80100000) != 0 )
    return 0LL;
  v6 = *((_DWORD *)this + 29) & 1;
  if ( !v6 && (v2 & 0x800) != 0 && *((_WORD *)this + 50) == 3 )
    return 0LL;
  v18 = 0LL;
  v22 = 0LL;
  *(_QWORD *)&v23[8] = 0LL;
  *(_QWORD *)v23 = 0LL;
  v21 = *((_DWORD *)this + 24);
  v22 = *((_QWORD *)this + 7);
  v19 = 0;
  v20 = 0;
  *(_QWORD *)&v23[12] = 1LL;
  *(_QWORD *)&v23[4] = 0LL;
  if ( v6 )
  {
    v7 = 1;
    if ( (*((_WORD *)this + 51) & 0x800) != 0 )
      v7 = 2049;
    *(_DWORD *)&v23[12] = v7;
  }
  if ( !(unsigned int)SURFMEM::bCreateDIB(
                        (SURFMEM *)&v18,
                        (struct _DEVBITMAPINFO *)&v21,
                        0LL,
                        0LL,
                        0,
                        0LL,
                        0LL,
                        0,
                        1,
                        0,
                        0) )
    goto LABEL_26;
  v25 = *((_QWORD *)this + 6);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v24, (struct PDEVOBJ *)&v25);
  GreAcquireHmgrSemaphore(v11, v10, v12);
  v13 = v18;
  if ( (*((_DWORD *)this + 29) & 1) != 0 )
    *((_DWORD *)v18 + 28) |= 0x800u;
  *((_QWORD *)v13 + 6) = *((_QWORD *)this + 6);
  if ( (unsigned int)bMigrateSurfaceForConversion(this, v13) )
  {
    if ( (_DWORD)v25 && a2 )
      vDynamicConvertNewSurfaceDCs(*((_QWORD *)this + 6), this);
    v19 |= 1u;
    v5 = v13;
  }
  GreReleaseHmgrSemaphore(v15, v14, v16);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v24);
  if ( !v5 )
  {
LABEL_26:
    if ( (*((_DWORD *)this + 29) & 1) != 0
      && SURFACE::GetFirstLSurf(this)
      && (int)IsUserReleaseRedirectionBitmapSupported_0() >= 0 )
    {
      UserReleaseRedirectionBitmap_0();
    }
  }
  SURFMEM::~SURFMEM((__int64 **)&v18, v8, v9);
  return v5;
}
