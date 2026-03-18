/*
 * XREFs of ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F026C
 * Callers:
 *     xxxGetClipboardData @ 0x1C014B3E8 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00809E4 (HMValidateHandleNoRip.c)
 *     FindClipFormat @ 0x1C00DBF5C (FindClipFormat.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C014B094 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     xxxGetClipboardData @ 0x1C014B3E8 (xxxGetClipboardData.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01F00DC (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 */

void *__fastcall xxxGetDummyBitmap(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  void *v2; // rbx
  void *ClipboardData; // rbp
  __int64 ClipFormat; // rax
  void *result; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  struct tagCLIP *v14; // rax
  struct tagCLIP *v15; // rsi
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  ClipboardData = 0LL;
  if ( (*(_DWORD *)(gpsi + 7292LL) & 1) != 0 )
    ClipboardData = xxxGetClipboardData(a1, 9u, (__int64)a2);
  ClipFormat = FindClipFormat((__int64)a1, 0x11u, 1);
  if ( ClipFormat
    && *(_QWORD *)(ClipFormat + 8) != 2LL
    && (result = xxxGetClipboardData(a1, 0x11u, (__int64)a2), (v2 = result) != 0LL) )
  {
    *(_DWORD *)a2 = 17;
    *((_QWORD *)a2 + 1) = ClipboardData;
  }
  else
  {
    v8 = FindClipFormat((__int64)a1, 8u, 1);
    if ( v8 && *(_QWORD *)(v8 + 8) != 2LL )
      v2 = xxxGetClipboardData(a1, 8u, (__int64)a2);
    if ( v2 && (v9 = HMValidateHandleNoRip((__int64)v2, 6)) != 0 )
    {
      v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v16;
      v16[1] = v9;
      v10 = *(_DWORD *)(v9 + 16);
      ++*(_DWORD *)(v9 + 8);
      v13 = xxxDIBtoBMP((struct tagBITMAPINFOHEADER *)(v9 + 20), (__int64)ClipboardData, v10);
      if ( v13 )
      {
        v14 = (struct tagCLIP *)FindClipFormat((__int64)a1, 2u, 1);
        v15 = v14;
        if ( v14 )
        {
          UT_FreeCBFormat(v14);
          *((_QWORD *)v15 + 1) = v13;
          GreSetBitmapOwner(v13, 0LL);
          *(_DWORD *)a2 = 2;
        }
        else
        {
          GreDeleteObject(v13);
          v13 = 0LL;
        }
      }
      ThreadUnlock1(v12, v11);
      return (void *)v13;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
