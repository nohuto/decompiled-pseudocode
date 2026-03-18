/*
 * XREFs of RtlQueryImageFileExecutionOptions @ 0x14055E260
 * Callers:
 *     PsBootPhaseComplete @ 0x14055DFD0 (PsBootPhaseComplete.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1404732C4 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x1404D3228 (RtlpOpenBaseImageFileOptionsKey.c)
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
