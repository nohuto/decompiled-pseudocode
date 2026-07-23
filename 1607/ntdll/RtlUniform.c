/*
 * XREFs of RtlUniform @ 0x18005D9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlUniform(PULONG Seed)
{
  unsigned __int64 v1; // r9

  v1 = (2147483629 * (unsigned __int64)*Seed + 2147483587) % 0x7FFFFFFF;
  *Seed = v1;
  return v1;
}
