/*
 * XREFs of BvgaBitBlt @ 0x1401C3F4C
 * Callers:
 *     <none>
 * Callees:
 *     BvgaAcquireLock @ 0x1401C3F08 (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x1401C412C (BvgaReleaseLock.c)
 */

__int64 __fastcall BvgaBitBlt(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  if ( BvgaBootDriverInstalled )
  {
    if ( !BvgaDisplayState )
    {
      BvgaAcquireLock();
      VidBitBlt(a1, a2, a3);
      return BvgaReleaseLock();
    }
  }
  return result;
}
