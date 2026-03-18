/*
 * XREFs of ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C0065674
 * Callers:
 *     GreCreateSprite @ 0x1C0065AC4 (GreCreateSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00D6E48 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C00499E8 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z @ 0x1C0051FE8 (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0053FC0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0053FF8 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1C00630FC (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     DwmAsyncZorderSprite @ 0x1C0063130 (DwmAsyncZorderSprite.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0065268 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C00659D0 (DwmAsyncCreateSprite.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00D83D0 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C012845C (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C025E1CC (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C0269664 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
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
  HSPRITE v9; // r14
  __int64 v14; // rdx
  HSPRITE DwmSpriteObj; // rax
  struct DWMSPRITE *v16; // rdi
  SFMLOGICALSURFACE *v17; // rbx
  unsigned int v18; // ecx
  HSPRITE NeighborSprite; // r13
  unsigned int v20; // ecx
  int v21; // edx
  __int64 v22; // rcx
  int v23; // ebx
  void *v24; // rax
  HSPRITE v25; // rsi
  __int64 v26; // rcx
  void *v27; // rax
  struct DWMSPRITE *v28; // r8
  struct tagMINIWINDOWINFO *v30; // [rsp+28h] [rbp-C9h]
  _BYTE v31[4]; // [rsp+34h] [rbp-BDh] BYREF
  struct PDEVOBJ *v32; // [rsp+38h] [rbp-B9h]
  HSPRITE v33; // [rsp+40h] [rbp-B1h]
  struct REGION *v34; // [rsp+48h] [rbp-A9h] BYREF
  int v35; // [rsp+50h] [rbp-A1h]
  _BYTE v36[32]; // [rsp+58h] [rbp-99h] BYREF
  struct DWMSPRITE *v37; // [rsp+78h] [rbp-79h]
  _BYTE v38[32]; // [rsp+80h] [rbp-71h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-51h]
  _BYTE v40[56]; // [rsp+A8h] [rbp-49h] BYREF

  v9 = 0LL;
  v32 = a2;
  if ( !a5 || !g_pDwmState )
    return (HSPRITE)GdiCreateSprite(a1, (HWND)a2, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v31, a2, 0LL, 0LL);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  memset(v40, 0, sizeof(v40));
  if ( a4 )
    v14 = *((_QWORD *)a4 + 6);
  else
    v14 = gdwRitInputDesktopId;
  DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj((HWND)a2, v14, a1, a7);
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v36, DwmSpriteObj);
  if ( DWMSPRITEREF::bValid((DWMSPRITEREF *)v36) )
  {
    v16 = v37;
    v17 = (SFMLOGICALSURFACE *)*((_QWORD *)v37 + 16);
    if ( a3 )
      *(struct tagRECT *)((char *)v37 + 56) = *a3;
    *((_DWORD *)v16 + 34) = (a6 != 0) | (2 * (a7 & 1)) | *((_DWORD *)v16 + 34) & 0xFFFFFFFC;
    v18 = (((a7 & 1) << 6) | *((_DWORD *)v17 + 64) & 0xFFFFFFBF) ^ ((((a7 & 1) << 6) | *((_BYTE *)v17 + 256) & 0xBF) ^ (unsigned __int8)(16 * a8)) & 0x10;
    *((_DWORD *)v17 + 64) = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)(v18 >> 1)) & 8;
    *((_DWORD *)v16 + 34) ^= (*((_DWORD *)v16 + 34) ^ (8 * a9)) & 8;
    v33 = *(HSPRITE *)v16;
    NeighborSprite = hspGetNeighborSprite(v33, 0, 1);
    if ( !v32 && !a4 )
    {
      vSpDwmGetMiniWinInfoForNonWindowSprite(v40, (char *)v16 + 56);
      a4 = (struct tagMINIWINDOWINFO *)v40;
    }
    if ( (*((_DWORD *)v17 + 64) & 8) != 0 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v34);
      SFMLOGICALSURFACE::vDirtyRegionAccum(v17, v34);
      if ( v35 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v34);
    }
    v20 = *((_DWORD *)v17 + 64);
    v21 = (v20 >> 1) & 0x18;
    v22 = v20 & 4;
    v23 = v22 | *((_DWORD *)v16 + 34) & 1 | v21 | (2 * (*((_DWORD *)v17 + 64) & 1 | (8 * (*((_DWORD *)v16 + 34) & 0xE))));
    v24 = (void *)UserReferenceDwmApiPort(v22);
    v30 = a4;
    v25 = v33;
    if ( (int)DwmAsyncCreateSprite(v24, v23, (__int64)v30) < 0 )
    {
      v28 = v37;
      if ( v37 )
        _InterlockedDecrement((volatile signed __int32 *)v37 + 3);
      v37 = 0LL;
      vspDestroyDwmSpriteObjInternal(a1, 0, v28);
    }
    else
    {
      if ( NeighborSprite && *((_QWORD *)g_pDwmState + 18) )
      {
        DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v38, NeighborSprite);
        v27 = (void *)UserReferenceDwmApiPort(v26);
        DwmAsyncZorderSprite(v27, (__int64)v25, (__int64)NeighborSprite);
        if ( v39 )
          _InterlockedDecrement((volatile signed __int32 *)(v39 + 12));
        v39 = 0LL;
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v38);
      }
      v9 = v25;
      *((_DWORD *)v16 + 28) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    }
  }
  if ( v37 )
    _InterlockedDecrement((volatile signed __int32 *)v37 + 3);
  v37 = 0LL;
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v36);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v31);
  return v9;
}
