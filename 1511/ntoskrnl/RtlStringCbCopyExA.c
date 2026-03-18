/*
 * XREFs of RtlStringCbCopyExA @ 0x140141D14
 * Callers:
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 * Callees:
 *     sub_140092618 @ 0x140092618 (sub_140092618.c)
 *     sub_140141D84 @ 0x140141D84 (sub_140141D84.c)
 */

NTSTATUS __stdcall RtlStringCbCopyExA(
        NTSTRSAFE_PSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PCSTR pszSrc,
        NTSTRSAFE_PSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags)
{
  NTSTATUS v6; // r8d
  __int64 v7; // r9
  _BYTE *v8; // r10
  NTSTATUS v9; // eax
  unsigned __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = (unsigned __int64)ppszDestEnd;
  v6 = sub_140141D84(pszDest, 256LL, pszSrc, 0LL);
  if ( v6 < 0 )
  {
    *v8 = v7;
  }
  else
  {
    v11 &= v7;
    v9 = sub_140092618(v8, 256LL, &v11, (__int64)qword_140772770);
    v6 = v9;
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
    {
      if ( pcbRemaining )
        *pcbRemaining = 256 - v11;
    }
  }
  return v6;
}
