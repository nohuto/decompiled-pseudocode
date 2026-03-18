/*
 * XREFs of NtGdiEngEraseSurface @ 0x1C02AB850
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     EngEraseSurface @ 0x1C00BCB20 (EngEraseSurface.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9354 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A93C0 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9578 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02A9D70 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngEraseSurface(struct _SURFOBJ *a1, RECTL *a2, ULONG a3)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  SURFOBJ *ThreadCurrentObj; // rax
  SURFOBJ *v7; // rbx
  __int64 result; // rax
  SURFOBJ *v9; // rsi
  unsigned int v10; // edi
  RECTL *prcl; // [rsp+20h] [rbp-58h] BYREF
  ULONG v12; // [rsp+28h] [rbp-50h]
  SURFOBJ *pso[3]; // [rsp+30h] [rbp-48h] BYREF
  struct _RECTL v14; // [rsp+48h] [rbp-30h] BYREF

  prcl = a2;
  v12 = a3;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (SURFOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  pso[2] = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++ThreadCurrentObj[5].sizlBitmap.cx;
  result = 0LL;
  if ( v7 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct UMPDOBJ *)v7);
    v9 = pso[0];
    if ( pso[0] )
    {
      CaptureRECTL(&prcl, &v14);
      if ( (HIDWORD(v7[5].hsurf) & 0x100) != 0 && !prcl )
      {
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngEraseSurface:prcl == NULL\n", 2494);
        UMPDSURFOBJ::~UMPDSURFOBJ(pso);
        --v7[5].sizlBitmap.cx;
        return 0LL;
      }
      v10 = bCheckSurfaceRect(v9, prcl, 0LL);
      if ( v10 )
        v10 = EngEraseSurface(v9, prcl, a3);
    }
    else
    {
      v10 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ(pso);
    --v7[5].sizlBitmap.cx;
    return v10;
  }
  return result;
}
