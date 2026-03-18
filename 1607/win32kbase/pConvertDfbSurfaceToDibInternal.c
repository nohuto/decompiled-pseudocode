/*
 * XREFs of pConvertDfbSurfaceToDibInternal @ 0x1C006B5F0
 * Callers:
 *     pConvertDfbSurfaceToDib2 @ 0x1C006B550 (pConvertDfbSurfaceToDib2.c)
 * Callees:
 *     IsUserReleaseRedirectionBitmapSupported_0 @ 0x1C00016C8 (IsUserReleaseRedirectionBitmapSupported_0.c)
 *     UserReleaseRedirectionBitmap_0 @ 0x1C00016D0 (UserReleaseRedirectionBitmap_0.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0025504 (--1DCOBJ@@QEAA@XZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C0025FF0 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002F988 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002FA5C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0033330 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0033590 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C006B240 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x1C006B7B0 (bMigrateSurfaceForConversion.c)
 */

struct _BASEOBJECT *__fastcall pConvertDfbSurfaceToDibInternal(SURFACE *this, int a2)
{
  int v2; // eax
  struct _BASEOBJECT *v3; // rsi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r8d
  struct _BASEOBJECT *v12; // rdi
  __int64 v13; // rcx
  struct _BASEOBJECT *v15; // [rsp+68h] [rbp-59h] BYREF
  char v16; // [rsp+70h] [rbp-51h]
  int v17; // [rsp+74h] [rbp-4Dh]
  int v18; // [rsp+78h] [rbp-49h] BYREF
  __int64 v19; // [rsp+7Ch] [rbp-45h]
  _BYTE v20[20]; // [rsp+84h] [rbp-3Dh]
  _BYTE v21[32]; // [rsp+98h] [rbp-29h] BYREF
  char v22[80]; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v23; // [rsp+128h] [rbp+67h] BYREF

  v2 = *((_DWORD *)this + 28);
  v3 = 0LL;
  if ( (v2 & 0x80100000) != 0 )
    return 0LL;
  v6 = *((_DWORD *)this + 29) & 1;
  if ( !v6 && (v2 & 0x800) != 0 && *((_WORD *)this + 50) == 3 )
    return 0LL;
  v15 = 0LL;
  v17 = 0;
  v19 = 0LL;
  *(_QWORD *)&v20[8] = 0LL;
  *(_QWORD *)v20 = 0LL;
  v7 = *((_DWORD *)this + 24);
  *(_QWORD *)&v20[4] = 0LL;
  v18 = v7;
  v19 = *((_QWORD *)this + 7);
  v16 = 0;
  *(_QWORD *)&v20[12] = 1LL;
  if ( v6 )
  {
    v8 = 1;
    if ( (*((_WORD *)this + 51) & 0x800) != 0 )
      v8 = 2049;
    *(_DWORD *)&v20[12] = v8;
  }
  if ( !(unsigned int)SURFMEM::bCreateDIB(
                        (SURFMEM *)&v15,
                        (struct _DEVBITMAPINFO *)&v18,
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
  v23 = *((_QWORD *)this + 6);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v21, (struct PDEVOBJ *)&v23);
  GreAcquireHmgrSemaphore(v10, v9, v11);
  v12 = v15;
  if ( (*((_DWORD *)this + 29) & 1) != 0 )
    *((_DWORD *)v15 + 28) |= 0x800u;
  *((_QWORD *)v12 + 6) = *((_QWORD *)this + 6);
  if ( (unsigned int)bMigrateSurfaceForConversion(this, v12) )
  {
    if ( (_DWORD)v23 && a2 )
      vDynamicConvertNewSurfaceDCs(*((_QWORD *)this + 6), this);
    v16 |= 1u;
    v3 = v12;
  }
  GreReleaseHmgrSemaphore(v13);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
  DCOBJ::~DCOBJ((DCOBJ *)v22);
  if ( !v3 )
  {
LABEL_26:
    if ( (*((_DWORD *)this + 29) & 1) != 0
      && SURFACE::GetFirstLSurf(this)
      && (int)IsUserReleaseRedirectionBitmapSupported_0() >= 0 )
    {
      UserReleaseRedirectionBitmap_0();
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v15);
  return v3;
}
