/*
 * XREFs of ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00100C0
 * Callers:
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C005C75C (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C005C8A0 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     VidSchTerminateProcess @ 0x1C005D310 (VidSchTerminateProcess.c)
 *     VidSchCreateProcess @ 0x1C005D780 (VidSchCreateProcess.c)
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0072234 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGGLOBAL::GetMaximumAdapterCount(DXGGLOBAL *this)
{
  return ((__int64 (__fastcall *)(DXGGLOBAL *))DxgCoreInterface[4])(this);
}
