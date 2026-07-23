/*
 * XREFs of MiIssueHardFaultIo @ 0x140023324
 * Callers:
 *     MiIssueHardFault @ 0x1400244B0 (MiIssueHardFault.c)
 *     MiPfCoalesceAndIssueIOs @ 0x1400A8D54 (MiPfCoalesceAndIssueIOs.c)
 *     MiPfIssueCoalesceCandidates @ 0x140125734 (MiPfIssueCoalesceCandidates.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     IoPageReadEx @ 0x1400E7D80 (IoPageReadEx.c)
 *     SmPageRead @ 0x14011E6B4 (SmPageRead.c)
 */

__int64 __fastcall MiIssueHardFaultIo(__int64 a1, int a2, __int64 a3)
{
  char v4; // cl
  int v5; // r9d
  bool v6; // cl
  unsigned __int64 v7; // r8
  _KPROCESS *Process; // rdx
  signed __int32 v9; // eax
  struct _KEVENT *v10; // r14
  int *v11; // rsi
  int v12; // eax
  unsigned int v13; // edi
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  signed __int32 v17; // ett

  v4 = *(_BYTE *)(a1 + 189);
  if ( v4 < 0 )
  {
    v15 = a1 + 256;
    if ( (v4 & 4) != 0 )
      v15 |= 1uLL;
    if ( (a3 & 1) != 0 )
    {
      v16 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)v16 == 1 && (*(_DWORD *)(v16 + 80) & 0x800) != 0 )
        v15 |= 2uLL;
    }
    v11 = (int *)(a1 + 80);
    v10 = (struct _KEVENT *)(a1 + 32);
    v12 = SmPageRead(a1 + 96, v15, a1 + 32, a1 + 80);
  }
  else
  {
    v5 = 0;
    v6 = (v4 & 4) != 0;
    if ( v6 )
      v5 = 4;
    if ( (*(_BYTE *)(a1 + 191) & 2) != 0 )
      v5 |= 1u;
    if ( v6
      || qword_140326CC0
      && (v7 = *(_QWORD *)(a1 + 216), v7 >= qword_140326CC0)
      && v7 < qword_140326CC0 + (qword_140326CA0 << 21)
      && !a2 )
    {
      v5 |= 2u;
    }
    if ( !v6 )
    {
      Process = KeGetCurrentThread()->Process;
      v9 = Process[2].ActiveProcessors.Bitmap[12];
      while ( v9 )
      {
        v17 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)&Process[2].ActiveProcessors.Bitmap[12], v9 - 1, v9);
        if ( v17 == v9 )
        {
          v5 |= 8u;
          break;
        }
      }
    }
    v10 = (struct _KEVENT *)(a1 + 32);
    v11 = (int *)(a1 + 80);
    v12 = IoPageReadEx(*(_QWORD *)(a1 + 192), (int)a1 + 256, (int)a1 + 96, (int)a1 + 32, a1 + 80, v5, 0LL);
  }
  v13 = v12;
  if ( v12 < 0 )
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    *v11 = v12;
    KeSetEvent(v10, 0, 0);
  }
  return v13;
}
