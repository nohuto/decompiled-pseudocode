/*
 * XREFs of NtGdiEngEraseSurface @ 0x1400F48A0
 * Callers:
 *     <none>
 * Callees:
 *     EngEraseSurface @ 0x1400A14B0 (EngEraseSurface.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400F666C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x14032C35C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngEraseSurface(struct _SURFOBJ *a1, struct _RECTL *a2, ULONG iColor)
{
  struct _GRETHREAD *CurrentThread; // rax
  struct UMPDOBJ *v7; // r14
  SURFOBJ *v9; // rsi
  unsigned int v10; // ebx
  SURFOBJ *pso[8]; // [rsp+50h] [rbp-E8h] BYREF
  UMPDOBJ *v12[4]; // [rsp+90h] [rbp-A8h] BYREF
  struct UMPDOBJ *v13; // [rsp+B0h] [rbp-88h]
  __int128 v14; // [rsp+F0h] [rbp-48h] BYREF

  v14 = 0LL;
  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v12, CurrentThread);
  v7 = v13;
  if ( !v13 )
    goto LABEL_2;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, v13);
  v9 = pso[0];
  if ( pso[0] )
  {
    if ( a2 )
    {
      GreProbeAndReadFromUntrustedVa(&v14, 0x10uLL, a2, 0x10uLL, 1uLL);
      a2 = (struct _RECTL *)&v14;
    }
    if ( (*((_DWORD *)v7 + 107) & 0x100) != 0 && !a2 )
    {
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
LABEL_2:
      UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v12);
      return 0LL;
    }
    v10 = bCheckSurfaceRect(v9, a2, 0LL);
    if ( v10 )
      v10 = EngEraseSurface(v9, a2, iColor);
  }
  else
  {
    v10 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v12);
  return v10;
}
