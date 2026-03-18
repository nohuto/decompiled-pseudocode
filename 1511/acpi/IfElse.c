/*
 * XREFs of IfElse @ 0x1C0011950
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C0011BC0 (ValidateArgTypes.c)
 *     HeapAlloc @ 0x1C0011E70 (HeapAlloc.c)
 *     ParsePackageLen @ 0x1C0012E74 (ParsePackageLen.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall IfElse(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE *v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // r13
  unsigned int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rax
  _QWORD *v14; // rdx
  char v15; // al
  __int64 v16; // rax
  _BYTE *v17; // rbp
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // rax
  _QWORD *v24; // rdx
  char v25; // al
  __int64 v26; // rax
  __int64 v27; // [rsp+78h] [rbp+10h] BYREF
  _BYTE *v28; // [rsp+80h] [rbp+18h] BYREF
  __int64 v29; // [rsp+88h] [rbp+20h]

  if ( **(_BYTE **)(a2 + 32) != 0xA0 )
  {
    LogError(3222536193LL);
    PrintDebugMessage(59, 0, 0, 0, 0LL);
    return 3222536193LL;
  }
  result = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0LL, "I");
  if ( !(_DWORD)result )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL) )
    {
      v17 = *(_BYTE **)(a2 + 40);
      v8 = 0;
      if ( (unsigned __int64)v17 < *(_QWORD *)(a2 + 48) && *v17 == 0xA1 )
      {
        v28 = v17 + 1;
        ParsePackageLen(&v28, &v27);
        v18 = v27;
      }
      else
      {
        v18 = 0LL;
        v27 = 0LL;
      }
      v19 = *(_QWORD *)(a2 + 88);
      v20 = a1[40];
      v21 = a1[11];
      v22 = a1[10];
      v29 = a1[15];
      v23 = HeapAlloc(a1 + 54, 1297237576LL, 80LL);
      v24 = (_QWORD *)v23;
      if ( v23 )
      {
        *(_QWORD *)(v23 + 8) = a1[52];
        a1[52] = v23;
        *(_DWORD *)v23 = 1347371859;
        *(_QWORD *)(v23 + 24) = ParseScope;
        a1[15] = v29;
        *(_QWORD *)(v23 + 32) = v17;
        *(_QWORD *)(v23 + 40) = v18;
        *(_QWORD *)(v23 + 48) = a1[10];
        v25 = gdwfAMLI;
        a1[10] = v22;
        if ( (v25 & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v22 + 104));
        v24[7] = a1[11];
        v26 = a1[40];
        a1[11] = v21;
        v24[8] = v26;
        a1[40] = v20;
        v24[9] = v19;
        return v8;
      }
      goto LABEL_20;
    }
    v5 = *(_BYTE **)(a2 + 40);
    a1[15] = v5;
    if ( (unsigned __int64)v5 < *(_QWORD *)(a2 + 48) && *v5 == 0xA1 )
    {
      a1[15] = v5 + 1;
      ParsePackageLen(a1 + 15, a2 + 40);
      v7 = *v6;
      v8 = 0;
      v9 = *(_QWORD *)(a2 + 88);
      v10 = a1[40];
      v11 = a1[11];
      v12 = a1[10];
      v27 = a1[15];
      v13 = HeapAlloc(a1 + 54, 1297237576LL, 80LL);
      v14 = (_QWORD *)v13;
      if ( v13 )
      {
        *(_QWORD *)(v13 + 8) = a1[52];
        a1[52] = v13;
        *(_DWORD *)v13 = 1347371859;
        *(_QWORD *)(v13 + 24) = ParseScope;
        a1[15] = v27;
        *(_QWORD *)(v13 + 32) = v7;
        *(_QWORD *)(v13 + 40) = 0LL;
        *(_QWORD *)(v13 + 48) = a1[10];
        v15 = gdwfAMLI;
        a1[10] = v12;
        if ( (v15 & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 104));
        v14[7] = a1[11];
        v16 = a1[40];
        a1[11] = v11;
        v14[8] = v16;
        a1[40] = v10;
        v14[9] = v9;
        return v8;
      }
LABEL_20:
      LogError(3222536194LL);
      PrintDebugMessage(153, 0, 0, 0, 0LL);
      return (unsigned int)-1072431102;
    }
  }
  return result;
}
