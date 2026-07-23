/*
 * XREFs of MiBuildFileOnlyProtos @ 0x1401ECFD8
 * Callers:
 *     MiAllocateFileExtents @ 0x14065A430 (MiAllocateFileExtents.c)
 * Callees:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiInitializeFileOnlyPfn @ 0x1401ED710 (MiInitializeFileOnlyPfn.c)
 */

void __fastcall MiBuildFileOnlyProtos(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v10; // r14
  unsigned __int8 v11; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    v4 = 0;
    v11 = 17;
    v5 = 0LL;
    do
    {
      while ( 1 )
      {
        v10 = MiLockProtoPoolPage(a4, &v11);
        if ( v10 )
          break;
        MmAccessFault(2uLL, a4, 0, 0LL);
      }
      do
      {
        if ( *(__int64 *)(a1 + 8 * v5) >= 0 )
          MiInitializeFileOnlyPfn(a3, a4);
        ++v4;
        a4 += 8LL;
        v5 = v4;
      }
      while ( v4 < a2 && (a4 & 0xFFF) != 0 );
      MiUnlockProtoPoolPage(v10, v11);
      v5 = v4;
    }
    while ( v4 < a2 );
  }
}
