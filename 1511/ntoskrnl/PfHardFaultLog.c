/*
 * XREFs of PfHardFaultLog @ 0x1400DF278
 * Callers:
 *     MiWaitForInPageComplete @ 0x140039E00 (MiWaitForInPageComplete.c)
 * Callees:
 *     PfLogEvent @ 0x14001BBB0 (PfLogEvent.c)
 *     EtwTraceTimedEvent @ 0x1400DF398 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void __fastcall PfHardFaultLog(_QWORD *a1, int a2)
{
  unsigned __int16 v4; // ax
  int v5; // eax
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD v8[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h]
  __int64 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp-18h]

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
      v10 = 0LL;
      v6 = MEMORY[0xFFFFF78000000320] - a1[6];
      v12 = 0LL;
      a1[6] = v6;
      v8[0] = 2 * v6;
      v8[1] = dword_140317B10;
      v11 = a1[4];
      v9 = (unsigned int)(a1[2] >> 9);
      CurrentThread = KeGetCurrentThread();
      v12 = ((__int64)CurrentThread->Process ^ (__int64)CurrentThread->Process[1].ThreadListHead.Flink) & 0x1FFFFFFFFFFFFFFFLL;
      v10 = a1[3];
      PfLogEvent(29, v5, v8, 0x28u);
    }
  }
}
