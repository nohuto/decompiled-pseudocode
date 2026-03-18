/*
 * XREFs of PfHardFaultLog @ 0x140083758
 * Callers:
 *     MiWaitForInPageComplete @ 0x140087120 (MiWaitForInPageComplete.c)
 * Callees:
 *     PfLogEvent @ 0x14001AB30 (PfLogEvent.c)
 *     EtwTraceTimedEvent @ 0x140083664 (EtwTraceTimedEvent.c)
 */

void __fastcall PfHardFaultLog(_QWORD *a1, int a2)
{
  unsigned __int16 v4; // ax
  int v5; // eax
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // r8
  _DWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h]
  __int64 v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-18h]

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
    EtwTraceTimedEvent(v4, 0x2000u, (__int64)(a1 + 2), 32, 4200450, (__int64)a1);
  }
  if ( a1[6] )
  {
    if ( a2 != 2 )
    {
      v5 = MEMORY[0xFFFFF78000000320];
      v6 = MEMORY[0xFFFFF78000000320] - a1[6];
      a1[6] = v6;
      v9[0] = 2 * v6;
      v9[1] = dword_140367DD0;
      v12 = a1[4];
      v10 = (unsigned int)(a1[2] >> 9);
      CurrentThread = KeGetCurrentThread();
      v8 = ((__int64)CurrentThread->Process[1].Header.WaitListHead.Blink ^ (__int64)CurrentThread->Process[1].ThreadListHead.Flink) & 0x1FFFFFFFFFFFFFFFLL;
      v11 = a1[3];
      v13 = v8;
      PfLogEvent(29, v5, v9, 0x28u);
    }
  }
}
