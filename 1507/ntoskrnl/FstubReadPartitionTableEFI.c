/*
 * XREFs of FstubReadPartitionTableEFI @ 0x14066F604
 * Callers:
 *     IoReadPartitionTableEx @ 0x140562908 (IoReadPartitionTableEx.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     FstubReadTableEFI @ 0x1401E498C (FstubReadTableEFI.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     FstubReadHeaderEFI @ 0x14066F550 (FstubReadHeaderEFI.c)
 *     IoWritePartitionTableEx @ 0x14067024C (IoWritePartitionTableEx.c)
 */

__int64 __fastcall FstubReadPartitionTableEFI(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v5; // rdx
  NTSTATUS v6; // ebp
  _DWORD *v7; // rsi
  int v8; // eax
  char *v9; // r15
  __int64 v10; // r14
  char *PoolWithTag; // rax
  char *v12; // rbx
  char v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rcx
  char *v16; // r8
  __int64 v17; // r9
  unsigned int v18; // r15d
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // xmm0_8
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
          v14 = (unsigned int)(((_DWORD)v10 << 7) / *(_DWORD *)(a1 + 8));
          *((_QWORD *)v7 + 5) = v14 + 2;
          *((_QWORD *)v7 + 6) = *(_QWORD *)(a1 + 56) - v14 - 2;
        }
        *(_DWORD *)v12 = 1;
        *((_QWORD *)v12 + 3) = *((_QWORD *)v7 + 5) * *(unsigned int *)(a1 + 8);
        v15 = *(unsigned int *)(a1 + 8) * (*((_QWORD *)v7 + 6) - *((_QWORD *)v7 + 5) + 1LL);
        *((_DWORD *)v12 + 10) = v10;
        *((_QWORD *)v12 + 4) = v15;
        *(_OWORD *)(v12 + 8) = *(_OWORD *)(v7 + 14);
        if ( (_DWORD)v10 )
        {
          v16 = v9 + 6;
          v17 = v10;
          v18 = 0;
          do
          {
            if ( *(_DWORD *)(v16 - 6)
              || *((_WORD *)v16 - 1)
              || *(_WORD *)v16
              || v16[2]
              || v16[3]
              || v16[4]
              || v16[5]
              || v16[6]
              || v16[7]
              || v16[8]
              || v16[9] )
            {
              v19 = *(_QWORD *)(v16 + 26);
              v20 = 18LL * v18;
              *(_QWORD *)&v12[8 * v20 + 56] = v19;
              *(_QWORD *)&v12[8 * v20 + 56] = v19 * *(unsigned int *)(a1 + 8);
              v21 = *(_QWORD *)(v16 + 34) - *(_QWORD *)(v16 + 26) + 1LL;
              *(_QWORD *)&v12[8 * v20 + 64] = v21;
              v22 = *(unsigned int *)(a1 + 8);
              *(_DWORD *)&v12[8 * v20 + 48] = 1;
              *(_QWORD *)&v12[8 * v20 + 64] = v21 * v22;
              *(_OWORD *)&v12[8 * v20 + 80] = *(_OWORD *)(v16 - 6);
              *(_OWORD *)&v12[8 * v20 + 96] = *(_OWORD *)(v16 + 10);
              *(_QWORD *)&v12[8 * v20 + 112] = *(_QWORD *)(v16 + 42);
              *(_OWORD *)&v12[8 * v20 + 120] = *(_OWORD *)(v16 + 50);
              *(_OWORD *)&v12[8 * v20 + 136] = *(_OWORD *)(v16 + 66);
              *(_OWORD *)&v12[8 * v20 + 152] = *(_OWORD *)(v16 + 82);
              *(_OWORD *)&v12[8 * v20 + 168] = *(_OWORD *)(v16 + 98);
              v23 = *(_QWORD *)(v16 + 114);
              *(_DWORD *)&v12[8 * v20 + 72] = -1;
              ++v18;
              *(_QWORD *)&v12[8 * v20 + 184] = v23;
              v12[8 * v20 + 76] = 0;
            }
            v16 += 128;
            --v17;
          }
          while ( v17 );
          v28 = v18;
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
