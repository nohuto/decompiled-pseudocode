/*
 * XREFs of FstubWritePartitionTableEFI @ 0x14066FEB4
 * Callers:
 *     FstubCreateDiskEFI @ 0x14066F28C (FstubCreateDiskEFI.c)
 *     IoWritePartitionTableEx @ 0x14067024C (IoWritePartitionTableEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     FstubWriteEntryEFI @ 0x14066FCE4 (FstubWriteEntryEFI.c)
 *     FstubWriteHeaderEFI @ 0x14066FDCC (FstubWriteHeaderEFI.c)
 */

__int64 __fastcall FstubWritePartitionTableEFI(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        unsigned int a7,
        __int64 a8)
{
  __int64 v9; // r8
  __int64 v10; // rbx
  unsigned int v12; // r12d
  unsigned int v13; // edi
  unsigned int v14; // r14d
  __int64 v15; // rbx
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int128 v18; // xmm1
  unsigned __int64 v19; // rtt
  __int128 v20; // xmm0
  __int64 v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 result; // rax
  __int64 v26; // [rsp+20h] [rbp-C9h]
  __int64 v27; // [rsp+28h] [rbp-C1h]
  int v28; // [rsp+40h] [rbp-A9h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-A5h]
  __int64 v30; // [rsp+48h] [rbp-A1h]
  __int128 v31; // [rsp+50h] [rbp-99h] BYREF
  _OWORD v32[8]; // [rsp+60h] [rbp-89h] BYREF

  v9 = *(unsigned int *)(a1 + 8);
  v10 = a4;
  *(_QWORD *)&v31 = a2;
  v30 = a4;
  v29 = v9;
  v12 = ((unsigned int)v9 + (a3 << 7) - 1) / (unsigned int)v9;
  v13 = 0;
  v28 = 0;
  v14 = 0;
  if ( a7 )
  {
    v15 = a8 + 38;
    while ( 1 )
    {
      if ( *(_DWORD *)(v15 - 6)
        || *(_WORD *)(v15 - 2)
        || *(_WORD *)v15
        || *(_BYTE *)(v15 + 2)
        || *(_BYTE *)(v15 + 3)
        || *(_BYTE *)(v15 + 4)
        || *(_BYTE *)(v15 + 5)
        || *(_BYTE *)(v15 + 6)
        || *(_BYTE *)(v15 + 7)
        || *(_BYTE *)(v15 + 8)
        || *(_BYTE *)(v15 + 9) )
      {
        v16 = *(_OWORD *)(v15 - 6);
        v17 = *(_QWORD *)(v15 - 30);
        v18 = *(_OWORD *)(v15 + 10);
        *(_QWORD *)&v32[2] = v17 / v9;
        v19 = v17 - 1 + *(_QWORD *)(v15 - 22);
        v32[0] = v16;
        *((_QWORD *)&v32[2] + 1) = v19 / v9;
        v20 = *(_OWORD *)(v15 + 34);
        v21 = *(_QWORD *)(v15 + 26);
        v32[1] = v18;
        *(_QWORD *)&v32[3] = v21;
        v22 = *(_OWORD *)(v15 + 50);
        *(_OWORD *)((char *)&v32[3] + 8) = v20;
        LODWORD(v26) = a6;
        v23 = *(_OWORD *)(v15 + 66);
        *(_OWORD *)((char *)&v32[4] + 8) = v22;
        v24 = *(_OWORD *)(v15 + 82);
        *(_OWORD *)((char *)&v32[5] + 8) = v23;
        *(_QWORD *)&v23 = *(_QWORD *)(v15 + 98);
        *(_OWORD *)((char *)&v32[6] + 8) = v24;
        *((_QWORD *)&v32[7] + 1) = v23;
        result = FstubWriteEntryEFI(a1, v12, v13, (__int64)v32, v26, v27, (ULONG *)&v28);
        if ( (int)result < 0 )
          return result;
        v9 = v29;
        ++v13;
      }
      ++v14;
      v15 += 144LL;
      if ( v14 >= a7 )
      {
        v10 = v30;
        break;
      }
    }
  }
  while ( v13 < a3 )
  {
    memset(v32, 0, sizeof(v32));
    LODWORD(v26) = a6;
    result = FstubWriteEntryEFI(a1, v12, v13, (__int64)v32, v26, v27, (ULONG *)&v28);
    if ( (int)result < 0 )
      return result;
    ++v13;
  }
  v31 = *(_OWORD *)v31;
  return FstubWriteHeaderEFI(a1, v12, &v31, a3, v10, a5, v28, a6);
}
