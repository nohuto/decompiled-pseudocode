/*
 * XREFs of MiReplaceWorkingSetEntryLarge @ 0x1400E42B4
 * Callers:
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 *     MiReplaceWorkingSetEntryIfNecessary @ 0x1401D80D8 (MiReplaceWorkingSetEntryIfNecessary.c)
 * Callees:
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiTbFlushType @ 0x1400A086C (MiTbFlushType.c)
 *     MiRotateHeadWsle @ 0x1400B6674 (MiRotateHeadWsle.c)
 *     MiClearPteAccessed @ 0x1400B72A0 (MiClearPteAccessed.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400BAC08 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiSetWsleAge @ 0x1400BACAC (MiSetWsleAge.c)
 *     MiTrimSingleWsle @ 0x1400E4694 (MiTrimSingleWsle.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x1401D812C (MiReplaceWorkingSetEntrySmall.c)
 */

void __fastcall MiReplaceWorkingSetEntryLarge(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  bool v4; // zf
  int v5; // eax
  _KPROCESS *v6; // rdx
  __int64 v7; // r13
  unsigned __int64 v8; // rcx
  __int64 v9; // r12
  unsigned int v10; // ebx
  unsigned int v11; // edi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 *v14; // r13
  __int64 v15; // rsi
  unsigned __int64 v16; // rsi
  unsigned __int64 *v17; // rsi
  char v18; // bl
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // [rsp+38h] [rbp-D0h]
  int v22; // [rsp+3Ch] [rbp-CCh]
  unsigned __int64 v23; // [rsp+40h] [rbp-C8h]
  __int64 v24; // [rsp+48h] [rbp-C0h]
  __int64 v25; // [rsp+50h] [rbp-B8h]
  int v26; // [rsp+58h] [rbp-B0h]
  __int64 v27; // [rsp+60h] [rbp-A8h]
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  int v29; // [rsp+78h] [rbp-90h] BYREF
  int v30; // [rsp+7Ch] [rbp-8Ch]
  int v31; // [rsp+80h] [rbp-88h]
  int v32; // [rsp+84h] [rbp-84h]
  __int64 v33; // [rsp+88h] [rbp-80h]
  __int64 v34; // [rsp+90h] [rbp-78h]
  char v35; // [rsp+138h] [rbp+30h]
  int v36; // [rsp+139h] [rbp+31h]
  __int16 v37; // [rsp+13Dh] [rbp+35h]
  char v38; // [rsp+13Fh] [rbp+37h]

  v2 = *(_QWORD *)(a1 + 184);
  v21 = a2;
  v35 = 0;
  v36 = 0;
  v4 = *(_DWORD *)(v2 + 64) == 16;
  v37 = 0;
  v38 = 0;
  if ( v4 )
  {
    v5 = MiTbFlushType(a1);
    v26 = v5;
    v7 = 0LL;
    while ( 2 )
    {
      v25 = v7;
      v8 = 0LL;
      v29 = v5;
      v32 = 0;
      v9 = 0xFFFFFFFFFLL;
      v33 = 0LL;
      v34 = 0LL;
      v10 = 7;
      LOWORD(v30) = 0;
      v31 = 20;
      v11 = 15;
      v12 = *(_QWORD *)(v2 + 232);
      v22 = 7;
LABEL_5:
      v23 = 0LL;
      while ( 1 )
      {
        v24 = v12;
        while ( 1 )
        {
          if ( v12 )
          {
            v13 = MiRotateHeadWsle(v2, v11);
            v8 = v23;
            v6 = (_KPROCESS *)v21;
            v24 = v12 - 1;
          }
          else
          {
            v13 = 0xFFFFFFFFFLL;
          }
          v27 = v13;
          if ( v13 == 0xFFFFFFFFFLL )
            break;
          v14 = (__int64 *)(*(_QWORD *)(v2 + 496) + v13 * *(unsigned int *)(v2 + 64));
          v15 = *v14;
          if ( (*v14 & 0x800000000000LL) != 0 )
            v16 = v15 | 0xFFFF000000000000uLL;
          else
            v16 = v15 & 0xFFFFFFFFFFFFLL;
          v17 = (unsigned __int64 *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v28 = MI_READ_PTE_LOCK_FREE(v17);
          v18 = v28;
          v19 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v28) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          if ( v25 || (v18 & 0x20) == 0 )
          {
            MiFlushTbList((__int64)&v29, (_KPROCESS *)v19);
            v20 = MiTrimSingleWsle(a1, v27);
            v10 = v22;
            v12 = v24;
            v7 = v25;
            v8 = v23;
            v6 = (_KPROCESS *)v21;
            if ( v20 == 1 )
            {
              if ( !v25 )
                goto LABEL_52;
              v7 = v25 - 1;
              v25 = v7;
              if ( !v7 )
                goto LABEL_52;
            }
          }
          else
          {
            v10 = v22;
            if ( (unsigned int)(v22 - 1) > 5 )
            {
              if ( ((*(_QWORD *)(v19 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1
                 || (*(_QWORD *)(v19 + 40) & 0x200000000000000LL) != 0)
                && ((*(_BYTE *)(a1 + 216) & 7) == 0 || *(_WORD *)(v19 + 32) <= 1u) )
              {
                ++v23;
                if ( v9 == 0xFFFFFFFFFLL )
                  v9 = v27;
              }
              MiClearPteAccessed(a1, v19, v17, v14, (__int64)&v29, 0);
            }
            else
            {
              MiUpdateWorkingSetAgeDistribution(a1, v22, -1LL);
              MiSetWsleAge(v2, v14, 0);
            }
            v12 = v24;
            v7 = 0LL;
            v8 = v23;
            v6 = (_KPROCESS *)v21;
          }
        }
        if ( !*(&v35 + v10) && v8 > 6 && (!(_DWORD)v6 || (v11 & 1) == 0) )
        {
          *(&v35 + v10) = 1;
          if ( !v10 )
          {
            v10 = 1;
            v11 = 3;
            v22 = 1;
          }
          if ( v9 != 0xFFFFFFFFFLL )
          {
            MiFlushTbList((__int64)&v29, v6);
            if ( (unsigned int)MiTrimSingleWsle(a1, v9) == 1 )
              goto LABEL_52;
            v6 = (_KPROCESS *)v21;
            v9 = 0xFFFFFFFFFLL;
          }
          v8 = 0LL;
          v12 = *(_QWORD *)(v2 + 8LL * v11 + 112);
          goto LABEL_5;
        }
        MiRotateHeadWsle(v2, v11);
        v6 = (_KPROCESS *)v21;
        if ( !v11 )
          break;
        if ( !v21 && (v11 & 1) != 0 )
          v11 &= ~1u;
        if ( !v11 )
          break;
        if ( (v11 & 1) != 0 )
        {
          v8 = v23;
        }
        else
        {
          --v10;
          v9 = 0xFFFFFFFFFLL;
          v8 = 0LL;
          v22 = v10;
          v23 = 0LL;
        }
        v12 = *(_QWORD *)(v2 + 8LL * --v11 + 112);
      }
      if ( !v21 && !v7 )
      {
        MiFlushTbList((__int64)&v29, (_KPROCESS *)v21);
        v6 = (_KPROCESS *)v21;
        v7 = 6LL;
        v5 = v26;
        continue;
      }
      break;
    }
LABEL_52:
    MiFlushTbList((__int64)&v29, v6);
  }
  else
  {
    MiReplaceWorkingSetEntrySmall(a1, a2);
  }
}
