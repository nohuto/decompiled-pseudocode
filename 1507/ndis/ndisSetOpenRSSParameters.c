/*
 * XREFs of ndisSetOpenRSSParameters @ 0x1C001F0A8
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C00B0AC0 (ndisOidPreRSSParameters.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     memcmp @ 0x1C00235F0 (memcmp.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     WPP_SF_qqDD @ 0x1C0037774 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 *     Template_jqxqqq @ 0x1C003F10C (Template_jqxqqq.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

unsigned __int8 __fastcall ndisSetOpenRSSParameters(_QWORD *a1, __int64 a2, int *a3)
{
  __int64 v3; // rdi
  __int64 v6; // r14
  unsigned int v7; // ecx
  int v8; // ebx
  unsigned int *v9; // rsi
  unsigned __int8 v10; // r8
  unsigned int v11; // r12d
  __int64 v12; // r11
  PVOID PoolWithTag; // rax
  PVOID v14; // rax
  KIRQL v15; // al
  __int64 v16; // r14
  unsigned __int8 v17; // r15
  __int64 v18; // rax
  __int64 v20; // rcx
  _QWORD *v21; // r9
  __int64 v22; // rcx
  unsigned __int16 v23; // ax
  unsigned __int16 v24; // cx
  unsigned __int64 v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // rsi
  int v29; // eax
  bool v30; // dl
  bool v31; // al
  unsigned __int16 v32; // ax
  int v33; // ecx
  int v34; // eax
  unsigned __int16 v35; // ax
  _QWORD *v36; // rcx
  int v37; // edx
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // [rsp+20h] [rbp-88h]
  unsigned __int8 v41; // [rsp+50h] [rbp-58h]
  int v42; // [rsp+54h] [rbp-54h]
  int v43; // [rsp+58h] [rbp-50h]
  KIRQL NewIrql; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v45; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v46; // [rsp+B8h] [rbp+10h]
  __int16 v48; // [rsp+C8h] [rbp+20h]
  unsigned __int8 v49; // [rsp+C8h] [rbp+20h]

  v3 = a1[2];
  v6 = 0LL;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqq(136LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v3, a1, a2);
  v7 = *(_DWORD *)(a2 + 48);
  v8 = 0;
  *(_DWORD *)(a2 + 56) = 0;
  if ( v7 < 0x1C )
  {
    *(_DWORD *)(a2 + 56) = 28;
    v8 = -1073676268;
    if ( (unsigned __int8)byte_1C0085312 < 2u )
      goto LABEL_36;
    v20 = 137LL;
    goto LABEL_34;
  }
  v9 = *(unsigned int **)(a2 + 40);
  v10 = *((_BYTE *)v9 + 1);
  if ( v10 >= 2u )
  {
    if ( *((_WORD *)v9 + 1) < 0x28u )
    {
      if ( (unsigned __int8)byte_1C0085312 >= 2u )
        WPP_SF_qq(138LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v3, a2);
      v8 = -1073676268;
      goto LABEL_36;
    }
    if ( v7 < 0x28 )
    {
      *(_DWORD *)(a2 + 56) = 40;
      v8 = -1073676268;
      if ( (unsigned __int8)byte_1C0085312 < 2u )
        goto LABEL_36;
      v20 = 139LL;
      v21 = (_QWORD *)a2;
      goto LABEL_35;
    }
  }
  v11 = v9[6] + *((unsigned __int16 *)v9 + 10);
  v12 = a1[61];
  if ( !v12 && ((v9[1] & 0x10) != 0 || !(unsigned __int8)v9[2]) )
    goto LABEL_36;
  if ( *((_WORD *)v9 + 6) > 0x200u )
  {
    if ( (unsigned __int8)byte_1C0085312 < 2u )
    {
LABEL_46:
      v8 = -1073676267;
      goto LABEL_36;
    }
    v22 = 140LL;
LABEL_45:
    WPP_SF_qq(v22, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v3, a1);
    goto LABEL_46;
  }
  if ( *((_WORD *)v9 + 10) != 40 && (v9[1] & 0x10) == 0 && (unsigned __int8)v9[2] )
  {
    if ( (unsigned __int8)byte_1C0085312 < 2u )
      goto LABEL_46;
    v22 = 141LL;
    goto LABEL_45;
  }
  if ( v9[4] + *((unsigned __int16 *)v9 + 6) > v11 )
    v11 = v9[4] + *((unsigned __int16 *)v9 + 6);
  if ( v10 >= 2u && v11 <= v9[7] + v9[8] * v9[9] )
    v11 = v9[7] + v9[8] * v9[9];
  v8 = 0;
  if ( v7 < v11 )
  {
    *(_DWORD *)(a2 + 56) = v11;
    v8 = -1073676268;
    if ( (unsigned __int8)byte_1C0085312 < 2u )
      goto LABEL_36;
    v20 = 142LL;
LABEL_34:
    v21 = a1;
LABEL_35:
    WPP_SF_qqd(v20, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v3, v21, -1073676268);
    goto LABEL_36;
  }
  if ( v12 )
    v6 = a1[61];
  if ( (*(_QWORD *)(v3 + 1984)
     || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x720uLL, 0x7372444Eu),
         (*(_QWORD *)(v3 + 1984) = PoolWithTag) != 0LL))
    && (a1[60] || (v14 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x390uLL, 0x7372444Eu), (a1[60] = v14) != 0LL)) )
  {
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
    NewIrql = v15;
    *(_DWORD *)(v3 + 1856) = 2304943;
    if ( !v6 )
      goto LABEL_25;
    v45 = *((_BYTE *)v9 + 1);
    if ( *(_BYTE *)(v6 + 1) != v45 )
      goto LABEL_25;
    if ( !(unsigned __int8)v9[2] )
      goto LABEL_25;
    v48 = *((_WORD *)v9 + 2);
    if ( (v48 & 0x10) != 0 )
      goto LABEL_25;
    v23 = *(_WORD *)(v6 + 12);
    if ( v23 != *((_WORD *)v9 + 6) )
      goto LABEL_25;
    if ( memcmp((const void *)(v6 + *(unsigned int *)(v6 + 16)), (char *)v9 + v9[4], v23) )
      goto LABEL_25;
    v24 = *(_WORD *)(v6 + 20);
    if ( v24 != *((_WORD *)v9 + 10)
      || *(_WORD *)(v6 + 6) != *((_WORD *)v9 + 3)
      || *(_WORD *)(v6 + 4) != v48
      || memcmp((const void *)(v6 + *(unsigned int *)(v6 + 24)), (char *)v9 + v9[6], v24) )
    {
      goto LABEL_25;
    }
    v25 = *(_QWORD *)v6 - *(_QWORD *)v9;
    if ( *(_QWORD *)v6 == *(_QWORD *)v9 )
      v25 = *(unsigned int *)(v6 + 8) - (unsigned __int64)v9[2];
    if ( v25
      || v45 >= 2u
      && ((v26 = v9[8], *(_DWORD *)(v6 + 32) != v26)
       || (v27 = v9[9], *(_DWORD *)(v6 + 36) != v27)
       || memcmp((const void *)(v6 + *(unsigned int *)(v6 + 28)), (char *)v9 + v9[7], v27 * v26)) )
    {
LABEL_25:
      v16 = *(_QWORD *)(v3 + 1984) + 912LL;
      memmove((void *)v16, v9, v11);
      if ( *(_QWORD *)(v3 + 552) )
      {
        v28 = *(_QWORD *)(v3 + 1984);
        v49 = *(_BYTE *)(v16 + 1);
        v46 = *(_BYTE *)(v28 + 1);
        v29 = *(_DWORD *)(v16 + 8);
        v42 = v29;
        v30 = v46 == v49;
        if ( (unsigned __int8)*(_DWORD *)(v28 + 8) != (unsigned __int8)v29 )
          v30 = 0;
        v43 = (unsigned __int8)v29;
        v31 = v30;
        if ( ((*(_BYTE *)(v28 + 4) ^ *(_BYTE *)(v16 + 4)) & 0x10) != 0 )
          v31 = 0;
        v41 = v31;
        v32 = *(_WORD *)(v16 + 12);
        if ( *(_WORD *)(v28 + 12) != v32
          || memcmp(
               (const void *)(v28 + *(unsigned int *)(v28 + 16)),
               (const void *)(v16 + *(unsigned int *)(v16 + 16)),
               v32) )
        {
          v41 = 0;
        }
        if ( v46 < 2u
          || v49 < 2u
          || (v33 = *(_DWORD *)(v16 + 32), *(_DWORD *)(v28 + 32) == v33)
          && (v34 = *(_DWORD *)(v16 + 36), *(_DWORD *)(v28 + 36) == v34)
          && !memcmp(
                (const void *)(v28 + *(unsigned int *)(v28 + 28)),
                (const void *)(v16 + *(unsigned int *)(v16 + 28)),
                (unsigned int)(v33 * v34)) )
        {
          v17 = v41;
        }
        else
        {
          v17 = 0;
        }
        v35 = *(_WORD *)(v16 + 20);
        if ( *(_WORD *)(v28 + 20) != v35
          || memcmp(
               (const void *)(v28 + *(unsigned int *)(v28 + 24)),
               (const void *)(v16 + *(unsigned int *)(v16 + 24)),
               v35) )
        {
          v17 = 0;
        }
        v36 = *(_QWORD **)(v3 + 56);
        v37 = v42 & 0xFFFF00;
        while ( v36 )
        {
          v38 = v36[61];
          if ( v38 && v36 != a1 )
            v37 |= *(_DWORD *)(v38 + 8) & 0xFFFF00;
          v36 = (_QWORD *)v36[49];
        }
        *(_DWORD *)(v16 + 8) = v37 | v43;
        v39 = *(_DWORD *)(v28 + 8) & 0xFFFF00;
        *(_QWORD *)(v3 + 520) = 0LL;
        *(_DWORD *)(v3 + 1856) = 0;
        if ( v37 != v39 )
          v17 = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
        if ( v17 == 1 )
          goto LABEL_37;
      }
      else
      {
        v17 = 0;
        *(_QWORD *)(v3 + 520) = 0LL;
        *(_DWORD *)(v3 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
      }
      *(_DWORD *)(a2 + 88) |= 0x800u;
      *(_QWORD *)(v3 + 528) = *(_QWORD *)(a2 + 40);
      *(_WORD *)(v3 + 536) = *(_WORD *)(a2 + 48);
      v18 = *(_QWORD *)(v3 + 1984);
      *(_DWORD *)(a2 + 48) = v11;
      *(_QWORD *)(a2 + 40) = v18 + 912;
      goto LABEL_28;
    }
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
  }
  else
  {
    v8 = -1073741670;
  }
LABEL_36:
  v17 = 1;
LABEL_37:
  *(_DWORD *)(a2 + 52) = *(_DWORD *)(a2 + 48);
LABEL_28:
  *a3 = v8;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    LODWORD(v40) = v17;
    WPP_SF_qqDD(143LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v3, a1, v40, v8);
  }
  if ( v8 && (Microsoft_Windows_NDISEnableBits & 0x400000000LL) != 0 )
    Template_jqxqqq(
      *(_DWORD *)(v3 + 4112),
      (unsigned int)&SetOpenRSSCapsFailed,
      v3 + 4064,
      v3 + 4064,
      *(_DWORD *)(v3 + 4112),
      *(_QWORD *)(v3 + 4080),
      v8,
      154,
      (char)a1);
  return v17;
}
