/*
 * XREFs of VidSchInitializeAdapterPowerManagement @ 0x1C006DFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchInitializeAdapterPowerManagement(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm1
  __int64 result; // rax

  *(_OWORD *)(a1 + 2472) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 2488) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 2504) = *(_OWORD *)(a2 + 32);
  v2 = *(_OWORD *)(a2 + 48);
  *(_BYTE *)(a1 + 2552) = 0;
  *(_OWORD *)(a1 + 2520) = v2;
  result = *(unsigned int *)(a2 + 56);
  *(_QWORD *)(a1 + 2544) = 10000 * result;
  return result;
}
