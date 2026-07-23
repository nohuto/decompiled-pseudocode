/*
 * XREFs of IopLiveDumpStartDumpDataBuffering @ 0x1403DB8B8
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1403DABEC (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     IopLiveDumpTrace @ 0x1401CADF0 (IopLiveDumpTrace.c)
 *     KdDecodeDataBlock @ 0x1401D1184 (KdDecodeDataBlock.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x1403DB0C0 (IopLiveDumpInitiateCorralStateChange.c)
 */

char __fastcall IopLiveDumpStartDumpDataBuffering(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r10
  __int64 *v4; // rdx
  __int64 v5; // r9
  int v6; // r8d

  KdDecodeDataBlock();
  IopLiveDumpTrace();
  IopLiveDumpInitiateCorralStateChange(a1, 4);
  LOBYTE(v2) = IopLiveDumpTrace();
  if ( KdpBootedNodebug )
  {
    v3 = KiWaitAlways;
    v4 = (__int64 *)&KdDebuggerDataBlock;
    v5 = KiWaitNever;
    v6 = 109;
    KdpDataBlockEncoded = 1;
    do
    {
      v2 = v5 ^ __ROR8__((unsigned __int64)&KdpDataBlockEncoded ^ _byteswap_uint64(v3 ^ *v4), v5);
      *v4++ = v2;
      --v6;
    }
    while ( v6 );
  }
  return v2;
}
