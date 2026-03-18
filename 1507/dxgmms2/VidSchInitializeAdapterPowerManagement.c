/*
 * XREFs of VidSchInitializeAdapterPowerManagement @ 0x1C0078630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VidSchInitializeAdapterPowerManagement(__int64 a1, __int64 a2)
{
  __int128 v3; // xmm1
  unsigned __int64 result; // rax

  *(_OWORD *)(a1 + 2512) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 2528) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 2544) = *(_OWORD *)(a2 + 32);
  v3 = *(_OWORD *)(a2 + 48);
  *(_BYTE *)(a1 + 2600) = 0;
  *(_OWORD *)(a1 + 2560) = v3;
  *(_QWORD *)(a1 + 2592) = -10000LL * *(unsigned int *)(a2 + 56);
  result = 10000 * (unsigned __int64)*(unsigned int *)(a2 + 56) / KeQueryTimeIncrement();
  *(_QWORD *)(a1 + 2584) = result;
  return result;
}
