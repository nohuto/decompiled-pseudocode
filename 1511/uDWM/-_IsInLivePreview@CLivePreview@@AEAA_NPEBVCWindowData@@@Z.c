/*
 * XREFs of ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18007268C
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180033AB4 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800359D0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180035D7C (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x180035EB0 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180039D68 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z @ 0x18008490C (-ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CLivePreview::_IsInLivePreview(CLivePreview *this, const struct CWindowData *a2)
{
  char v2; // r9
  __int64 v3; // r8

  v2 = 0;
  v3 = (unsigned int)(*((_DWORD *)this + 78) - 1);
  if ( (int)v3 >= 0 )
  {
    while ( *(const struct CWindowData **)(*((_QWORD *)this + 36) + 40 * v3) != a2 )
    {
      v3 = (unsigned int)(v3 - 1);
      if ( (int)v3 < 0 )
        return v2;
    }
    return 1;
  }
  return v2;
}
