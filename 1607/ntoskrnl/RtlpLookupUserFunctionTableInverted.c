/*
 * XREFs of RtlpLookupUserFunctionTableInverted @ 0x1400AC0A0
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x1400ABEF0 (RtlpLookupUserFunctionTable.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

unsigned __int64 __fastcall RtlpLookupUserFunctionTableInverted(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  int v6; // r8d
  int v7; // r9d
  int v8; // r11d
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  signed __int32 v15[8]; // [rsp+0h] [rbp-58h] BYREF
  int v16; // [rsp+20h] [rbp-38h]
  int v17; // [rsp+24h] [rbp-34h]
  unsigned __int64 v18; // [rsp+30h] [rbp-28h]
  int v19; // [rsp+70h] [rbp+18h]

  v19 = *(_DWORD *)(KeUserInvertedFunctionTable + 8);
  v4 = KeUserInvertedFunctionTable + 16;
  v5 = *(_QWORD *)(KeUserInvertedFunctionTable + 24);
  if ( a1 < v5 || a1 >= v5 + *(unsigned int *)(KeUserInvertedFunctionTable + 32) )
  {
    v6 = *(_DWORD *)KeUserInvertedFunctionTable - 1;
    if ( (unsigned int)v6 > 0x200 )
      return 0LL;
    if ( *(_DWORD *)KeUserInvertedFunctionTable != 1 )
    {
      v7 = 1;
      v17 = 1;
      v16 = v6;
      while ( v6 >= v7 )
      {
        v8 = (v6 + v7) >> 1;
        v4 = KeUserInvertedFunctionTable + 8 * (3LL * v8 + 2);
        v9 = *(_QWORD *)(v4 + 8);
        v10 = v9 + *(unsigned int *)(v4 + 16);
        if ( v10 < v9 )
          return 0LL;
        if ( a1 < v9 )
        {
          if ( !v8 )
            break;
          v6 = v8 - 1;
          v16 = v8 - 1;
        }
        else
        {
          if ( a1 < v10 )
            goto LABEL_13;
          v7 = v8 + 1;
          v17 = v8 + 1;
        }
      }
    }
    v4 = 0LL;
  }
LABEL_13:
  if ( !v4 )
    return 0LL;
  v11 = *(_QWORD *)v4;
  v18 = v11;
  *(_QWORD *)a2 = v11;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(v4 + 8);
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(v4 + 20);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 16);
  v12 = *(unsigned int *)(a2 + 20);
  if ( (_DWORD)v12 )
  {
    if ( (v11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v11 + v12 > 0x7FFFFFFF0000LL || v11 + v12 < v11 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v13 = *(_QWORD *)(a2 + 8);
  if ( (_WORD)v13 )
    ExRaiseDatatypeMisalignment();
  if ( v13 + 64 > 0x7FFFFFFF0000LL || v13 + 64 < v13 )
    MEMORY[0x7FFFFFFF0000] = 0;
  _InterlockedOr(v15, 0);
  if ( *(_DWORD *)(KeUserInvertedFunctionTable + 8) != v19 || (v19 & 1) != 0 )
    return 0LL;
  else
    return v18;
}
