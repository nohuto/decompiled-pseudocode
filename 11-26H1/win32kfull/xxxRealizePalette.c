/*
 * XREFs of xxxRealizePalette @ 0x140292500
 * Callers:
 *     NtUserRealizePalette @ 0x14020A330 (NtUserRealizePalette.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x14025E63C (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1402CE7E8 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     GreRealizePalette @ 0x1401FD0C8 (GreRealizePalette.c)
 *     xxxBroadcastPaletteChanged @ 0x14028AEA0 (xxxBroadcastPaletteChanged.c)
 *     WindowFromCacheDC @ 0x1402A4A00 (WindowFromCacheDC.c)
 *     GreIsDCCurrentPalette @ 0x140331BE4 (GreIsDCCurrentPalette.c)
 */

__int64 __fastcall xxxRealizePalette(HDC a1)
{
  int v2; // eax
  unsigned __int16 v3; // si
  __int64 v4; // rax
  unsigned __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 i; // rcx
  __int64 j; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = GreRealizePalette(a1);
  v3 = v2;
  if ( HIWORD(v2) )
  {
    if ( (unsigned int)GreIsDCCurrentPalette(a1) )
    {
      v4 = WindowFromCacheDC(a1);
      v5 = (unsigned __int64 *)v4;
      if ( v4 )
      {
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v4);
        xxxBroadcastPaletteChanged(v5);
        for ( i = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 63512); i; i = *(_QWORD *)(i + 8) )
        {
          for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
          {
            if ( j != v5[3] )
              *(_DWORD *)(j + 48) |= 1u;
          }
        }
        GreRealizePalette(a1);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
      }
    }
  }
  return v3;
}
