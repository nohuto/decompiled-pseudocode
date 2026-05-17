/*
 * XREFs of RtlDecompressFragment @ 0x1800EB210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlDecompressFragment(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  if ( a1 < 2u )
    return 3221225485LL;
  if ( a1 <= 4u )
    return RtlDecompressFragmentProcs[a1](a2, a3, a4, a5, a6, 0, a7, a8);
  return 3221226079LL;
}
