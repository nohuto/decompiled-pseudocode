/*
 * XREFs of NtGdiEngPaint @ 0x14032D7D0
 * Callers:
 *     <none>
 * Callees:
 *     EngPaint @ 0x140083090 (EngPaint.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400D89EC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400F666C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400F67B8 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1402280A0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x14025DB00 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x14032C35C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngPaint(struct _SURFOBJ *a1, struct _CLIPOBJ *a2, struct _BRUSHOBJ *a3, POINTL *a4, MIX a5)
{
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v9; // rsi
  SURFOBJ *v11; // r14
  struct _CLIPOBJ *DDIOBJ; // rbx
  BRUSHOBJ *v13; // rsi
  MIX mix; // r15d
  unsigned int v15; // edi
  struct _POINTL v16; // [rsp+30h] [rbp-F8h] BYREF
  struct _BRUSHOBJ v17; // [rsp+38h] [rbp-F0h] BYREF
  SURFOBJ *pso[8]; // [rsp+50h] [rbp-D8h] BYREF
  UMPDOBJ *v19[4]; // [rsp+90h] [rbp-98h] BYREF
  UMPDOBJ *v20; // [rsp+B0h] [rbp-78h]
  POINTL *pptlBrushOrg; // [rsp+148h] [rbp+20h] BYREF

  pptlBrushOrg = a4;
  v16 = 0LL;
  memset(&v17, 0, sizeof(v17));
  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v19, CurrentThread);
  v9 = v20;
  if ( v20 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, v20);
    v11 = pso[0];
    if ( pso[0] )
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v9, a2, &pso[0]->sizlBitmap);
    else
      DDIOBJ = 0LL;
    v13 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v9, (__int64)a3);
    if ( !v13 )
      v13 = CaptureAndFakeBRUSHOBJ(a3, &v17);
    if ( v11 && DDIOBJ && !DDIOBJ->iMode && (mix = a5, (a5 & 0xFF00) != 0) )
    {
      CapturePOINTL(&pptlBrushOrg, &v16);
      v15 = bCheckSurfaceRect(v11, 0LL, DDIOBJ);
      if ( v15 )
        v15 = EngPaint(v11, DDIOBJ, v13, pptlBrushOrg, mix);
    }
    else
    {
      v15 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v19);
    return v15;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v19);
    return 0LL;
  }
}
