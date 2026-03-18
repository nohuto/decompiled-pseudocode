/*
 * XREFs of fnHkINLPCWPEXSTRUCT @ 0x1C00593B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCallHook2 @ 0x1C005BCC0 (xxxCallHook2.c)
 */

__int64 __fastcall fnHkINLPCWPEXSTRUCT(__int64 *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int8 *v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  _BYTE v15[12]; // [rsp+34h] [rbp-54h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-48h] BYREF
  int v17; // [rsp+50h] [rbp-38h]
  __int64 v18; // [rsp+58h] [rbp-30h]
  __int64 v19; // [rsp+60h] [rbp-28h]

  v8 = 0LL;
  v9 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v9 = *ThreadWin32Thread;
  v11 = *(unsigned __int8 **)(v9 + 432);
  v12 = *(_QWORD *)(gptiCurrent + 608LL);
  if ( v12 )
  {
    do
    {
      if ( *(_QWORD *)(v12 + 40) )
      {
        v12 = *(_QWORD *)(v12 + 40);
      }
      else
      {
        if ( (*(_DWORD *)(v12 + 64) & 1) != 0 )
          goto LABEL_9;
        v12 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8LL * *(int *)(v12 + 48) + 40);
      }
      if ( !v12 )
        goto LABEL_9;
    }
    while ( (*(_DWORD *)(v12 + 64) & 0x80u) != 0 );
    if ( *(_DWORD *)(v12 + 48) != 4 )
      return 0LL;
  }
LABEL_9:
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  v17 = a2;
  v16[1] = a3;
  v16[0] = a4;
  v19 = 0LL;
  v13 = *(_QWORD *)(gptiCurrent + 608LL);
  if ( !v13 )
    return v8;
  while ( 1 )
  {
    if ( *(_QWORD *)(v13 + 40) )
    {
      v13 = *(_QWORD *)(v13 + 40);
      goto LABEL_14;
    }
    if ( (*(_DWORD *)(v13 + 64) & 1) != 0 )
      break;
    v13 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8LL * *(int *)(v13 + 48) + 40);
LABEL_14:
    if ( !v13 || (*(_DWORD *)(v13 + 64) & 0x80u) == 0 )
      return xxxCallHook2(v13, 0, (*v11 >> 4) & 1, (unsigned int)v16, (__int64)v15);
  }
  LODWORD(v13) = 0;
  return xxxCallHook2(v13, 0, (*v11 >> 4) & 1, (unsigned int)v16, (__int64)v15);
}
