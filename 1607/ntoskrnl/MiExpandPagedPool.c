/*
 * XREFs of MiExpandPagedPool @ 0x1400A1294
 * Callers:
 *     MiAllocatePagedPoolPages @ 0x1400DC810 (MiAllocatePagedPoolPages.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1400137E8 (RtlClearBitsEx.c)
 *     MiObtainSystemVa @ 0x1400A194C (MiObtainSystemVa.c)
 *     MiFreeExcessSegments @ 0x1400A2238 (MiFreeExcessSegments.c)
 *     MiObtainSessionVa @ 0x1400A22A4 (MiObtainSessionVa.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiSplitBitmapPages @ 0x1400FFBD4 (MiSplitBitmapPages.c)
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 */

__int64 __fastcall MiExpandPagedPool(ULONG_PTR *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  unsigned int v4; // r13d
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rsi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rcx
  __int64 v14; // rdx
  unsigned __int64 *v16; // [rsp+68h] [rbp+10h]

  if ( a1 == &qword_140327868 )
  {
    MiFreeExcessSegments(&qword_140327868);
    v3 = 0LL;
    v4 = 6;
  }
  else
  {
    v4 = 1;
    v3 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  }
  v5 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  if ( v5 < a2
    || ((v6 = (unsigned int)(v5 >> 9), v3) ? (v7 = MiObtainSessionVa(v6)) : (v7 = MiObtainSystemVa(v6, v4)),
        (v8 = v7) == 0) )
  {
    if ( !v3 )
    {
      ++dword_1403264E0;
      goto LABEL_25;
    }
    ++dword_1403264E4;
LABEL_27:
    ++dword_1403264C8;
    ++*(_DWORD *)(v3 + 92);
    return -1LL;
  }
  v9 = (v7 >> 9) & 0x7FFFFFFFF8LL;
  v10 = v9 - 0x98000000000LL;
  v16 = a1 + 1;
  v11 = (__int64)(v9 - a1[3] - 0x98000000000LL) >> 3;
  if ( !(unsigned int)MiSplitBitmapPages(v4, a1[2] + (v11 >> 3), v5 + (v11 & 7)) )
    goto LABEL_20;
  v12 = v11 + v5;
  if ( v11 + v5 > *v16 )
  {
    if ( v12 > a1[4] )
      v12 = a1[4];
    *v16 = v12;
  }
  if ( !(unsigned int)MiMakeZeroedPageTables(v10, v10 + 8 * (v5 - 1), 0LL, v4) )
  {
LABEL_20:
    v14 = (__int64)((v5 << 28) + (v10 << 25)) >> 16;
    if ( !v3 )
    {
      ++dword_1403264E8;
      MiReturnSystemVa(v8, v14, 6LL, 0LL);
LABEL_25:
      ++dword_1403264BC;
      return -1LL;
    }
    ++dword_1403264EC;
    MiReturnSystemVa(v8, v14, 1LL, 0LL);
    goto LABEL_27;
  }
  if ( v3 )
    *(_DWORD *)(v3 + 7940) += v5 >> 9;
  if ( v5 != a2 )
    RtlClearBitsEx((__int64)v16, v11 + a2, v5 - a2);
  return v11;
}
