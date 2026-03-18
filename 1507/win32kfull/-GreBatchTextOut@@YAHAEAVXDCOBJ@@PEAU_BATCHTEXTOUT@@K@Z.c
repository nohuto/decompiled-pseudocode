/*
 * XREFs of ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C001DA60
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C001BF90 (NtGdiFlushUserBatch.c)
 * Callees:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C001E8B0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall GreBatchTextOut(struct XDCOBJ *a1, struct _BATCHTEXTOUT *a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r13
  int v9; // r12d
  __int64 v10; // r9
  signed int v11; // r11d
  unsigned int v12; // r10d
  __int64 v13; // r8
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  __int64 v17; // rcx
  int v18; // r15d
  int v19; // eax
  __int64 v20; // rcx
  int v21; // esi
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rbx
  struct tagRECT *v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v36; // [rsp+B0h] [rbp+18h]
  int v37; // [rsp+B8h] [rbp+20h]

  v3 = a3;
  if ( a3 < 0x54 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v6 = AllocFreeTmpBuffer(a3);
  if ( !v6 )
    return 0LL;
  if ( (struct _BATCHTEXTOUT *)((char *)a2 + v3) < a2 || (unsigned __int64)a2 + v3 > W32UserProbeAddress )
    *W32UserProbeAddress = 0;
  memmove((void *)v6, a2, (unsigned int)v3);
  v8 = 0LL;
  v9 = -1;
  v10 = 0LL;
  v11 = *(_DWORD *)(v6 + 32);
  v12 = *(_DWORD *)(v6 + 56);
  v13 = *(unsigned int *)(v6 + 60);
  v14 = v3 - 84;
  if ( v12 > (unsigned int)(v3 - 84) >> 1 )
  {
LABEL_42:
    FreeTmpBuffer(v6, v7, v13, v10);
    return 0LL;
  }
  if ( (_DWORD)v13 )
  {
    v10 = 4LL;
    if ( (v11 & 0x2000) != 0 )
      v10 = 8LL;
    if ( (unsigned int)v13 <= v14 )
    {
      v15 = v14 - v13;
      if ( (_DWORD)v10 == 4 )
      {
        v16 = v15 >> 2;
      }
      else
      {
        v7 = v15 % (unsigned int)v10;
        v16 = v15 / (unsigned int)v10;
      }
      if ( v12 <= v16 && (_DWORD)v13 == (((_DWORD)v13 + 3) & 0xFFFFFFFC) )
      {
        v10 = v13 + v6 + 84;
        goto LABEL_17;
      }
    }
    goto LABEL_42;
  }
LABEL_17:
  v17 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v18 = *(_DWORD *)(v17 + 40);
  v36 = *(_DWORD *)(v17 + 44);
  v19 = *(_DWORD *)(v6 + 4);
  if ( v18 != v19 )
  {
    *(_DWORD *)(v17 + 40) = v19;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 44LL) = *(_DWORD *)(v6 + 16);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 7u;
  }
  v20 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v21 = *(_DWORD *)(v20 + 32);
  v37 = *(_DWORD *)(v20 + 36);
  v22 = *(_DWORD *)(v6 + 8);
  if ( v21 != v22 )
  {
    *(_DWORD *)(v20 + 32) = v22;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 36LL) = *(_DWORD *)(v6 + 20);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0xBu;
  }
  v23 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v24 = *(_QWORD *)(v6 + 64);
  if ( *(_QWORD *)(v23 + 176) != v24 )
  {
    v8 = *(_QWORD *)(v23 + 176);
    *(_QWORD *)(v23 + 176) = v24;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0x10u;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) &= ~0x20u;
  }
  v25 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v26 = *(_DWORD *)(v6 + 72);
  if ( *(_DWORD *)(v25 + 152) != v26 )
  {
    v9 = *(_DWORD *)(v25 + 152);
    *(_DWORD *)(v25 + 152) = v26;
  }
  v27 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v28 = *(_QWORD *)(v27 + 336);
  if ( v28 != *(_QWORD *)(v6 + 76) )
  {
    *(_DWORD *)(v27 + 336) = *(_DWORD *)(v6 + 76);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 340LL) = *(_DWORD *)(v6 + 80);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 352LL) |= 0x2010u;
  }
  if ( v11 < 0 )
  {
    v29 = 0LL;
    v11 &= ~0x80000000;
  }
  else
  {
    v29 = (struct tagRECT *)(v6 + 36);
  }
  GreExtTextOutWLocked(
    a1,
    *(_DWORD *)(v6 + 24),
    *(_DWORD *)(v6 + 28),
    v11,
    v29,
    (unsigned __int16 *)(v6 + 84),
    v12,
    (int *)v10,
    *(_DWORD *)(v6 + 12),
    0LL,
    *(_DWORD *)(v6 + 52));
  v32 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  if ( *(_DWORD *)(v32 + 40) != v18 )
  {
    *(_DWORD *)(v32 + 40) = v18;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 44LL) = v36;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 7u;
  }
  v33 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  if ( *(_DWORD *)(v33 + 32) != v21 )
  {
    *(_DWORD *)(v33 + 32) = v21;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 36LL) = v37;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0xBu;
  }
  if ( v8 )
  {
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 176LL) = v8;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0x10u;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) &= ~0x20u;
  }
  if ( v9 != -1 )
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 152LL) = v9;
  v34 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  if ( v28 != *(_QWORD *)(v34 + 336) )
  {
    *(_DWORD *)(v34 + 336) = v28;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 340LL) = HIDWORD(v28);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 352LL) |= 0x2010u;
  }
  FreeTmpBuffer(v6, HIDWORD(v28), v30, v31);
  return 1LL;
}
