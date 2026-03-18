/*
 * XREFs of ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C007DA70
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C000A5E8 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     GreCreateSprite @ 0x1C007DE98 (GreCreateSprite.c)
 * Callees:
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C0019BF0 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C004F98C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C004F9C4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z @ 0x1C007B15C (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C007C164 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     DwmAsyncZorderSprite @ 0x1C007C1C0 (DwmAsyncZorderSprite.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C007D810 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C007DDA4 (DwmAsyncCreateSprite.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00F8474 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C010A07C (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C02608D0 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C026B1A4 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 */

HSPRITE __fastcall GreCreateSpriteInternal(
        HDEV a1,
        struct PDEVOBJ *a2,
        struct tagRECT *a3,
        struct tagMINIWINDOWINFO *a4,
        int a5,
        int a6,
        int a7,
        char a8,
        int a9)
{
  HSPRITE v9; // r15
  HWND v12; // rbx
  __int64 v14; // rdx
  HSPRITE DwmSpriteObj; // rax
  BOOL v16; // eax
  struct DWMSPRITE *v17; // rdi
  SFMLOGICALSURFACE *v18; // rbx
  unsigned int v19; // ecx
  HSPRITE NeighborSprite; // r13
  unsigned int v21; // ecx
  int v22; // edx
  __int64 v23; // rcx
  int v24; // ebx
  void *v25; // rax
  HSPRITE v26; // rsi
  __int64 v27; // rcx
  void *v28; // rax
  struct DWMSPRITE *v29; // r8
  int v30; // edi
  int v32; // [rsp+20h] [rbp-81h]
  struct tagMINIWINDOWINFO *v33; // [rsp+28h] [rbp-79h]
  struct DWMSPRITE *v34; // [rsp+30h] [rbp-71h] BYREF
  struct PDEVOBJ *v35; // [rsp+38h] [rbp-69h] BYREF
  int v36; // [rsp+40h] [rbp-61h]
  _BYTE v37[4]; // [rsp+44h] [rbp-5Dh] BYREF
  HSPRITE v38; // [rsp+48h] [rbp-59h]
  struct REGION *v39; // [rsp+50h] [rbp-51h] BYREF
  int v40; // [rsp+58h] [rbp-49h]
  _DWORD v41[14]; // [rsp+60h] [rbp-41h] BYREF

  v9 = 0LL;
  v12 = (HWND)a2;
  v35 = a2;
  if ( !a5 || !g_pDwmState )
    return (HSPRITE)GdiCreateSprite(a1, v12, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v37, a2, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  memset(v41, 0, sizeof(v41));
  v36 = 0;
  if ( a4 )
    v14 = *((_QWORD *)a4 + 6);
  else
    v14 = gdwRitInputDesktopId;
  DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj(v12, v14, a1, a7);
  v34 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v34, DwmSpriteObj);
  v16 = DWMSPRITEREF::bValid((DWMSPRITEREF *)&v34);
  v17 = v34;
  if ( v16 )
  {
    v18 = (SFMLOGICALSURFACE *)*((_QWORD *)v34 + 16);
    if ( a3 )
      *(struct tagRECT *)((char *)v34 + 56) = *a3;
    *((_DWORD *)v17 + 34) = (a6 != 0) | (2 * (a7 & 1)) | *((_DWORD *)v17 + 34) & 0xFFFFFFFC;
    v19 = (((a7 & 1) << 6) | *((_DWORD *)v18 + 64) & 0xFFFFFFBF) ^ ((((a7 & 1) << 6) | *((_BYTE *)v18 + 256) & 0xBF) ^ (unsigned __int8)(16 * a8)) & 0x10;
    *((_DWORD *)v18 + 64) = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)(v19 >> 1)) & 8;
    *((_DWORD *)v17 + 34) ^= (*((_DWORD *)v17 + 34) ^ (8 * a9)) & 8;
    v38 = *(HSPRITE *)v17;
    NeighborSprite = hspGetNeighborSprite(v38, 0, 1);
    if ( !v35 && !a4 )
    {
      vSpDwmGetMiniWinInfoForNonWindowSprite(v41, (char *)v17 + 56);
      a4 = (struct tagMINIWINDOWINFO *)v41;
    }
    if ( (*((_DWORD *)v18 + 64) & 8) != 0 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v39);
      SFMLOGICALSURFACE::vDirtyRegionAccum(v18, v39);
      if ( v40 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v39);
    }
    v21 = *((_DWORD *)v18 + 64);
    v22 = (v21 >> 1) & 0x18;
    v23 = v21 & 4;
    v24 = v23 | *((_DWORD *)v17 + 34) & 1 | v22 | (2 * (*((_DWORD *)v18 + 64) & 1 | (8 * (*((_DWORD *)v17 + 34) & 0xE))));
    v25 = (void *)UserReferenceDwmApiPort(v23);
    v33 = a4;
    v26 = v38;
    v32 = v24;
    v12 = (HWND)v35;
    if ( (int)DwmAsyncCreateSprite(v25, v32, (__int64)v33) < 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v17 + 3);
      v29 = v17;
      v17 = 0LL;
      v34 = 0LL;
      vspDestroyDwmSpriteObjInternal(a1, 0, v29);
    }
    else
    {
      if ( NeighborSprite )
      {
        if ( *((_QWORD *)g_pDwmState + 18) )
        {
          v35 = 0LL;
          DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v35, NeighborSprite);
          v28 = (void *)UserReferenceDwmApiPort(v27);
          DwmAsyncZorderSprite(v28, (__int64)v26, (__int64)NeighborSprite);
          if ( v35 )
          {
            _InterlockedDecrement((volatile signed __int32 *)v35 + 3);
            v17 = v34;
          }
        }
      }
      v9 = v26;
      *((_DWORD *)v17 + 28) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    }
  }
  if ( v17 )
    _InterlockedDecrement((volatile signed __int32 *)v17 + 3);
  v30 = v36;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v37);
  if ( v30 )
    return (HSPRITE)GdiCreateSprite(a1, v12, a3);
  return v9;
}
