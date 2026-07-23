/*
 * XREFs of KeAbInitializeThreadState @ 0x1400EED64
 * Callers:
 *     KeInitThread @ 0x1403C8E74 (KeInitThread.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall KeAbInitializeThreadState(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int16 result; // ax

  v1 = 6LL;
  v2 = a1 + 800;
  do
  {
    result = (unsigned __int16)(v2 - a1) >> 4;
    *(_BYTE *)(v2 + 24) = result;
    v2 += 96LL;
    --v1;
  }
  while ( v1 );
  *(_DWORD *)(a1 + 116) |= 1u;
  *(_QWORD *)(a1 + 1376) = 1LL;
  *(_QWORD *)(a1 + 1384) = 1LL;
  *(_BYTE *)(a1 + 792) = 63;
  return result;
}
