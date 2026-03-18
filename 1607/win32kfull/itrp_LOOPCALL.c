/*
 * XREFs of itrp_LOOPCALL @ 0x1C00D2950
 * Callers:
 *     <none>
 * Callees:
 *     InvokeInterpreter @ 0x1C00D2B04 (InvokeInterpreter.c)
 */

__int64 __fastcall itrp_LOOPCALL(__int64 a1)
{
  int *v2; // rdx
  __int64 v3; // r9
  __int64 v4; // r14
  __int64 v5; // rbp
  unsigned __int16 v6; // ax
  __int64 v7; // rcx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdi
  __int64 v11; // rsi
  bool v12; // zf
  int v13; // ecx
  __int64 v14; // r12
  int v15; // ebx
  unsigned __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  __int16 v18; // [rsp+28h] [rbp-20h]

  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
    || (unsigned __int64)((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) < 2 )
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
  v2 = (int *)(qword_1C03294C8 - 4);
  qword_1C03294C8 = (__int64)v2;
  v3 = *v2;
  if ( (int)v3 >= *(unsigned __int16 *)(*(_QWORD *)(qword_1C03294E0 + 344) + 20LL) || (int)v3 < 0 )
  {
    dword_1C0329530 = 4372;
    return qword_1C0329538;
  }
  v4 = *(_QWORD *)(qword_1C03294E0 + 160);
  v5 = *v2;
  v6 = *(_WORD *)(v4 + 8 * v3 + 6);
  if ( v6 >= 2u )
  {
    dword_1C0329530 = 4373;
    return qword_1C0329538;
  }
  v7 = *(int *)(v4 + 8 * v3);
  v8 = *(_QWORD *)(qword_1C03294E0 + 16LL * v6 + 200);
  v9 = v8 + (int)(v7 + *(unsigned __int16 *)(v4 + 8 * v3 + 4));
  v10 = v8 + v7;
  if ( v8 + v7 < v8 || v9 > v8 + *(unsigned int *)(qword_1C03294E0 + 16 * (v6 + 13LL)) || v9 < v10 )
  {
    dword_1C0329530 = 4363;
    return qword_1C0329538;
  }
  v11 = qword_1C0329538;
  v12 = dword_1C032954C == 1;
  v13 = dword_1C032954C - 1;
  v14 = qword_1C0329540;
  qword_1C03294C8 = (__int64)(v2 - 1);
  v15 = *(v2 - 1);
  --dword_1C032954C;
  if ( v12 )
  {
    dword_1C0329530 = 4358;
    return qword_1C0329538;
  }
  else
  {
    while ( --v15 >= 0 && !dword_1C0329530 )
    {
      if ( v13 == 50 )
      {
        v18 = *(_WORD *)(v4 + 8 * v5 + 4);
        v17 = v10;
        if ( !(unsigned __int8)EngExpandStackAndCallout(itrp_CALL_helper, &v17, 24576LL) )
        {
          dword_1C0329530 = 4358;
          return qword_1C0329538;
        }
      }
      else
      {
        InvokeInterpreter((unsigned int)dword_1C0329518, v10, v10 + *(unsigned __int16 *)(v4 + 8 * v5 + 4));
      }
      v13 = dword_1C032954C;
    }
    qword_1C0329538 = v11;
    dword_1C032954C = v13 + 1;
    if ( dword_1C0329530 )
      a1 = v11;
    qword_1C0329540 = v14;
    return a1;
  }
}
