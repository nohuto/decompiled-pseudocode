/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x18006E320
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D57A0 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x18006E358 (RtlpChangeQueryDebugBufferTarget.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 */

NTSTATUS __cdecl RtlDestroyQueryDebugBuffer(PRTL_DEBUG_INFORMATION Buffer)
{
  RtlpChangeQueryDebugBufferTarget(Buffer, 0LL, 0LL, 0LL);
  NtClose(Buffer->SectionHandleClient);
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, Buffer);
  return 0;
}
