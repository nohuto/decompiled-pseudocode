/*
 * XREFs of ?SetInstance@FxWmiInstanceInternal@@MEAAJKPEAX@Z @ 0x1C00618F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxWmiInstanceInternal::SetInstance(
        FxWmiInstanceInternal *this,
        unsigned int InBufferSize,
        void *InBuffer)
{
  return ((__int64 (__fastcall *)(FxDeviceBase *, FxWmiInstanceInternal *, _QWORD, void *))this->m_SetInstance)(
           this->m_Provider->m_Parent->m_DeviceBase,
           this,
           InBufferSize,
           InBuffer);
}
