/*
 * XREFs of NtUserBitBltSysBmp @ 0x1401BFFE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     GetOemBitmapInfoForDpi @ 0x140124A34 (GetOemBitmapInfoForDpi.c)
 *     GetOemBitmapInfo @ 0x140124E90 (GetOemBitmapInfo.c)
 *     GreStretchBlt @ 0x14016B458 (GreStretchBlt.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x1401C0154 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     GreGetDCDpiScaleValue @ 0x1401C0220 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall NtUserBitBltSysBmp(Gre::Base *a1, LONG a2, int a3, unsigned int a4, unsigned int a5)
{
  int v9; // ebx
  __int64 v10; // rcx
  HDC v11; // r15
  __int16 *OemBitmapInfo; // r14
  __int16 *OemBitmapInfoForDpi; // rdi
  __int64 v14; // rcx
  int DCDpiScaleValue; // eax
  int v16; // r9d
  int v17; // eax

  v9 = 0;
  EnterCrit(0LL, 0LL);
  if ( a4 >= 0x5D )
  {
    UserSetLastError(87);
  }
  else
  {
    v11 = PrepareHDCBITSBitmap((HDC)a1);
    if ( v11 )
    {
      OemBitmapInfo = (__int16 *)GetOemBitmapInfo(a4);
      OemBitmapInfoForDpi = 0LL;
      if ( (W32GetCurrentThreadDpiAwarenessContext(v14) & 0xF) == 0 )
      {
        DCDpiScaleValue = GreGetDCDpiScaleValue((HDC)a1);
        if ( DCDpiScaleValue > 1 )
          OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, 96 * DCDpiScaleValue);
      }
      v16 = OemBitmapInfo[2];
      if ( OemBitmapInfoForDpi )
        v17 = GreStretchBlt(
                (HDC)a1,
                a2,
                a3,
                v16,
                OemBitmapInfo[3],
                v11,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                OemBitmapInfoForDpi[2],
                OemBitmapInfoForDpi[3],
                a5,
                0);
      else
        v17 = GreBitBltInternal(
                a1,
                a2,
                a3,
                v16,
                OemBitmapInfo[3],
                (__int64)v11,
                *OemBitmapInfo,
                OemBitmapInfo[1],
                a5,
                0,
                0);
      v9 = v17;
    }
  }
  UserSessionSwitchLeaveCrit(v10);
  return v9;
}
