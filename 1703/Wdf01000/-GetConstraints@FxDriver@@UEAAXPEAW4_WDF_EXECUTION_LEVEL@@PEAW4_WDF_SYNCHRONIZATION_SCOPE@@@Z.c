/*
 * XREFs of ?GetConstraints@FxDriver@@UEAAXPEAW4_WDF_EXECUTION_LEVEL@@PEAW4_WDF_SYNCHRONIZATION_SCOPE@@@Z @ 0x1C0021930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxDriver::GetConstraints(
        FxDriver *this,
        _WDF_EXECUTION_LEVEL *ExecutionLevel,
        _WDF_SYNCHRONIZATION_SCOPE *SynchronizationScope)
{
  if ( ExecutionLevel )
    *ExecutionLevel = this->m_SpinLock.m_Lock;
  if ( SynchronizationScope )
    *SynchronizationScope = SHIDWORD(this->m_SpinLock.m_Lock);
}
