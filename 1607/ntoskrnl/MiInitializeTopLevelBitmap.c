/*
 * XREFs of MiInitializeTopLevelBitmap @ 0x1407AB088
 * Callers:
 *     MiInitializeSystemVa @ 0x1407AA428 (MiInitializeSystemVa.c)
 * Callees:
 *     RtlSetBits @ 0x140028420 (RtlSetBits.c)
 *     ExGenRandom @ 0x1400F0494 (ExGenRandom.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

void MiInitializeTopLevelBitmap()
{
  unsigned __int64 v0; // rbx
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  dword_140326CD0 = (unsigned __int8)ExGenRandom(1);
  memset(dword_140326CB0, 0, sizeof(dword_140326CB0));
  BitMapHeader.SizeOfBitMap = 256;
  BitMapHeader.Buffer = dword_140326CB0;
  v0 = 0xFFFFF6FB7DBED800uLL;
  do
  {
    if ( MI_READ_PTE_LOCK_FREE(v0) )
      RtlSetBits(&BitMapHeader, (__int64)(v0 + 0x90482412800LL) >> 3, 1u);
    v0 += 8LL;
  }
  while ( (v0 & 0xFFF) != 0 );
  if ( (MiFlags & 0x200000) == 0 )
    dword_140326CB0[7] &= ~0x2000u;
}
