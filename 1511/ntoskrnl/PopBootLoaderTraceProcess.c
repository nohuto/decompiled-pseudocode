/*
 * XREFs of PopBootLoaderTraceProcess @ 0x1404F8D10
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     BapdWriteEtwEvents @ 0x140127250 (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x1403A6C88 (BapdRecordFirmwareBootStats.c)
 */

void PopBootLoaderTraceProcess()
{
  ULONG_PTR v0; // rbx
  __int64 v1; // rax
  unsigned __int64 v2; // rcx
  __m128i v3; // [rsp+30h] [rbp-28h]

  v0 = qword_1402DE0C0;
  if ( qword_1402DE0C0 )
  {
    BapdRecordFirmwareBootStats();
    v1 = *(_QWORD *)(v0 + 216);
    if ( v1 )
    {
      v2 = *(_QWORD *)(v1 + 32);
      v3 = *(__m128i *)(v2 + 16);
      if ( _mm_srli_si128(v3, 8).m128i_i32[1] == 1 )
      {
        if ( *(_DWORD *)(v0 + 224) )
          v3.m128i_i32[0] = *(_DWORD *)(v0 + 224);
        BapdWriteEtwEvents(v2, v3.m128i_u32[0]);
      }
    }
  }
}
