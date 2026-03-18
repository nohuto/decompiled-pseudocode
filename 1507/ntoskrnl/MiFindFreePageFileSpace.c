/*
 * XREFs of MiFindFreePageFileSpace @ 0x140062B48
 * Callers:
 *     MiReservePageFileSpace @ 0x1400DCF1C (MiReservePageFileSpace.c)
 *     MiGetKernelStackSwapSupport @ 0x1400DDB48 (MiGetKernelStackSwapSupport.c)
 *     MiFindPageFileWriteCluster @ 0x14013A5CC (MiFindPageFileWriteCluster.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1402220BC (MiTrimUnusedPageFileRegionsApc.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x14040A3B8 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlFindNextForwardRunClearCapped @ 0x140063A80 (RtlFindNextForwardRunClearCapped.c)
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     MiUpdateReserveClusterInfo @ 0x1400DDB10 (MiUpdateReserveClusterInfo.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140127E08 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140127E6C (MiRefPageFileSpaceBitmaps.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiTransferSoftwarePte @ 0x140226040 (MiTransferSoftwarePte.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFindFreePageFileSpace(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, char a5)
{
  __int64 v6; // rdx
  char v7; // r14
  char v8; // r10
  int *v9; // rbx
  __int64 v10; // rcx
  unsigned int PteTimeStamp; // r15d
  unsigned int v12; // eax
  int **v13; // rdx
  __int64 v14; // r9
  __int16 v15; // r8
  int *v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r13
  int v19; // esi
  unsigned int *v20; // rax
  __int64 v21; // rdi
  unsigned int v22; // esi
  unsigned int v23; // r12d
  ULONG v24; // edi
  _BYTE *v25; // rbx
  unsigned int v26; // r14d
  ULONG NextForwardRunClearCapped; // eax
  unsigned int v28; // r10d
  int v29; // r15d
  ULONG v30; // eax
  int v31; // r13d
  _BYTE *v32; // rsi
  void *v33; // rax
  __int64 v34; // r9
  ULONG v35; // r10d
  unsigned __int64 v36; // rcx
  bool v37; // cf
  __int64 v38; // rax
  __int64 *v39; // r10
  __int64 v41; // rcx
  _DWORD *v42; // r8
  _DWORD *v43; // r11
  bool j; // zf
  __int64 v45; // rcx
  _DWORD *v46; // r8
  _DWORD *v47; // r9
  unsigned int v48; // edx
  bool i; // zf
  __int64 v50; // [rsp+28h] [rbp-A1h] BYREF
  int *v51; // [rsp+30h] [rbp-99h]
  _BYTE *v52; // [rsp+38h] [rbp-91h]
  __int64 v53; // [rsp+40h] [rbp-89h]
  unsigned int *v54; // [rsp+48h] [rbp-81h]
  unsigned __int64 v55; // [rsp+50h] [rbp-79h]
  __int64 v56; // [rsp+58h] [rbp-71h]
  unsigned __int64 v57; // [rsp+60h] [rbp-69h]
  unsigned int v58; // [rsp+68h] [rbp-61h] BYREF
  unsigned __int64 v59; // [rsp+70h] [rbp-59h]
  unsigned __int64 v60; // [rsp+78h] [rbp-51h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-49h] BYREF
  int v62; // [rsp+98h] [rbp-31h] BYREF
  __int64 v63; // [rsp+A0h] [rbp-29h]
  _BYTE v64[24]; // [rsp+A8h] [rbp-21h] BYREF
  char v65; // [rsp+C0h] [rbp-9h] BYREF

  v57 = a3;
  v6 = a1;
  if ( a3 >= 0x100000000LL )
    return 0LL;
  v7 = a5;
  v8 = 16;
  if ( (a5 & 8) != 0
    || (v9 = *(int **)(a1 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a2) >> 4) + 5344),
        v10 = *a2,
        v51 = v9,
        PteTimeStamp = MiGetPteTimeStamp(v10),
        (a5 & 0x13) == 1)
    && *((_QWORD *)v9 + 7) < a3 )
  {
    v9 = *(int **)(v6 + 5344);
    v12 = *(_DWORD *)(v6 + 5336);
    v51 = v9;
    if ( v12 > 1 )
    {
      v13 = (int **)(v6 + 5352);
      v14 = v12 - 1;
      do
      {
        v15 = *((_WORD *)v9 + 82);
        v16 = *v13;
        if ( ((unsigned __int8)v15 & (unsigned __int8)v8) != 0 && ((unsigned __int8)v8 & (_BYTE)v16[41]) == 0
          || (v15 & 0x20) != 0 && (v16[41] & 0x20) == 0 )
        {
          v9 = *v13;
        }
        else if ( *((_QWORD *)v16 + 7) > *((_QWORD *)v9 + 7) && (v16[41] & 0x30) == 0 )
        {
          v9 = *v13;
        }
        ++v13;
        --v14;
      }
      while ( v14 );
      v6 = a1;
      a3 = v57;
      v51 = v9;
    }
    if ( (a5 & 1) != 0 )
      PteTimeStamp = v9[35];
    else
      PteTimeStamp = v9[34];
  }
  v17 = *((_QWORD *)v9 + 7);
  v55 = v17;
  if ( !v17 || (*(_BYTE *)(v6 + 788) & 1) != 0 && ((unsigned __int8)v8 & (_BYTE)v9[41]) == 0 )
    return 0LL;
  v18 = a3;
  if ( a3 > v17 )
    v18 = v17;
  LODWORD(v53) = 0;
  v19 = a5 & 2;
  v60 = (unsigned int)v18;
  while ( 1 )
  {
    if ( v19 )
    {
      v21 = *((_QWORD *)v9 + 16);
      v62 = *v9;
      v52 = (_BYTE *)v21;
      v63 = *(_QWORD *)(v21 + 32);
      v20 = (unsigned int *)&v62;
    }
    else
    {
      v52 = v64;
      MiRefPageFileSpaceBitmaps(v9, v64);
      v20 = (unsigned int *)&v65;
    }
    v22 = *v20;
    v54 = v20;
    if ( PteTimeStamp >= v22 )
    {
      if ( (v7 & 4) != 0 )
      {
        v23 = 0;
        v24 = 0;
        goto LABEL_52;
      }
      PteTimeStamp = 0;
    }
    v25 = v52;
    v24 = 0;
    v23 = 0;
    v26 = PteTimeStamp;
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(v20, PteTimeStamp, 0xFFFFFFFFLL, &v50);
          if ( NextForwardRunClearCapped )
            break;
          if ( v22 == v26 || !v26 || (a5 & 4) != 0 )
            goto LABEL_51;
          v20 = v54;
          v22 = v26;
          PteTimeStamp = 0;
        }
        v56 = (unsigned int)v50 + NextForwardRunClearCapped;
        if ( NextForwardRunClearCapped > v24 )
        {
          v28 = v50 & 0x1F;
          v29 = v50 - v28;
          v59 = *((_QWORD *)v25 + 2) + 4 * ((unsigned __int64)((unsigned int)v50 - v28) >> 5);
          v58 = v28 + NextForwardRunClearCapped;
          do
          {
            v30 = RtlFindNextForwardRunClearCapped(&v58, v28, (unsigned int)v18, &v50);
            if ( !v30 )
              break;
            if ( v30 > v24 )
            {
              v23 = v29 + v50;
              v24 = v30;
              if ( v30 >= v18 )
              {
                PteTimeStamp = v56;
                goto LABEL_51;
              }
            }
            v28 = v50 + v30;
          }
          while ( (unsigned int)v50 + v30 < v58 );
        }
        PteTimeStamp = v56;
        v20 = v54;
      }
      while ( (unsigned int)v56 < v22 );
      if ( v22 == v26 || !v26 || (a5 & 4) != 0 )
        break;
      v22 = v26;
      PteTimeStamp = 0;
    }
LABEL_51:
    v9 = v51;
    v7 = a5;
    if ( v24 )
    {
      v31 = a5 & 2;
LABEL_62:
      v32 = v52;
LABEL_63:
      if ( !v31 )
      {
        v33 = (void *)MiDerefPageFileSpaceBitmaps(v9, v32, 0LL);
        if ( v33 )
          ExFreePoolWithTag(v33, 0);
      }
      goto LABEL_66;
    }
LABEL_52:
    v31 = a5 & 2;
    if ( (v7 & 4) != 0 )
      goto LABEL_62;
    if ( (a5 & 2) == 0 )
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v9 + 24, &LockHandle);
    v32 = v52;
    if ( *(_QWORD *)v52 == *((_QWORD *)v9 + 16) && *((_DWORD *)v52 + 2) == *(_QWORD *)v9 && *((_QWORD *)v9 + 7) <= v55 )
    {
      *((_QWORD *)v9 + 7) = 0LL;
      ++v9[37];
    }
    if ( (a5 & 2) == 0 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      goto LABEL_63;
    }
LABEL_66:
    if ( !v24 )
      return 0LL;
    if ( (v7 & 1) == 0 )
      goto LABEL_84;
    v19 = a5 & 2;
    if ( (a5 & 2) != 0 )
      break;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v9 + 24, &LockHandle);
    v34 = *((_QWORD *)v9 + 16);
    v35 = v24 + v23 - 1;
    if ( v35 >= *(_DWORD *)(v34 + 24) )
      goto LABEL_105;
    if ( v24 <= 1 )
    {
      if ( _bittest(*(const signed __int32 **)(v34 + 32), v23) )
        goto LABEL_105;
LABEL_72:
      if ( v35 < *(_DWORD *)(v34 + 8) )
      {
        if ( v24 > 1 )
        {
          v45 = *(_QWORD *)(v34 + 16);
          v46 = (_DWORD *)(v45 + 4 * ((unsigned __int64)v23 >> 5));
          v47 = (_DWORD *)(v45 + 4 * ((unsigned __int64)v35 >> 5));
          if ( v46 == v47 )
          {
            v48 = 0xFFFFFFFF >> (32 - v24) << v23;
LABEL_104:
            if ( (v48 & *v46) == 0 )
              break;
          }
          else
          {
            for ( i = ((-1 << v23) & *v46) == 0; i; i = *v46 == 0 )
            {
              if ( ++v46 == v47 )
              {
                v48 = 0xFFFFFFFF >> -(char)(v24 + v23);
                goto LABEL_104;
              }
            }
          }
        }
        else if ( !_bittest(*(const signed __int32 **)(v34 + 16), v23) )
        {
          break;
        }
      }
      goto LABEL_105;
    }
    v41 = *(_QWORD *)(v34 + 32);
    v42 = (_DWORD *)(v41 + 4 * ((unsigned __int64)v23 >> 5));
    v43 = (_DWORD *)(v41 + 4 * ((unsigned __int64)v35 >> 5));
    if ( v42 != v43 )
    {
      for ( j = ((-1 << v23) & *v42) == 0; j; j = *v42 == 0 )
      {
        if ( ++v42 == v43 )
        {
          if ( ((0xFFFFFFFF >> -(char)(v24 + v23)) & *v42) != 0 )
            goto LABEL_105;
          goto LABEL_72;
        }
      }
      goto LABEL_105;
    }
    if ( ((0xFFFFFFFF >> (32 - v24) << v23) & *v42) == 0 )
      goto LABEL_72;
LABEL_105:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v18 = v24;
    LODWORD(v53) = v53 + 1;
    if ( (unsigned int)v53 >= 0x19 )
      return 0LL;
  }
  RtlSetBits((PRTL_BITMAP)(*((_QWORD *)v9 + 16) + 24LL), v23, v24);
  v36 = *((_QWORD *)v9 + 6) - v24;
  v9[35] = v24 + v23;
  v37 = *((_QWORD *)v9 + 3) < v36;
  *((_QWORD *)v9 + 6) = v36;
  if ( v37 )
    v36 = *((_QWORD *)v9 + 3);
  *((_QWORD *)v9 + 7) = v36;
  if ( v60 > v24 && v36 > v24 )
  {
    if ( v36 <= v55 )
      v36 = v24;
    *((_QWORD *)v9 + 7) = v36;
  }
  if ( (a5 & 2) == 0 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_84:
  v38 = MiTransferSoftwarePte(*a2, v9, v23);
  *v39 = v38;
  if ( v24 != v57 )
  {
    if ( a4 )
      MiUpdateReserveClusterInfo(a1, a4, v24);
  }
  return v24;
}
