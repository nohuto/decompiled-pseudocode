/*
 * XREFs of ndisSetOpenRSSParameters @ 0x1C002336C
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C00AAB00 (ndisOidPreRSSParameters.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memcmp @ 0x1C0026B00 (memcmp.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     WPP_SF_qqDD @ 0x1C0038468 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00384C4 (WPP_SF_qqq.c)
 *     Template_jqxqqq @ 0x1C004084C (Template_jqxqqq.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 */

unsigned __int8 __fastcall ndisSetOpenRSSParameters(_QWORD *a1, __int64 a2, int *a3)
{
  __int64 v3; // rdi
  __int64 v6; // r14
  unsigned int v7; // r8d
  int v8; // ebx
  __int64 v9; // rsi
  unsigned int v10; // eax
  unsigned __int8 v11; // dl
  unsigned __int16 v12; // cx
  unsigned int v13; // r12d
  __int64 v14; // r11
  PVOID PoolWithTag; // rax
  PVOID v16; // rax
  KIRQL v17; // al
  __int64 v18; // r14
  unsigned __int8 v19; // r15
  __int64 v20; // rax
  __int64 v22; // rcx
  _QWORD *v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // cx
  unsigned __int64 v28; // rcx
  int v29; // eax
  int v30; // ecx
  __int64 v31; // rsi
  int v32; // eax
  bool v33; // dl
  bool v34; // al
  unsigned __int16 v35; // ax
  int v36; // ecx
  int v37; // eax
  unsigned __int16 v38; // ax
  _QWORD *v39; // rcx
  int v40; // edx
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // [rsp+20h] [rbp-88h]
  unsigned __int8 v44; // [rsp+50h] [rbp-58h]
  int v45; // [rsp+54h] [rbp-54h]
  int v46; // [rsp+58h] [rbp-50h]
  KIRQL NewIrql; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v48; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v49; // [rsp+B8h] [rbp+10h]
  __int16 v51; // [rsp+C8h] [rbp+20h]
  unsigned __int8 v52; // [rsp+C8h] [rbp+20h]

  v3 = a1[2];
  v6 = 0LL;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqq(136LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v3, a1, a2);
  v7 = *(_DWORD *)(a2 + 48);
  v8 = 0;
  *(_DWORD *)(a2 + 56) = 0;
  if ( v7 < 0x1C )
  {
    *(_DWORD *)(a2 + 56) = 28;
    v8 = -1073676268;
    if ( (unsigned __int8)byte_1C0083712 < 2u )
      goto LABEL_37;
    v22 = 137LL;
    v23 = a1;
LABEL_36:
    WPP_SF_qqd(v22, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v3, v23, -1073676268);
    goto LABEL_37;
  }
  v9 = *(_QWORD *)(a2 + 40);
  v10 = 40;
  v11 = *(_BYTE *)(v9 + 1);
  if ( v11 >= 2u )
  {
    v12 = *(_WORD *)(v9 + 2);
    if ( v12 < 0x28u )
    {
      if ( (unsigned __int8)byte_1C0083712 < 2u )
      {
LABEL_42:
        v8 = -1073676268;
        goto LABEL_37;
      }
      v24 = 138LL;
LABEL_41:
      WPP_SF_qq(v24, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v3, a2);
      goto LABEL_42;
    }
    if ( v11 >= 3u )
    {
      v10 = 44;
      if ( v12 < 0x2Cu )
      {
        if ( (unsigned __int8)byte_1C0083712 < 2u )
          goto LABEL_42;
        v24 = 139LL;
        goto LABEL_41;
      }
    }
    if ( v7 < v10 )
    {
      *(_DWORD *)(a2 + 56) = v10;
      v8 = -1073676268;
      if ( (unsigned __int8)byte_1C0083712 < 2u )
        goto LABEL_37;
      v22 = 140LL;
      v23 = (_QWORD *)a2;
      goto LABEL_36;
    }
  }
  v13 = *(_DWORD *)(v9 + 24) + *(unsigned __int16 *)(v9 + 20);
  v14 = a1[61];
  if ( !v14 && ((*(_BYTE *)(v9 + 4) & 0x10) != 0 || !(unsigned __int8)*(_DWORD *)(v9 + 8)) )
    goto LABEL_37;
  if ( *(_WORD *)(v9 + 12) > 0x200u )
  {
    if ( (unsigned __int8)byte_1C0083712 < 2u )
    {
LABEL_51:
      v8 = -1073676267;
      goto LABEL_37;
    }
    v25 = 141LL;
LABEL_50:
    WPP_SF_qq(v25, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v3, a1);
    goto LABEL_51;
  }
  if ( *(_WORD *)(v9 + 20) != 40 && (*(_BYTE *)(v9 + 4) & 0x10) == 0 && (unsigned __int8)*(_DWORD *)(v9 + 8) )
  {
    if ( (unsigned __int8)byte_1C0083712 < 2u )
      goto LABEL_51;
    v25 = 142LL;
    goto LABEL_50;
  }
  if ( *(_DWORD *)(v9 + 16) + (unsigned int)*(unsigned __int16 *)(v9 + 12) > v13 )
    v13 = *(_DWORD *)(v9 + 16) + *(unsigned __int16 *)(v9 + 12);
  if ( v11 >= 2u && v13 <= *(_DWORD *)(v9 + 28) + *(_DWORD *)(v9 + 32) * *(_DWORD *)(v9 + 36) )
    v13 = *(_DWORD *)(v9 + 28) + *(_DWORD *)(v9 + 32) * *(_DWORD *)(v9 + 36);
  if ( !v13 && (*(_BYTE *)(v9 + 4) & 0x10) != 0 )
    v13 = *(unsigned __int16 *)(v9 + 2);
  v8 = 0;
  if ( v7 < v13 )
  {
    *(_DWORD *)(a2 + 56) = v13;
    v8 = -1073676268;
    if ( (unsigned __int8)byte_1C0083712 < 2u )
      goto LABEL_37;
    v22 = 143LL;
    v23 = a1;
    goto LABEL_36;
  }
  if ( v14 )
    v6 = a1[61];
  if ( (*(_QWORD *)(v3 + 1984)
     || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x728uLL, 0x7372444Eu),
         (*(_QWORD *)(v3 + 1984) = PoolWithTag) != 0LL))
    && (a1[60] || (v16 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x394uLL, 0x7372444Eu), (a1[60] = v16) != 0LL)) )
  {
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
    NewIrql = v17;
    *(_DWORD *)(v3 + 1856) = 2305010;
    if ( !v6 )
      goto LABEL_27;
    v48 = *(_BYTE *)(v9 + 1);
    if ( *(_BYTE *)(v6 + 1) != v48 )
      goto LABEL_27;
    if ( !(unsigned __int8)*(_DWORD *)(v9 + 8) )
      goto LABEL_27;
    v51 = *(_WORD *)(v9 + 4);
    if ( (v51 & 0x10) != 0 )
      goto LABEL_27;
    v26 = *(_WORD *)(v6 + 12);
    if ( v26 != *(_WORD *)(v9 + 12) )
      goto LABEL_27;
    if ( memcmp((const void *)(v6 + *(unsigned int *)(v6 + 16)), (const void *)(v9 + *(unsigned int *)(v9 + 16)), v26) )
      goto LABEL_27;
    v27 = *(_WORD *)(v6 + 20);
    if ( v27 != *(_WORD *)(v9 + 20)
      || *(_WORD *)(v6 + 6) != *(_WORD *)(v9 + 6)
      || *(_WORD *)(v6 + 4) != v51
      || memcmp((const void *)(v6 + *(unsigned int *)(v6 + 24)), (const void *)(v9 + *(unsigned int *)(v9 + 24)), v27) )
    {
      goto LABEL_27;
    }
    v28 = *(_QWORD *)v6 - *(_QWORD *)v9;
    if ( *(_QWORD *)v6 == *(_QWORD *)v9 )
      v28 = *(unsigned int *)(v6 + 8) - (unsigned __int64)*(unsigned int *)(v9 + 8);
    if ( v28
      || v48 >= 2u
      && ((v29 = *(_DWORD *)(v9 + 32), *(_DWORD *)(v6 + 32) != v29)
       || (v30 = *(_DWORD *)(v9 + 36), *(_DWORD *)(v6 + 36) != v30)
       || memcmp(
            (const void *)(v6 + *(unsigned int *)(v6 + 28)),
            (const void *)(v9 + *(unsigned int *)(v9 + 28)),
            (unsigned int)(v30 * v29))
       || v48 >= 3u && (*(_WORD *)(v6 + 40) != *(_WORD *)(v9 + 40) || *(_BYTE *)(v6 + 42) != *(_BYTE *)(v9 + 42))) )
    {
LABEL_27:
      v18 = *(_QWORD *)(v3 + 1984) + 916LL;
      memmove((void *)v18, (const void *)v9, v13);
      if ( *(_QWORD *)(v3 + 552) )
      {
        v31 = *(_QWORD *)(v3 + 1984);
        v52 = *(_BYTE *)(v18 + 1);
        v49 = *(_BYTE *)(v31 + 1);
        v32 = *(_DWORD *)(v18 + 8);
        v45 = v32;
        v33 = v49 == v52;
        if ( (unsigned __int8)*(_DWORD *)(v31 + 8) != (unsigned __int8)v32 )
          v33 = 0;
        v46 = (unsigned __int8)v32;
        v34 = v33;
        if ( ((*(_BYTE *)(v31 + 4) ^ *(_BYTE *)(v18 + 4)) & 0x10) != 0 )
          v34 = 0;
        v44 = v34;
        v35 = *(_WORD *)(v18 + 12);
        if ( *(_WORD *)(v31 + 12) != v35
          || memcmp(
               (const void *)(v31 + *(unsigned int *)(v31 + 16)),
               (const void *)(v18 + *(unsigned int *)(v18 + 16)),
               v35) )
        {
          v44 = 0;
        }
        if ( v49 < 2u || v52 < 2u )
        {
          v19 = v44;
        }
        else
        {
          v36 = *(_DWORD *)(v18 + 32);
          if ( *(_DWORD *)(v31 + 32) == v36
            && (v37 = *(_DWORD *)(v18 + 36), *(_DWORD *)(v31 + 36) == v37)
            && !memcmp(
                  (const void *)(v31 + *(unsigned int *)(v31 + 28)),
                  (const void *)(v18 + *(unsigned int *)(v18 + 28)),
                  (unsigned int)(v36 * v37)) )
          {
            v19 = v44;
          }
          else
          {
            v19 = 0;
          }
          if ( v49 >= 3u
            && v52 >= 3u
            && (*(_WORD *)(v31 + 40) != *(_WORD *)(v18 + 40) || *(_BYTE *)(v31 + 42) != *(_BYTE *)(v18 + 42)) )
          {
            v19 = 0;
          }
        }
        v38 = *(_WORD *)(v18 + 20);
        if ( *(_WORD *)(v31 + 20) != v38
          || memcmp(
               (const void *)(v31 + *(unsigned int *)(v31 + 24)),
               (const void *)(v18 + *(unsigned int *)(v18 + 24)),
               v38) )
        {
          v19 = 0;
        }
        v39 = *(_QWORD **)(v3 + 56);
        v40 = v45 & 0xFFFF00;
        while ( v39 )
        {
          v41 = v39[61];
          if ( v41 && v39 != a1 )
            v40 |= *(_DWORD *)(v41 + 8) & 0xFFFF00;
          v39 = (_QWORD *)v39[49];
        }
        *(_DWORD *)(v18 + 8) = v40 | v46;
        v42 = *(_DWORD *)(v31 + 8) & 0xFFFF00;
        *(_QWORD *)(v3 + 520) = 0LL;
        *(_DWORD *)(v3 + 1856) = 0;
        if ( v40 != v42 )
          v19 = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
        if ( v19 == 1 )
          goto LABEL_38;
      }
      else
      {
        v19 = 0;
        *(_QWORD *)(v3 + 520) = 0LL;
        *(_DWORD *)(v3 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
      }
      *(_DWORD *)(a2 + 88) |= 0x800u;
      *(_QWORD *)(v3 + 528) = *(_QWORD *)(a2 + 40);
      *(_WORD *)(v3 + 536) = *(_WORD *)(a2 + 48);
      v20 = *(_QWORD *)(v3 + 1984);
      *(_DWORD *)(a2 + 48) = v13;
      *(_QWORD *)(a2 + 40) = v20 + 916;
      goto LABEL_30;
    }
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
  }
  else
  {
    v8 = -1073741670;
  }
LABEL_37:
  v19 = 1;
LABEL_38:
  *(_DWORD *)(a2 + 52) = *(_DWORD *)(a2 + 48);
LABEL_30:
  *a3 = v8;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
  {
    LODWORD(v43) = v19;
    WPP_SF_qqDD(144LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v3, a1, v43, v8);
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
      239,
      (char)a1);
  return v19;
}
