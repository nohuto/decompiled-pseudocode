/*
 * XREFs of KeConfigureHeteroProcessors @ 0x1403DCF74
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x14056AAC4 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeGenericCallDpc @ 0x14009EDE4 (KeGenericCallDpc.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403D39E4 (KiConfigureCpuSetSchedulingInformation.c)
 */

__int64 __fastcall KeConfigureHeteroProcessors(__int64 a1, int a2, char a3, _DWORD *a4)
{
  int v4; // ebp
  unsigned int v5; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]
  char v14; // [rsp+2Ch] [rbp-Ch]

  v4 = KiDefaultHeteroCpuPolicy;
  v5 = 0;
  v7 = KiHeteroSystem;
  if ( (unsigned int)KiDesiredHeteroCpuPolicy >= 9 )
    KiDesiredHeteroCpuPolicy = 0;
  if ( (unsigned int)KiDefaultDynamicHeteroCpuPolicy >= 5 )
    KiDefaultDynamicHeteroCpuPolicy = 0;
  if ( (unsigned int)KiDynamicHeteroCpuPolicyImportant >= 5 )
    KiDynamicHeteroCpuPolicyImportant = 0;
  if ( (unsigned int)KiDynamicHeteroCpuPolicyImportantShort >= 5 )
    KiDynamicHeteroCpuPolicyImportantShort = 0;
  if ( (unsigned int)KiDynamicHeteroCpuPolicyMask > 7 )
    KiDynamicHeteroCpuPolicyMask = 0;
  v8 = *(_DWORD *)(KiProcessorBlock[0] + 1524) * KiDynamicHeteroCpuPolicyExpectedRuntime;
  v13 = a2;
  v12 = a1;
  v14 = a3;
  KiDynamicHeteroCpuPolicyExpectedCycles = v8;
  KeGenericCallDpc((__int64)KiConfigureHeteroProcessorsTarget, (__int64)&v12);
  v9 = KiHeteroSystem;
  *a4 = KiHeteroSystem;
  v10 = 0;
  for ( KiDefaultHeteroCpuPolicy = v9 != 0 ? KiDesiredHeteroCpuPolicy : 0; v10 < (unsigned int)KeNumberProcessors_0; ++v10 )
    KiConfigureCpuSetSchedulingInformation(KiProcessorBlock[v10]);
  if ( v4 != KiDefaultHeteroCpuPolicy || v7 != KiHeteroSystem )
    return 1;
  return v5;
}
