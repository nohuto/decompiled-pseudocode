/*
 * XREFs of ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x1801452A0
 * Callers:
 *     ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x1801453F0 (-Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801466DC (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::GetManipulationThreadMessageCallSendHost(
        CManipulationManager *this,
        struct IMessageCallSendHost **a2)
{
  __int64 v4; // rcx

  *a2 = 0LL;
  if ( *((_QWORD *)this + 42) )
  {
    v4 = *((_QWORD *)this + 42);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *a2 = (struct IMessageCallSendHost *)*((_QWORD *)this + 42);
  }
  return *((_QWORD *)this + 42) == 0LL ? 0x80004005 : 0;
}
