/*
 * XREFs of ?SetLength@StringBuffer@Common@@QEAAJK@Z @ 0x18001C910
 * Callers:
 *     ?SetValue@StringBuffer@Common@@QEAAJPEBGK@Z @ 0x18001C850 (-SetValue@StringBuffer@Common@@QEAAJPEBGK@Z.c)
 * Callees:
 *     ?SetCapacity@StringBuffer@Common@@QEAAJK@Z @ 0x18001C764 (-SetCapacity@StringBuffer@Common@@QEAAJK@Z.c)
 */

int __fastcall Common::StringBuffer::SetLength(Common::StringBuffer *this, unsigned int a2)
{
  int v2; // eax
  __int64 v3; // rbx
  unsigned int v5; // eax
  int result; // eax

  v2 = *((_DWORD *)this + 4);
  v3 = a2;
  if ( v2 )
    v5 = v2 - 1;
  else
    v5 = 0;
  if ( a2 <= v5 || (result = Common::StringBuffer::SetCapacity((void **)this, a2), result >= 0) )
  {
    *(_DWORD *)this = v3;
    if ( (_DWORD)v3 )
      *(_WORD *)(*((_QWORD *)this + 1) + 2 * v3) = 0;
    return 0;
  }
  return result;
}
