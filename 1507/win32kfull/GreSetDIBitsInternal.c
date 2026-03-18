/*
 * XREFs of GreSetDIBitsInternal @ 0x1C0121D20
 * Callers:
 *     GreSetDIBits @ 0x1C010102C (GreSetDIBits.c)
 *     GreCreateDIBitmapComp @ 0x1C0121C2C (GreCreateDIBitmapComp.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C009A950 (GreSetDIBitsToDeviceInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetDIBitsInternal(
        HDC a1,
        HSURF a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        __int64 a10)
{
  __int64 v10; // r15
  unsigned int v11; // r13d
  int v12; // r12d
  int v15; // ebp
  int v16; // esi
  HDC CompatibleDC; // rbx
  __int64 v18; // rdx
  __int64 v19; // rbp
  _BYTE v21[32]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-78h]
  _QWORD v23[14]; // [rsp+A8h] [rbp-70h] BYREF
  int v25; // [rsp+130h] [rbp+18h]

  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( a6 && ((v15 = 1, *(_DWORD *)a6 < 0x28u) || (unsigned int)(*(_DWORD *)(a6 + 16) - 4) > 1) )
  {
    v16 = *(_DWORD *)(a6 + 8);
    v25 = *(_DWORD *)(a6 + 4);
    if ( v16 < 0 )
      v16 = -v16;
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    SURFREF::SURFREF((SURFREF *)v21, a2);
    if ( v22 && (*(_DWORD *)(v22 + 112) & 0x4000000) != 0 )
    {
      if ( *(_DWORD *)(v22 + 160) )
        CompatibleDC = *(HDC *)(v22 + 152);
      else
        CompatibleDC = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      if ( CompatibleDC || (CompatibleDC = (HDC)GreCreateCompatibleDC(a1, v18), v12 = 1, CompatibleDC) )
      {
        if ( !a1
          || ((DCOBJ::DCOBJ((DCOBJ *)v23, a1), v23[0])
            ? (v10 = GreSelectPalette(CompatibleDC, *(_QWORD *)(v23[0] + 88LL), 1LL))
            : (EngSetLastError(6u), v15 = 0),
              DCOBJ::~DCOBJ((DCOBJ *)v23),
              v15) )
        {
          v19 = GreSelectBitmap(CompatibleDC, a2);
          if ( v19 )
          {
            v11 = GreSetDIBitsToDeviceInternal(
                    CompatibleDC,
                    0,
                    0,
                    v25,
                    v16,
                    0,
                    0,
                    0,
                    a4,
                    a5,
                    (struct tagRGBQUAD *)a6,
                    a7,
                    a8,
                    a9,
                    0,
                    a10);
            if ( v10 )
              GreSelectPalette(CompatibleDC, v10, 1LL);
            GreSelectBitmap(CompatibleDC, v19);
          }
        }
        if ( v12 )
          bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
      }
    }
    else
    {
      EngSetLastError(6u);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v21);
  }
  else
  {
    EngSetLastError(0x57u);
  }
  return v11;
}
