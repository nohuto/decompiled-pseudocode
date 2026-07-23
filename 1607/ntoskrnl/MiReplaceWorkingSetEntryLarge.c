/*
 * XREFs of MiReplaceWorkingSetEntryLarge @ 0x1400FEB54
 * Callers:
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 *     MiReplaceWorkingSetEntryIfNecessary @ 0x1401E9CCC (MiReplaceWorkingSetEntryIfNecessary.c)
 * Callees:
 *     MiRotateHeadWsle @ 0x140016970 (MiRotateHeadWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400BA3CC (MiUpdateWorkingSetAgeDistribution.c)
 *     MiSetWsleAge @ 0x1400BBB24 (MiSetWsleAge.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiClearPteAccessed @ 0x1400DFD90 (MiClearPteAccessed.c)
 *     MiTbFlushType @ 0x1400FEB3C (MiTbFlushType.c)
 *     MiTrimSingleWsle @ 0x1400FEF74 (MiTrimSingleWsle.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x1401E9D18 (MiReplaceWorkingSetEntrySmall.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiReplaceWorkingSetEntryLarge(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r14d
  __int64 v4; // rcx
  int v5; // eax
  _KPROCESS *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r11
  unsigned __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned int v11; // ebx
  unsigned int v12; // r15d
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // r12
  int v16; // eax
  __int64 v17; // r9
  _DWORD *v18; // r14
  __int64 v19; // r10
  unsigned __int64 v20; // r10
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 *v24; // r10
  __int64 v25; // r11
  int v26; // eax
  unsigned __int64 v27; // [rsp+38h] [rbp-D0h]
  __int64 v28; // [rsp+40h] [rbp-C8h]
  _KPROCESS *v30; // [rsp+50h] [rbp-B8h]
  ULONG_PTR *SharedWorkingSetList; // [rsp+58h] [rbp-B0h]
  int v32; // [rsp+60h] [rbp-A8h]
  __int64 v33; // [rsp+68h] [rbp-A0h] BYREF
  int v34; // [rsp+78h] [rbp-90h] BYREF
  int v35; // [rsp+7Ch] [rbp-8Ch]
  int v36; // [rsp+80h] [rbp-88h]
  int v37; // [rsp+84h] [rbp-84h]
  __int64 v38; // [rsp+88h] [rbp-80h]
  __int64 v39; // [rsp+90h] [rbp-78h]
  char v40; // [rsp+138h] [rbp+30h]
  int v41; // [rsp+139h] [rbp+31h]
  __int16 v42; // [rsp+13Dh] [rbp+35h]
  char v43; // [rsp+13Fh] [rbp+37h]

  v2 = a2;
  v40 = 0;
  v30 = *(_KPROCESS **)(a1 + 16);
  v41 = 0;
  v42 = 0;
  v43 = 0;
  SharedWorkingSetList = MiGetSharedWorkingSetList(a1);
  if ( *((_DWORD *)SharedWorkingSetList + 8) != 16 )
  {
    MiReplaceWorkingSetEntrySmall(v4, v2);
    return;
  }
  v5 = MiTbFlushType(v4);
  v32 = v5;
  v8 = 0LL;
  while ( 2 )
  {
    v28 = v8;
    v9 = 0LL;
    v34 = v5;
    v37 = 0;
    v10 = 0xFFFFFFFFFLL;
    v38 = 0LL;
    v39 = 0LL;
    LOWORD(v35) = 0;
    v11 = 15;
    v36 = 20;
    v12 = 7;
    v13 = v6->Affinity.Bitmap[8];
    v27 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v13 )
        {
          v14 = MiRotateHeadWsle(a1, v11);
          v9 = v27;
          --v13;
          v6 = v30;
          v15 = v14;
          v7 = (__int64)SharedWorkingSetList;
        }
        else
        {
          v15 = 0xFFFFFFFFFLL;
        }
        if ( v15 == 0xFFFFFFFFFLL )
          break;
        v18 = (_DWORD *)(*(_QWORD *)(v7 + 80) + v15 * *(unsigned int *)(v7 + 32));
        v19 = *(_QWORD *)v18;
        if ( (*(_QWORD *)v18 & 0x800000000000LL) != 0 )
          v20 = v19 | 0xFFFF000000000000uLL;
        else
          v20 = v19 & 0xFFFFFFFFFFFFLL;
        v33 = MI_READ_PTE_LOCK_FREE(((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v21 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v33) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( v25 || (v23 & 0x20) == 0 )
        {
          MiFlushTbList((__int64)&v34, (_KPROCESS *)v21, v22, v23);
          v26 = MiTrimSingleWsle(a1, v15);
          v17 = 1LL;
          v9 = v27;
          v2 = a2;
          v6 = v30;
          v7 = (__int64)SharedWorkingSetList;
          if ( v26 == 1 )
          {
            if ( !v28 )
              goto LABEL_47;
            if ( !--v28 )
              goto LABEL_47;
          }
        }
        else
        {
          if ( v12 - 1 > 5 )
          {
            if ( ((*(_QWORD *)(v21 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1
               || (*(_QWORD *)(v21 + 40) & 0x200000000000000LL) != 0)
              && ((*(_BYTE *)(a1 + 184) & 7) == 0 || *(_WORD *)(v21 + 32) <= 1u) )
            {
              ++v27;
              if ( v10 == 0xFFFFFFFFFLL )
                v10 = v15;
            }
            MiClearPteAccessed(a1, v21, v24, v18, (__int64)&v34, 0);
          }
          else
          {
            MiUpdateWorkingSetAgeDistribution(a1, v12, -1LL);
            MiSetWsleAge(a1, v18, 0);
          }
          v9 = v27;
          v2 = a2;
          v6 = v30;
          v7 = (__int64)SharedWorkingSetList;
        }
      }
      if ( *(&v40 + v12) || v9 <= 6 || v2 && (v11 & 1) != 0 )
        break;
      *(&v40 + v12) = 1;
      if ( !v12 )
      {
        v12 = 1;
        v11 = 3;
      }
      if ( v10 != 0xFFFFFFFFFLL )
      {
        MiFlushTbList((__int64)&v34, v6, v7, 1LL);
        v16 = MiTrimSingleWsle(a1, v10);
        v17 = 1LL;
        if ( v16 == 1 )
          goto LABEL_47;
        v6 = v30;
        v10 = 0xFFFFFFFFFLL;
      }
      v9 = 0LL;
      v27 = 0LL;
      v13 = *((_QWORD *)&v6->ProfileListHead.Blink + v11);
LABEL_19:
      v7 = (__int64)SharedWorkingSetList;
    }
    MiRotateHeadWsle(a1, v11);
    if ( v11 )
    {
      v17 = 1LL;
      if ( !v2 && (v11 & 1) != 0 )
        v11 &= ~1u;
      if ( v11 )
      {
        if ( (v11 & 1) != 0 )
        {
          v9 = v27;
        }
        else
        {
          --v12;
          v10 = 0xFFFFFFFFFLL;
          v9 = 0LL;
          v27 = 0LL;
        }
        v6 = v30;
        v13 = *((_QWORD *)&v30->ProfileListHead.Blink + --v11);
        goto LABEL_19;
      }
    }
    if ( !v2 && !v28 )
    {
      MiFlushTbList((__int64)&v34, v6, v7, v17);
      v6 = v30;
      v8 = 6LL;
      v7 = (__int64)SharedWorkingSetList;
      v5 = v32;
      continue;
    }
    break;
  }
LABEL_47:
  MiFlushTbList((__int64)&v34, v6, v7, v17);
}
