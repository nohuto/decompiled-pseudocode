/*
 * XREFs of RaidXrbSetDataBufferAddress @ 0x1C0004930
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x1C0004350 (RaidpAdapterContinueScatterGather.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C0024AD0 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012FC0 (memmove.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C002E690 (RaidSrbExGetBidirectionalData.c)
 */

__int64 __fastcall RaidXrbSetDataBufferAddress(_QWORD *a1, __int64 a2, char a3)
{
  char v4; // r14
  __int64 v5; // rcx
  PVOID MappedSystemVa; // r15
  __int64 v9; // rbx
  __int64 v10; // rdx
  struct _MDL *v11; // rsi
  unsigned __int8 v12; // al
  unsigned int v13; // r12d
  bool v14; // cc
  int v15; // eax
  char v16; // al
  char v17; // r14
  __int64 result; // rax
  int v19; // ecx
  PMDL v20; // rcx
  __int64 BidirectionalData; // rax
  unsigned int v22; // eax
  unsigned int v23; // r11d
  __int64 v24; // r10
  __int64 v25; // rcx
  unsigned __int64 v26; // r8
  __int64 v27; // r9
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  unsigned int v31; // ecx
  unsigned int *Src; // [rsp+30h] [rbp-58h]
  __int64 v33; // [rsp+38h] [rbp-50h]
  PMDL MemoryDescriptorList[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int Size; // [rsp+90h] [rbp+8h]
  char v36; // [rsp+A0h] [rbp+18h]
  int v37; // [rsp+A8h] [rbp+20h]

  v4 = 0;
  v5 = 0LL;
  v36 = 0;
  MappedSystemVa = 0LL;
  v33 = 0LL;
  v9 = a1[20];
  if ( a3 )
  {
    BidirectionalData = RaidSrbExGetBidirectionalData(a1[20]);
    v10 = a1[18];
    v5 = BidirectionalData;
    v11 = (struct _MDL *)a1[16];
    v33 = BidirectionalData;
  }
  else
  {
    v10 = a1[13];
    v11 = (struct _MDL *)a1[12];
  }
  v12 = *(_BYTE *)(v9 + 2);
  if ( v12 != 40 )
  {
    v4 = *(_BYTE *)(v9 + 72);
    v13 = v12;
    v36 = *(_BYTE *)(v9 + 4);
    v37 = *(_DWORD *)(v9 + 12);
    Src = *(unsigned int **)(v9 + 24);
    Size = *(_DWORD *)(v9 + 16);
    goto LABEL_5;
  }
  v13 = *(_DWORD *)(v9 + 20);
  v37 = *(_DWORD *)(v9 + 24);
  if ( v5 && a3 )
  {
    v22 = *(_DWORD *)(v5 + 8);
    Src = *(unsigned int **)(v5 + 16);
  }
  else
  {
    Src = *(unsigned int **)(v9 + 64);
    v22 = *(_DWORD *)(v9 + 60);
  }
  Size = v22;
  if ( v13 )
  {
    v14 = v13 <= 0x17;
    if ( v13 != 23 )
    {
LABEL_6:
      if ( !v14 )
        goto LABEL_8;
      v15 = 8389124;
      if ( !_bittest(&v15, v13) )
        goto LABEL_8;
      goto LABEL_9;
    }
  }
  v23 = *(_DWORD *)(v9 + 56);
  v24 = 0LL;
  if ( !v23 )
  {
LABEL_5:
    v14 = v13 <= 0x17;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v25 = *(unsigned int *)(v9 + 4 * v24 + 120);
    if ( (unsigned int)v25 < 0x80 )
      goto LABEL_49;
    v26 = *(unsigned int *)(v9 + 16);
    if ( (unsigned int)v25 > (unsigned int)v26 )
      goto LABEL_49;
    v27 = (unsigned int)v25;
    v28 = *(_DWORD *)(v25 + v9) - 64;
    if ( !v28 )
      break;
    v29 = v28 - 1;
    if ( v29 )
    {
      v30 = v29 - 1;
      if ( v30 )
      {
        if ( v30 == 30 && v13 == 23 && v27 + 24 <= v26 )
        {
          v17 = *(_BYTE *)(v27 + v9 + 8);
          goto LABEL_10;
        }
      }
      else if ( !v13 && v27 + 40 <= v26 )
      {
        if ( *(_DWORD *)(v27 + v9 + 12) )
          v4 = *(_BYTE *)(v27 + v9 + 32);
        goto LABEL_8;
      }
    }
    else if ( !v13 && v27 + 56 <= v26 )
    {
      goto LABEL_45;
    }
LABEL_49:
    v24 = (unsigned int)(v24 + 1);
    if ( (unsigned int)v24 >= v23 )
      goto LABEL_5;
  }
  if ( v13 || v27 + 40 > v26 )
    goto LABEL_49;
LABEL_45:
  if ( *(_BYTE *)(v27 + v9 + 10) )
    v4 = *(_BYTE *)(v27 + v9 + 24);
LABEL_8:
  v16 = *(_BYTE *)(a2 + 393);
  if ( v16 != 3 && ((unsigned __int8)(v16 - 1) > 1u || !v13 && ((v4 - 8) & 0x5D) == 0) )
    return 0LL;
LABEL_9:
  v17 = v36;
LABEL_10:
  if ( !v10 )
    return 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _MDL *, PMDL *))(*(_QWORD *)(*(_QWORD *)(a2 + 696) + 8LL)
                                                                             + 120LL))(
             *(_QWORD *)(a2 + 696),
             v10,
             v11,
             MemoryDescriptorList);
  v19 = result;
  if ( (int)result >= 0 )
  {
    v20 = MemoryDescriptorList[0];
    a1[17] = MemoryDescriptorList[0];
    if ( v11 == v20 )
    {
      v19 = -2147483622;
    }
    else
    {
      if ( (v20->MdlFlags & 5) != 0 )
        MappedSystemVa = v20->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v20, 0, MmCached, 0LL, 0, 0x40000020u);
      v19 = 0;
    }
    result = (unsigned int)v19;
  }
  if ( v19 == -2147483622 )
    return 0LL;
  if ( v19 >= 0 )
  {
    if ( MappedSystemVa )
    {
      if ( (v37 & 0x80u) == 0 || a3 )
      {
        v31 = Size;
        if ( v13 == 23 && v17 == 9 && *Src )
          v31 = *Src;
        memmove(MappedSystemVa, Src, v31);
      }
      if ( *(_BYTE *)(v9 + 2) == 40 )
      {
        if ( a3 )
          *(_QWORD *)(v33 + 16) = MappedSystemVa;
        else
          *(_QWORD *)(v9 + 64) = MappedSystemVa;
      }
      else
      {
        *(_QWORD *)(v9 + 24) = MappedSystemVa;
      }
      return 0LL;
    }
    return 3221225626LL;
  }
  return result;
}
