/*
 * XREFs of HvpGetLogHeader @ 0x140610B28
 * Callers:
 *     HvLoadHive @ 0x14047DA4C (HvLoadHive.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x14015A410 (ZwQueryInformationFile.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvpLogIneligibleLogHeader @ 0x1401B6F40 (HvpLogIneligibleLogHeader.c)
 *     HvpLogInvalidLogHeader @ 0x1401B6FE0 (HvpLogInvalidLogHeader.c)
 *     HvpLogUnreadableLog @ 0x1401B7148 (HvpLogUnreadableLog.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x140480C14 (HvpHeaderCheckSum.c)
 *     HvpDetermineLatestLogFile @ 0x140612A70 (HvpDetermineLatestLogFile.c)
 */

__int64 __fastcall HvpGetLogHeader(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned __int64 *a4,
        unsigned int *a5,
        __int64 a6,
        _OWORD *a7)
{
  _OWORD *v7; // rdi
  int v8; // eax
  bool v9; // zf
  unsigned int v10; // r15d
  ULONGLONG v11; // r14
  unsigned int v12; // r13d
  unsigned int v13; // ebx
  SIZE_T v14; // r12
  EVENT_DATA_DESCRIPTOR *v15; // rsi
  PVOID PoolWithTag; // rax
  unsigned int v17; // ebx
  ULONGLONG Ptr; // rsi
  int v19; // eax
  char v20; // al
  __int64 v21; // rcx
  __int64 *v22; // r11
  int v23; // r10d
  unsigned int v24; // r9d
  int v25; // r10d
  int v26; // r12d
  unsigned int v27; // r15d
  int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // rdx
  _OWORD *v31; // rax
  __int128 v32; // xmm1
  unsigned int v33; // eax
  unsigned int v34; // edx
  char v35; // al
  __int64 v36; // rcx
  __int64 *v37; // r11
  int v38; // r9d
  int v39; // r9d
  unsigned int v40; // r10d
  __int64 v41; // r12
  char v42; // al
  __int64 v43; // rcx
  int v44; // r10d
  unsigned int v45; // r9d
  int v46; // r10d
  __int64 v47; // rdx
  __int128 v48; // xmm1
  int v49; // ecx
  int v50; // eax
  __int64 v51; // rdx
  __int128 v52; // xmm1
  char v53; // al
  _BYTE *v54; // rcx
  PVOID *v55; // rdi
  __int64 v56; // rsi
  char v58; // [rsp+30h] [rbp-D0h]
  unsigned int v59; // [rsp+34h] [rbp-CCh]
  unsigned int v60; // [rsp+38h] [rbp-C8h] BYREF
  int v61; // [rsp+3Ch] [rbp-C4h]
  int v62; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v63; // [rsp+48h] [rbp-B8h]
  char v64; // [rsp+50h] [rbp-B0h] BYREF
  char v65; // [rsp+51h] [rbp-AFh] BYREF
  char v66; // [rsp+52h] [rbp-AEh] BYREF
  char v67; // [rsp+53h] [rbp-ADh]
  int v68; // [rsp+54h] [rbp-ACh] BYREF
  int v69; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v70; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 *v71; // [rsp+60h] [rbp-A0h]
  __int64 v72; // [rsp+68h] [rbp-98h]
  int FileInformation; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 *v74; // [rsp+78h] [rbp-88h]
  unsigned int *v75; // [rsp+80h] [rbp-80h]
  __int64 v76; // [rsp+88h] [rbp-78h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v78; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  char *v80; // [rsp+E0h] [rbp-20h]
  int v81; // [rsp+E8h] [rbp-18h]
  int v82; // [rsp+ECh] [rbp-14h]
  char *v83; // [rsp+F0h] [rbp-10h]
  int v84; // [rsp+F8h] [rbp-8h]
  int v85; // [rsp+FCh] [rbp-4h]
  char *v86; // [rsp+100h] [rbp+0h]
  int v87; // [rsp+108h] [rbp+8h]
  int v88; // [rsp+10Ch] [rbp+Ch]
  unsigned int *v89; // [rsp+110h] [rbp+10h]
  int v90; // [rsp+118h] [rbp+18h]
  int v91; // [rsp+11Ch] [rbp+1Ch]
  int *v92; // [rsp+120h] [rbp+20h]
  int v93; // [rsp+128h] [rbp+28h]
  int v94; // [rsp+12Ch] [rbp+2Ch]

  v7 = a7;
  v75 = a5;
  v76 = a6;
  v78.Ptr = 0LL;
  *(_QWORD *)&v78.Size = 0LL;
  v8 = *(_DWORD *)(a1 + 120) << 9;
  v72 = a1;
  v71 = a2;
  v70 = a3;
  v74 = a4;
  v58 = 0;
  v67 = 0;
  v9 = *(_DWORD *)(a1 + 148) == 1;
  v10 = 1;
  v69 = (v8 + 4095) & ~(v8 - 1);
  v62 = 0;
  v11 = 0LL;
  v63 = 0LL;
  v12 = 0;
  v59 = 0;
  v13 = 0;
  v61 = 0;
  v60 = 0;
  if ( !v9 )
    v10 = 2;
  v14 = (v8 + 4095) & (unsigned int)~(v8 - 1);
  v15 = &v78;
  do
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, v14, 0x34334D43u);
    v15->Ptr = (ULONGLONG)PoolWithTag;
    if ( !PoolWithTag )
    {
      v17 = 2;
      goto LABEL_101;
    }
    memset(PoolWithTag, 0, v14);
    ++v13;
    v15 = (EVENT_DATA_DESCRIPTOR *)((char *)v15 + 8);
  }
  while ( v13 < v10 );
  v17 = 6;
  Ptr = v78.Ptr;
  v19 = *(_DWORD *)(v72 + 148);
  if ( v19 != 1 )
  {
    if ( (unsigned int)(v19 - 4) > 1 )
      goto LABEL_20;
    v68 = 0;
    v11 = v78.Ptr;
    v35 = (*(__int64 (__fastcall **)(__int64, __int64, int *, ULONGLONG, int))(v72 + 48))(v72, 4LL, &v68, v78.Ptr, v69);
    if ( v35 == 1 )
    {
      v37 = v71;
      if ( *(_DWORD *)Ptr == 1718052210 && *(_DWORD *)(Ptr + 4) == *(_DWORD *)(Ptr + 8) && *(_QWORD *)(Ptr + 12) == *v71 )
      {
        v38 = *(_DWORD *)(Ptr + 28);
        if ( v38 == 6 || v38 == 1 )
        {
          v36 = *(unsigned int *)(Ptr + 40);
          if ( (unsigned int)(v36 - 1) <= 0x7FFFDFFF
            && (v36 & 0xFFF) == 0
            && *(_DWORD *)(Ptr + 508) == (unsigned int)HvpHeaderCheckSum((_DWORD *)Ptr) )
          {
            if ( v39 != 6 )
            {
              v12 = 1;
              LODWORD(v63) = 4;
              v58 = 1;
              v26 = 4;
              goto LABEL_50;
            }
            if ( v40 >= v70 )
            {
              v60 = v40;
              v62 = 4;
              v27 = v40;
              LODWORD(v63) = 4;
              v12 = 1;
              goto LABEL_57;
            }
            HvpLogIneligibleLogHeader(v36, 4, v70, v40);
LABEL_56:
            v27 = v60;
LABEL_57:
            v68 = 0;
            v41 = v12;
            v11 = *(&v78.Ptr + v12);
            v42 = (*(__int64 (__fastcall **)(__int64, __int64, int *, ULONGLONG, int))(v72 + 48))(
                    v72,
                    5LL,
                    &v68,
                    v11,
                    v69);
            if ( v42 == 1 )
            {
              if ( *(_DWORD *)v11 == 1718052210
                && *(_DWORD *)(v11 + 4) == *(_DWORD *)(v11 + 8)
                && *(_QWORD *)(v11 + 12) == *v71 )
              {
                v44 = *(_DWORD *)(v11 + 28);
                if ( v44 == 6 || v44 == 1 && !v12 )
                {
                  v43 = *(unsigned int *)(v11 + 40);
                  if ( (unsigned int)(v43 - 1) <= 0x7FFFDFFF
                    && (v43 & 0xFFF) == 0
                    && *(_DWORD *)(v11 + 508) == (unsigned int)HvpHeaderCheckSum((_DWORD *)v11) )
                  {
                    if ( v46 != 6 )
                    {
                      v26 = 5;
                      v58 = 1;
                      v27 = 0;
                      LODWORD(v63) = 5;
                      ++v12;
                      goto LABEL_51;
                    }
                    if ( v45 >= v70 )
                    {
                      *(&v60 + v12++) = v45;
                      v28 = v61;
                      *((_DWORD *)&v63 + v41) = 5;
                      v26 = v63;
                      v59 = v28;
                      goto LABEL_21;
                    }
                    HvpLogIneligibleLogHeader(v43, 5, v70, v45);
LABEL_74:
                    v26 = v62;
LABEL_75:
                    v28 = 0;
                    goto LABEL_22;
                  }
                }
              }
            }
            else if ( !v42 )
            {
              HvpLogUnreadableLog(v43, 5);
              goto LABEL_74;
            }
            HvpLogInvalidLogHeader(v43, v71, 5, (int *)v11);
            goto LABEL_74;
          }
        }
      }
    }
    else
    {
      if ( !v35 )
      {
        HvpLogUnreadableLog(v36, 4);
        goto LABEL_56;
      }
      v37 = v71;
    }
    HvpLogInvalidLogHeader(v36, v37, 4, (int *)Ptr);
    goto LABEL_56;
  }
  v68 = 0;
  v11 = v78.Ptr;
  v20 = (*(__int64 (__fastcall **)(__int64, __int64, int *, ULONGLONG, int))(v72 + 48))(v72, 1LL, &v68, v78.Ptr, v69);
  if ( v20 != 1 )
  {
    if ( !v20 )
    {
      HvpLogUnreadableLog(v21, 1);
      goto LABEL_20;
    }
    v22 = v71;
    goto LABEL_34;
  }
  v22 = v71;
  if ( *(_DWORD *)Ptr != 1718052210
    || *(_DWORD *)(Ptr + 4) != *(_DWORD *)(Ptr + 8)
    || *(_QWORD *)(Ptr + 12) != *v71
    || (v23 = *(_DWORD *)(Ptr + 28), v23 != 6) && v23 != 1
    || (v21 = *(unsigned int *)(Ptr + 40), (unsigned int)(v21 - 1) > 0x7FFFDFFF)
    || (v21 & 0xFFF) != 0
    || *(_DWORD *)(Ptr + 508) != (unsigned int)HvpHeaderCheckSum((_DWORD *)Ptr) )
  {
LABEL_34:
    HvpLogInvalidLogHeader(v21, v22, 1, (int *)Ptr);
    goto LABEL_20;
  }
  if ( v25 != 6 )
  {
    v26 = 1;
    LODWORD(v63) = 1;
    v12 = 1;
    v58 = 1;
LABEL_50:
    v27 = 0;
LABEL_51:
    v60 = 0;
    v28 = 0;
    goto LABEL_22;
  }
  if ( v24 >= v70 )
  {
    v26 = 1;
    v60 = v24;
    LODWORD(v63) = 1;
    v12 = 1;
    v27 = v24;
    goto LABEL_75;
  }
  HvpLogIneligibleLogHeader(v21, 1, v70, v24);
