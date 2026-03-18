/*
 * XREFs of MiIssueHardFaultIo @ 0x14003A3B8
 * Callers:
 *     MiIssueHardFault @ 0x140039650 (MiIssueHardFault.c)
 *     MiPfCoalesceAndIssueIOs @ 0x1400EB720 (MiPfCoalesceAndIssueIOs.c)
 *     MiPfIssueCoalesceCandidates @ 0x140116A18 (MiPfIssueCoalesceCandidates.c)
 * Callees:
 *     IoPageRead @ 0x140077720 (IoPageRead.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     SmPageRead @ 0x140109CEC (SmPageRead.c)
 */

__int64 __fastcall MiIssueHardFaultIo(__int64 a1, int a2, __int64 a3)
{
  char v3; // al
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r9
  _KPROCESS *Process; // r8
  signed __int32 v10; // eax
  struct _KEVENT *v11; // r14
  NTSTATUS *v12; // rsi
  NTSTATUS v13; // eax
  unsigned int v14; // edi
  unsigned __int64 v16; // r8
  signed __int32 v17; // ett

  v3 = *(_BYTE *)(a1 + 189);
  v6 = a1 + 256;
  if ( (v3 & 4) != 0 )
    v6 |= 1uLL;
  if ( v3 < 0 )
  {
    if ( (a3 & 1) != 0 )
    {
      v16 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)v16 == 1 && (*(_DWORD *)(v16 + 80) & 0x800) != 0 )
        v6 |= 2uLL;
    }
    v12 = (NTSTATUS *)(a1 + 80);
    v11 = (struct _KEVENT *)(a1 + 32);
    v13 = SmPageRead(a1 + 96, v6, a1 + 32, a1 + 80);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 192);
    if ( (*(_BYTE *)(a1 + 191) & 2) != 0 )
      v7 |= 1uLL;
    if ( (v3 & 4) != 0
      || qword_1402FE940
      && (v8 = *(_QWORD *)(a1 + 216), v8 >= qword_1402FE940)
      && v8 < qword_1402FE940 + (qword_1402FE920 << 21)
      && !a2 )
    {
      v7 |= 2uLL;
    }
    if ( (v3 & 4) == 0 )
    {
      Process = KeGetCurrentThread()->Process;
      v10 = Process[2].ActiveProcessors.Bitmap[10];
      while ( v10 )
      {
        v17 = v10;
        v10 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&Process[2].ActiveProcessors.Bitmap[10],
                v10 - 1,
                v10);
        if ( v17 == v10 )
        {
          v6 |= 2uLL;
          break;
        }
      }
    }
    v11 = (struct _KEVENT *)(a1 + 32);
    v12 = (NTSTATUS *)(a1 + 80);
    v13 = IoPageRead(
            (PFILE_OBJECT)v7,
            (PMDL)v6,
            (PLARGE_INTEGER)(a1 + 96),
            (PKEVENT)(a1 + 32),
            (PIO_STATUS_BLOCK)(a1 + 80));
  }
  v14 = v13;
  if ( v13 < 0 )
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    *v12 = v13;
    KeSetEvent(v11, 0, 0);
  }
  return v14;
}
