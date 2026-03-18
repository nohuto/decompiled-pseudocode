/*
 * XREFs of ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00867B8
 * Callers:
 *     OutputDuplProcessTerminate @ 0x1C0074920 (OutputDuplProcessTerminate.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C0078684 (OutputDuplProcessDestroyDevice.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0095E84 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0148460 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C00A3EEC (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
        ADAPTER_DISPLAY *this,
        __int64 (__fastcall *a2)(__int64, void *),
        void *a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *((_QWORD *)this + 13);
  if ( !v5 || (result = a2(v5, a3), (int)result >= 0) )
  {
    v9[0] = *(_QWORD *)(*((_QWORD *)this + 2) + 268LL);
    v9[1] = a2;
    v9[2] = a3;
    Global = DXGGLOBAL::GetGlobal();
    return DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
             Global,
             lambda_de3a9c4ca82130b89abd09a8dda67964_::_lambda_invoker_cdecl_,
             v9);
  }
  return result;
}
