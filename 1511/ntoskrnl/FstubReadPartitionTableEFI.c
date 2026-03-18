/*
 * XREFs of FstubReadPartitionTableEFI @ 0x1405167E0
 * Callers:
 *     IoReadPartitionTableEx @ 0x1404E8424 (IoReadPartitionTableEx.c)
 * Callees:
 *     FstubReadTableEFI @ 0x14012CB00 (FstubReadTableEFI.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IoWritePartitionTableEx @ 0x14051621C (IoWritePartitionTableEx.c)
 *     FstubReadHeaderEFI @ 0x140516A5C (FstubReadHeaderEFI.c)
 */

__int64 __fastcall FstubReadPartitionTableEFI(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v5; // rdx
  int v6; // ebp
  _DWORD *v7; // rsi
  int v8; // eax
  char *v9; // r15
  __int64 v10; // r14
  char *PoolWithTag; // rax
  char *v12; // rbx
  char v13; // r10
  __int64 v14; // rcx
  char *v15; // r8
  __int64 v16; // r9
  unsigned int v17; // r15d
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // xmm0_8
  __int64 v24; // rcx
  PVOID P; // [rsp+20h] [rbp-48h] BYREF
  _DWORD *v26; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v28; // [rsp+88h] [rbp+20h]

  P = 0LL;
  v26 = 0LL;
  v28 = 0;
  *a3 = 0LL;
  if ( a2 )
    v5 = *(_QWORD *)(a1 + 56) - 1LL;
  else
    v5 = 1LL;
  v6 = FstubReadHeaderEFI(a1, v5, &v26);
  if ( v6 >= 0 )
  {
    v7 = v26;
    v8 = FstubReadTableEFI(a1, v26, &P);
    v9 = (char *)P;
    v6 = v8;
    if ( v8 >= 0 )
    {
      v10 = (unsigned int)v7[20];
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(144 * v10 + 48), 0x42747346u);
      v12 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, (unsigned int)(144 * v10 + 48));
        if ( a2 || *((_QWORD *)v7 + 4) == *(_QWORD *)(a1 + 56) - 1LL )
        {
          v13 = 0;
        }
        else
        {
          v13 = 1;
          v24 = (unsigned int)(((_DWORD)v10 << 7) / *(_DWORD *)(a1 + 8));
          *((_QWORD *)v7 + 5) = v24 + 2;
          *((_QWORD *)v7 + 6) = *(_QWORD *)(a1 + 56) - v24 - 2;
        }
        *(_DWORD *)v12 = 1;
        *((_QWORD *)v12 + 3) = *((_QWORD *)v7 + 5) * *(unsigned int *)(a1 + 8);
        v14 = *(unsigned int *)(a1 + 8) * (*((_QWORD *)v7 + 6) - *((_QWORD *)v7 + 5) + 1LL);
        *((_DWORD *)v12 + 10) = v10;
        *((_QWORD *)v12 + 4) = v14;
        *(_OWORD *)(v12 + 8) = *(_OWORD *)(v7 + 14);
        if ( (_DWORD)v10 )
        {
          v15 = v9 + 6;
          v16 = v10;
          v17 = 0;
          do
          {
            if ( *(_DWORD *)(v15 - 6)
              || *((_WORD *)v15 - 1)
              || *(_WORD *)v15
              || v15[2]
              || v15[3]
              || v15[4]
              || v15[5]
              || v15[6]
              || v15[7]
              || v15[8]
              || v15[9] )
            {
              v19 = *(_QWORD *)(v15 + 26);
              v20 = 18LL * v17;
              *(_QWORD *)&v12[8 * v20 + 56] = v19;
              *(_QWORD *)&v12[8 * v20 + 56] = v19 * *(unsigned int *)(a1 + 8);
              v21 = *(_QWORD *)(v15 + 34) - *(_QWORD *)(v15 + 26) + 1LL;
              *(_QWORD *)&v12[8 * v20 + 64] = v21;
              v22 = *(unsigned int *)(a1 + 8);
              *(_DWORD *)&v12[8 * v20 + 48] = 1;
              *(_QWORD *)&v12[8 * v20 + 64] = v21 * v22;
              *(_OWORD *)&v12[8 * v20 + 80] = *(_OWORD *)(v15 - 6);
              *(_OWORD *)&v12[8 * v20 + 96] = *(_OWORD *)(v15 + 10);
              *(_QWORD *)&v12[8 * v20 + 112] = *(_QWORD *)(v15 + 42);
              *(_OWORD *)&v12[8 * v20 + 120] = *(_OWORD *)(v15 + 50);
              *(_OWORD *)&v12[8 * v20 + 136] = *(_OWORD *)(v15 + 66);
              *(_OWORD *)&v12[8 * v20 + 152] = *(_OWORD *)(v15 + 82);
              *(_OWORD *)&v12[8 * v20 + 168] = *(_OWORD *)(v15 + 98);
              v23 = *(_QWORD *)(v15 + 114);
              *(_DWORD *)&v12[8 * v20 + 72] = -1;
              ++v17;
              *(_QWORD *)&v12[8 * v20 + 184] = v23;
              v12[8 * v20 + 76] = 0;
            }
            v15 += 128;
            --v16;
          }
          while ( v16 );
          v28 = v17;
          v9 = (char *)P;
        }
        *((_DWORD *)v12 + 1) = v28;
        if ( v13 )
          IoWritePartitionTableEx(*(PDEVICE_OBJECT *)a1, (struct _DRIVE_LAYOUT_INFORMATION_EX *)v12);
        *a3 = v12;
      }
      else
      {
        v6 = -1073741670;
      }
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  return (unsigned int)v6;
}
