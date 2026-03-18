/*
 * XREFs of UnloadCursorsAndIcons @ 0x1C0130AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UnloadCursorsAndIcons(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rsi
  char *v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 *)&unk_1C031EA48;
  v2 = 7LL;
  v3 = (char *)&unk_1C031EA48;
  do
  {
    if ( *v1 )
    {
      v4 = *v1;
      *(_QWORD *)(v4 + 24) = PsGetCurrentProcessWin32Process(a1);
      HMAssignmentUnlock(v3);
    }
    v3 += 16;
    v1 += 2;
    --v2;
  }
  while ( v2 );
  v5 = 0LL;
  v6 = 17LL;
  do
  {
    result = gasyscur[0];
    v8 = *(_QWORD *)(v5 + gasyscur[0] + 8);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 40);
      while ( v9 )
      {
        v10 = v9;
        v9 = *(_QWORD *)(v9 + 40);
        HMAssignmentUnlock(&v10);
      }
      *(_QWORD *)(v8 + 24) = PsGetCurrentProcessWin32Process(a1);
      result = HMAssignmentUnlock((char *)&gasyscur[1] + v2);
    }
    v2 += 16LL;
    v5 += 16LL;
    --v6;
  }
  while ( v6 );
  return result;
}
