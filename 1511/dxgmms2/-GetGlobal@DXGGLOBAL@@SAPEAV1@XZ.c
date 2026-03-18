/*
 * XREFs of ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011CC0
 * Callers:
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C005416C (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C0054300 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     VidSchTerminateProcess @ 0x1C0054AF0 (VidSchTerminateProcess.c)
 *     VidSchCreateProcess @ 0x1C005F140 (VidSchCreateProcess.c)
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C006AB14 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     <none>
 */

struct DXGGLOBAL *DXGGLOBAL::GetGlobal(void)
{
  return (struct DXGGLOBAL *)((__int64 (*)(void))DxgCoreInterface[2])();
}
