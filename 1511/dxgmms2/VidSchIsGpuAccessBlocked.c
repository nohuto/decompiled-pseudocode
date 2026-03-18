/*
 * XREFs of VidSchIsGpuAccessBlocked @ 0x1C0038DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VidSchIsGpuAccessBlocked(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  int v3; // ecx

  v2 = *(_DWORD *)(a1 + 4) & 0x1F;
  v3 = *(_DWORD *)(*(_QWORD *)(a2 + 2616) + 4 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5));
  return _bittest(&v3, v2);
}
