/*
 * XREFs of ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C009B16C
 * Callers:
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C009AE00 (ndisMDeleteMiniportBlockOnRemove.c)
 * Callees:
 *     <none>
 */

void __fastcall Ndis::BindEngine::~BindEngine(Ndis::BindEngine *this)
{
  KWaitEventBase::Wait(&this->m_backgroundWorkFinishedEvent);
}
