/*
 * XREFs of RtlStringCbCatExA @ 0x1401A85AC
 * Callers:
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 * Callees:
 *     sub_140092618 @ 0x140092618 (sub_140092618.c)
 *     sub_1401A88D0 @ 0x1401A88D0 (sub_1401A88D0.c)
 */

NTSTATUS __stdcall RtlStringCbCatExA(
        NTSTRSAFE_PSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PCSTR pszSrc,
        NTSTRSAFE_PSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags)
{
  NTSTATUS result; // eax
  __int64 v8; // r10
  size_t v9; // rbx
  char *v10; // rdi
  NTSTRSAFE_PCSTR v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = pszSrc;
  result = sub_1401A88D0(pszDest, cbDest, &v11);
  if ( result >= 0 )
  {
    v9 = 256LL - (_QWORD)v11;
    v10 = (char *)&v11[v8];
    if ( v11 == (NTSTRSAFE_PCSTR)256 || (_QWORD)v11 == 255LL )
    {
      if ( !v8 )
        return -1073741811;
      result = -2147483643;
    }
    else
    {
      v11 = 0LL;
      result = sub_140092618(v10, v9, &v11, (__int64)", ");
      v10 = &v10[(_QWORD)v11];
      v9 -= (unsigned __int64)v11;
      if ( (int)(result + 0x80000000) >= 0 && result != -2147483643 )
        return result;
    }
    if ( ppszDestEnd )
      *ppszDestEnd = v10;
    if ( pcbRemaining )
      *pcbRemaining = v9;
  }
  return result;
}
