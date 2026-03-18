/*
 * XREFs of RtlpCopyExtendedContext @ 0x14002B260
 * Callers:
 *     KiDispatchException @ 0x140022BB4 (KiDispatchException.c)
 *     RtlpReadExtendedContext @ 0x1403F00B0 (RtlpReadExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x1404A4F08 (RtlpWriteExtendedContext.c)
 * Callees:
 *     RtlpCopyLegacyContext @ 0x14002B31C (RtlpCopyLegacyContext.c)
 *     RtlpValidateContextFlags @ 0x14002B50C (RtlpValidateContextFlags.c)
 *     RtlpCopyXStateChunk @ 0x1400E7F48 (RtlpCopyXStateChunk.c)
 */

__int64 __fastcall RtlpCopyExtendedContext(char a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  int v10; // ecx
  unsigned int v11; // r10d
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdx
  _BYTE v17[24]; // [rsp+30h] [rbp-18h] BYREF

  result = RtlpValidateContextFlags(a4, v17);
  if ( (int)result >= 0 )
  {
    v12 = a6;
    if ( !a3 )
      a3 = a2;
    if ( !a6 )
      v12 = a5;
    if ( (v17[0] & 1) != 0 )
    {
      v13 = *(int *)(a3 + 8);
      v14 = *(int *)(v12 + 8);
      if ( (_DWORD)v13 != (_DWORD)v14 || *(_DWORD *)(a3 + 12) < *(_DWORD *)(v12 + 12) )
        return 3221225485LL;
      v15 = a5 + v14;
      v16 = a2 + v13;
      LOBYTE(v13) = a1;
      RtlpCopyLegacyContext(v13, v16, v11, v15);
    }
    if ( (v17[0] & 2) == 0 )
      return 0LL;
    LOBYTE(v10) = a1;
    result = RtlpCopyXStateChunk(v10, a2, a3, a5, v12);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
