/*
 * XREFs of ?GetAndClearCurrentFenceForSignaling@CFlipExBuffer@@MEAA_KXZ @ 0x1C00494C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CFlipExBuffer::GetAndClearCurrentFenceForSignaling(CFlipExBuffer *this)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *((_QWORD *)this + 47);
  result = 0LL;
  if ( v1 )
  {
    *((_QWORD *)this + 47) = 0LL;
    result = v1;
    *((_QWORD *)this + 48) = v1;
  }
  return result;
}
