/*
 * XREFs of ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0150474
 * Callers:
 *     xxxGetClipboardData @ 0x1C0150964 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 *     FindClipFormat @ 0x1C00F9130 (FindClipFormat.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C01505B4 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     _ConvertMemHandle @ 0x1C0150634 (_ConvertMemHandle.c)
 *     ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1C01506B4 (-SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01506E0 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     xxxGetClipboardData @ 0x1C0150964 (xxxGetClipboardData.c)
 *     HMUnlockDestroyObject @ 0x1C01E670C (HMUnlockDestroyObject.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  struct tagCLIP *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct tagCLIP *v18; // rsi
  void *result; // rax
  __int64 v20; // rax

  ClipboardData = 0LL;
  if ( (*(_DWORD *)(gpsi + 8684LL) & 1) != 0 )
  {
    ClipboardData = (HPALETTE)xxxGetClipboardData(a1);
    if ( !ClipboardData )
      return 0LL;
  }
  ClipFormat = FindClipFormat((__int64)a1, 17LL, 1);
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
  v6 = FindClipFormat((__int64)a1, 2LL, 1);
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
    Win32FreePool(v10, v12, v13);
    if ( v8 )
    {
      v14 = (struct tagCLIP *)FindClipFormat((__int64)a1, 8LL, 1);
      v18 = v14;
      if ( v14 )
      {
        UT_FreeCBFormat(v14);
        *((_QWORD *)v18 + 1) = v8;
        *(_DWORD *)a2 = 8;
      }
      else
      {
        LOBYTE(v15) = 6;
        v20 = HMValidateHandleNoRip(v8, v15, v16, v17);
        if ( v20 )
          HMUnlockDestroyObject(v20);
        return 0LL;
      }
    }
  }
  return (void *)v8;
}
