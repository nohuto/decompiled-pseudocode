/*
 * XREFs of ?SetValue@StringBuffer@Common@@QEAAJPEBGK@Z @ 0x180027FDC
 * Callers:
 *     ?SetValueFromString@StringBuffer@Common@@QEAAJPEBG@Z @ 0x180027F84 (-SetValueFromString@StringBuffer@Common@@QEAAJPEBG@Z.c)
 *     ?DecryptString@Internal@ExecutionModel@@YAJPEBEKAEAVStringBuffer@Common@@@Z @ 0x180048B28 (-DecryptString@Internal@ExecutionModel@@YAJPEBEKAEAVStringBuffer@Common@@@Z.c)
 * Callees:
 *     ?SetCapacity@StringBuffer@Common@@QEAAJK@Z @ 0x180027EF0 (-SetCapacity@StringBuffer@Common@@QEAAJK@Z.c)
 *     ?SetLength@StringBuffer@Common@@QEAAJK@Z @ 0x18002809C (-SetLength@StringBuffer@Common@@QEAAJK@Z.c)
 *     memcpy_0 @ 0x18002BC72 (memcpy_0.c)
 */

int __fastcall Common::StringBuffer::SetValue(Common::StringBuffer *this, const unsigned __int16 *Src, unsigned int a3)
{
  unsigned int v3; // ebp
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int i; // edx
  int result; // eax

  v3 = 2 * a3;
  if ( a3 > 0x7FFFFFFF )
    return -2147024362;
  v7 = *((_DWORD *)this + 4);
  if ( v7 )
    v8 = v7 - 1;
  else
    v8 = 0;
  if ( a3 <= v8 && (!v7 || (unsigned int)(v7 - 1) <= 0x20) )
    goto LABEL_8;
  if ( a3 > 0x20 )
  {
    i = a3;
  }
  else
  {
    for ( i = 8; i < a3; i *= 2 )
      ;
  }
  result = Common::StringBuffer::SetCapacity((void **)this, i);
  if ( result >= 0 )
  {
LABEL_8:
    result = Common::StringBuffer::SetLength(this, a3);
    if ( result >= 0 )
    {
      memcpy_0(*((void **)this + 1), Src, v3);
      return 0;
    }
  }
  return result;
}
