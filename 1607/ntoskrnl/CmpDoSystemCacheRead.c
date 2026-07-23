/*
 * XREFs of CmpDoSystemCacheRead @ 0x14060404C
 * Callers:
 *     CmpFileRead @ 0x140480BD0 (CmpFileRead.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     HvpViewMapAcquireLockShared @ 0x1401B66A4 (HvpViewMapAcquireLockShared.c)
 *     HvpViewMapReleaseLockShared @ 0x1401B69DC (HvpViewMapReleaseLockShared.c)
 *     HvViewMapAddressForFileOffset @ 0x14060FB1C (HvViewMapAddressForFileOffset.c)
 */

__int64 __fastcall CmpDoSystemCacheRead(__int64 a1, unsigned int *a2, char *a3, unsigned int a4)
{
  unsigned int v4; // r15d
  unsigned int v5; // ebp
  __int64 v8; // r13
  const void *v9; // rsi
  unsigned int v10; // edi

  v4 = *a2;
  v5 = a4;
  if ( a4 )
  {
    v8 = a1 + 200;
    do
    {
      v9 = (const void *)HvViewMapAddressForFileOffset(v8, v4);
      HvpViewMapAcquireLockShared(v8);
      v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL * (HIBYTE(v4) & 0x7F)) + 32LL * ((v4 >> 18) & 0x3F) + 24)
          - (v4 & 0x3FFFF);
      HvpViewMapReleaseLockShared(v8);
      if ( v10 > v5 )
        v10 = v5;
      memmove(a3, v9, v10);
      v4 += v10;
      a3 += v10;
      *a2 = v4;
      v5 -= v10;
    }
    while ( v5 );
  }
  return 0LL;
}
