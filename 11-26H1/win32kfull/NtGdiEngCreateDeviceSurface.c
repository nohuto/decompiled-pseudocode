/*
 * XREFs of NtGdiEngCreateDeviceSurface @ 0x14032CE80
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x14025162C (-ValidUmpdSizl@@YAHUtagSIZE@@_N@Z.c)
 */

HSURF __fastcall NtGdiEngCreateDeviceSurface(DHSURF dhsurf, SIZEL a2, int a3)
{
  struct _GRETHREAD *CurrentThread; // rax
  HSURF DeviceSurface; // rbx
  UMPDOBJ *v9[12]; // [rsp+20h] [rbp-68h] BYREF

  CurrentThread = GreGetCurrentThread((__int64)dhsurf);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v9, CurrentThread);
  if ( ValidUmpdSizl(a2, 0) && (unsigned int)(a3 - 1) <= 7 )
  {
    DeviceSurface = EngCreateDeviceSurface(dhsurf, a2, a3 | 0x8000u);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v9);
    return DeviceSurface;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v9);
    return 0LL;
  }
}
