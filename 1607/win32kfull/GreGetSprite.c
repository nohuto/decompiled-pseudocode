/*
 * XREFs of GreGetSprite @ 0x1C012D374
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C00650AC (xxxSetLayeredWindow.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0053FC0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0053FF8 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0063028 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetSprite(__int64 a1, struct PDEVOBJ *a2)
{
  __int64 v2; // rbx
  _BYTE v5[32]; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int32 *v6; // [rsp+40h] [rbp-18h]
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  v7 = a1;
  v2 = 0LL;
  if ( g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v7, a2, 0LL, 0LL);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v5, (HWND)a2);
    if ( v6 )
    {
      v2 = *(_QWORD *)v6;
      _InterlockedDecrement(v6 + 3);
    }
    v6 = 0LL;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v5);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v7);
  }
  return v2;
}
