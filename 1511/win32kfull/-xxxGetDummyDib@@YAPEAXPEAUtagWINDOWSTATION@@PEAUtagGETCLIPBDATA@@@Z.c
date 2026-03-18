/*
 * XREFs of ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C014AF54
 * Callers:
 *     xxxGetClipboardData @ 0x1C014B3E8 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00809E4 (HMValidateHandleNoRip.c)
 *     FindClipFormat @ 0x1C00DBF5C (FindClipFormat.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C014B094 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     _ConvertMemHandle @ 0x1C014B114 (_ConvertMemHandle.c)
 *     ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1C014B194 (-SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C014B1C0 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     xxxGetClipboardData @ 0x1C014B3E8 (xxxGetClipboardData.c)
 *     HMUnlockDestroyObject @ 0x1C01F09CC (HMUnlockDestroyObject.c)
 */

void *__fastcall xxxGetDummyDib(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  HPALETTE ClipboardData; // rbp
  __int64 ClipFormat; // rax
  __int64 v6; // rax
  HBITMAP v7; // rax
  __int64 v8; // rdi
  struct tagBITMAPINFOHEADER *v9; // rax
  struct tagBITMAPINFOHEADER *v10; // rbp
  unsigned int v11; // eax
  struct tagCLIP *v12; // rax
  struct tagCLIP *v13; // rsi
  void *result; // rax
  __int64 v15; // rax

  ClipboardData = 0LL;
  if ( (*(_DWORD *)(gpsi + 7292LL) & 1) != 0 )
  {
    ClipboardData = (HPALETTE)xxxGetClipboardData(a1);
    if ( !ClipboardData )
      return 0LL;
  }
  ClipFormat = FindClipFormat((__int64)a1, 0x11u, 1);
  if ( ClipFormat )
  {
    if ( *(_QWORD *)(ClipFormat + 8) != 2LL )
    {
      result = (void *)xxxGetClipboardData(a1);
      if ( result )
      {
        *(_DWORD *)a2 = 17;
        *((_QWORD *)a2 + 1) = ClipboardData;
        return result;
      }
    }
  }
  v6 = FindClipFormat((__int64)a1, 2u, 1);
  if ( !v6 )
    return 0LL;
  if ( *(_QWORD *)(v6 + 8) == 2LL )
    return 0LL;
  v7 = (HBITMAP)xxxGetClipboardData(a1);
  if ( !v7 )
    return 0LL;
  v8 = 0LL;
  v9 = xxxBMPtoDIB(v7, ClipboardData, 0LL);
  v10 = v9;
  if ( v9 )
  {
    v11 = SizeOfDibColorTable(v9);
    v8 = ConvertMemHandle(
           v10,
           v10->biSize + v11 + abs32(v10->biHeight) * (((v10->biWidth * v10->biBitCount + 31) >> 3) & 0xFFFFFFFC));
    Win32FreePool(v10);
    if ( v8 )
    {
      v12 = (struct tagCLIP *)FindClipFormat((__int64)a1, 8u, 1);
      v13 = v12;
      if ( v12 )
      {
        UT_FreeCBFormat(v12);
        *((_QWORD *)v13 + 1) = v8;
        *(_DWORD *)a2 = 8;
      }
      else
      {
        v15 = HMValidateHandleNoRip(v8, 6);
        if ( v15 )
          HMUnlockDestroyObject(v15);
        return 0LL;
      }
    }
  }
  return (void *)v8;
}
