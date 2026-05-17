/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x18006CF30
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800CD730 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x18006CF68 (RtlpChangeQueryDebugBufferTarget.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall RtlDestroyQueryDebugBuffer(HANDLE *a1)
{
  RtlpChangeQueryDebugBufferTarget(a1, 0LL, 0LL, 0LL);
  NtClose(*a1);
  NtUnmapViewOfSection(-1LL, a1);
  return 0LL;
}
