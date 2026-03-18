/*
 * XREFs of NtGdiEngAlphaBlend @ 0x14032C760
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     EngAlphaBlend @ 0x1400E4850 (EngAlphaBlend.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400F666C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400F67B8 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1400F6830 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x140185094 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x140236F5C (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x140255B8C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x14032C35C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        __int64 a3,
        __int64 a4,
        RECTL *a5,
        RECTL *a6,
        __int64 a7)
{
  unsigned int v9; // edi
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v11; // r14
  unsigned __int64 pBlendObj; // rbx
  SURFOBJ *v14; // r15
  SURFOBJ *v15; // rsi
  RECTL *prclSrc; // r12
  RECTL *prclDest; // r13
  struct _CLIPOBJ *v18; // rdx
  struct _XLATEOBJ *v19; // rdi
  struct _CLIPOBJ *pco; // [rsp+40h] [rbp-198h]
  RECTL *v21; // [rsp+50h] [rbp-188h] BYREF
  RECTL *v22; // [rsp+58h] [rbp-180h] BYREF
  __int64 v23; // [rsp+60h] [rbp-178h]
  __int64 v24; // [rsp+68h] [rbp-170h]
  UMPDOBJ *v25; // [rsp+70h] [rbp-168h]
  SURFOBJ *v26; // [rsp+78h] [rbp-160h]
  SURFOBJ *v27; // [rsp+80h] [rbp-158h]
  __int64 v28; // [rsp+88h] [rbp-150h]
  SURFOBJ *psoSrc[8]; // [rsp+90h] [rbp-148h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+D0h] [rbp-108h] BYREF
  UMPDOBJ *v31[4]; // [rsp+110h] [rbp-C8h] BYREF
  UMPDOBJ *v32; // [rsp+130h] [rbp-A8h]
  struct _RECTL v33; // [rsp+170h] [rbp-68h] BYREF
  struct _RECTL v34; // [rsp+180h] [rbp-58h] BYREF

  v23 = a4;
  v24 = a3;
  v28 = a3;
  v22 = a5;
  v21 = a6;
  v9 = 1;
  v34 = 0LL;
  v33 = 0LL;
  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v31, CurrentThread);
  v11 = v32;
  v25 = v32;
  if ( !v32 )
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v31);
    return 0LL;
  }
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, v32);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v11);
  if ( a7 == *((_QWORD *)v11 + 39) )
    pBlendObj = *((_QWORD *)v11 + 38);
  else
    pBlendObj = 0LL;
  if ( (*((_DWORD *)v11 + 107) & 0x100) != 0 && pBlendObj )
    pBlendObj &= -(__int64)GrepIsEngineVa((void *)pBlendObj);
  v14 = psoDest[0];
  v26 = psoDest[0];
  v15 = psoSrc[0];
  v27 = psoSrc[0];
  if ( !psoDest[0] || !psoSrc[0] || !pBlendObj || !a5 || !a6 )
    goto LABEL_19;
  CaptureRECTL(&v21, &v33);
  CaptureRECTL(&v22, &v34);
  prclSrc = v21;
  if ( !bOrder(v21) )
    goto LABEL_20;
  prclDest = v22;
  if ( !bOrder(v22) )
    goto LABEL_20;
  pco = UMPDOBJ::GetDDIOBJ(v11, v18, &v14->sizlBitmap);
  v19 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v11, v23);
  if ( (unsigned int)bCheckSurfaceRect(v15, prclSrc, 0LL) && (unsigned int)bCheckXlate(v15, v19) )
    v9 = EngAlphaBlend(v14, v15, pco, v19, prclDest, prclSrc, (BLENDOBJ *)pBlendObj);
  else
LABEL_19:
    v9 = 0;
LABEL_20:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v31);
  return v9;
}
