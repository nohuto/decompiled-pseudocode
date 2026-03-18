/*
 * XREFs of GreSetDIBitsInternal @ 0x1C014BAE4
 * Callers:
 *     GreSetDIBits @ 0x1C0113E5C (GreSetDIBits.c)
 *     GreCreateDIBitmapComp @ 0x1C014B9F0 (GreCreateDIBitmapComp.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0035580 (GreSetDIBitsToDeviceInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetDIBitsInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *a5,
        struct tagRGBQUAD *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        __int64 a10)
{
  struct tagRGBQUAD *v10; // rdi
  __int64 v11; // r15
  unsigned int v12; // r13d
  int v13; // r12d
  int v16; // ebp
  int v17; // esi
  __int64 v18; // rdx
  _DWORD *v19; // rax
  HDC CompatibleDC; // rbx
  __int64 v21; // rdx
  __int64 v22; // rbp
  _QWORD v24[9]; // [rsp+80h] [rbp-48h] BYREF
  int v26; // [rsp+E0h] [rbp+18h]

  v10 = a6;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  if ( a6 && ((v16 = 1, *(_DWORD *)a6 < 0x28u) || (unsigned int)(*(_DWORD *)&a6[4] - 4) > 1) )
  {
    v17 = (int)a6[2];
    v26 = (int)a6[1];
    if ( v17 < 0 )
      v17 = -v17;
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    LOBYTE(v18) = 5;
    v19 = (_DWORD *)HmgShareLockCheck(a2, v18);
    a6 = (struct tagRGBQUAD *)v19;
    if ( v19 && (v19[28] & 0x4000000) != 0 )
    {
      if ( v19[40] )
        CompatibleDC = (HDC)*((_QWORD *)v19 + 19);
      else
        CompatibleDC = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      if ( CompatibleDC || (CompatibleDC = (HDC)GreCreateCompatibleDC(a1, v21), v13 = 1, CompatibleDC) )
      {
        if ( !a1
          || ((DCOBJ::DCOBJ((DCOBJ *)v24, a1), v24[0])
            ? (v11 = GreSelectPalette(CompatibleDC, *(_QWORD *)(v24[0] + 88LL), 1LL))
            : (EngSetLastError(6u), v16 = 0),
              XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v24),
              v16) )
        {
          v22 = GreSelectBitmap(CompatibleDC, a2);
          if ( v22 )
          {
            v12 = GreSetDIBitsToDeviceInternal(CompatibleDC, 0LL, 0, v26, v17, 0, 0, 0, a4, a5, v10, a7, a8, a9, 0, a10);
            if ( v11 )
              GreSelectPalette(CompatibleDC, v11, 1LL);
            GreSelectBitmap(CompatibleDC, v22);
          }
        }
        if ( v13 )
          bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
      }
    }
    else
    {
      EngSetLastError(6u);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    }
    EPALOBJ::~EPALOBJ((EPALOBJ *)&a6);
  }
  else
  {
    EngSetLastError(0x57u);
  }
  return v12;
}
