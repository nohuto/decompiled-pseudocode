/*
 * XREFs of ResCDirectoryGetEntryCopyAndIndex @ 0x18008A1B0
 * Callers:
 *     ResCRuntimeGetResourceDataEx @ 0x180095F0C (ResCRuntimeGetResourceDataEx.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     ResCDirectoryGetEntryIndexEx @ 0x18008A138 (ResCDirectoryGetEntryIndexEx.c)
 */

__int64 __fastcall ResCDirectoryGetEntryCopyAndIndex(__int64 a1, __int128 *a2, __int64 a3, _OWORD *a4, _DWORD *a5)
{
  int EntryIndex; // eax
  _OWORD *v9; // rcx
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  if ( !a4 )
    return 0LL;
  if ( a1 && *(_QWORD *)(a1 + 48) )
  {
    v10 = *a2;
    EntryIndex = ResCDirectoryGetEntryIndexEx(a1, &v10);
    if ( EntryIndex < 0 )
      return 0LL;
    v9 = (_OWORD *)(*(_QWORD *)(a1 + 48) + 48LL * EntryIndex);
  }
  else
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(87);
    v9 = 0LL;
  }
  if ( !v9 )
    return 0LL;
  *a4 = *v9;
  a4[1] = v9[1];
  a4[2] = v9[2];
  if ( a5 )
    *a5 = ((__int64)v9 - *(_QWORD *)(a1 + 48)) / 48;
  return 1LL;
}
