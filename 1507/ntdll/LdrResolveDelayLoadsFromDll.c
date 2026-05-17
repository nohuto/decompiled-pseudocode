/*
 * XREFs of LdrResolveDelayLoadsFromDll @ 0x1800BCD10
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetDelayloadDescriptor @ 0x1800BCD54 (LdrpGetDelayloadDescriptor.c)
 */

__int64 __fastcall LdrResolveDelayLoadsFromDll(char *a1, __int64 a2, int a3)
{
  __int64 DelayloadDescriptor; // rax

  if ( a3 )
    return 3221225485LL;
  DelayloadDescriptor = LdrpGetDelayloadDescriptor();
  if ( DelayloadDescriptor )
    return LdrpResolveDelayLoadDescriptor(a1, DelayloadDescriptor);
  else
    return 3221225781LL;
}
