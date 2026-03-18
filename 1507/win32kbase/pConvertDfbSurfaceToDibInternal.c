/*
 * XREFs of pConvertDfbSurfaceToDibInternal @ 0x1C005DAF0
 * Callers:
 *     pConvertDfbSurfaceToDib2 @ 0x1C005DA50 (pConvertDfbSurfaceToDib2.c)
 * Callees:
 *     IsUserReleaseRedirectionBitmapSupported_0 @ 0x1C00016B8 (IsUserReleaseRedirectionBitmapSupported_0.c)
 *     UserReleaseRedirectionBitmap_0 @ 0x1C00016C0 (UserReleaseRedirectionBitmap_0.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0027814 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00278E8 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00336C0 (--1SURFMEM@@QEAA@XZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C0039EE0 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C005D870 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x1C005DCB0 (bMigrateSurfaceForConversion.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B1E40 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 */

SURFACE *__fastcall pConvertDfbSurfaceToDibInternal(SURFACE *this, int a2)
{
  int v2; // eax
  SURFACE *v5; // rsi
  int v6; // ecx
  int v7; // ecx
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  SURFACE *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  SURFACE *v16; // [rsp+60h] [rbp-69h] BYREF
  char v17; // [rsp+68h] [rbp-61h]
  int v18; // [rsp+6Ch] [rbp-5Dh]
  int v19; // [rsp+70h] [rbp-59h] BYREF
  __int64 v20; // [rsp+74h] [rbp-55h]
  _BYTE v21[20]; // [rsp+7Ch] [rbp-4Dh]
  _BYTE v22[32]; // [rsp+90h] [rbp-39h] BYREF
  char v23[80]; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v24; // [rsp+130h] [rbp+67h] BYREF

  v2 = *((_DWORD *)this + 28);
  v5 = 0LL;
  if ( (v2 & 0x80100000) != 0 )
    return 0LL;
  v6 = *((_DWORD *)this + 29) & 1;
  if ( !v6 && (v2 & 0x800) != 0 && *((_WORD *)this + 50) == 3 )
    return 0LL;
  v16 = 0LL;
  v20 = 0LL;
  *(_QWORD *)&v21[8] = 0LL;
  *(_QWORD *)v21 = 0LL;
  v19 = *((_DWORD *)this + 24);
  v20 = *((_QWORD *)this + 7);
  v17 = 0;
  v18 = 0;
  *(_QWORD *)&v21[12] = 1LL;
  *(_QWORD *)&v21[4] = 0LL;
  if ( v6 )
  {
    v7 = 1;
    if ( (*((_WORD *)this + 51) & 0x800) != 0 )
      v7 = 2049;
    *(_DWORD *)&v21[12] = v7;
  }
  if ( !(unsigned int)SURFMEM::bCreateDIB(
                        (SURFMEM *)&v16,
                        (struct _DEVBITMAPINFO *)&v19,
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
  v24 = *((_QWORD *)this + 6);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v22, (struct PDEVOBJ *)&v24);
  GreAcquireHmgrSemaphore(v9, v8, v10);
  v11 = v16;
  if ( (*((_DWORD *)this + 29) & 1) != 0 )
    *((_DWORD *)v16 + 28) |= 0x800u;
  *((_QWORD *)v11 + 6) = *((_QWORD *)this + 6);
  if ( (unsigned int)bMigrateSurfaceForConversion(this, v11) )
  {
    if ( (_DWORD)v24 && a2 )
      vDynamicConvertNewSurfaceDCs(*((_QWORD *)this + 6), this);
    v17 |= 1u;
    v5 = v11;
  }
  GreReleaseHmgrSemaphore(v13, v12, v14);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v22);
  DCOBJ::~DCOBJ((DCOBJ *)v23);
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
  SURFMEM::~SURFMEM((SURFMEM *)&v16);
  return v5;
}
