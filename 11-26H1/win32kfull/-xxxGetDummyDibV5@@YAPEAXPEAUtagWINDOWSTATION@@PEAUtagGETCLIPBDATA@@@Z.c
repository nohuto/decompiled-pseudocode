/*
 * XREFs of ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CED08
 * Callers:
 *     xxxGetClipboardData @ 0x1401F7070 (xxxGetClipboardData.c)
 * Callees:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140057518 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1401B22B4 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     _ConvertMemHandle @ 0x1401B23FC (_ConvertMemHandle.c)
 *     xxxGetClipboardData @ 0x1401F7070 (xxxGetClipboardData.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x14025E63C (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@REAUtagBITMAPINFOHEADER@@K@Z @ 0x1402CE528 (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@REAUtagBITMAPINFOHEADER@@K@Z.c)
 *     ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1402CE768 (-SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z.c)
 */

void *__fastcall xxxGetDummyDibV5(struct tagTHREADINFO **a1, struct tagGETCLIPBDATA *a2)
{
  __int64 v2; // rbx
  struct tagCLIP *ClipFormat; // rax
  void *ClipboardData; // rax
  __int64 v7; // rax
  struct tagBITMAPINFOHEADER *v8; // rdi
  struct tagCLIP *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  Gre::Base *v12; // rbp
  __int64 v13; // rdi
  void *result; // rax
  struct tagBITMAPINFOHEADER *v15; // rax
  struct tagBITMAPINFOHEADER *v16; // rbp
  int v17; // edx
  __int64 v18; // r8
  int biHeight; // ecx
  struct tagCLIP *v20; // rax
  struct tagCLIP *v21; // rdi
  __int64 v22; // rax
  unsigned int v23; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  ClipFormat = FindClipFormat((unsigned __int64)a1, 8u, 1);
  if ( ClipFormat )
  {
    if ( *((_QWORD *)ClipFormat + 1) != 2LL )
    {
      ClipboardData = xxxGetClipboardData(a1, 8u, (__int64)a2);
      if ( ClipboardData )
      {
        v7 = HMValidateHandleNoRip((__int64)ClipboardData, 6);
        if ( v7 )
        {
          v8 = (struct tagBITMAPINFOHEADER *)DIBtoDIBV5((struct tagBITMAPINFOHEADER *volatile)(v7 + 20));
          if ( v8 )
            goto LABEL_13;
        }
      }
    }
  }
  v9 = FindClipFormat((unsigned __int64)a1, 2u, 1);
  if ( !v9 )
    return (void *)v2;
  if ( *((_QWORD *)v9 + 1) == 2LL )
    return (void *)v2;
  v12 = (Gre::Base *)xxxGetClipboardData(a1, 2u, (__int64)a2);
  if ( !v12 )
    return (void *)v2;
  v13 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v10) + 19904) + 7004LL) & 1) == 0
    || (result = xxxGetClipboardData(a1, 9u, (__int64)a2), (v13 = (__int64)result) != 0) )
  {
    v23 = 0;
    v15 = xxxBMPtoDIB(v12, v13, &v23);
    v16 = v15;
    if ( v15 )
    {
      v8 = (struct tagBITMAPINFOHEADER *)DIBtoDIBV5(v15);
      Win32FreePool(v16);
      if ( v8 )
      {
LABEL_13:
        v17 = SizeOfDibColorTable(v8);
        biHeight = -v8->biHeight;
        if ( v8->biHeight > 0 )
          biHeight = v8->biHeight;
        v2 = ConvertMemHandle(
               v8,
               v8->biSize + (((v8->biWidth * v8->biBitCount + 31) >> 3) & 0xFFFFFFFC) * biHeight + v17,
               v18);
        Win32FreePool(v8);
        if ( v2 )
        {
          v20 = FindClipFormat((unsigned __int64)a1, 0x11u, 1);
          v21 = v20;
          if ( v20 )
          {
            UT_FreeCBFormat(v20);
            *((_QWORD *)v21 + 1) = v2;
            *(_DWORD *)a2 = 17;
          }
          else
          {
            v22 = HMValidateHandleNoRip(v2, 6);
            if ( v22 )
              HMUnlockDestroyObject(v22);
            return 0LL;
          }
        }
        return (void *)v2;
      }
    }
    return (void *)v2;
  }
  return result;
}
