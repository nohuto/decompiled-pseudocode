/*
 * XREFs of NtSetTimer2 @ 0x1400EE798
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall NtSetTimer2(void *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  if ( a3 )
    return -1073741822;
  else
    return ExpSetTimer2(a1, a2, a4);
}
