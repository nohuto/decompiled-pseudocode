/*
 * XREFs of NtQueryDefaultLocale @ 0x1404596C8
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionLocaleId @ 0x14045851C (MmGetSessionLocaleId.c)
 */

NTSTATUS __stdcall NtQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  __int64 v4; // rcx
  DWORD SessionLocaleId; // eax

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v4 = (__int64)DefaultLocaleId;
    if ( (unsigned __int64)DefaultLocaleId >= 0x7FFFFFFF0000LL )
      v4 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v4 = *(_DWORD *)v4;
  }
  if ( UserProfile )
    SessionLocaleId = MmGetSessionLocaleId();
  else
    SessionLocaleId = PsDefaultSystemLocaleId;
  *DefaultLocaleId = SessionLocaleId;
  return 0;
}
