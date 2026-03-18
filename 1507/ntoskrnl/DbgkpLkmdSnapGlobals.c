/*
 * XREFs of DbgkpLkmdSnapGlobals @ 0x1401E124C
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14066980C (DbgkCaptureLiveDump.c)
 * Callees:
 *     KeEnumerateProcessorDpcs @ 0x140203FB8 (KeEnumerateProcessorDpcs.c)
 */

__int64 __fastcall DbgkpLkmdSnapGlobals(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // r15
  __int64 result; // rax
  unsigned int v5; // edi
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v1 = KeNumberProcessors_0;
  v2 = a1 + 5120;
  result = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(a1 + 5184))(
             a1 + 5120,
             KiProcessorBlock,
             (unsigned int)(8 * KeNumberProcessors_0),
             0LL,
             0LL,
             0LL);
  v5 = 0;
  if ( v1 )
  {
    v6 = (_QWORD *)a1;
    do
    {
      if ( v5 >= (unsigned int)KeNumberProcessors_0 )
        v7 = 0LL;
      else
        v7 = *(_QWORD *)((char *)v6 + (_QWORD)KiProcessorBlock - a1);
      if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64 *))(a1 + 5184))(
             v2,
             v7,
             32448LL,
             2LL,
             0LL,
             &v9) >= 0 )
      {
        *(_QWORD *)(v9 + 8) = 0LL;
        *v6 = v9;
      }
      result = KeEnumerateProcessorDpcs(v5++, v8, a1);
      ++v6;
    }
    while ( v5 < v1 );
  }
  return result;
}
