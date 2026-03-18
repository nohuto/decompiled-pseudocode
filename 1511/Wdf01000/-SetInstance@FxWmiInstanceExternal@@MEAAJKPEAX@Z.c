/*
 * XREFs of ?SetInstance@FxWmiInstanceExternal@@MEAAJKPEAX@Z @ 0x1C00618C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxWmiInstanceExternal::SetInstance(
        FxWmiInstanceExternal *this,
        __int64 InBufferSize,
        void *InBuffer)
{
  unsigned __int64 v4; // rcx
  int (__fastcall *m_Method)(WDFWMIINSTANCE__ *, unsigned int, void *); // rax

  if ( this->m_ObjectSize )
    v4 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v4 = 0LL;
  m_Method = this->m_SetInstanceCallback.m_Method;
  if ( m_Method )
    return ((__int64 (__fastcall *)(unsigned __int64, __int64, void *))m_Method)(v4, InBufferSize, InBuffer);
  else
    return 3221226182LL;
}
