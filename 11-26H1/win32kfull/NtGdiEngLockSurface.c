/*
 * XREFs of NtGdiEngLockSurface @ 0x140254AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?TryLockSurface@UMPDOBJ@@SAPEAU_SURFOBJ@@PEAUHSURF__@@@Z @ 0x140254B3C (-TryLockSurface@UMPDOBJ@@SAPEAU_SURFOBJ@@PEAUHSURF__@@@Z.c)
 */

struct _SURFOBJ *__fastcall NtGdiEngLockSurface(HSURF a1)
{
  struct _GRETHREAD *CurrentThread; // rax
  struct _SURFOBJ *v3; // rbx
  UMPDOBJ *v5[13]; // [rsp+20h] [rbp-68h] BYREF

  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v5, CurrentThread);
  v3 = 0LL;
  if ( v5[4] )
    v3 = UMPDOBJ::TryLockSurface(a1);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v5);
  return v3;
}
