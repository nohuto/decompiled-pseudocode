/*
 * XREFs of RtlMultiAppendUnicodeStringBuffer @ 0x180076690
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlAppendPathElement @ 0x1800CF9E0 (RtlAppendPathElement.c)
 * Callees:
 *     RtlpEnsureBufferSize @ 0x1800767A0 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlMultiAppendUnicodeStringBuffer(unsigned __int16 *a1, int a2, __int64 a3)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned int v8; // ecx
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 result; // rax

  v6 = *a1;
  v7 = v6;
  v8 = 0;
  if ( a2 )
  {
    do
    {
      v7 += *(unsigned __int16 *)(a3 + 16LL * v8);
      if ( v7 > 0xFFFE )
        return 3221225734LL;
    }
    while ( ++v8 != a2 );
  }
  v9 = v7 + 2;
  if ( v9 > 0xFFFE )
    return 3221225734LL;
  if ( a1 != (unsigned __int16 *)-16LL && v9 <= *((_QWORD *)a1 + 4)
    || (result = RtlpEnsureBufferSize(0LL, a1 + 8), (int)result >= 0) )
  {
    v10 = *((_QWORD *)a1 + 2);
    v11 = 0;
    a1[1] = v9;
    *a1 = v9 - 2;
    *((_QWORD *)a1 + 1) = v10;
    if ( a2 )
    {
      do
      {
        memmove(
          (void *)(*((_QWORD *)a1 + 1) + 2 * (v6 >> 1)),
          *(const void **)(a3 + 16LL * v11 + 8),
          *(unsigned __int16 *)(a3 + 16LL * v11));
        v12 = *(unsigned __int16 *)(a3 + 16LL * v11++);
        v6 += v12;
      }
      while ( v11 != a2 );
    }
    *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * (v6 >> 1)) = 0;
    return 0LL;
  }
  return result;
}
