/*
 * XREFs of RtlUnicodeStringCatString @ 0x1800DA120
 * Callers:
 *     RtlpEnsureTailingSlashAndAddToList @ 0x1800DA2E8 (RtlpEnsureTailingSlashAndAddToList.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker_0 @ 0x1800DA1CC (RtlWideCharArrayCopyStringWorker_0.c)
 */

__int64 __fastcall RtlUnicodeStringCatString(unsigned __int16 *a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  unsigned __int16 v7; // dx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  result = 0LL;
  if ( (*(_BYTE *)a1 & 1) != 0 )
    return 3221225485LL;
  v7 = a1[1];
  if ( (v7 & 1) != 0 || *a1 > v7 || v7 == 0xFFFF )
    return 3221225485LL;
  if ( !*((_QWORD *)a1 + 1) && (*a1 || v7) )
  {
    result = 3221225485LL;
  }
  else
  {
    v3 = *((_QWORD *)a1 + 1);
    v4 = (unsigned __int64)v7 >> 1;
    v5 = (unsigned __int64)*a1 >> 1;
  }
  if ( (int)result >= 0 )
  {
    v8 = 0LL;
    result = RtlWideCharArrayCopyStringWorker_0(v3 + 2 * v5, v4 - v5, &v8);
    *a1 = 2 * (v8 + v5);
  }
  return result;
}
