/*
 * XREFs of MxCreateFreePfns @ 0x140746A50
 * Callers:
 *     MxReleaseFreeDescriptor @ 0x140746040 (MxReleaseFreeDescriptor.c)
 *     MiCreateFreePfns @ 0x1407468E4 (MiCreateFreePfns.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiInsertLargePageInNodeList @ 0x1400C02B4 (MiInsertLargePageInNodeList.c)
 *     MiPageToChannel @ 0x1400C05B0 (MiPageToChannel.c)
 *     MiRestrictRangeToNode @ 0x140131AC8 (MiRestrictRangeToNode.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiInitializeBlankPfns @ 0x140746D60 (MiInitializeBlankPfns.c)
 *     MiFreeEmptyBootPageTable @ 0x140784BBC (MiFreeEmptyBootPageTable.c)
 */

void __fastcall MxCreateFreePfns(__int64 a1)
{
  unsigned __int64 v1; // r14
  unsigned __int64 v2; // rbp
  unsigned __int8 v4; // di
  _QWORD *v5; // r12
  __int64 v6; // rsi
  int v7; // eax
  __int16 v8; // ax
  _QWORD *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // r13
  unsigned __int8 CurrentIrql; // bp
  __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  int v18; // eax
  int v19; // r10d
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  int v23; // r10d
  unsigned __int64 v24; // rdi
  int v25; // [rsp+70h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 32);
  if ( !v1 )
  {
    if ( !--v2 )
      return;
    v1 = 1LL;
  }
  v4 = *(_DWORD *)(a1 + 16) != 24;
  v5 = 0LL;
  v6 = 48 * v1 - 0x58000000000LL;
  v25 = v4;
  if ( v2 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(a1 + 16);
      if ( v7 != 2 && v7 != 24 )
      {
        v8 = *(_WORD *)(v6 + 32);
        if ( v8 == 1 )
        {
          v9 = (_QWORD *)(*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL);
          v10 = *(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL;
          *v9 = 0LL;
          v11 = 48 * v10 - 0x58000000000LL;
          if ( MiPteInShadowRange((__int64)v9) )
            MiWritePteShadow((__int64)v9, 0LL);
          v12 = *(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v11 + 24) = v12;
          if ( (v12 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
            MiFreeEmptyBootPageTable(v11);
          v4 = v25;
          *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
          *(_WORD *)(v6 + 32) = 0;
        }
        else if ( v8 )
        {
          goto LABEL_22;
        }
      }
      if ( (v1 & 0x1FF) == 0
        && ((v13 = *(_DWORD *)(a1 + 16), v13 == 2) || v13 == 24)
        && v2 >= 0x200
        && (v14 = MiRestrictRangeToNode(v1, v2 & 0xFFFFFFFFFFFFFE00uLL) & 0xFFFFFFFFFFFFFE00uLL, v14 >= 0x200) )
      {
        MiPageToNode(v1, 0);
        v22 = MiPageToChannel(v1);
        MiInitializeBlankPfns(v6, v14, v23, v22, v4);
        v24 = (unsigned __int8)MiLockPageInline(v6);
        MiInsertLargePageInNodeList(v1, v14, v25);
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v24);
        v2 += 1 - v14;
        v6 = 48 * v14 + v6 - 48;
        v1 += v14 - 1;
      }
      else
      {
        *(_QWORD *)v6 = v5;
        v5 = (_QWORD *)v6;
      }
LABEL_22:
      v6 += 48LL;
      ++v1;
      if ( !--v2 )
        break;
      v4 = v25;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  while ( v5 )
  {
    v16 = (__int64)v5;
    v5 = (_QWORD *)*v5;
    v17 = (v16 + 0x58000000000LL) / 48;
    MiPageToNode(v17, 0);
    v18 = MiPageToChannel(v17);
    MiInitializeBlankPfns(v16, 1, v19, v18, v25);
    *(_QWORD *)(v16 + 40) &= 0xFFFFFFF000000000uLL;
    MiLockPageAtDpcInline(v16, v20, v21);
    MiInsertPageInFreeOrZeroedList(v17, 2uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  __writecr8(CurrentIrql);
}
