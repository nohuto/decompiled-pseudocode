/*
 * XREFs of ?CitPersistedDataComputeCrc@@YAIPEBXI@Z @ 0x1C00F5ACC
 * Callers:
 *     ?CitPersistedDataValidate@@YA_NPEBXIPEAI@Z @ 0x1C00F5B10 (-CitPersistedDataValidate@@YA_NPEBXIPEAI@Z.c)
 *     ?CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z @ 0x1C00F7360 (-CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall CitPersistedDataComputeCrc(PUCHAR Buffer, unsigned int a2)
{
  ULONG v5; // eax

  if ( a2 < 0x14 )
    return 0;
  v5 = RtlComputeCrc32(0, Buffer, 0x10u);
  return RtlComputeCrc32(v5, Buffer + 20, a2 - 20);
}
