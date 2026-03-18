/*
 * XREFs of UnloadCursorsAndIcons @ 0x1C012DC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UnloadCursorsAndIcons(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rsi
  char *v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 result; // rax
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)&unk_1C03219B8;
  v3 = 7LL;
  v4 = (char *)&unk_1C03219B8;
  do
  {
    if ( *v2 )
    {
      v5 = *v2;
      *(_QWORD *)(v5 + 24) = PsGetCurrentProcessWin32Process(a1, a2);
      HMAssignmentUnlock(v4);
    }
    v4 += 16;
    v2 += 2;
    --v3;
  }
  while ( v3 );
  v6 = 0LL;
  v7 = 17LL;
  do
  {
    result = *(_QWORD *)gasyscur;
    v9 = *(_QWORD *)(v6 + *(_QWORD *)gasyscur + 8);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 40);
      while ( v10 )
      {
        v11 = v10;
        v10 = *(_QWORD *)(v10 + 40);
        HMAssignmentUnlock(&v11);
      }
      *(_QWORD *)(v9 + 24) = PsGetCurrentProcessWin32Process(a1, a2);
      result = HMAssignmentUnlock((char *)&gasyscur[4] + v3);
    }
    v3 += 16LL;
    v6 += 16LL;
    --v7;
  }
  while ( v7 );
  return result;
}
