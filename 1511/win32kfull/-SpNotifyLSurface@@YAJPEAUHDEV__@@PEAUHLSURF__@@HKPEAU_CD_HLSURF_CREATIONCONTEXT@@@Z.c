/*
 * XREFs of ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C007D76C
 * Callers:
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C0016A14 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C007B6D4 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C007D684 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 * Callees:
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C003C1BC (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall SpNotifyLSurface(_QWORD *a1, HLSURF a2, int a3, int a4, struct _CD_HLSURF_CREATIONCONTEXT *a5)
{
  __int64 v6; // rbp
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v12; // xmm1_8
  _OWORD v13[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v14; // [rsp+70h] [rbp+8h] BYREF

  memset(v13, 0, 40);
  v6 = a3;
  v9 = a1[8];
  v14 = a1;
  GreAcquireSemaphore(v9);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", a1[8], 11LL);
  if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v14) )
  {
    *(_QWORD *)&v13[0] = a2;
    DWORD2(v13[0]) = a4;
    if ( a5 )
    {
      v12 = *((_QWORD *)a5 + 2);
      v13[1] = *(_OWORD *)a5;
      *(_QWORD *)&v13[2] = v12;
    }
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _OWORD *))a1[433])(
            a1[228],
            65541 - (unsigned int)((_DWORD)v6 != 0),
            40LL,
            v13);
    EtwBindLogicalSurfaceRHEvent(a2, v6);
  }
  else
  {
    v10 = -1073741822;
  }
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", a1[8]);
  GreReleaseSemaphoreInternal(a1[8]);
  return v10;
}
