/*
 * XREFs of KeSignalCallDpcSynchronize @ 0x1401D627C
 * Callers:
 *     KiConfigureHeteroProcessorsTarget @ 0x1403DD1E8 (KiConfigureHeteroProcessorsTarget.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1403DD5DC (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KeSignalCallDpcSynchronize(__int64 a1)
{
  signed __int32 v2; // eax
  unsigned int v3; // esi
  unsigned __int8 v4; // bl
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = _InterlockedDecrement((volatile signed __int32 *)a1);
  v3 = ~v2 & 0x80000000;
  if ( (v2 & 0x7FFFFFFF) != 0 )
  {
    v4 = 0;
    v6 = 0;
    while ( (*(_DWORD *)a1 & 0x80000000) != v3 )
      KeYieldProcessorEx(&v6);
  }
  else
  {
    v4 = 1;
    *(_DWORD *)a1 = v3 | *(_DWORD *)(a1 + 4);
  }
  return v4;
}
