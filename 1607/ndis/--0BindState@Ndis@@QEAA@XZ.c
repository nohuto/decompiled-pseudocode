/*
 * XREFs of ??0BindState@Ndis@@QEAA@XZ @ 0x1C00A6D60
 * Callers:
 *     ??0BindStack@Ndis@@QEAA@XZ @ 0x1C00A3840 (--0BindStack@Ndis@@QEAA@XZ.c)
 *     ??0NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A3DBC (--0NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 * Callees:
 *     ?grow@?$KArray@PEAX@Rtl@@AEAA_N_K@Z @ 0x1C00A7034 (-grow@-$KArray@PEAX@Rtl@@AEAA_N_K@Z.c)
 */

Ndis::BindState *__fastcall Ndis::BindState::BindState(Ndis::BindState *this)
{
  Rtl::KArray<void *> *p_m_bindContext; // rcx

  this->m_unbindReasons = 2;
  this->Miniport = 0LL;
  *(_WORD *)&this->AllowBindDespiteMandatory = 0;
  this->NeedsPauseAction = 0;
  this->m_AdditionalContext = 0LL;
  *(_QWORD *)&this->m_pauseReasons = 1LL;
  *(_QWORD *)&this->m_LastErrorCode = 0LL;
  p_m_bindContext = &this->m_bindContext;
  *(_QWORD *)&p_m_bindContext->m_bufferSize = 0LL;
  p_m_bindContext->_p = 0LL;
  Rtl::KArray<void *>::grow();
  return this;
}
