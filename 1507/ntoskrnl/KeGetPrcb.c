/*
 * XREFs of KeGetPrcb @ 0x14016DCCC
 * Callers:
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetPrcb(unsigned int a1)
{
  if ( a1 >= (unsigned int)KeNumberProcessors_0 )
    return 0LL;
  else
    return KiProcessorBlock[a1];
}
