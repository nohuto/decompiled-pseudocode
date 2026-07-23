/*
 * XREFs of VfCtxInit @ 0x140719BEC
 * Callers:
 *     VfInitVerifierComponents @ 0x140703330 (VfInitVerifierComponents.c)
 * Callees:
 *     KeFreeXStateContext @ 0x140083A74 (KeFreeXStateContext.c)
 *     KeAllocateXStateContext @ 0x140083D50 (KeAllocateXStateContext.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

void __fastcall VfCtxInit(__int64 a1, __int64 a2)
{
  void **v2; // rbx
  __int64 v3; // rdi

  if ( (MmVerifierData & 0x800) != 0 )
  {
    if ( (KeFeatureBits & 0x800000) != 0 && MEMORY[0xFFFFF780000003D8] )
    {
      ViCtxXStateEnabledMask = MEMORY[0xFFFFF780000003D8];
      LODWORD(ViCtxXStateSize) = MEMORY[0xFFFFF780000003E8];
    }
    v2 = (void **)&unk_14072EDB0;
    v3 = 16LL;
    do
    {
      if ( ViCtxXStateEnabledMask && (int)KeAllocateXStateContext((__int64)(v2 - 4), a2, ViCtxXStateSize) >= 0 )
      {
        if ( (int)KeAllocateXStateContext((__int64)v2, a2, ViCtxXStateSize) >= 0 )
        {
          memset(*(v2 - 2), 0, (unsigned int)ViCtxXStateSize);
          memset(v2[2], 0, (unsigned int)ViCtxXStateSize);
          *((_DWORD *)v2 - 11) |= 1u;
        }
        else
        {
          KeFreeXStateContext((__int64)v2);
        }
      }
      _InterlockedIncrement(&ViCtxInitializedIsrStateBlocks);
      v2 += 10;
      --v3;
    }
    while ( v3 );
  }
}
