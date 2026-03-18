/*
 * XREFs of ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C0095350
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C007A3A0 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C008EB04 (OutputDuplProcessDestroyDevice.c)
 *     OutputDuplProcessTerminate @ 0x1C008F6BC (OutputDuplProcessTerminate.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01283F4 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C008AB38 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
        ADAPTER_DISPLAY *this,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  __int64 v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = *((_QWORD *)this + 13);
  if ( !v6 || (result = a2(v6, a3), (int)result >= 0) )
  {
    v10[0] = *(_QWORD *)(*((_QWORD *)this + 2) + 252LL);
    v10[1] = (__int64)a2;
    v10[2] = a3;
    Global = DXGGLOBAL::GetGlobal(v10[0], (__int64)a2, a3, a4);
    return DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
             Global,
             lambda_eedd85b836c993498b6f79843d09d3d6_::_helper_func_cdecl_,
             v10);
  }
  return result;
}
