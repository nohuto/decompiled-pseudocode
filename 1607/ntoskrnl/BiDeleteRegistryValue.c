/*
 * XREFs of BiDeleteRegistryValue @ 0x14053CBDC
 * Callers:
 *     BiSetFirmwareModified @ 0x14012E4F0 (BiSetFirmwareModified.c)
 *     BiMarkTreatAsSystemStore @ 0x14053C01C (BiMarkTreatAsSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x140125318 (BiSanitizeHandle.c)
 *     BiZwClose @ 0x14012E5E8 (BiZwClose.c)
 *     BiZwDeleteValueKey @ 0x14012E638 (BiZwDeleteValueKey.c)
 *     BiOpenKey @ 0x14053E38C (BiOpenKey.c)
 */

__int64 __fastcall BiDeleteRegistryValue(__int64 a1, const WCHAR *a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  HANDLE v6; // rsi
  int v7; // eax
  HANDLE v8; // rbx
  unsigned int v9; // edi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp+8h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  v5 = BiSanitizeHandle(a1);
  KeyHandle = 0LL;
  v6 = (HANDLE)v5;
  if ( !a3 )
  {
    v8 = (HANDLE)v5;
    goto LABEL_3;
  }
  v7 = BiOpenKey(v5, a3, 131103LL, &KeyHandle);
  v8 = KeyHandle;
  v9 = v7;
  if ( v7 >= 0 )
LABEL_3:
    v9 = BiZwDeleteValueKey(v8, &DestinationString);
  if ( v8 != v6 && v8 )
    BiZwClose(v8);
  return v9;
}
