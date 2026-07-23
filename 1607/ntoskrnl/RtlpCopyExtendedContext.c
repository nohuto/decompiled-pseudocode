/*
 * XREFs of RtlpCopyExtendedContext @ 0x1400F1048
 * Callers:
 *     KiDispatchException @ 0x1400F1BB0 (KiDispatchException.c)
 *     RtlpReadExtendedContext @ 0x1404FB260 (RtlpReadExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x1404FC260 (RtlpWriteExtendedContext.c)
 * Callees:
 *     RtlpCopyXStateChunk @ 0x1400A6B18 (RtlpCopyXStateChunk.c)
 *     RtlpCopyLegacyContext @ 0x1400F1104 (RtlpCopyLegacyContext.c)
 *     RtlpValidateContextFlags @ 0x1400F2870 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlpCopyExtendedContext(char a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  unsigned int v10; // r10d
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rdx
  _BYTE v16[24]; // [rsp+30h] [rbp-18h] BYREF

  result = RtlpValidateContextFlags(a4, v16);
  if ( (int)result >= 0 )
  {
    v11 = a6;
    if ( !a3 )
      a3 = a2;
    if ( !a6 )
      v11 = a5;
    if ( (v16[0] & 1) != 0 )
    {
      v12 = *(int *)(a3 + 8);
      v13 = *(int *)(v11 + 8);
      if ( (_DWORD)v12 != (_DWORD)v13 || *(_DWORD *)(a3 + 12) < *(_DWORD *)(v11 + 12) )
        return 3221225485LL;
      v14 = a5 + v13;
      v15 = a2 + v12;
      LOBYTE(v12) = a1;
      RtlpCopyLegacyContext(v12, v15, v10, v14);
    }
    if ( (v16[0] & 2) == 0 )
      return 0LL;
    result = RtlpCopyXStateChunk(a1, a2, a3, a5, v11);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
