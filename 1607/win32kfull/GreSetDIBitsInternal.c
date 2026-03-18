/*
 * XREFs of GreSetDIBitsInternal @ 0x1C0151E6C
 * Callers:
 *     GreCreateDIBitmapComp @ 0x1C0151D78 (GreCreateDIBitmapComp.c)
 *     GreSetDIBits @ 0x1C02BB484 (GreSetDIBits.c)
 * Callees:
 *     GreSetDIBitsToDeviceInternal @ 0x1C00341DC (GreSetDIBitsToDeviceInternal.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
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
  _QWORD v23[2]; // [rsp+A8h] [rbp-70h] BYREF
  _BYTE v24[96]; // [rsp+B8h] [rbp-60h] BYREF
  int v26; // [rsp+130h] [rbp+18h]

  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( a6 && ((v15 = 1, *(_DWORD *)a6 < 0x28u) || (unsigned int)(*(_DWORD *)(a6 + 16) - 4) > 1) )
  {
    v16 = *(_DWORD *)(a6 + 8);
    v26 = *(_DWORD *)(a6 + 4);
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
              XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v23),
              UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v24),
              v15) )
        {
          v19 = GreSelectBitmap(CompatibleDC, a2);
          if ( v19 )
          {
            v11 = GreSetDIBitsToDeviceInternal(
                    CompatibleDC,
                    0,
                    0,
                    v26,
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
          bDeleteDCInternal(CompatibleDC, 1LL, 0LL, 0LL);
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
