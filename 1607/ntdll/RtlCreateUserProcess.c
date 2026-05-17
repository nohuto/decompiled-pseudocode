/*
 * XREFs of RtlCreateUserProcess @ 0x18008CAE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserProcess @ 0x18008CBD8 (RtlpCreateUserProcess.c)
 *     RtlNormalizeProcessParams @ 0x18008CE70 (RtlNormalizeProcessParams.c)
 */

__int64 __fastcall RtlCreateUserProcess(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        char a7,
        __int64 a8,
        __int64 a9,
        void *a10)
{
  int v10; // ebx
  __int16 v12; // esi^2
  int v13; // edi
  __int64 v14; // rax

  v10 = 0;
  v12 = HIWORD(a2);
  v13 = a1;
  if ( !a1 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  v14 = RtlNormalizeProcessParams(a3);
  if ( !v14 )
    return 3221225485LL;
  if ( a7 )
    v10 = 4;
  else
    *(_QWORD *)(v14 + 72) = 0LL;
  if ( (*(_DWORD *)(v14 + 8) & 0x40000) != 0 )
    v10 |= 0x80u;
  if ( (*(_DWORD *)(v14 + 8) & 0x400000) != 0 )
    v10 |= 0x40u;
  return RtlpCreateUserProcess(v13, v14, a4, a5, a6, v12, v10, 1, a8, a9, a10);
}
