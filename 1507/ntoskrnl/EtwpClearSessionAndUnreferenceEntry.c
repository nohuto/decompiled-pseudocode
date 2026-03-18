/*
 * XREFs of EtwpClearSessionAndUnreferenceEntry @ 0x1404D196C
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1404D18CC (EtwpDisableTraceProviders.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     memset @ 0x140195A80 (memset.c)
 *     EtwpGetSchematizedFilterSize @ 0x1404CDFBC (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1404CE13C (EtwpUnreferenceGuidEntry.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1404D345C (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpSendDataBlock @ 0x1404D52AC (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1404D5C00 (EtwpUnreferenceDataBlock.c)
 *     EtwpAllocDataBlock @ 0x1404D5CB4 (EtwpAllocDataBlock.c)
 *     EtwpUpdateFilterData @ 0x1404D6208 (EtwpUpdateFilterData.c)
 *     EtwpCopySchematizedFilters @ 0x1406E9FD4 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpClearSessionAndUnreferenceEntry(int a1, __int64 a2, char a3)
{
  int v4; // r13d
  unsigned int v5; // r14d
  char v6; // r15
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // r15d
  __int64 v14; // r10
  __int64 v15; // r8
  int v16; // r11d
  __int64 v17; // rdx
  int v18; // r9d
  __int64 v19; // r14
  __int128 v20; // xmm1
  _QWORD **v21; // r12
  _QWORD *v22; // rsi
  char v23; // r15
  _QWORD *v24; // r14
  char *v25; // rax
  char v26; // dl
  char v27; // cl
  int SchematizedFilterSize; // eax
  int v29; // r13d
  unsigned int v30; // r15d
  unsigned __int8 v31; // cl
  unsigned __int8 v32; // al
  int v34; // [rsp+3Ch] [rbp-35h]
  char v36; // [rsp+44h] [rbp-2Dh]
  __int128 v37; // [rsp+48h] [rbp-29h]
  int v38; // [rsp+58h] [rbp-19h]
  _OWORD v39[2]; // [rsp+60h] [rbp-11h] BYREF
  _OWORD Source2[2]; // [rsp+80h] [rbp+Fh] BYREF

  v4 = a1;
  v34 = 0;
  v5 = 0;
  KeWaitForSingleObject(&EtwpNotificationMutex, Executive, 0, 0, 0LL);
  v6 = 0;
  v38 = *(unsigned __int16 *)(a2 + 72);
  if ( v38 == v4 )
  {
    *(_QWORD *)(a2 + 64) = 0LL;
    *(_QWORD *)(a2 + 72) = 0LL;
  }
  v7 = 0;
  v8 = a2 + 112;
  while ( *(_DWORD *)v8 != 1 || *(unsigned __int16 *)(v8 + 6) != v4 )
  {
    ++v7;
    v8 += 32LL;
    if ( v7 >= 8 )
      goto LABEL_6;
  }
  *(_DWORD *)v8 = 0;
  v13 = 1 << v7;
  memset(v39, 0, sizeof(v39));
  v14 = *(_QWORD *)&v39[1];
  v15 = a2 + 116;
  v16 = DWORD2(v39[0]);
  v17 = -1LL;
  LOBYTE(v18) = BYTE4(v39[0]);
  *((_QWORD *)&v39[1] + 1) = -1LL;
  v19 = 8LL;
  do
  {
    if ( *(_DWORD *)(v15 - 4) )
    {
      v31 = *(_BYTE *)v15;
      v32 = v18;
      LODWORD(v39[0]) = 1;
      if ( (unsigned __int8)v18 <= v31 )
        v32 = v31;
      v14 |= *(_QWORD *)(v15 + 12);
      v17 &= *(_QWORD *)(v15 + 20);
      LOBYTE(v18) = v32;
      v16 |= *(_DWORD *)(v15 + 4);
    }
    v15 += 32LL;
    --v19;
  }
  while ( v19 );
  BYTE4(v39[0]) = v18;
  *((_QWORD *)&v39[1] + 1) = v17;
  LOBYTE(v18) = 1;
  DWORD2(v39[0]) = v16;
  *(_QWORD *)&v39[1] = v14;
  v20 = v39[1];
  *(_OWORD *)(a2 + 80) = v39[0];
  *(_OWORD *)(a2 + 96) = v20;
  EtwpUpdateFilterData(a2, v7, 0, v18, 0LL);
  v21 = (_QWORD **)(a2 + 40);
  if ( *v21 == v21 )
  {
    v5 = 0;
  }
  else
  {
    v22 = *v21;
    v23 = ~(_BYTE)v13;
    v36 = v23;
    do
    {
      if ( a3 )
      {
        v24 = v22 - 2;
        v25 = (char *)v22 + 84;
      }
      else
      {
        v24 = v22;
        v25 = (char *)v22 + 99;
      }
      v26 = *v25;
      v22 = (_QWORD *)*v22;
      v27 = *v25 & v23;
      *v25 = v27;
      if ( (*((_BYTE *)v24 + 98) & 8) != 0 && v38 != v4 || v27 == v26 )
      {
        v5 = v34;
      }
      else
      {
        EtwpComputeRegEntryEnableInfo(v24, Source2);
        SchematizedFilterSize = EtwpGetSchematizedFilterSize(a2, *((_BYTE *)v24 + 99));
        v29 = SchematizedFilterSize;
        v30 = 120;
        if ( SchematizedFilterSize )
          v30 = SchematizedFilterSize + 136;
        v34 = EtwpAllocDataBlock(v30, 0LL);
        if ( v34 >= 0 )
        {
          MEMORY[0] = 3;
          MEMORY[4] = v30;
          MEMORY[0x28] = *(_OWORD *)(v24[4] + 24LL);
          MEMORY[0x48] = Source2[0];
          MEMORY[0x58] = Source2[1];
          MEMORY[0x70] = *(_BYTE *)(a2 + 75) & 1;
          LOWORD(v37) = *(_WORD *)(a2 + 72);
          WORD1(v37) = *(unsigned __int8 *)(a2 + 74);
          *(_QWORD *)((char *)&v37 + 4) = *(unsigned int *)(a2 + 64);
          MEMORY[0x68] = v37;
          if ( v29 )
          {
            MEMORY[0x84] = 0x80000000;
            MEMORY[0x80] = v29;
            MEMORY[0x78] = 136LL;
            EtwpCopySchematizedFilters((void *)0x88);
            MEMORY[0x74] = 1;
          }
          else
          {
            MEMORY[0x74] = 0;
          }
        }
        v5 = v34;
        v4 = a1;
        v23 = v36;
      }
    }
    while ( v22 != v21 );
  }
  v6 = 1;
LABEL_6:
  KeReleaseMutex(&EtwpNotificationMutex, 0);
  if ( v6 == 1 )
    EtwpUnreferenceGuidEntry((__int64 *)a2, v9, v10, v11);
  return v5;
}
