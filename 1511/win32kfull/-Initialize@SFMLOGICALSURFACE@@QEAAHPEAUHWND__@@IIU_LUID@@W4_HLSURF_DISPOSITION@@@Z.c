/*
 * XREFs of ?Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x1C007B758
 * Callers:
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C0016A14 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C007D684 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SFMLOGICALSURFACE::Initialize(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 result; // rax

  SfmTokenArray::Initialize((SfmTokenArray *)(a1 + 224));
  *(_DWORD *)(a1 + 248) &= ~2u;
  *(_QWORD *)(a1 + 184) = a2;
  GreInitializePushLock(a1 + 264);
  *(_QWORD *)(a1 + 288) = -1LL;
  *(_DWORD *)(a1 + 248) &= 0xFFFFFFA2;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 208) = a5;
  *(_DWORD *)(a1 + 296) = a6;
  *(_QWORD *)(a1 + 272) = a2;
  *(_DWORD *)(a1 + 284) = a4;
  *(_DWORD *)(a1 + 280) = a3;
  *(_QWORD *)(a1 + 40) = a1 + 32;
  *(_QWORD *)(a1 + 32) = a1 + 32;
  *(_QWORD *)(a1 + 56) = a1 + 48;
  *(_QWORD *)(a1 + 48) = a1 + 48;
  result = 1LL;
  *(_DWORD *)(a1 + 252) = 0;
  return result;
}
