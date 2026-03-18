/*
 * XREFs of FindClipFormat @ 0x1C00DBF5C
 * Callers:
 *     NtUserIsClipboardFormatAvailable @ 0x1C00DBF10 (NtUserIsClipboardFormatAvailable.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014A038 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     InternalSetClipboardData @ 0x1C014A1AC (InternalSetClipboardData.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C014AF54 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     xxxGetClipboardData @ 0x1C014B3E8 (xxxGetClipboardData.c)
 *     _EnumClipboardFormats @ 0x1C014CFA0 (_EnumClipboardFormats.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F026C (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F03E4 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F05A0 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1C01F0670 (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01F0774 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 * Callees:
 *     CheckClipboardAccessForIntegrityLevel @ 0x1C0143634 (CheckClipboardAccessForIntegrityLevel.c)
 *     IsFmtBlocked @ 0x1C01F09F8 (IsFmtBlocked.c)
 */

__int64 __fastcall FindClipFormat(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  int i; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  if ( a2 )
  {
    v4 = *(_QWORD *)(a1 + 96);
    if ( v4 )
    {
      for ( i = *(_DWORD *)(a1 + 104); i; --i )
      {
        if ( *(_DWORD *)v4 == a2 )
        {
          if ( (a3 & 1) == 0 )
            return v4;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
          if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                               *(_QWORD *)(v4 + 20),
                               *(_QWORD *)(CurrentProcessWin32Process + 832))
            || !(unsigned int)IsFmtBlocked(a2) )
          {
            return v4;
          }
          v9 = PsGetCurrentProcessWin32Process(v8);
          EtwTraceUIPIClipboardError(0LL, v9, a2, *(_QWORD *)(v4 + 20));
          return 0LL;
        }
        v4 += 32LL;
      }
    }
  }
  return 0LL;
}
