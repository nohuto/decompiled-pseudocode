/*
 * XREFs of RtlStringCbCopyExA @ 0x14016FD30
 * Callers:
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 * Callees:
 *     sub_1400F06C0 @ 0x1400F06C0 (sub_1400F06C0.c)
 *     sub_14016FDA0 @ 0x14016FDA0 (sub_14016FDA0.c)
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
  v6 = sub_14016FDA0(pszDest, 256LL, pszSrc, 0LL);
  if ( v6 < 0 )
  {
    *v8 = v7;
  }
  else
  {
    v11 &= v7;
    v9 = sub_1400F06C0(v8, 256LL, &v11, (__int64)qword_1407E9620);
    v6 = v9;
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
    {
      if ( pcbRemaining )
        *pcbRemaining = 256 - v11;
    }
  }
  return v6;
}
