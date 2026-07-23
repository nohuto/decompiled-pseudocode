/*
 * XREFs of LdrpAllocateFileNameBufferIfNeeded @ 0x1800132AC
 * Callers:
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180013208 (LdrpAppendAnsiStringToFilenameBuffer.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180018BD8 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     NtdllpReallocateStringRoutine @ 0x1800D2BC4 (NtdllpReallocateStringRoutine.c)
 */

__int64 __fastcall LdrpAllocateFileNameBufferIfNeeded(const void **a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // ebp
  __int64 v6; // rsi
  void *StringRoutine; // rax

  v2 = 0;
  if ( a2 > *((unsigned __int16 *)a1 + 1) )
  {
    if ( a2 > 0xFFFE )
      return (unsigned int)-1073741562;
    v5 = (a2 + 63) & 0xFFFFFFC0;
    if ( v5 > 0xFFFE )
      v5 = 65534;
    if ( a1[1] == a1 + 2 )
    {
      StringRoutine = (void *)NtdllpAllocateStringRoutine(v5);
      v6 = (__int64)StringRoutine;
      if ( !StringRoutine )
        return (unsigned int)-1073741801;
      if ( *(_WORD *)a1 )
        memmove(StringRoutine, a1[1], *(unsigned __int16 *)a1);
    }
    else
    {
      v6 = NtdllpReallocateStringRoutine(v5);
    }
    if ( v6 )
    {
      a1[1] = (const void *)v6;
      *((_WORD *)a1 + 1) = v5;
      return v2;
    }
    return (unsigned int)-1073741801;
  }
  return v2;
}
