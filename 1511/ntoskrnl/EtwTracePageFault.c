/*
 * XREFs of EtwTracePageFault @ 0x14020E030
 * Callers:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTracePageFault(int a1, __int64 a2, char a3, __int64 a4)
{
  unsigned __int16 v4; // cx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h]
  __int64 *v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]

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
      return result;
  }
  v8 = 0LL;
  v7 = a2;
  if ( a4 )
    v8 = *(_QWORD *)(a4 + 360);
  v11 = 0;
  v9 = &v7;
  v10 = 16;
  CurrentThread = KeGetCurrentThread();
  if ( (BYTE4(CurrentThread[1].Queue) & 0x10) != 0 )
    return EtwTraceKernelEvent((int)&v9, 1, 0x1000u, v4, 33554690);
  --CurrentThread->SpecialApcDisable;
  BYTE4(CurrentThread[1].Queue) |= 0x10u;
  EtwTraceKernelEvent((int)&v9, 1, 0x1000u, v4, a3 != 0 ? 33558786 : 50338050);
  BYTE4(CurrentThread[1].Queue) &= ~0x10u;
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
