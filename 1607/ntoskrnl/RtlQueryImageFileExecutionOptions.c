/*
 * XREFs of RtlQueryImageFileExecutionOptions @ 0x14055E7A0
 * Callers:
 *     PsBootPhaseComplete @ 0x14055E510 (PsBootPhaseComplete.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x140472194 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x1404B6CC8 (RtlpOpenBaseImageFileOptionsKey.c)
 */

int __fastcall RtlQueryImageFileExecutionOptions(void *a1, const WCHAR *a2, __int64 a3, ULONG *a4)
{
  int result; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp+8h] BYREF

  KeyHandle = a1;
  result = RtlpOpenBaseImageFileOptionsKey(&KeyHandle);
  if ( result >= 0 )
    return RtlQueryImageFileKeyOption(KeyHandle, a2, 4, a4, 4u, 0LL);
  return result;
}
