/*
 * XREFs of MiInitializeProbePacketVm @ 0x14011B520
 * Callers:
 *     MiProbeAndLockPrepare @ 0x14011B3E0 (MiProbeAndLockPrepare.c)
 * Callees:
 *     MiLockProbePacketWorkingSet @ 0x14011B678 (MiLockProbePacketWorkingSet.c)
 */

__int64 __fastcall MiInitializeProbePacketVm(__int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 v3; // rax
  __int64 v4; // rax
  signed __int32 *v5; // rax

  v1 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 88) = MmBadPointer;
  *(_BYTE *)(a1 + 60) = 0;
  if ( v1 < 0x7FFFFFFF0000LL )
  {
    v3 = *(_QWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 88) = v3 + 1272;
  }
  else
  {
    if ( v1 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    {
      v4 = *(_QWORD *)(a1 + 64);
      *(_DWORD *)(a1 + 56) = 6;
      v5 = (signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v4 + 184) + 1024LL) + 2968LL);
LABEL_17:
      *(_QWORD *)(a1 + 88) = v5;
      return MiLockProbePacketWorkingSet(a1);
    }
    if ( v1 + 0x400000000000LL <= 0xF7FFFFFFFFFLL
      || qword_14034EDB0
      && v1 >= qword_14034EDB0
      && v1 < qword_14034EDB0 + (qword_14034ED90 << 21)
      && (*(_BYTE *)(48 * ((*(_QWORD *)(((v1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                   - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
    {
      v5 = dword_14034FE40;
      *(_DWORD *)(a1 + 56) = 3;
      goto LABEL_17;
    }
    if ( qword_14034EE00 && v1 >= qword_14034EE00 && v1 < qword_14034EE00 + (qword_14034EDE0 << 21) )
    {
      v5 = dword_14034FD40;
      *(_DWORD *)(a1 + 56) = 2;
      goto LABEL_17;
    }
    if ( v1 + 0x200000000000LL > 0xFFFFFFFFFFFLL )
    {
      if ( qword_14034EDB0
        && v1 >= qword_14034EDB0
        && v1 < qword_14034EDB0 + (qword_14034ED90 << 21)
        && (*(_BYTE *)(48 * ((*(_QWORD *)(((v1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                     - 0x57FFFFFFFDALL) & 0xF0) == 0xD0 )
      {
        *(_DWORD *)(a1 + 56) = 0;
        return MiLockProbePacketWorkingSet(a1);
      }
      v5 = dword_14034FF40;
      *(_DWORD *)(a1 + 56) = 5;
      goto LABEL_17;
    }
    *(_DWORD *)(a1 + 56) = 4;
  }
  return MiLockProbePacketWorkingSet(a1);
}
