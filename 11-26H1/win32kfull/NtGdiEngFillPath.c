/*
 * XREFs of NtGdiEngFillPath @ 0x1400F5100
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D7794 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400D89EC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400F666C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400F67B8 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     EngFillPath @ 0x140118840 (EngFillPath.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x14025DB00 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x14032C248 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngFillPath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        const void *a5,
        MIX mix,
        FLONG flOptions)
{
  unsigned int v11; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v13; // rdi
  SURFOBJ *v14; // r14
  struct _PATHOBJ *v15; // r15
  struct _CLIPOBJ *DDIOBJ; // rsi
  BRUSHOBJ *v17; // rdi
  POINTL pptlBrushOrg; // [rsp+48h] [rbp-100h] BYREF
  struct _BRUSHOBJ v20; // [rsp+50h] [rbp-F8h] BYREF
  SURFOBJ *pso[8]; // [rsp+70h] [rbp-D8h] BYREF
  UMPDOBJ *v22[4]; // [rsp+B0h] [rbp-98h] BYREF
  UMPDOBJ *v23; // [rsp+D0h] [rbp-78h]

  v11 = 0;
  pptlBrushOrg = 0LL;
  memset(&v20, 0, sizeof(v20));
  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v22, CurrentThread);
  v13 = v23;
  if ( v23 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, v23);
    v14 = pso[0];
    v15 = (struct _PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v13, a2);
    if ( v14 )
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, a3, &v14->sizlBitmap);
    else
      DDIOBJ = 0LL;
    v17 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v13, (__int64)a4);
    if ( !v17 )
      v17 = CaptureAndFakeBRUSHOBJ(a4, &v20);
    if ( v14 )
    {
      if ( v17 )
      {
        if ( v15 )
        {
          if ( DDIOBJ )
          {
            if ( !DDIOBJ->iMode )
            {
              if ( a5 )
              {
                GreProbeAndReadFromUntrustedVa(&pptlBrushOrg, 8uLL, a5, 8uLL, 1uLL);
                if ( (unsigned int)bCheckSurfacePath(v14, v15, DDIOBJ) )
                {
                  if ( (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || v17->iSolidColor == -1 )
                  {
                    if ( EngFillPath(v14, v15, DDIOBJ, v17, &pptlBrushOrg, mix, flOptions) )
                      v11 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v22);
    return v11;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v22);
    return 0LL;
  }
}
