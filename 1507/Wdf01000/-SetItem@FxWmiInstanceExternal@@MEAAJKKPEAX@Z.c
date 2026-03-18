/*
 * XREFs of ?SetItem@FxWmiInstanceExternal@@MEAAJKKPEAX@Z @ 0x1C0069820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxWmiInstanceExternal::SetItem(
        FxWmiInstanceExternal *this,
        __int64 DataItemId,
        __int64 InBufferSize,
        void *InBuffer)
{
  unsigned __int64 v5; // rcx
  int (__fastcall *m_Method)(WDFWMIINSTANCE__ *, unsigned int, unsigned int, void *); // rax

  if ( this->m_ObjectSize )
    v5 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v5 = 0LL;
  m_Method = this->m_SetItemCallback.m_Method;
  if ( m_Method )
    return ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64, void *))m_Method)(
             v5,
             DataItemId,
             InBufferSize,
             InBuffer);
  else
    return 3221226182LL;
}
