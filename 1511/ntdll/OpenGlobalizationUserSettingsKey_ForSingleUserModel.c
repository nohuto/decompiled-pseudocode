/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1800F821C
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x180009598 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtQueryValueKey @ 0x1800A53A0 (NtQueryValueKey.c)
 *     OpenOrCreateKeyWithFlags @ 0x1800F83B0 (OpenOrCreateKeyWithFlags.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForSingleUserModel(int a1, int a2, __int64 a3, int a4)
{
  int KeyWithFlags; // edi
  int v9; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+38h] [rbp-38h]
  UNICODE_STRING v11; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-20h] BYREF

  v9 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
  KeyWithFlags = OpenOrCreateKeyWithFlags(a1, a2, (unsigned int)&DestinationString, a4, (__int64)&v9);
  if ( KeyWithFlags >= 0 && v9 == 2 )
  {
    v10 = 0LL;
    RtlInitUnicodeString(&v11, L"RedirectedKey");
    ZwQueryValueKey();
    return 0;
  }
  return (unsigned int)KeyWithFlags;
}
