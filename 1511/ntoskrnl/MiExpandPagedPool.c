/*
 * XREFs of MiExpandPagedPool @ 0x140016110
 * Callers:
 *     MiAllocatePagedPoolPages @ 0x14005F630 (MiAllocatePagedPoolPages.c)
 * Callees:
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     MiFreeExcessSegments @ 0x140015B78 (MiFreeExcessSegments.c)
 *     MiSplitBitmapPages @ 0x14001711C (MiSplitBitmapPages.c)
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x140018A70 (MiObtainSystemVa.c)
 *     RtlClearBitsEx @ 0x1400A6650 (RtlClearBitsEx.c)
 *     MiObtainSessionVa @ 0x1400EDA74 (MiObtainSessionVa.c)
 */

__int64 __fastcall MiExpandPagedPool(ULONG_PTR *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned int v4; // eax
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rbp
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rcx
  unsigned __int64 v14; // rbp
  unsigned int v16; // [rsp+68h] [rbp+10h]
  unsigned __int64 *v17; // [rsp+70h] [rbp+18h]

  if ( a1 == &qword_1402FF768 )
  {
    MiFreeExcessSegments();
    v3 = 0LL;
    v4 = 6;
  }
  else
  {
    v4 = 1;
    v3 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  }
  v16 = v4;
  v5 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  if ( v5 < a2
    || ((v6 = (unsigned int)(v5 >> 9), v3) ? (v7 = MiObtainSessionVa(v6)) : (v7 = MiObtainSystemVa(v6, v4)),
        (v8 = v7) == 0) )
  {
    if ( !v3 )
    {
      ++dword_1402FE1E0;
      if ( (MiAllocationDebug & 1) != 0 )
        __debugbreak();
      goto LABEL_30;
    }
    ++dword_1402FE1E4;
    if ( (MiAllocationDebug & 1) != 0 )
      __debugbreak();
LABEL_33:
    ++dword_1402FE1C8;
    ++*(_DWORD *)(v3 + 92);
    return -1LL;
  }
  v9 = (v7 >> 9) & 0x7FFFFFFFF8LL;
  v10 = v9 - 0x98000000000LL;
  v17 = a1 + 1;
  v11 = (__int64)(v9 - a1[3] - 0x98000000000LL) >> 3;
  if ( !(unsigned int)MiSplitBitmapPages(v16, a1[2] + (v11 >> 3), v5 + (v11 & 7)) )
    goto LABEL_20;
  v12 = v11 + v5;
  if ( v11 + v5 > *v17 )
  {
    if ( v12 > a1[4] )
      v12 = a1[4];
    *v17 = v12;
  }
  if ( !(unsigned int)MiMakeZeroedPageTables(v10, v10 + 8 * v5 - 8, 0LL, v16) )
  {
LABEL_20:
    v14 = (__int64)((v5 << 28) + (v10 << 25)) >> 16;
    if ( !v3 )
    {
      ++dword_1402FE1E8;
      if ( (MiAllocationDebug & 1) != 0 )
        __debugbreak();
      MiReturnSystemVa(v8, v14, 6, 0LL);
LABEL_30:
      ++dword_1402FE1BC;
      return -1LL;
    }
    ++dword_1402FE1EC;
    if ( (MiAllocationDebug & 1) != 0 )
      __debugbreak();
    MiReturnSystemVa(v8, v14, 1, 0LL);
    goto LABEL_33;
  }
  if ( v3 )
    *(_DWORD *)(v3 + 7812) += v5 >> 9;
  if ( v5 != a2 )
    RtlClearBitsEx(v17, v11 + a2, v5 - a2);
  return v11;
}
