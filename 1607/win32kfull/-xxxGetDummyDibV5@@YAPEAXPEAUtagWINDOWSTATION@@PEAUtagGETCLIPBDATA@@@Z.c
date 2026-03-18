/*
 * XREFs of ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01E6124
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
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z @ 0x1C01E5BD0 (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z.c)
 *     HMUnlockDestroyObject @ 0x1C01E670C (HMUnlockDestroyObject.c)
 */

void *__fastcall xxxGetDummyDibV5(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  __int64 v2; // rdi
  __int64 ClipFormat; // rax
  void *ClipboardData; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  struct tagBITMAPINFOHEADER *v11; // rbx
  __int64 v12; // rax
  struct HLFONT__ *v13; // rbx
  __int64 v14; // rdx
  void *result; // rax
  struct tagBITMAPINFO *v16; // rax
  struct tagBITMAPINFO *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  struct tagCLIP *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct tagCLIP *v28; // rbx
  __int64 v29; // rax
  unsigned int v30; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  ClipFormat = FindClipFormat((__int64)a1, 8LL, 1);
  if ( ClipFormat )
  {
    if ( *(_QWORD *)(ClipFormat + 8) != 2LL )
    {
      ClipboardData = xxxGetClipboardData(a1, 8LL, (__int64)a2);
      if ( ClipboardData )
      {
        LOBYTE(v7) = 6;
        v10 = HMValidateHandleNoRip((__int64)ClipboardData, v7, v8, v9);
        if ( v10 )
        {
          v11 = (struct tagBITMAPINFOHEADER *)DIBtoDIBV5((struct tagBITMAPINFOHEADER *)(v10 + 20));
          if ( v11 )
            goto LABEL_15;
        }
      }
    }
  }
  v12 = FindClipFormat((__int64)a1, 2LL, 1);
  if ( !v12 )
    return (void *)v2;
  if ( *(_QWORD *)(v12 + 8) == 2LL )
    return (void *)v2;
  v13 = (struct HLFONT__ *)xxxGetClipboardData(a1, 2LL, (__int64)a2);
  if ( !v13 )
    return (void *)v2;
  v14 = 0LL;
  if ( (*(_DWORD *)(gpsi + 8684LL) & 1) == 0
    || (result = xxxGetClipboardData(a1, 9LL, (__int64)a2), (v14 = (__int64)result) != 0) )
  {
    v16 = xxxBMPtoDIB(v13, v14, &v30);
    v17 = v16;
    if ( v16 )
    {
      v11 = (struct tagBITMAPINFOHEADER *)DIBtoDIBV5(&v16->bmiHeader);
      Win32FreePool(v17, v18, v19);
    }
    else
    {
      v11 = 0LL;
    }
    if ( v11 )
    {
LABEL_15:
      v20 = SizeOfDibColorTable(v11);
      v2 = ConvertMemHandle(
             v11,
             v11->biSize + v20 + abs32(v11->biHeight) * (((v11->biWidth * v11->biBitCount + 31) >> 3) & 0xFFFFFFFC),
             v21);
      Win32FreePool(v11, v22, v23);
      if ( v2 )
      {
        v24 = (struct tagCLIP *)FindClipFormat((__int64)a1, 17LL, 1);
        v28 = v24;
        if ( v24 )
        {
          UT_FreeCBFormat(v24);
          *((_QWORD *)v28 + 1) = v2;
          *(_DWORD *)a2 = 17;
        }
        else
        {
          LOBYTE(v25) = 6;
          v29 = HMValidateHandleNoRip(v2, v25, v26, v27);
          if ( v29 )
            HMUnlockDestroyObject(v29);
          return 0LL;
        }
      }
      return (void *)v2;
    }
    return (void *)v2;
  }
  return result;
}
