/*
 * XREFs of SmpRoundDownToPowerOf2 @ 0x140010558
 * Callers:
 *     SmpMakeSystemManagedPagingFileDescriptor @ 0x1400103C0 (SmpMakeSystemManagedPagingFileDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpRoundDownToPowerOf2(unsigned __int64 a1)
{
  unsigned int i; // ecx

  for ( i = 0; i < 0x40; ++i )
  {
    a1 >>= 1;
    if ( !a1 )
      break;
  }
  return 1LL << i;
}