LABEL_20:
  v26 = 0;
  v28 = 0;
LABEL_21:
  v27 = v60;
LABEL_22:
  if ( stru_1402F34E0.LevelPlus1 > 5 )
  {
    v82 = 0;
    v85 = 0;
    v88 = 0;
    v91 = 0;
    v94 = 0;
    v65 = v63;
    v66 = BYTE4(v63);
    v80 = &v64;
    v83 = &v65;
    v86 = &v66;
    v89 = &v70;
    v69 = v28;
    v92 = &v69;
    v64 = v12;
    v70 = v27;
    v81 = 1;
    v84 = 1;
    v87 = 1;
    v90 = 4;
    v93 = 4;
    TlgWrite(&stru_1402F34E0, &unk_14027B347, 0LL, 0LL, 7u, &pData);
  }
  if ( !a7 )
  {
    if ( v12 )
    {
      v53 = v67;
      v17 = 3;
      goto LABEL_92;
    }
LABEL_83:
    v17 = 1;
    goto LABEL_101;
  }
  if ( v12 != 2 )
  {
    if ( v12 == 1 )
    {
      v47 = 32LL;
      do
      {
        *v7 = *(_OWORD *)Ptr;
        v7[1] = *(_OWORD *)(Ptr + 16);
        v7[2] = *(_OWORD *)(Ptr + 32);
        v7[3] = *(_OWORD *)(Ptr + 48);
        v7[4] = *(_OWORD *)(Ptr + 64);
        v7[5] = *(_OWORD *)(Ptr + 80);
        v7[6] = *(_OWORD *)(Ptr + 96);
        v7 += 8;
        v48 = *(_OWORD *)(Ptr + 112);
        Ptr += 128LL;
        *(v7 - 1) = v48;
        --v47;
      }
      while ( v47 );
      v17 = 3;
      goto LABEL_97;
    }
    if ( (CmpSelfHeal || (CmpBootType & 6) != 0)
      && ZwQueryInformationFile(*(HANDLE *)(v72 + 2664), &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation) >= 0 )
    {
      v49 = FileInformation - 4096;
      if ( (unsigned int)(FileInformation - 4097) <= 0x7FFFDFFF && (v49 & 0xFFF) == 0 )
      {
        *(_DWORD *)(v11 + 40) = v49;
        *(_DWORD *)v11 = 1718052210;
        *(_DWORD *)(v11 + 8) = 1;
        *(_DWORD *)(v11 + 4) = 1;
        *(_DWORD *)(v11 + 44) = 1;
        v50 = HvpHeaderCheckSum((_DWORD *)v11);
        v51 = 32LL;
        *(_DWORD *)(v11 + 508) = v50;
        do
        {
          *v7 = *(_OWORD *)v11;
          v7[1] = *(_OWORD *)(v11 + 16);
          v7[2] = *(_OWORD *)(v11 + 32);
          v7[3] = *(_OWORD *)(v11 + 48);
          v7[4] = *(_OWORD *)(v11 + 64);
          v7[5] = *(_OWORD *)(v11 + 80);
          v7[6] = *(_OWORD *)(v11 + 96);
          v7 += 8;
          v52 = *(_OWORD *)(v11 + 112);
          v11 += 128LL;
          *(v7 - 1) = v52;
          --v51;
        }
        while ( v51 );
        v53 = 1;
LABEL_92:
        if ( v12 == 2 )
        {
          if ( v53 )
            goto LABEL_29;
          v34 = v59;
          if ( v59 <= v27 )
          {
            v63 = __PAIR64__(v26, HIDWORD(v63));
            goto LABEL_99;
          }
        }
        else if ( v12 != 1 )
        {
          v34 = 0;
          goto LABEL_99;
        }
LABEL_97:
        v34 = v27;
        goto LABEL_99;
      }
    }
    goto LABEL_83;
  }
  v29 = (unsigned int)HvpDetermineLatestLogFile(&v60);
  v30 = 32LL;
  v31 = (_OWORD *)*(&v78.Ptr + v29);
  do
  {
    *v7 = *v31;
    v7[1] = v31[1];
    v7[2] = v31[2];
    v7[3] = v31[3];
    v7[4] = v31[4];
    v7[5] = v31[5];
    v7[6] = v31[6];
    v7 += 8;
    v32 = v31[7];
    v31 += 8;
    *(v7 - 1) = v32;
    --v30;
  }
  while ( v30 );
  v17 = 3;
LABEL_29:
  v33 = HvpDetermineLatestLogFile(&v60);
  v34 = *(&v60 + v33);
  v63 = *((unsigned int *)&v63 + v33);
LABEL_99:
  *v74 = v63;
  v54 = (_BYTE *)v76;
  *v75 = v34;
  *v54 = v58;
LABEL_101:
  v55 = (PVOID *)&v78;
  v56 = 2LL;
  do
  {
    if ( *v55 )
      ExFreePoolWithTag(*v55, 0);
    ++v55;
    --v56;
  }
  while ( v56 );
  if ( v17 == 1 && stru_1402F34E0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F34E0, 0x400000000000uLL) )
    TlgWrite(&stru_1402F34E0, &unk_14027B323, 0LL, 0LL, 2u, &v78);
  return v17;
}
