/*
 * XREFs of MiBuildFileOnlyProtos @ 0x1401E325C
 * Callers:
 *     MiAllocateFileExtents @ 0x14062C488 (MiAllocateFileExtents.c)
 * Callees:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiInitializeFileOnlyPfn @ 0x1401E37EC (MiInitializeFileOnlyPfn.c)
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
