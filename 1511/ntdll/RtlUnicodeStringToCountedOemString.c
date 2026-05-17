/*
 * XREFs of RtlUnicodeStringToCountedOemString @ 0x1800DA5E0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180018174 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 *     RtlUnicodeToOemN @ 0x18006F730 (RtlUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x180079958 (RtlpDidUnicodeToOemWork.c)
 *     RtlxUnicodeStringToOemSize @ 0x18007B680 (RtlxUnicodeStringToOemSize.c)
 */

__int64 __fastcall RtlUnicodeStringToCountedOemString(unsigned __int16 *a1, PWCH *a2, char a3)
{
  unsigned __int64 v6; // rax
  __int64 result; // rax
  __int64 StringRoutine; // rax
  int v9; // edi
  unsigned int v10; // [rsp+88h] [rbp+20h] BYREF

  if ( NlsMbOemCodePageTag )
    LODWORD(v6) = RtlxUnicodeStringToOemSize(a2);
  else
    v6 = ((unsigned __int64)*(unsigned __int16 *)a2 + 2) >> 1;
  result = (unsigned int)(v6 - 1);
  if ( !(_DWORD)result )
  {
    *(_DWORD *)a1 = 0;
    *((_QWORD *)a1 + 1) = 0LL;
    return result;
  }
  if ( (unsigned int)result > 0xFFFF )
    return 3221225712LL;
  *a1 = result;
  if ( a3 )
  {
    a1[1] = result;
    StringRoutine = NtdllpAllocateStringRoutine((unsigned int)result);
    *((_QWORD *)a1 + 1) = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
  }
  else if ( (unsigned __int16)result > a1[1] )
  {
    return 2147483653LL;
  }
  v9 = RtlUnicodeToOemN(*((_BYTE **)a1 + 1), *a1, &v10, a2[1], *(unsigned __int16 *)a2);
  if ( v9 >= 0 && !RtlpDidUnicodeToOemWork(a1, (__int64)a2) )
    v9 = -1073741470;
  if ( v9 >= 0 )
    v9 = 0;
  if ( v9 < 0 )
  {
    if ( a3 )
    {
      NtdllpFreeStringRoutine(*((_QWORD *)a1 + 1));
      *((_QWORD *)a1 + 1) = 0LL;
    }
  }
  return (unsigned int)v9;
}
