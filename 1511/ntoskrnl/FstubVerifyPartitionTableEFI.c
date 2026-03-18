/*
 * XREFs of FstubVerifyPartitionTableEFI @ 0x1405F6308
 * Callers:
 *     IoVerifyPartitionTable @ 0x14051AB28 (IoVerifyPartitionTable.c)
 * Callees:
 *     FstubReadTableEFI @ 0x14012CB00 (FstubReadTableEFI.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     FstubReadSectors @ 0x1404E857C (FstubReadSectors.c)
 *     FstubWriteHeaderEFI @ 0x14051636C (FstubWriteHeaderEFI.c)
 *     FstubWriteSector @ 0x140516724 (FstubWriteSector.c)
 *     FstubReadHeaderEFI @ 0x140516A5C (FstubReadHeaderEFI.c)
 */

__int64 __fastcall FstubVerifyPartitionTableEFI(__int64 a1, char a2)
{
  char v4; // si
  char v5; // bp
  char *PoolWithTag; // rdi
  _DWORD *v8; // rbx
  NTSTATUS v9; // eax
  _DWORD *v10; // rbx
  int Sectors; // ebx
  unsigned __int64 v12; // r12
  __int64 v13; // r15
  unsigned __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // r15
  __int64 v17; // r15
  __int64 v18; // r13
  int v19; // r9d
  PVOID Buffer; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  int v22; // [rsp+30h] [rbp-48h]
  __int128 v23; // [rsp+40h] [rbp-38h] BYREF
  _DWORD *v24; // [rsp+90h] [rbp+18h] BYREF

  v24 = 0LL;
  v4 = 0;
  v5 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x5CuLL, 0x42747346u);
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( FstubReadHeaderEFI(a1, 1LL, &v24) >= 0 )
  {
    v8 = v24;
    if ( (int)FstubReadTableEFI(a1, v24, 0LL) >= 0 )
    {
      v4 = 1;
      *(_OWORD *)PoolWithTag = *(_OWORD *)v8;
      *((_OWORD *)PoolWithTag + 1) = *((_OWORD *)v8 + 1);
      *((_OWORD *)PoolWithTag + 2) = *((_OWORD *)v8 + 2);
      *((_OWORD *)PoolWithTag + 3) = *((_OWORD *)v8 + 3);
      *((_OWORD *)PoolWithTag + 4) = *((_OWORD *)v8 + 4);
      *((_QWORD *)PoolWithTag + 10) = *((_QWORD *)v8 + 10);
      *((_DWORD *)PoolWithTag + 22) = v8[22];
    }
  }
  v9 = FstubReadHeaderEFI(a1, *(_QWORD *)(a1 + 56) - 1LL, &v24);
  v10 = v24;
  if ( v9 < 0 || (int)FstubReadTableEFI(a1, v24, 0LL) < 0 )
  {
LABEL_10:
    if ( v4 )
    {
      if ( v5 )
        goto LABEL_12;
    }
    else if ( !v5 )
    {
LABEL_14:
      Sectors = -1073741774;
      goto LABEL_25;
    }
    if ( a2 )
    {
      v12 = (unsigned int)(*(_DWORD *)(a1 + 8) + (v10[20] << 7) - 1) / *(_DWORD *)(a1 + 8);
      if ( v4 )
      {
        v13 = 2LL;
        v14 = *(_QWORD *)(a1 + 56) - v12;
        LODWORD(v24) = 1;
        v15 = v14 - 1;
      }
      else
      {
        v16 = *(_QWORD *)(a1 + 56);
        v15 = 2LL;
        LODWORD(v24) = 0;
        v13 = v16 - v12 - 1;
      }
      if ( v12 )
      {
        v17 = v13 - v15;
        v18 = -v15;
        while ( 1 )
        {
          Sectors = FstubReadSectors(*(PDEVICE_OBJECT *)a1, *(_DWORD *)(a1 + 8), v17 + v15, 1, *(PVOID *)(a1 + 48));
          if ( Sectors < 0 )
            break;
          Sectors = FstubWriteSector(*(PDEVICE_OBJECT *)a1, *(_DWORD *)(a1 + 8), v15, *(void **)(a1 + 48));
          if ( Sectors < 0 )
            break;
          if ( ++v15 + v18 >= v12 )
            goto LABEL_24;
        }
      }
      else
      {
LABEL_24:
        v19 = *((_DWORD *)PoolWithTag + 20);
        v22 = *((_DWORD *)PoolWithTag + 22);
        v21 = *((_QWORD *)PoolWithTag + 6);
        Buffer = (PVOID)*((_QWORD *)PoolWithTag + 5);
        v23 = *(_OWORD *)(PoolWithTag + 56);
        Sectors = FstubWriteHeaderEFI(a1, v12, &v23, v19, (__int64)Buffer, v21, v22, (int)v24);
      }
      goto LABEL_25;
    }
    goto LABEL_14;
  }
  v5 = 1;
  if ( !v4 )
  {
    *(_OWORD *)PoolWithTag = *(_OWORD *)v10;
    *((_OWORD *)PoolWithTag + 1) = *((_OWORD *)v10 + 1);
    *((_OWORD *)PoolWithTag + 2) = *((_OWORD *)v10 + 2);
    *((_OWORD *)PoolWithTag + 3) = *((_OWORD *)v10 + 3);
    *((_OWORD *)PoolWithTag + 4) = *((_OWORD *)v10 + 4);
    *((_QWORD *)PoolWithTag + 10) = *((_QWORD *)v10 + 10);
    *((_DWORD *)PoolWithTag + 22) = v10[22];
    goto LABEL_10;
  }
LABEL_12:
  Sectors = 0;
LABEL_25:
  ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)Sectors;
}
