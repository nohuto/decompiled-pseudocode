/*
 * XREFs of ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00990F0
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C006D8D0 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C00BBB98 (OutputDuplProcessDestroyDevice.c)
 *     OutputDuplProcessTerminate @ 0x1C00BBBD0 (OutputDuplProcessTerminate.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012E8EC (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C0096C10 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
        ADAPTER_DISPLAY *this,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *((_QWORD *)this + 16);
  if ( !v5 || (result = a2(v5, a3), (int)result >= 0) )
  {
    v9[0] = *(_QWORD *)(*((_QWORD *)this + 2) + 252LL);
    v9[1] = (__int64)a2;
    v9[2] = a3;
    Global = DXGGLOBAL::GetGlobal(v9[0]);
    return DXGGLOBAL::IterateOutputDuplMgrsWithCallback(Global, sub_1C0124C00, v9);
  }
  return result;
}
