/*
 * XREFs of MxCreateFreePfns @ 0x140796AA8
 * Callers:
 *     MxReleaseFreeDescriptor @ 0x1407960F4 (MxReleaseFreeDescriptor.c)
 *     MiCreateFreePfns @ 0x140796948 (MiCreateFreePfns.c)
 * Callees:
 *     MiInsertLargePageInNodeListHelper @ 0x14001B2E0 (MiInsertLargePageInNodeListHelper.c)
 *     MiPageToChannel @ 0x14001B5C0 (MiPageToChannel.c)
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRestrictRangeToNode @ 0x14013BB78 (MiRestrictRangeToNode.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiInitializeBlankPfns @ 0x140796EE0 (MiInitializeBlankPfns.c)
 *     MiFreeEmptyBootPageTable @ 0x1407D0638 (MiFreeEmptyBootPageTable.c)
 */

void __fastcall MxCreateFreePfns(__int64 a1)
{
  unsigned __int64 v1; // r14
  unsigned __int64 v2; // rbp
  __int64 v3; // r11
  int v4; // eax
  __int64 v5; // rcx
  char v6; // r15
  __int64 v7; // rsi
  _QWORD *v8; // r12
  __int16 v9; // ax
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // rdi
  int v15; // eax
  int v16; // r10d
  int v17; // r9d
  int v18; // r8d
  int v19; // r13d
  unsigned __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v26; // rsi
  unsigned __int64 v27; // rdi
  int v28; // eax
  int v29; // r10d
  unsigned __int64 v30; // [rsp+30h] [rbp-78h]
  _QWORD *v31; // [rsp+38h] [rbp-70h]
  __int64 v32; // [rsp+40h] [rbp-68h]
  unsigned __int64 v33; // [rsp+48h] [rbp-60h]
  BOOL v34; // [rsp+B0h] [rbp+8h]
  int v35; // [rsp+B8h] [rbp+10h]
  int v36; // [rsp+C0h] [rbp+18h]
  int v37; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 1LL;
  if ( !v1 )
  {
    if ( !--v2 )
      return;
    v1 = 1LL;
  }
  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 == 2 || (v5 = 1LL, v4 == 24) )
    v5 = 0LL;
  v32 = v5;
  v6 = v4 != 24;
  v34 = v4 != 24;
  v7 = 48 * v1 - 0x58000000000LL;
  v31 = 0LL;
  v8 = 0LL;
  if ( v2 )
  {
    while ( 1 )
    {
      if ( !v5 )
        goto LABEL_15;
      v9 = *(_WORD *)(v7 + 32);
      if ( v9 == (_WORD)v3 )
        break;
      if ( !v9 )
        goto LABEL_15;
LABEL_21:
      v1 += v3;
      v7 += 48LL;
      v2 -= v3;
LABEL_37:
      v5 = v32;
      if ( !v2 )
      {
        v6 = v34;
        goto LABEL_39;
      }
    }
    v10 = (_QWORD *)(*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL);
    *v10 = 0LL;
    if ( MiPteInShadowRange((unsigned __int64)v10) )
      MiWritePteShadow(v11, 0LL);
    *(_QWORD *)(v12 + 24) ^= v13 & (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) - v3));
    if ( (v13 & *(_QWORD *)(v12 + 24)) == v3 )
    {
      MiFreeEmptyBootPageTable(v12);
      v3 = 1LL;
    }
    v5 = v32;
    *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(v7 + 32) = 0;
LABEL_15:
    if ( (v1 & 0x1FF) != 0 || v5 || v2 < 0x200 )
    {
      *(_QWORD *)v7 = v8;
      v8 = (_QWORD *)v7;
      v31 = (_QWORD *)v7;
    }
    else
    {
      v30 = MiRestrictRangeToNode(v1, v2);
      v14 = v30;
      if ( v30 >= 0x200 )
      {
        v35 = MiPageToNode(v1, 0);
        v15 = MiPageToChannel(v1);
        v3 = 1LL;
        v36 = v15;
        v17 = v15;
        v18 = (KeFeatureBits & 0x2000000000LL) == 0;
        v37 = v18;
        v19 = v18;
        while ( 1 )
        {
          v20 = MiLargePageSizes[v19];
          if ( v1 == (v1 & ~(v20 - 1)) && v14 >= v20 )
          {
            if ( v19 == v18 )
            {
              v22 = v14;
            }
            else
            {
              v21 = MiLargePageSizes[v19 - 1];
              v22 = v21 - (v1 & (v21 - 1));
              if ( v22 > v14 )
                v22 = v14;
            }
            v33 = v20 * (v22 / v20);
            if ( v33 )
            {
              v23 = v30;
              do
              {
                MiInitializeBlankPfns(v7, v19, v16, v17, v34);
                v24 = (unsigned __int8)MiLockPageInline(v7);
                MiInsertLargePageInNodeListHelper(v1, v20, v34, 0);
                _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v24);
                v23 -= v20;
                v7 += 48 * v20;
                v16 = v35;
                v2 -= v20;
                v17 = v36;
                v1 += v20;
                v33 -= v20;
              }
              while ( v33 );
              v18 = v37;
              v3 = 1LL;
              v30 = v23;
              v14 = v23;
              v8 = v31;
            }
            if ( v14 < 0x200 )
              goto LABEL_37;
            v19 = v18 - 1;
          }
          if ( (unsigned int)++v19 > 1 )
            goto LABEL_37;
        }
      }
      *(_QWORD *)v7 = v8;
      v3 = 1LL;
      v8 = (_QWORD *)v7;
      v31 = (_QWORD *)v7;
    }
    goto LABEL_21;
  }
LABEL_39:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  while ( v8 )
  {
    v26 = (__int64)v8;
    v8 = (_QWORD *)*v8;
    v27 = (v26 + 0x58000000000LL) / 48;
    MiPageToNode(v27, 0);
    v28 = MiPageToChannel(v27);
    MiInitializeBlankPfns(v26, -1, v29, v28, v6);
    MiLockPageAtDpcInline(v26);
    MiInsertPageInFreeOrZeroedList(v27, 2);
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  __writecr8(CurrentIrql);
}
