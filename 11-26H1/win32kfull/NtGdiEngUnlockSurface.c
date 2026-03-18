/*
 * XREFs of NtGdiEngUnlockSurface @ 0x140251390
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?TryUnlockSurface@UMPDOBJ@@SA_NPEAU_SURFOBJ@@@Z @ 0x1402513F0 (-TryUnlockSurface@UMPDOBJ@@SA_NPEAU_SURFOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngUnlockSurface(struct _SURFOBJ *a1)
{
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v3; // ebx
  UMPDOBJ *v5[13]; // [rsp+20h] [rbp-68h] BYREF

  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v5, CurrentThread);
  v3 = 0;
  if ( v5[4] )
    UMPDOBJ::TryUnlockSurface(a1);
  else
    v3 = -1073741811;
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v5);
  return v3;
}
