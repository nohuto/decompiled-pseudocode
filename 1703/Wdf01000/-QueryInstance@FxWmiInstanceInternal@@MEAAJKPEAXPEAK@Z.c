/*
 * XREFs of ?QueryInstance@FxWmiInstanceInternal@@MEAAJKPEAXPEAK@Z @ 0x1C00739F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxWmiInstanceInternal::QueryInstance(
        FxWmiInstanceInternal *this,
        unsigned int OutBufferSize,
        void *OutBuffer,
        unsigned int *BufferUsed)
{
  return ((__int64 (__fastcall *)(FxDeviceBase *, FxWmiInstanceInternal *, _QWORD, void *, unsigned int *))this->m_QueryInstance)(
           this->m_Provider->m_Parent->m_DeviceBase,
           this,
           OutBufferSize,
           OutBuffer,
           BufferUsed);
}
