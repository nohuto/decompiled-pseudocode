/*
 * XREFs of ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C000D1CC
 * Callers:
 *     GreCreateSprite @ 0x1C000D128 (GreCreateSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026056C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     DwmAsyncCreateSprite @ 0x1C000D52C (DwmAsyncCreateSprite.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C000D620 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C000D98C (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     DwmAsyncZorderSprite @ 0x1C000F720 (DwmAsyncZorderSprite.c)
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C0010394 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1C0010410 (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z @ 0x1C00117CC (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0061C78 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0061CB0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C011E5C0 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C0261F20 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C026C634 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
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
  unsigned __int64 v14; // rdx
  HSPRITE DwmSpriteObj; // rax
  struct DWMSPRITE *v16; // rdi
  SFMLOGICALSURFACE *v17; // rbx
  unsigned int v18; // ecx
  HSPRITE NeighborSprite; // r13
  int v20; // ebx
  void *v21; // rax
  HSPRITE v22; // rsi
  void *v23; // rax
  struct DWMSPRITE *v24; // r8
  struct tagMINIWINDOWINFO *v26; // [rsp+28h] [rbp-C9h]
  _BYTE v27[4]; // [rsp+34h] [rbp-BDh] BYREF
  struct PDEVOBJ *v28; // [rsp+38h] [rbp-B9h]
  HSPRITE v29; // [rsp+40h] [rbp-B1h]
  struct REGION *v30; // [rsp+48h] [rbp-A9h] BYREF
  int v31; // [rsp+50h] [rbp-A1h]
  _BYTE v32[32]; // [rsp+58h] [rbp-99h] BYREF
  struct DWMSPRITE *v33; // [rsp+78h] [rbp-79h]
  _BYTE v34[32]; // [rsp+80h] [rbp-71h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-51h]
  _DWORD v36[14]; // [rsp+A8h] [rbp-49h] BYREF

  v9 = 0LL;
  v28 = a2;
  if ( !a5 || !g_pDwmState )
    return (HSPRITE)GdiCreateSprite(a1, (HWND)a2, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v27, a2, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  memset(v36, 0, sizeof(v36));
  if ( a4 )
    v14 = *((_QWORD *)a4 + 6);
  else
    v14 = gdwRitInputDesktopId;
  DwmSpriteObj = hspCreateDwmSpriteObj((HWND)a2, v14, a1, a7);
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v32, DwmSpriteObj);
  if ( (unsigned int)DWMSPRITEREF::bValid((DWMSPRITEREF *)v32) )
  {
    v16 = v33;
    v17 = (SFMLOGICALSURFACE *)*((_QWORD *)v33 + 16);
    if ( a3 )
      *(struct tagRECT *)((char *)v33 + 56) = *a3;
    *((_DWORD *)v16 + 34) = (a6 != 0) | (2 * (a7 & 1)) | *((_DWORD *)v16 + 34) & 0xFFFFFFFC;
    v18 = (((a7 & 1) << 6) | *((_DWORD *)v17 + 64) & 0xFFFFFFBF) ^ ((((a7 & 1) << 6) | *((_BYTE *)v17 + 256) & 0xBF) ^ (unsigned __int8)(16 * a8)) & 0x10;
    *((_DWORD *)v17 + 64) = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)(v18 >> 1)) & 8;
    *((_DWORD *)v16 + 34) ^= (*((_DWORD *)v16 + 34) ^ (8 * a9)) & 8;
    v29 = *(HSPRITE *)v16;
    NeighborSprite = hspGetNeighborSprite(v29, 0, 1);
    if ( !v28 && !a4 )
    {
      vSpDwmGetMiniWinInfoForNonWindowSprite(v36, (char *)v16 + 56);
      a4 = (struct tagMINIWINDOWINFO *)v36;
    }
    if ( (*((_DWORD *)v17 + 64) & 8) != 0 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30);
      SFMLOGICALSURFACE::vDirtyRegionAccum(v17, v30);
      if ( v31 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
    }
    v20 = *((_DWORD *)v17 + 64) & 4 | *((_DWORD *)v16 + 34) & 1 | (*((_DWORD *)v17 + 64) >> 1) & 0x18 | (2 * (*((_DWORD *)v17 + 64) & 1 | (8 * (*((_DWORD *)v16 + 34) & 0xE))));
    v21 = (void *)UserReferenceDwmApiPort();
    v26 = a4;
    v22 = v29;
    if ( (int)DwmAsyncCreateSprite(v21, v20, (__int64)v26) < 0 )
    {
      v24 = v33;
      if ( v33 )
        _InterlockedDecrement((volatile signed __int32 *)v33 + 3);
      v33 = 0LL;
      vspDestroyDwmSpriteObjInternal(a1, 0, v24);
    }
    else
    {
      if ( NeighborSprite && *((_QWORD *)g_pDwmState + 18) )
      {
        DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v34, NeighborSprite);
        v23 = (void *)UserReferenceDwmApiPort();
        DwmAsyncZorderSprite(v23);
        if ( v35 )
          _InterlockedDecrement((volatile signed __int32 *)(v35 + 12));
        v35 = 0LL;
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v34);
      }
      v9 = v22;
      *((_DWORD *)v16 + 28) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    }
  }
  if ( v33 )
    _InterlockedDecrement((volatile signed __int32 *)v33 + 3);
  v33 = 0LL;
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v32);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v27);
  return v9;
}
