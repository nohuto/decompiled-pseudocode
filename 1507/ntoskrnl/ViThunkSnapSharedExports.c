/*
 * XREFs of ViThunkSnapSharedExports @ 0x140732320
 * Callers:
 *     ViThunkCreateSharedExportInformation @ 0x140732268 (ViThunkCreateSharedExportInformation.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x140063958 (RtlFindNextForwardRunClear.c)
 *     ViThunkSnapSharedExportByName @ 0x1407323D0 (ViThunkSnapSharedExportByName.c)
 */

__int64 __fastcall ViThunkSnapSharedExports(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _RTL_BITMAP *a4,
        unsigned int a5,
        __int64 a6)
{
  ULONG v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // esi
  ULONG v13; // ebx
  int v14; // eax
  ULONG StartingRunIndex[10]; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0;
  v7 = 0;
  v8 = 0;
  for ( StartingRunIndex[0] = 0; v8 < a5; StartingRunIndex[0] = v6 )
  {
    if ( v6 >= a4->SizeOfBitMap || !RtlFindNextForwardRunClear(a4, v6, StartingRunIndex) )
      break;
    v13 = StartingRunIndex[0];
    v14 = ViThunkSnapSharedExportByName(a1, a2 + a3 * StartingRunIndex[0], a6 + 16LL * v8);
    if ( v7 || v14 )
      v7 = 1;
    v6 = v13 + 1;
    ++v8;
  }
  return v7;
}
