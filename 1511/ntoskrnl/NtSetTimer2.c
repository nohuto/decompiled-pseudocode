/*
 * XREFs of NtSetTimer2 @ 0x140034440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtSetTimer2(void *a1, __int64 a2, __int64 a3)
{
  if ( a3 )
    return 3221225474LL;
  else
    return ExpSetTimer2(a1);
}
