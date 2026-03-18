/*
 * XREFs of NtGdiEngEraseSurface @ 0x1C02AC230
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     EngEraseSurface @ 0x1C00A2820 (EngEraseSurface.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9B5C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A9C28 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9DFC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02AA6CC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngEraseSurface(struct _SURFOBJ *a1, RECTL *a2, ULONG a3)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v7; // rbx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  SURFOBJ *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edi
  RECTL *prcl; // [rsp+20h] [rbp-98h] BYREF
  ULONG v18; // [rsp+28h] [rbp-90h]
  struct UMPDOBJ *v19; // [rsp+30h] [rbp-88h]
  SURFOBJ *v20; // [rsp+38h] [rbp-80h]
  SURFOBJ *pso[8]; // [rsp+40h] [rbp-78h] BYREF
  struct _RECTL v22; // [rsp+80h] [rbp-38h] BYREF

  prcl = a2;
  v18 = a3;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  v19 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v7 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)v7);
    v12 = pso[0];
    v20 = pso[0];
    if ( pso[0] )
    {
      CaptureRECTL(&prcl, &v22);
      if ( (*((_DWORD *)v7 + 103) & 0x100) != 0 && !prcl )
      {
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngEraseSurface:prcl == NULL\n", 2555);
        UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso, v13, v14, v15);
        --*((_DWORD *)v7 + 108);
        return 0LL;
      }
      v16 = bCheckSurfaceRect(v12, prcl, 0LL);
      if ( v16 )
        v16 = EngEraseSurface(v12, prcl, a3);
    }
    else
    {
      v16 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso, v9, v10, v11);
    --*((_DWORD *)v7 + 108);
    return v16;
  }
  return result;
}
