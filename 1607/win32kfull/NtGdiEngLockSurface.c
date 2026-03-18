/*
 * XREFs of NtGdiEngLockSurface @ 0x1C02AE3B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?LockSurface@UMPDOBJ@@QEAAPEAU_SURFOBJ@@PEAUHSURF__@@@Z @ 0x1C02848A4 (-LockSurface@UMPDOBJ@@QEAAPEAU_SURFOBJ@@PEAUHSURF__@@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 */

struct _SURFOBJ *__fastcall NtGdiEngLockSurface(HSURF a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct DHPDEV__ *v7; // rcx
  struct _SURFOBJ *v8; // rbx
  UMPDOBJ *v10; // [rsp+38h] [rbp+10h] BYREF

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v10, ThreadCurrentObj);
  v8 = 0LL;
  if ( v10 )
    v8 = UMPDOBJ::LockSurface(v7, a1);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v10);
  return v8;
}
