/*
 * XREFs of EtwTracePageFault @ 0x14025D2EC
 * Callers:
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall EtwTracePageFault(int a1, __int64 a2, char a3, __int64 a4)
{
  unsigned __int16 v4; // cx
  struct _KTHREAD *CurrentThread; // rbx
  __int16 v6; // ax
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h]
  _QWORD v9[2]; // [rsp+40h] [rbp-28h] BYREF

  switch ( a1 )
  {
    case 273:
      v4 = 523;
      break;
    case 272:
      v4 = 522;
      break;
    case 274:
      v4 = 524;
      break;
    case 276:
      v4 = 526;
      break;
    case 275:
      v4 = 525;
      break;
    case -1073741819:
      v4 = 527;
      break;
    default:
      return;
  }
  v7 = a2;
  v8 = 0LL;
  if ( a4 )
    v8 = *(_QWORD *)(a4 + 360);
  v9[1] = 16LL;
  v9[0] = &v7;
  CurrentThread = KeGetCurrentThread();
  if ( (BYTE4(CurrentThread[1].Queue) & 0x10) != 0 )
  {
    EtwTraceKernelEvent((int)v9, 1, 0x1000u, v4, 33554690);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    BYTE4(CurrentThread[1].Queue) |= 0x10u;
    EtwTraceKernelEvent((int)v9, 1, 0x1000u, v4, a3 != 0 ? 33558786 : 50338050);
    BYTE4(CurrentThread[1].Queue) &= ~0x10u;
    v6 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v6;
    if ( !v6 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
}
