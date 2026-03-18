/*
 * XREFs of BgpFoInitialize @ 0x1407FDC5C
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14075D630 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x1401525C4 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x140152748 (BgpFwFreeMemory.c)
 *     memset @ 0x140195A80 (memset.c)
 *     FopInitializeFonts @ 0x1407FDD50 (FopInitializeFonts.c)
 *     FioFwReadUlong @ 0x1407FE678 (FioFwReadUlong.c)
 */

__int64 __fastcall BgpFoInitialize(__int64 a1, int a2)
{
  void *Memory; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  int Ulong; // edi
  __int64 v8; // rax
  __int64 v10; // rcx
  int v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0;
  if ( !FontLibraryInitialized )
  {
    qword_140323C28 = (__int64)&FopFontFileListHead;
    FopFontFileListHead = (__int64)&FopFontFileListHead;
    FontLibraryInitialized = 1;
  }
  Memory = (void *)BgpFwAllocateMemory(0x38uLL);
  v5 = (__int64)Memory;
  if ( !Memory )
    return (unsigned int)-1073741801;
  memset(Memory, 0, 0x38uLL);
  *(_QWORD *)(v5 + 48) = v5 + 40;
  *(_QWORD *)(v5 + 40) = v5 + 40;
  *(_QWORD *)(v5 + 16) = a1;
  *(_DWORD *)(v5 + 28) = a2;
  Ulong = FioFwReadUlong(a1, &v11);
  if ( Ulong < 0 )
    goto LABEL_11;
  if ( v11 == 1953784678 )
  {
    *(_DWORD *)(v5 + 32) |= 1u;
    Ulong = FioFwReadUlong(v6, &v11);
    if ( Ulong < 0 )
      goto LABEL_11;
    if ( ((v11 - 0x10000) & 0xFFFEFFFF) != 0 )
    {
      Ulong = -1073741701;
      goto LABEL_11;
    }
    Ulong = FioFwReadUlong(v10, v5 + 24);
    if ( Ulong < 0 )
      goto LABEL_11;
  }
  else
  {
    *(_DWORD *)(v5 + 24) = 1;
  }
  Ulong = FopInitializeFonts(v5);
  if ( Ulong < 0 )
  {
LABEL_11:
    BgpFwFreeMemory(v5);
    return (unsigned int)Ulong;
  }
  v8 = FopFontFileListHead;
  *(_QWORD *)v5 = FopFontFileListHead;
  *(_QWORD *)(v5 + 8) = &FopFontFileListHead;
  if ( *(__int64 **)(v8 + 8) != &FopFontFileListHead )
    __fastfail(3u);
  *(_QWORD *)(v8 + 8) = v5;
  FopFontFileListHead = v5;
  return (unsigned int)Ulong;
}
