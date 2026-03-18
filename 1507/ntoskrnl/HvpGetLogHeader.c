/*
 * XREFs of HvpGetLogHeader @ 0x140664AE4
 * Callers:
 *     HvLoadHive @ 0x1404AE98C (HvLoadHive.c)
 * Callees:
 *     ZwQueryInformationFile @ 0x14017F210 (ZwQueryInformationFile.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x1404AFFCC (HvpHeaderCheckSum.c)
 *     HvpDetermineLatestLogFile @ 0x1406665D0 (HvpDetermineLatestLogFile.c)
 */

__int64 __fastcall HvpGetLogHeader(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        unsigned __int64 *a4,
        unsigned int *a5,
        char *a6,
        _OWORD *a7)
{
  __int64 v7; // r14
  unsigned int v8; // r12d
  int v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // r15d
  unsigned int v12; // ebx
  bool v13; // zf
  SIZE_T v14; // r13
  _QWORD *v15; // rdi
  PVOID PoolWithTag; // rax
  __int64 v17; // r10
  unsigned int v18; // edi
  __int64 v19; // rsi
  int v20; // eax
  int v21; // r9d
  int v22; // ecx
  int v23; // r9d
  unsigned int v24; // r10d
  int v25; // r13d
  _OWORD *v26; // rbx
  __int64 v27; // r8
  __int64 v28; // rdx
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  unsigned int v31; // eax
  int v32; // ebx
  int v33; // r9d
  int v34; // ecx
  int v35; // r9d
  unsigned int v36; // r10d
  int v37; // r9d
  int v38; // ecx
  int v39; // r9d
  unsigned int v40; // r10d
  __int64 v41; // rax
  __int64 v42; // rdx
  __int128 v43; // xmm1
  __int64 v44; // rsi
  int v45; // ecx
  int v46; // eax
  __int64 v47; // rdx
  __int128 v48; // xmm1
  char v49; // al
  unsigned int v50; // ecx
  PVOID *v51; // rbx
  char v53; // [rsp+38h] [rbp-51h]
  unsigned int v54; // [rsp+40h] [rbp-49h]
  unsigned int v55; // [rsp+40h] [rbp-49h]
  unsigned __int64 v56; // [rsp+48h] [rbp-41h]
  __int64 v57; // [rsp+50h] [rbp-39h] BYREF
  int v58; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v59[12]; // [rsp+5Ch] [rbp-2Dh] BYREF
  __int64 v60; // [rsp+68h] [rbp-21h]
  int FileInformation; // [rsp+70h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-11h] BYREF

  *(_QWORD *)&v59[4] = 0LL;
  v60 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = *(_DWORD *)(a1 + 120) << 9;
  v10 = 1;
  v53 = 0;
  v11 = 0;
  v12 = 0;
  v56 = 0LL;
  v54 = 0;
  v57 = 0LL;
  v13 = *(_DWORD *)(a1 + 148) == 1;
  *(_QWORD *)v59 = (v9 + 4095) & (unsigned int)~(v9 - 1);
  if ( !v13 )
    v10 = 2;
  v14 = (v9 + 4095) & (unsigned int)~(v9 - 1);
  v15 = &v59[4];
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, v14, 0x34334D43u);
    *v15 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, v14);
    ++v12;
    ++v15;
    if ( v12 >= v10 )
    {
      v17 = a1;
      v18 = 6;
      v19 = *(_QWORD *)&v59[4];
      v20 = *(_DWORD *)(a1 + 148);
      if ( v20 == 1 )
      {
        v58 = 0;
        v7 = *(_QWORD *)&v59[4];
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, int *, _QWORD, _DWORD))(a1 + 48))(
               a1,
               1LL,
               &v58,
               *(_QWORD *)&v59[4],
               *(_DWORD *)v59) != 1 )
          goto LABEL_56;
        if ( *(_DWORD *)v19 != 1718052210 )
          goto LABEL_56;
        if ( *(_DWORD *)(v19 + 4) != *(_DWORD *)(v19 + 8) )
          goto LABEL_56;
        if ( *(_QWORD *)(v19 + 12) != *a2 )
          goto LABEL_56;
        v21 = *(_DWORD *)(v19 + 28);
        if ( v21 != 6 && v21 != 1 )
          goto LABEL_56;
        v22 = *(_DWORD *)(v19 + 40);
        if ( (unsigned int)(v22 - 1) > 0x7FFFDFFF
          || (v22 & 0xFFF) != 0
          || *(_DWORD *)(v19 + 508) != (unsigned int)HvpHeaderCheckSum((_DWORD *)v19) )
        {
          goto LABEL_56;
        }
        if ( v23 == 6 )
        {
          if ( v24 >= a3 )
          {
            v25 = 1;
            LODWORD(v57) = v24;
            LODWORD(v56) = 1;
            v11 = 1;
            v8 = v24;
            goto LABEL_19;
          }
LABEL_56:
          v25 = 0;
        }
        else
        {
          v25 = 1;
          LODWORD(v57) = 0;
          LODWORD(v56) = 1;
          v11 = 1;
          v53 = 1;
        }
        goto LABEL_19;
      }
      if ( (unsigned int)(v20 - 4) > 1 )
      {
        v25 = 0;
      }
      else
      {
        v32 = *(_DWORD *)v59;
        v58 = 0;
        v25 = 4;
        v7 = *(_QWORD *)&v59[4];
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, int *, _QWORD, _DWORD))(a1 + 48))(
               a1,
               4LL,
               &v58,
               *(_QWORD *)&v59[4],
               *(_DWORD *)v59) != 1 )
          goto LABEL_41;
        if ( *(_DWORD *)v19 != 1718052210 )
          goto LABEL_41;
        if ( *(_DWORD *)(v19 + 4) != *(_DWORD *)(v19 + 8) )
          goto LABEL_41;
        if ( *(_QWORD *)(v19 + 12) != *a2 )
          goto LABEL_41;
        v33 = *(_DWORD *)(v19 + 28);
        if ( v33 != 6 && v33 != 1 )
          goto LABEL_41;
        v34 = *(_DWORD *)(v19 + 40);
        if ( (unsigned int)(v34 - 1) > 0x7FFFDFFF
          || (v34 & 0xFFF) != 0
          || *(_DWORD *)(v19 + 508) != (unsigned int)HvpHeaderCheckSum((_DWORD *)v19) )
        {
          goto LABEL_41;
        }
        if ( v35 != 6 )
        {
          v11 = 1;
          LODWORD(v56) = 4;
          v53 = 1;
          LODWORD(v57) = 0;
          goto LABEL_19;
        }
        if ( v36 >= a3 )
        {
          LODWORD(v56) = 4;
          v8 = v36;
          LODWORD(v57) = v36;
          v11 = 1;
        }
        else
        {
LABEL_41:
          v25 = 0;
        }
        v58 = 0;
        v7 = *(_QWORD *)&v59[8 * v11 + 4];
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, int *, __int64, int))(a1 + 48))(
               a1,
               5LL,
               &v58,
               v7,
               v32) == 1
          && *(_DWORD *)v7 == 1718052210
          && *(_DWORD *)(v7 + 4) == *(_DWORD *)(v7 + 8)
          && *(_QWORD *)(v7 + 12) == *a2 )
        {
          v37 = *(_DWORD *)(v7 + 28);
          if ( v37 == 6 || v37 == 1 && !v11 )
          {
            v38 = *(_DWORD *)(v7 + 40);
            if ( (unsigned int)(v38 - 1) <= 0x7FFFDFFF
              && (v38 & 0xFFF) == 0
              && *(_DWORD *)(v7 + 508) == (unsigned int)HvpHeaderCheckSum((_DWORD *)v7) )
            {
              if ( v39 == 6 )
              {
                if ( v40 >= a3 )
                {
                  v41 = v11++;
                  *((_DWORD *)&v56 + v41) = 5;
                  v25 = v56;
                  *((_DWORD *)&v57 + v41) = v40;
                  v8 = v57;
                  v54 = HIDWORD(v57);
                }
              }
              else
              {
                v8 = 0;
                LODWORD(v56) = 5;
                LODWORD(v57) = 0;
                ++v11;
                v25 = 5;
                v53 = 1;
              }
            }
          }
        }
