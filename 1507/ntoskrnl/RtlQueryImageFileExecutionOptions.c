/*
 * XREFs of RtlQueryImageFileExecutionOptions @ 0x1405A4B68
 * Callers:
 *     PsBootPhaseComplete @ 0x1405A4884 (PsBootPhaseComplete.c)
 * Callees:
 *     RtlpOpenBaseImageFileOptionsKey @ 0x14053FF80 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlQueryImageFileKeyOption @ 0x140545DF4 (RtlQueryImageFileKeyOption.c)
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
