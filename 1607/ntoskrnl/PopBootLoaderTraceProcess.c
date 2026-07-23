/*
 * XREFs of PopBootLoaderTraceProcess @ 0x140531D9C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     BapdWriteEtwEvents @ 0x1401324AC (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x1403D316C (BapdRecordFirmwareBootStats.c)
 *     EtwUnregister @ 0x140548DF0 (EtwUnregister.c)
 */

void PopBootLoaderTraceProcess()
{
  ULONG_PTR v0; // rbx
  __int64 v1; // rax
  unsigned __int64 v2; // rcx
  __m128i v3; // [rsp+30h] [rbp-28h]

  v0 = qword_1403033E0;
  if ( qword_1403033E0 )
  {
    BapdRecordFirmwareBootStats();
    EtwUnregister(stru_1402F3740.RegHandle);
    stru_1402F3740.RegHandle = 0LL;
    stru_1402F3740.LevelPlus1 = 0;
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