LABEL_19:
        v17 = a1;
      }
      v26 = a7;
      if ( a7 )
      {
        if ( v11 == 2 )
        {
          v27 = (unsigned int)HvpDetermineLatestLogFile(&v57);
          v28 = 32LL;
          v29 = *(_OWORD **)&v59[8 * v27 + 4];
          do
          {
            *v26 = *v29;
            v26[1] = v29[1];
            v26[2] = v29[2];
            v26[3] = v29[3];
            v26[4] = v29[4];
            v26[5] = v29[5];
            v26[6] = v29[6];
            v26 += 8;
            v30 = v29[7];
            v29 += 8;
            *(v26 - 1) = v30;
            --v28;
          }
          while ( v28 );
          v18 = 3;
LABEL_25:
          v31 = HvpDetermineLatestLogFile(&v57);
          v55 = *((_DWORD *)&v57 + v31);
          v56 = *((unsigned int *)&v56 + v31);
LABEL_81:
          v50 = v55;
LABEL_82:
          *a4 = v56;
          *a5 = v50;
          *a6 = v53;
LABEL_65:
          v44 = 2LL;
          goto LABEL_84;
        }
        if ( v11 == 1 )
        {
          v42 = 32LL;
          do
          {
            *v26 = *(_OWORD *)v19;
            v26[1] = *(_OWORD *)(v19 + 16);
            v26[2] = *(_OWORD *)(v19 + 32);
            v26[3] = *(_OWORD *)(v19 + 48);
            v26[4] = *(_OWORD *)(v19 + 64);
            v26[5] = *(_OWORD *)(v19 + 80);
            v26[6] = *(_OWORD *)(v19 + 96);
            v26 += 8;
            v43 = *(_OWORD *)(v19 + 112);
            v19 += 128LL;
            *(v26 - 1) = v43;
            --v42;
          }
          while ( v42 );
          v18 = 3;
LABEL_79:
          v50 = v8;
          goto LABEL_82;
        }
        if ( (CmpSelfHeal || (CmpBootType & 6) != 0)
          && ZwQueryInformationFile(
               *(HANDLE *)(v17 + 2664),
               &IoStatusBlock,
               &FileInformation,
               8u,
               FileEndOfFileInformation) >= 0 )
        {
          v45 = FileInformation - 4096;
          if ( (unsigned int)(FileInformation - 4097) <= 0x7FFFDFFF && (v45 & 0xFFF) == 0 )
          {
            *(_DWORD *)(v7 + 40) = v45;
            *(_DWORD *)v7 = 1718052210;
            *(_DWORD *)(v7 + 8) = 1;
            *(_DWORD *)(v7 + 4) = 1;
            *(_DWORD *)(v7 + 44) = 1;
            v46 = HvpHeaderCheckSum((_DWORD *)v7);
            v47 = 32LL;
            *(_DWORD *)(v7 + 508) = v46;
            do
            {
              *v26 = *(_OWORD *)v7;
              v26[1] = *(_OWORD *)(v7 + 16);
              v26[2] = *(_OWORD *)(v7 + 32);
              v26[3] = *(_OWORD *)(v7 + 48);
              v26[4] = *(_OWORD *)(v7 + 64);
              v26[5] = *(_OWORD *)(v7 + 80);
              v26[6] = *(_OWORD *)(v7 + 96);
              v26 += 8;
              v48 = *(_OWORD *)(v7 + 112);
              v7 += 128LL;
              *(v26 - 1) = v48;
              --v47;
            }
            while ( v47 );
            v49 = 1;
LABEL_74:
            if ( v11 == 2 )
            {
              if ( v49 )
                goto LABEL_25;
              v50 = v54;
              if ( v54 <= v8 )
              {
                v56 = __PAIR64__(v25, HIDWORD(v56));
                goto LABEL_82;
              }
            }
            else if ( v11 != 1 )
            {
              v55 = 0;
              goto LABEL_81;
            }
            goto LABEL_79;
          }
        }
      }
      else if ( v11 )
      {
        v49 = 0;
        v18 = 3;
        goto LABEL_74;
      }
      v18 = 1;
      goto LABEL_65;
    }
  }
  v44 = 2LL;
  v18 = 2;
LABEL_84:
  v51 = (PVOID *)&v59[4];
  do
  {
    if ( *v51 )
      ExFreePoolWithTag(*v51, 0);
    ++v51;
    --v44;
  }
  while ( v44 );
  return v18;
}
