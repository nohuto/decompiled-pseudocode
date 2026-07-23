/*
 * XREFs of MiScrubNonPagedPool @ 0x1406250D4
 * Callers:
 *     MiScrubNode @ 0x1401E5DEC (MiScrubNode.c)
 * Callees:
 *     MiScanNonPagedPoolVa @ 0x1400B35F0 (MiScanNonPagedPoolVa.c)
 *     MiReturnNonPagedPoolVa @ 0x1400B4000 (MiReturnNonPagedPoolVa.c)
 *     MmGetPhysicalAddress @ 0x14010429C (MmGetPhysicalAddress.c)
 *     MiPushBadPool @ 0x1401DBA1C (MiPushBadPool.c)
 *     MiScrubPage @ 0x1401E5FC4 (MiScrubPage.c)
 */

void __fastcall MiScrubNonPagedPool(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  _SLIST_HEADER *v9; // r15
  void *v10; // rsi
  __int64 v11; // rbp
  int v12[10]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v13; // [rsp+48h] [rbp-40h]
  char v14; // [rsp+50h] [rbp-38h]

  v3 = -1LL;
  v4 = a2;
  v13 = 0LL;
  v12[0] = 3;
  v14 = 1;
  while ( !*(_DWORD *)(a3 + 4) )
  {
    v7 = MiScanNonPagedPoolVa(1LL, v4, 0LL, (__int64)v12);
    v8 = v7;
    if ( v7 == -1 )
      break;
    v13 = v7 + 1;
    v9 = &qword_1402FE6C0[26 * v4];
    v10 = (void *)(v9[20].Region + (v7 << 12));
    v11 = 48 * (MmGetPhysicalAddress(v10).QuadPart >> 12) - 0x58000000000LL;
    if ( (int)MiScrubPage(a1, 0LL, v11) < 0 )
      MiPushBadPool((__int64)v9, v11);
    else
      MiReturnNonPagedPoolVa((ULONG_PTR)v10, 1uLL);
    if ( v8 <= v3 && v3 != -1LL )
      break;
    v3 = v8;
  }
}
