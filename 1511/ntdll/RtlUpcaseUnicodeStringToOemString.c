/*
 * XREFs of RtlUpcaseUnicodeStringToOemString @ 0x180079480
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180018174 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 *     RtlpDidUnicodeToOemWork @ 0x180079958 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1800799F0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x18007B680 (RtlxUnicodeStringToOemSize.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToOemString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned __int64 v6; // rax
  int v7; // edi
  __int64 StringRoutine; // rax
  unsigned int v10; // [rsp+78h] [rbp+20h] BYREF

  if ( NlsMbOemCodePageTag )
    LODWORD(v6) = RtlxUnicodeStringToOemSize(a2);
  else
    v6 = ((unsigned __int64)*a2 + 2) >> 1;
  if ( (unsigned int)v6 > 0xFFFF )
    return 3221225712LL;
  *a1 = v6 - 1;
  if ( a3 )
  {
    a1[1] = v6;
    StringRoutine = NtdllpAllocateStringRoutine((unsigned int)v6);
    *((_QWORD *)a1 + 1) = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
  }
  else if ( (unsigned __int16)(v6 - 1) >= a1[1] )
  {
    return 2147483653LL;
  }
  v7 = RtlUpcaseUnicodeToOemN(*((_QWORD *)a1 + 1), *a1, (unsigned int)&v10, *((_QWORD *)a2 + 1), *a2);
  if ( v7 >= 0 && !(unsigned __int8)RtlpDidUnicodeToOemWork(a1, a2) )
    v7 = -1073741470;
  if ( v7 >= 0 )
  {
    *(_BYTE *)(v10 + *((_QWORD *)a1 + 1)) = 0;
    v7 = 0;
  }
  if ( v7 < 0 )
  {
    if ( a3 )
    {
      NtdllpFreeStringRoutine(*((_QWORD *)a1 + 1));
      *((_QWORD *)a1 + 1) = 0LL;
    }
  }
  return (unsigned int)v7;
}
