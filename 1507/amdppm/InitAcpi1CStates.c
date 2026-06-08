/*
 * XREFs of InitAcpi1CStates @ 0x1C0015070
 * Callers:
 *     InitAcpiCStates @ 0x1C0014FB8 (InitAcpiCStates.c)
 * Callees:
 *     memset @ 0x1C00062C0 (memset.c)
 *     IsValidAcpiGenericAddress @ 0x1C001C798 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall InitAcpi1CStates(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned int v4; // edi
  char v6; // r15
  char v7; // r14
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  SIZE_T v15; // rbp
  unsigned int *PoolWithTag; // rax
  unsigned int *v17; // rbx
  __int64 v18; // rax

  v3 = *(_QWORD *)(a1 + 248);
  v4 = 0;
  v6 = 0;
  *(_QWORD *)(a1 + 240) |= v3 & 7;
  v7 = 0;
  v8 = 1LL;
  if ( (v3 & 2) != 0
    && (unsigned __int16)AcpiInfo <= 0x64u
    && (unsigned __int8)IsValidAcpiGenericAddress(&dword_1C00098EC, v3, a3, 1LL)
    && (unsigned __int8)IsValidAcpiGenericAddress(a1 + 168, v3, a3, v8)
    && dword_1C0009394 == (_DWORD)v8 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1040), v8);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1044), v8);
    v8 = 2LL;
    v6 = 1;
  }
  if ( (*(_BYTE *)(a1 + 248) & 4) != 0
    && (unsigned __int16)word_1C00098D2 <= 0x3E8u
    && (unsigned __int8)IsValidAcpiGenericAddress(&dword_1C0009904, v3, a3, v8)
    && (unsigned __int8)IsValidAcpiGenericAddress(&dword_1C00098D4, v9, v10, v8)
    && (unsigned __int8)IsValidAcpiGenericAddress(&dword_1C00098EC, v11, v12, v8)
    && (unsigned __int8)IsValidAcpiGenericAddress(a1 + 168, v13, v14, v8)
    && dword_1C0009394 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1040), 2u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1044), 2u);
    LODWORD(v8) = v8 + 1;
    v7 = 1;
  }
  v15 = (unsigned int)(20 * v8 + 4);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x72637250u);
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v15);
    *v17 = 0;
    *(_QWORD *)(v17 + 1) = 0LL;
    *(_QWORD *)(v17 + 3) = 0LL;
    *((_BYTE *)v17 + 4) = 127;
    *((_BYTE *)v17 + 16) = 1;
    *((_WORD *)v17 + 9) = 0;
    v17[5] = 0;
    v18 = ++*v17;
    if ( v6 )
    {
      LOBYTE(v17[5 * v18 + 4]) = 2;
      HIWORD(v17[5 * *v17 + 4]) = AcpiInfo;
      v17[5 * *v17 + 5] = 0;
      if ( *(_DWORD *)(a1 + 172) != -4 )
      {
        LOBYTE(v17[5 * *v17 + 1]) = 1;
        BYTE1(v17[5 * *v17 + 1]) = 8;
        BYTE2(v17[5 * *v17 + 1]) = 0;
        HIBYTE(v17[5 * *v17 + 1]) = 8;
        v17[5 * *v17 + 3] = 0;
        v17[5 * *v17 + 2] = *(_DWORD *)(a1 + 172) + 4;
      }
      v18 = ++*v17;
    }
    if ( v7 )
    {
      LOBYTE(v17[5 * v18 + 4]) = 3;
      HIWORD(v17[5 * *v17 + 4]) = word_1C00098D2;
      v17[5 * *v17 + 5] = 0;
      if ( *(_DWORD *)(a1 + 172) != -5 )
      {
        LOBYTE(v17[5 * *v17 + 1]) = 1;
        BYTE1(v17[5 * *v17 + 1]) = 8;
        BYTE2(v17[5 * *v17 + 1]) = 0;
        HIBYTE(v17[5 * *v17 + 1]) = 8;
        v17[5 * *v17 + 3] = 0;
        v17[5 * *v17 + 2] = *(_DWORD *)(a1 + 172) + 5;
      }
      ++*v17;
    }
    *(_QWORD *)(a1 + 472) = v17;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
