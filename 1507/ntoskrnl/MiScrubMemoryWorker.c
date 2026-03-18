/*
 * XREFs of MiScrubMemoryWorker @ 0x1406AA94C
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x140127FF0 (KeSignalGate.c)
 *     MiScrubNode @ 0x140232B18 (MiScrubNode.c)
 *     MiInitializeScrubPacket @ 0x1406AA87C (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x1406AA918 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiScrubMemoryWorker(unsigned int *a1)
{
  __int64 v2; // rcx
  unsigned int *v3; // rbx
  int v4; // esi
  __int64 v5; // r8
  __int64 result; // rax
  _BYTE v7[40]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+48h] [rbp-20h]

  v2 = *a1;
  v3 = &a1[-10 * v2];
  v4 = MiInitializeScrubPacket(v2, *((_QWORD *)v3 - 2), (__int64)v7);
  if ( v4 >= 0 )
  {
    MiScrubNode((__int64)v7);
    MiReleaseScrubPacket((__int64)v7);
  }
  a1[1] = v4;
  _InterlockedExchangeAdd64((volatile signed __int64 *)v3 - 1, v8);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v3 - 12, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return KeSignalGate((__int64)(v3 - 10), 1u, v5);
  return result;
}
