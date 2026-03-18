/*
 * XREFs of ?CompleteWithPriority@FxRequest@@QEAAJJD@Z @ 0x1C00748B4
 * Callers:
 *     imp_WdfRequestCompleteWithPriorityBoost @ 0x1C0074EC0 (imp_WdfRequestCompleteWithPriorityBoost.c)
 * Callees:
 *     WPP_IFR_SF_qqxd @ 0x1C0074D28 (WPP_IFR_SF_qqxd.c)
 */

__int64 __fastcall FxRequest::CompleteWithPriority(
        FxRequest *this,
        unsigned int Status,
        __int64 PriorityBoost,
        unsigned __int16 a4)
{
  char v4; // si
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  const void *_a4; // rax
  _IRP *globals; // rcx
  const _GUID *v11; // [rsp+20h] [rbp-38h]

  v4 = PriorityBoost;
  m_Globals = this->m_Globals;
  _a4 = 0LL;
  if ( m_Globals->FxVerboseOn )
  {
    globals = this->m_Irp.m_Irp;
    if ( this->m_ObjectSize )
      _a4 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qqxd(
      m_Globals,
      (unsigned __int8)m_Globals,
      PriorityBoost,
      0xCu,
      v11,
      _a4,
      globals,
      globals->IoStatus.Information,
      Status);
  }
  this->m_PriorityBoost = v4;
  return FxRequest::CompleteInternal(this, (_FX_DRIVER_GLOBALS *)Status, PriorityBoost, a4);
}
