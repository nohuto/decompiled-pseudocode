/*
 * XREFs of NtGdiEngEraseSurface @ 0x1C02AD9F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngEraseSurface @ 0x1C00FAD70 (EngEraseSurface.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02AAFF4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02AB128 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02AB2FC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02ABBC0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngEraseSurface(struct _SURFOBJ *a1, RECTL *a2, __int64 a3, __int64 a4)
{
  ULONG v4; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rsi
  SURFOBJ *v9; // rdi
  unsigned int v10; // ebx
  RECTL *prcl; // [rsp+20h] [rbp-A8h] BYREF
  UMPDOBJ *v12; // [rsp+28h] [rbp-A0h] BYREF
  int v13; // [rsp+30h] [rbp-98h]
  struct UMPDOBJ *v14; // [rsp+38h] [rbp-90h]
  SURFOBJ *v15; // [rsp+40h] [rbp-88h]
  SURFOBJ *pso[8]; // [rsp+50h] [rbp-78h] BYREF
  struct _RECTL v17; // [rsp+90h] [rbp-38h] BYREF

  v4 = a3;
  prcl = a2;
  v13 = a3;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v12, ThreadCurrentObj);
  if ( !v12 )
  {
LABEL_2:
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v12);
    return 0LL;
  }
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  v9 = pso[0];
  v15 = pso[0];
  if ( pso[0] )
  {
    CaptureRECTL(&prcl, &v17);
    if ( (*((_DWORD *)ThreadCurrentObj + 103) & 0x100) != 0 && !prcl )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngEraseSurface:prcl == NULL\n", 2596);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
      goto LABEL_2;
    }
    v10 = bCheckSurfaceRect(v9, prcl, 0LL);
    if ( v10 )
      v10 = EngEraseSurface(v9, prcl, v4);
  }
  else
  {
    v10 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v12);
  return v10;
}
