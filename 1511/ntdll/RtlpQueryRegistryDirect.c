/*
 * XREFs of RtlpQueryRegistryDirect @ 0x180046E70
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x180046A98 (RtlpCallQueryRegistryRoutine.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180018174 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlpQueryRegistryDirect(unsigned int a1, unsigned int *a2, size_t a3, unsigned int *a4)
{
  unsigned __int16 v4; // bx
  void *v8; // rcx
  unsigned __int64 v10; // rax
  PVOID StringRoutine; // rax

  v4 = a3;
  if ( a1 - 1 > 1 && a1 != 7 )
  {
    if ( (unsigned int)a3 <= 4 )
    {
      if ( a4 == a2 || !(_DWORD)a3 )
        return 0LL;
      goto LABEL_6;
    }
    v10 = *a4;
    if ( (v10 & 0x80000000) == 0LL )
    {
      a3 = (unsigned int)a3;
      if ( v10 >= (unsigned __int64)(unsigned int)a3 + 8 )
      {
        *a4 = a3;
        v8 = a4 + 2;
        a4[1] = a1;
        goto LABEL_7;
      }
    }
    else if ( -(int)v10 >= (unsigned int)a3 )
    {
LABEL_6:
      a3 = (unsigned int)a3;
      v8 = a4;
LABEL_7:
      memmove(v8, a2, a3);
      return 0LL;
    }
    return 3221225507LL;
  }
  if ( (unsigned int)a3 > 0xFFFE )
    v4 = -2;
  if ( *((_QWORD *)a4 + 1) )
  {
    if ( v4 > *((_WORD *)a4 + 1) )
      return 3221225507LL;
LABEL_16:
    memmove(*((void **)a4 + 1), a2, v4);
    *(_WORD *)a4 = v4 - 2;
    return 0LL;
  }
  StringRoutine = NtdllpAllocateStringRoutine(v4);
  *((_QWORD *)a4 + 1) = StringRoutine;
  if ( StringRoutine )
  {
    *((_WORD *)a4 + 1) = v4;
    goto LABEL_16;
  }
  return 3221225495LL;
}
