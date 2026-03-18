/*
 * XREFs of ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C0051B58
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C004EE70 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002FA30 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall GreBatchTextOut(struct XDCOBJ *a1, struct _BATCHTEXTOUT *Src, size_t Size)
{
  __int64 v3; // r14
  __int64 v6; // rdi
  __int64 v7; // r13
  int v8; // r15d
  int *v9; // r8
  int v10; // r9d
  unsigned int v11; // r10d
  __int64 v12; // rcx
  unsigned int v13; // r14d
  unsigned int v14; // r8d
  __int64 v15; // rcx
  int v16; // r12d
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r14d
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rbx
  struct tagRECT *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v32; // [rsp+B0h] [rbp+18h]
  int v33; // [rsp+B8h] [rbp+20h]

  v3 = (unsigned int)Size;
  if ( (unsigned int)Size < 0x54 )
    return 0LL;
  if ( !Src )
    return 0LL;
  v6 = AllocFreeTmpBuffer((unsigned int)Size);
  if ( !v6 )
    return 0LL;
  if ( (struct _BATCHTEXTOUT *)((char *)Src + v3) < Src || (unsigned __int64)Src + v3 > W32UserProbeAddress )
    *W32UserProbeAddress = 0;
  memmove((void *)v6, Src, (unsigned int)v3);
  v7 = 0LL;
  v8 = -1;
  v9 = 0LL;
  v10 = *(_DWORD *)(v6 + 32);
  v11 = *(_DWORD *)(v6 + 56);
  v12 = *(unsigned int *)(v6 + 60);
  v13 = v3 - 84;
  if ( v11 > v13 >> 1 )
  {
LABEL_39:
    FreeTmpBuffer(v6);
    return 0LL;
  }
  if ( (_DWORD)v12 )
  {
    v14 = 4;
    if ( (v10 & 0x2000) != 0 )
      v14 = 8;
    if ( (unsigned int)v12 <= v13
      && v11 <= (v13 - (unsigned int)v12) / v14
      && (_DWORD)v12 == (((_DWORD)v12 + 3) & 0xFFFFFFFC) )
    {
      v9 = (int *)(v12 + v6 + 84);
      goto LABEL_15;
    }
    goto LABEL_39;
  }
LABEL_15:
  v15 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v16 = *(_DWORD *)(v15 + 40);
  v32 = *(_DWORD *)(v15 + 44);
  v17 = *(_DWORD *)(v6 + 4);
  if ( v16 != v17 )
  {
    *(_DWORD *)(v15 + 40) = v17;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 44LL) = *(_DWORD *)(v6 + 16);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 7u;
  }
  v18 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v19 = *(_DWORD *)(v18 + 32);
  v33 = *(_DWORD *)(v18 + 36);
  v20 = *(_DWORD *)(v6 + 8);
  if ( v19 != v20 )
  {
    *(_DWORD *)(v18 + 32) = v20;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 36LL) = *(_DWORD *)(v6 + 20);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0xBu;
  }
  v21 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v22 = *(_QWORD *)(v6 + 64);
  if ( *(_QWORD *)(v21 + 176) != v22 )
  {
    v7 = *(_QWORD *)(v21 + 176);
    *(_QWORD *)(v21 + 176) = v22;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0x10u;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) &= ~0x20u;
  }
  v23 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v24 = *(_DWORD *)(v6 + 72);
  if ( *(_DWORD *)(v23 + 152) != v24 )
  {
    v8 = *(_DWORD *)(v23 + 152);
    *(_DWORD *)(v23 + 152) = v24;
  }
  v25 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v26 = *(_QWORD *)(v25 + 336);
  if ( v26 != *(_QWORD *)(v6 + 76) )
  {
    *(_DWORD *)(v25 + 336) = *(_DWORD *)(v6 + 76);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 340LL) = *(_DWORD *)(v6 + 80);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 352LL) |= 0x2010u;
  }
  if ( v10 >= 0 )
  {
    v27 = (struct tagRECT *)(v6 + 36);
  }
  else
  {
    v27 = 0LL;
    v10 &= ~0x80000000;
  }
  GreExtTextOutWLocked(
    a1,
    *(_DWORD *)(v6 + 24),
    *(_DWORD *)(v6 + 28),
    v10,
    v27,
    (unsigned __int16 *)(v6 + 84),
    v11,
    v9,
    *(_DWORD *)(v6 + 12),
    0LL,
    *(_DWORD *)(v6 + 52));
  v28 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  if ( *(_DWORD *)(v28 + 40) != v16 )
  {
    *(_DWORD *)(v28 + 40) = v16;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 44LL) = v32;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 7u;
  }
  v29 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  if ( *(_DWORD *)(v29 + 32) != v19 )
  {
    *(_DWORD *)(v29 + 32) = v19;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 36LL) = v33;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0xBu;
  }
  if ( v7 )
  {
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 176LL) = v7;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0x10u;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) &= ~0x20u;
  }
  if ( v8 != -1 )
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 152LL) = v8;
  v30 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  if ( v26 != *(_QWORD *)(v30 + 336) )
  {
    *(_DWORD *)(v30 + 336) = v26;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 340LL) = HIDWORD(v26);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 352LL) |= 0x2010u;
  }
  FreeTmpBuffer(v6);
  return 1LL;
}
