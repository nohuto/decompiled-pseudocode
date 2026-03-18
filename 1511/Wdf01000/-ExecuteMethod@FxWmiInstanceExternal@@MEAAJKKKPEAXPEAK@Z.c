/*
 * XREFs of ?ExecuteMethod@FxWmiInstanceExternal@@MEAAJKKKPEAXPEAK@Z @ 0x1C0061360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxWmiInstanceExternal::ExecuteMethod(
        FxWmiInstanceExternal *this,
        unsigned int MethodId,
        __int64 InBufferSize,
        __int64 OutBufferSize,
        void *Buffer,
        unsigned int *BufferUsed)
{
  unsigned __int64 v7; // rcx
  int (__fastcall *m_Method)(WDFWMIINSTANCE__ *, unsigned int, unsigned int, unsigned int, void *, unsigned int *); // rax

  if ( this->m_ObjectSize )
    v7 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v7 = 0LL;
  m_Method = this->m_ExecuteMethodCallback.m_Method;
  if ( m_Method )
    return ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, __int64, void *, unsigned int *))m_Method)(
             v7,
             MethodId,
             InBufferSize,
             OutBufferSize,
             Buffer,
             BufferUsed);
  else
    return 3221226133LL;
}
