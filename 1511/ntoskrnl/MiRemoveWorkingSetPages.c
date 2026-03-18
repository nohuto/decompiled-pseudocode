/*
 * XREFs of MiRemoveWorkingSetPages @ 0x1400B94A0
 * Callers:
 *     MiCleanWorkingSet @ 0x14001C2D0 (MiCleanWorkingSet.c)
 *     MiEmptyWorkingSet @ 0x14001F584 (MiEmptyWorkingSet.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiConvertToLinkedWsles @ 0x1400B5930 (MiConvertToLinkedWsles.c)
 *     MiTrimWorkingSet @ 0x1400B5BA0 (MiTrimWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14012D814 (MiEmptyWorkingSetPrivatePagesByVa.c)
 * Callees:
 *     MiDeletePteRange @ 0x1400A1370 (MiDeletePteRange.c)
 *     MiMoveValidWsle @ 0x1400B8B14 (MiMoveValidWsle.c)
 *     MiPopFreeWsle @ 0x1400B97C8 (MiPopFreeWsle.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiRemoveWorkingSetPages(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r15
  unsigned __int64 v5; // r8
  __int64 v6; // r13
  __int64 v7; // rbx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rdx
  ULONG_PTR v16; // r11
  __int64 v17; // r9
  __int64 v18; // rdx
  ULONG_PTR v19; // r10
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rcx
  ULONG_PTR BugCheckParameter4; // r8
  ULONG_PTR v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // [rsp+70h] [rbp+8h]
  unsigned __int64 v30; // [rsp+78h] [rbp+10h]

  v2 = *(_QWORD *)(BugCheckParameter2 + 184);
  v3 = *(_QWORD *)(BugCheckParameter2 + 120);
  v4 = *(_QWORD *)(v2 + 496);
  v5 = *(unsigned int *)(v2 + 64);
  if ( (*(_BYTE *)(BugCheckParameter2 + 216) & 7) != 0 )
    ++v3;
  v6 = (((v4 + v3 * v5) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (((_WORD)v4 + (_WORD)v3 * (_WORD)v5) & 0xFFF) != 0 )
    v6 += 8LL;
  v7 = *(_QWORD *)(v2 + 32) + 1LL;
  v8 = v6 << 25 >> 16;
  v29 = v8;
  v9 = (v8 - v4) / v5;
  v10 = v4 + v7 * v5 - v8;
  result = v10 / v5;
  v12 = v10 / v5;
  if ( v10 / v5 )
  {
    v13 = 0xFFFFFFFFFLL;
    v14 = *(_QWORD *)(v2 + 32) + 2LL;
    v30 = v10 >> 12;
    while ( 1 )
    {
      --v7;
      --v14;
      v15 = *(_QWORD *)(v7 * *(unsigned int *)(v2 + 64) + v4);
      if ( (v15 & 1) != 0 )
      {
        if ( (v15 & 0xFFFFFFFFF000LL) == 0xFFFFFFFFF000LL && (v15 & 1) != 0 )
          goto LABEL_22;
        while ( 1 )
        {
          v27 = MiPopFreeWsle(BugCheckParameter2, v15, v13);
          if ( v27 < v9 )
            break;
          *(_QWORD *)(v27 * *(unsigned int *)(v2 + 64) + v4) |= 0xFFFFFFFFF001uLL;
        }
        MiMoveValidWsle(BugCheckParameter2, v7, v27);
        v8 = v29;
      }
      else
      {
        v16 = *(_QWORD *)(BugCheckParameter2 + 184);
        v17 = *(_QWORD *)(v16 + 496);
        if ( *(_QWORD *)v16 != v7 )
        {
          v18 = *(unsigned int *)(v16 + 64);
          v19 = v14 - 2;
          if ( !v7 || (v20 = *(_QWORD *)(v18 * (v14 - 2) + v17), (v20 & 1) != 0) )
          {
            if ( v7 == *(_QWORD *)(v16 + 32) )
              goto LABEL_12;
            v28 = *(_QWORD *)(v18 * v14 + v17);
            if ( (v28 & 1) != 0 || v28 >> 28 != v7 )
              goto LABEL_12;
            v19 = v14;
          }
          else if ( v20 >> 28 != v7 )
          {
LABEL_12:
            v19 = (*(_DWORD *)(v7 * v18 + v17) >> 1) & 0x7FFFFFF;
            v21 = (_QWORD *)(v17 + v19 * v18);
            do
            {
              if ( (*v21 & 1) == 0 && *v21 >> 28 == v7 )
                break;
              v19 += 0x8000000LL;
              v21 += 0x1000000 * v18;
            }
            while ( v19 <= *(_QWORD *)(v16 + 32) );
            goto LABEL_15;
          }
          if ( v19 == 0xFFFFFFFFFLL )
            goto LABEL_12;
LABEL_15:
          if ( *(_QWORD *)(v19 * v18 + v17) >> 28 != v7 )
            KeBugCheckEx(0x1Au, 0x5011uLL, v16, v19, v7);
          BugCheckParameter4 = *(_QWORD *)(v7 * v18 + v17) >> 28;
          if ( BugCheckParameter4 != 0xFFFFFFFFFLL )
          {
            v23 = BugCheckParameter4 * v18;
            v24 = *(_QWORD *)(v23 + v17);
            if ( (v24 & 1) != 0 || ((v7 ^ (v24 >> 1)) & 0x7FFFFFF) != 0 )
              KeBugCheckEx(0x1Au, 0x5012uLL, v16, v19, BugCheckParameter4);
            *(_QWORD *)(v23 + v17) = v24 ^ ((unsigned int)v24 ^ (2 * (_DWORD)v19)) & 0xFFFFFFE;
          }
          *(_QWORD *)(v19 * *(unsigned int *)(v16 + 64) + *(_QWORD *)(v16 + 496)) = (BugCheckParameter4 << 28) | *(_DWORD *)(v19 * *(unsigned int *)(v16 + 64) + v17) & 0xFFFFFFF;
          goto LABEL_21;
        }
        MiPopFreeWsle(BugCheckParameter2, v15, 0xFFFFFFFFFLL);
      }
LABEL_21:
      v13 = 0xFFFFFFFFFLL;
LABEL_22:
      v25 = --*(_QWORD *)(v2 + 32);
      if ( !--v12 )
      {
        v26 = v7 - 1;
        if ( *(_QWORD *)(v2 + 16) > v26 )
          *(_QWORD *)(v2 + 16) = v26;
        if ( v25 > v26 )
          *(_QWORD *)(v2 + 32) = v26;
        *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 8);
        return MiDeletePteRange(
                 BugCheckParameter2,
                 ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                 ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 8 * v30,
                 16);
      }
    }
  }
  return result;
}
