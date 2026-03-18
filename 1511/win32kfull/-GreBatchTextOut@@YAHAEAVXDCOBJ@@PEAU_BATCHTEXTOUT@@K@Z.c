/*
 * XREFs of ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C0033EB0
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C0030EB0 (NtGdiFlushUserBatch.c)
 * Callees:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002A200 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall GreBatchTextOut(struct XDCOBJ *a1, struct _BATCHTEXTOUT *Src, size_t Size)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  __int64 v7; // r13
  int v8; // r12d
  int *v9; // r9
  int v10; // r11d
  unsigned int v11; // r10d
  __int64 v12; // r8
  unsigned int v13; // ecx
  unsigned int v14; // r9d
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
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v34; // [rsp+B0h] [rbp+18h]
  int v35; // [rsp+B8h] [rbp+20h]

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
  if ( v11 > (unsigned int)(v3 - 84) >> 1 )
  {
LABEL_42:
    FreeTmpBuffer(v6);
    return 0LL;
  }
  if ( (_DWORD)v12 )
  {
    v14 = 4;
    if ( (v10 & 0x2000) != 0 )
      v14 = 8;
    if ( (unsigned int)v12 <= v13 )
    {
      v15 = v13 - v12;
      v16 = v14 == 4 ? v15 >> 2 : v15 / v14;
      if ( v11 <= v16 && (_DWORD)v12 == (((_DWORD)v12 + 3) & 0xFFFFFFFC) )
      {
        v9 = (int *)(v12 + v6 + 84);
        goto LABEL_17;
      }
    }
    goto LABEL_42;
  }
LABEL_17:
  v17 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v18 = *(_DWORD *)(v17 + 40);
  v34 = *(_DWORD *)(v17 + 44);
  v19 = *(_DWORD *)(v6 + 4);
  if ( v18 != v19 )
  {
    *(_DWORD *)(v17 + 40) = v19;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 44LL) = *(_DWORD *)(v6 + 16);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 7u;
  }
  v20 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v21 = *(_DWORD *)(v20 + 32);
  v35 = *(_DWORD *)(v20 + 36);
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
    v7 = *(_QWORD *)(v23 + 176);
    *(_QWORD *)(v23 + 176) = v24;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0x10u;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) &= ~0x20u;
  }
  v25 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v26 = *(_DWORD *)(v6 + 72);
  if ( *(_DWORD *)(v25 + 152) != v26 )
  {
    v8 = *(_DWORD *)(v25 + 152);
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
  if ( v10 < 0 )
  {
    v29 = 0LL;
    v10 &= ~0x80000000;
  }
  else
  {
    v29 = (struct tagRECT *)(v6 + 36);
  }
  GreExtTextOutWLocked(
    a1,
    *(_DWORD *)(v6 + 24),
    *(_DWORD *)(v6 + 28),
    v10,
    v29,
    (unsigned __int16 *)(v6 + 84),
    v11,
    v9,
    *(_DWORD *)(v6 + 12),
    0LL,
    *(_DWORD *)(v6 + 52));
  v30 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  if ( *(_DWORD *)(v30 + 40) != v18 )
  {
    *(_DWORD *)(v30 + 40) = v18;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 44LL) = v34;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 7u;
  }
  v31 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  if ( *(_DWORD *)(v31 + 32) != v21 )
  {
    *(_DWORD *)(v31 + 32) = v21;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 36LL) = v35;
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
  v32 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  if ( v28 != *(_QWORD *)(v32 + 336) )
  {
    *(_DWORD *)(v32 + 336) = v28;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 340LL) = HIDWORD(v28);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 352LL) |= 0x2010u;
  }
  FreeTmpBuffer(v6);
  return 1LL;
}
