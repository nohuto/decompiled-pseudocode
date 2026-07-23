/*
 * XREFs of PfHardFaultLog @ 0x14009DDA0
 * Callers:
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x14009DEB8 (EtwTraceTimedEvent.c)
 *     PfLogEvent @ 0x1400EE5B8 (PfLogEvent.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

void __fastcall PfHardFaultLog(_QWORD *a1, int a2)
{
  unsigned __int16 v4; // ax
  unsigned int v5; // ebx
  int v6; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD v10[7]; // [rsp+30h] [rbp-38h] BYREF

  if ( *a1 || a1[1] )
  {
    switch ( a2 )
    {
      case 0:
        goto LABEL_3;
      case 1:
        v4 = 626;
        break;
      case 2:
        v4 = 627;
        break;
      default:
LABEL_3:
        v4 = 544;
        break;
    }
    EtwTraceTimedEvent(v4, 0x2000, (_DWORD)a1 + 16, 32, 4200450, (__int64)a1);
  }
  if ( a1[6] )
  {
    if ( a2 != 2 )
    {
      v5 = MEMORY[0xFFFFF78000000320];
      a1[6] = MEMORY[0xFFFFF78000000320] - a1[6];
      memset(v10, 0, 0x28uLL);
      v6 = (2 * *((_DWORD *)a1 + 12)) | v10[0] & 1;
      v10[3] = a1[4];
      v10[1] = (unsigned int)(a1[2] >> 9);
      CurrentThread = KeGetCurrentThread();
      v10[0] = __PAIR64__(dword_14033B850, v6);
      v8 = ((__int64)CurrentThread->Process[1].Header.WaitListHead.Blink ^ (__int64)CurrentThread->Process[1].ThreadListHead.Flink) & 0x1FFFFFFFFFFFFFFFLL;
      v9 = a1[3];
      v10[4] = v8;
      v10[2] = v9;
      PfLogEvent(29LL, v5, v10);
    }
  }
}
