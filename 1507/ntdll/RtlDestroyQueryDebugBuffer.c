/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x180069640
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800C40E0 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x180069678 (RtlpChangeQueryDebugBufferTarget.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 */

NTSTATUS __cdecl RtlDestroyQueryDebugBuffer(PRTL_DEBUG_INFORMATION Buffer)
{
  RtlpChangeQueryDebugBufferTarget(Buffer, 0LL, 0LL, 0LL);
  NtClose(Buffer->SectionHandleClient);
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, Buffer);
  return 0;
}
