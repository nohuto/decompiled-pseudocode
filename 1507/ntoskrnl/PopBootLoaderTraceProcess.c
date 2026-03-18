/*
 * XREFs of PopBootLoaderTraceProcess @ 0x140566000
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     BapdWriteEtwEvents @ 0x140157A80 (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x1403F66C8 (BapdRecordFirmwareBootStats.c)
 */

void PopBootLoaderTraceProcess()
{
  ULONG_PTR v0; // rbx
  __int64 v1; // rax
  unsigned __int64 v2; // rcx
  __m128i v3; // [rsp+30h] [rbp-28h]

  v0 = qword_14032E680;
  if ( qword_14032E680 )
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
