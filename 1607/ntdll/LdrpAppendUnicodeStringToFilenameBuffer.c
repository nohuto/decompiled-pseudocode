/*
 * XREFs of LdrpAppendUnicodeStringToFilenameBuffer @ 0x180018C68
 * Callers:
 *     LdrpPreprocessDllName @ 0x180015880 (LdrpPreprocessDllName.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     LdrpBuildSystem32FileName @ 0x180018BF8 (LdrpBuildSystem32FileName.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180018BD8 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     NtdllpReallocateStringRoutine @ 0x1800D2BC4 (NtdllpReallocateStringRoutine.c)
 */

__int64 __fastcall LdrpAppendUnicodeStringToFilenameBuffer(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned int v7; // esi
  __int64 v8; // rdi
  PVOID StringRoutine; // rax

  v4 = 0;
  if ( *a2 )
  {
    v5 = *a1 + *a2 + 2;
    if ( v5 <= a1[1] )
    {
LABEL_3:
      v4 = 0;
      memmove((void *)(*((_QWORD *)a1 + 1) + *a1), *((const void **)a2 + 1), *a2);
      *a1 += *a2;
      *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
      return v4;
    }
    if ( v5 > 0xFFFE )
      return (unsigned int)-1073741562;
    v7 = (v5 + 63) & 0xFFFFFFC0;
    if ( v7 > 0xFFFE )
      v7 = 65534;
    if ( *((unsigned __int16 **)a1 + 1) == a1 + 8 )
    {
      StringRoutine = NtdllpAllocateStringRoutine(v7);
      v8 = (__int64)StringRoutine;
      if ( !StringRoutine )
        return (unsigned int)-1073741801;
      if ( *a1 )
        memmove(StringRoutine, *((const void **)a1 + 1), *a1);
    }
    else
    {
      v8 = NtdllpReallocateStringRoutine(v7);
    }
    if ( v8 )
    {
      *((_QWORD *)a1 + 1) = v8;
      a1[1] = v7;
      goto LABEL_3;
    }
    return (unsigned int)-1073741801;
  }
  return v4;
}
