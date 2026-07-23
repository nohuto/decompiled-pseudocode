/*
 * XREFs of KiProcessDisconnectList @ 0x1401D8A70
 * Callers:
 *     KiProcessSecondarySignalList @ 0x1401D5CD4 (KiProcessSecondarySignalList.c)
 *     KiInterruptDispatchCommon @ 0x1401D8494 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 */

__int64 *__fastcall KiProcessDisconnectList(__int64 **a1)
{
  __int64 *result; // rax
  __int64 v3; // rcx
  struct _KEVENT *v4; // rcx

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == (__int64 *)a1 )
      break;
    v3 = *result;
    if ( (__int64 **)result[1] != a1 || *(__int64 **)(v3 + 8) != result )
      __fastfail(3u);
    *a1 = (__int64 *)v3;
    *(_QWORD *)(v3 + 8) = a1;
    v4 = *(struct _KEVENT **)result[17];
    if ( v4 )
      KeSetEvent(v4, 0, 0);
  }
  return result;
}
