/*
 * XREFs of IopLiveDumpStartDumpDataBuffering @ 0x1403FFD70
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1403FEF9C (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     IopLiveDumpTrace @ 0x1401F87B0 (IopLiveDumpTrace.c)
 *     KdCopyDataBlock @ 0x1401FD7E8 (KdCopyDataBlock.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x1403FF47C (IopLiveDumpInitiateCorralStateChange.c)
 */

char __fastcall IopLiveDumpStartDumpDataBuffering(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rax
  __int64 v4; // r9
  int v5; // edx
  __int64 v6; // r8

  v1 = (__int64 *)&KdDebuggerDataBlock;
  if ( KdpDataBlockEncoded )
  {
    KdCopyDataBlock(&KdDebuggerDataBlock);
    KdpDataBlockEncoded = 0;
  }
  IopLiveDumpTrace();
  IopLiveDumpInitiateCorralStateChange(a1, 4);
  LOBYTE(v3) = IopLiveDumpTrace();
  if ( KdpBootedNodebug )
  {
    v4 = KiWaitAlways;
    v5 = 108;
    v6 = KiWaitNever;
    KdpDataBlockEncoded = 1;
    do
    {
      v3 = v6 ^ __ROR8__((unsigned __int64)&KdpDataBlockEncoded ^ _byteswap_uint64(v4 ^ *v1), v6);
      *v1++ = v3;
      --v5;
    }
    while ( v5 );
  }
  return v3;
}
