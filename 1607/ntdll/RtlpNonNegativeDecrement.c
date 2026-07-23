/*
 * XREFs of RtlpNonNegativeDecrement @ 0x18006D170
 * Callers:
 *     RtlAcquireResourceShared @ 0x18006CEB0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006CFA0 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x18006D0A0 (RtlReleaseResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpNonNegativeDecrement(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // r8d
  int v3; // eax

  v1 = *a1;
  if ( *(int *)a1 > 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange(a1, v1 - 1, v1);
      if ( v1 == v3 )
        break;
      v1 = v3;
    }
    while ( v3 > 0 );
  }
  return v1;
}
