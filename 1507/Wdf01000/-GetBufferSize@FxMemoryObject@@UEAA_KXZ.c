/*
 * XREFs of ?GetBufferSize@FxMemoryObject@@UEAA_KXZ @ 0x1C0033560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall FxMemoryObject::GetBufferSize(FxMemoryObject *this)
{
  return *(_QWORD *)&this->m_Type;
}
