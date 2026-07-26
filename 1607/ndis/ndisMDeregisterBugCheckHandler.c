/*
 * XREFs of ndisMDeregisterBugCheckHandler @ 0x1C009E95C
 * Callers:
 *     ndisMHaltMiniport @ 0x1C009E8F8 (ndisMHaltMiniport.c)
 *     NdisMDeregisterAdapterShutdownHandler @ 0x1C00D23B0 (NdisMDeregisterAdapterShutdownHandler.c)
 *     ndisPmInitializeMiniport @ 0x1C00E621C (ndisPmInitializeMiniport.c)
 *     ndisPmHaltMiniport @ 0x1C00E69B8 (ndisPmHaltMiniport.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisMDeregisterBugCheckHandler(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 120);
  if ( (v1 & 0x2000) != 0 )
  {
    *(_DWORD *)(a1 + 120) = v1 & 0xFFFFDFFF;
    LOBYTE(v1) = KeDeregisterBugCheckCallback((PKBUGCHECK_CALLBACK_RECORD)(a1 + 2080));
  }
  return v1;
}
