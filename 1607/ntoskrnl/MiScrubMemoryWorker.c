/*
 * XREFs of MiScrubMemoryWorker @ 0x140664E9C
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x1400A6E1C (KeSignalGate.c)
 *     MiScrubNode @ 0x1401FE48C (MiScrubNode.c)
 *     MiInitializeScrubPacket @ 0x140664DC0 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x140664E68 (MiReleaseScrubPacket.c)
 */

void __fastcall MiScrubMemoryWorker(unsigned int *a1)
{
  __int64 v1; // rdx
  unsigned int *v3; // rbx
  int v4; // esi
  _BYTE v5[40]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp-20h]

  v1 = *a1;
  v3 = &a1[-10 * v1];
  v4 = MiInitializeScrubPacket(*((_QWORD *)v3 - 1), v1, *((_QWORD *)v3 - 3), (unsigned __int64)v5);
  if ( v4 >= 0 )
  {
    MiScrubNode(*((int **)v3 - 1), (__int64)v5);
    MiReleaseScrubPacket((__int64)v5);
  }
  a1[1] = v4;
  _InterlockedExchangeAdd64((volatile signed __int64 *)v3 - 2, v6);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3 - 14, 0xFFFFFFFF) == 1 )
    KeSignalGate((__int64)(v3 - 12), 1u);
}
