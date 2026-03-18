/*
 * XREFs of NtQueryDefaultLocale @ 0x1404472C0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionLocaleId @ 0x140445F30 (MmGetSessionLocaleId.c)
 */

NTSTATUS __stdcall NtQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  _DWORD *v4; // rcx
  DWORD SessionLocaleId; // eax

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v4 = DefaultLocaleId;
    if ( (unsigned __int64)DefaultLocaleId >= MmUserProbeAddress )
      v4 = (_DWORD *)MmUserProbeAddress;
    *v4 = *v4;
  }
  if ( UserProfile )
    SessionLocaleId = MmGetSessionLocaleId();
  else
    SessionLocaleId = PsDefaultSystemLocaleId;
  *DefaultLocaleId = SessionLocaleId;
  return 0;
}
