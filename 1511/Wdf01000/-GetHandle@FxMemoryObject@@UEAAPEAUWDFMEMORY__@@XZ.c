/*
 * XREFs of ?GetHandle@FxMemoryObject@@UEAAPEAUWDFMEMORY__@@XZ @ 0x1C006BD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFMEMORY__ *__fastcall FxMemoryObject::GetHandle(FxMemoryObject *this)
{
  if ( *((_WORD *)&this[-1].m_Globals + 5) )
    return (WDFMEMORY__ *)((unsigned __int64)&this[-1].m_Globals ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}
