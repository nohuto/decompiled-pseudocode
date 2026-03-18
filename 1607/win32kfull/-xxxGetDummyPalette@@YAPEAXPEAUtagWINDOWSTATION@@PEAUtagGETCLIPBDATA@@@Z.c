/*
 * XREFs of ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01E62E0
 * Callers:
 *     xxxGetClipboardData @ 0x1C0150964 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     FindClipFormat @ 0x1C00F9130 (FindClipFormat.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C01505B4 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     xxxGetClipboardData @ 0x1C0150964 (xxxGetClipboardData.c)
 *     CreateDIBPalette @ 0x1C01E6600 (CreateDIBPalette.c)
 */

__int64 __fastcall xxxGetDummyPalette(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  unsigned int v2; // ebx
  __int64 ClipFormat; // rax
  __int64 v6; // rax
  void *ClipboardData; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 DIBPalette; // rbx

  v2 = 17;
  ClipFormat = FindClipFormat((__int64)a1, 17LL, 1);
  if ( ClipFormat )
  {
    if ( *(_QWORD *)(ClipFormat + 8) == 2LL )
    {
      v2 = 8;
      v6 = FindClipFormat((__int64)a1, 8LL, 1);
      if ( !v6 || *(_QWORD *)(v6 + 8) == 2LL )
        return 0LL;
    }
  }
  ClipboardData = xxxGetClipboardData(a1, v2, (__int64)a2);
  if ( !ClipboardData )
    return 0LL;
  LOBYTE(v8) = 6;
  v11 = HMValidateHandle((__int64)ClipboardData, v8, v9, v10);
  if ( !v11 )
    return 0LL;
  v12 = v11 + 20;
  v13 = FindClipFormat((__int64)a1, 9LL, 1);
  if ( !v13 )
    return 0LL;
  DIBPalette = CreateDIBPalette(v12, *(unsigned int *)(v12 + 32));
  if ( DIBPalette )
  {
    UT_FreeCBFormat((struct tagCLIP *)v13);
    *(_QWORD *)(v13 + 8) = DIBPalette;
    GreSetPaletteOwner(DIBPalette, 0LL);
  }
  return DIBPalette;
}
