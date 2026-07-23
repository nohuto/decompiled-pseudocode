/*
 * XREFs of MiUpdateLargePageBitMap @ 0x140022760
 * Callers:
 *     MiFreeSmallPageFromMdl @ 0x140022670 (MiFreeSmallPageFromMdl.c)
 *     MiFreeLargePageMemory @ 0x1400900D0 (MiFreeLargePageMemory.c)
 *     MiExpandNonPagedPool @ 0x1400FF5A4 (MiExpandNonPagedPool.c)
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiDemoteLargePage @ 0x14013F184 (MiDemoteLargePage.c)
 *     MiInitializeDynamicPfns @ 0x1401E1B1C (MiInitializeDynamicPfns.c)
 *     MiFindLargeNodePage @ 0x1401E314C (MiFindLargeNodePage.c)
 *     MiActOnPartitionNodePages @ 0x1401F05D0 (MiActOnPartitionNodePages.c)
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 *     MiFreeLargeZeroPages @ 0x140662A14 (MiFreeLargeZeroPages.c)
 *     MiGetFastLargePage @ 0x140662AD4 (MiGetFastLargePage.c)
 *     MiMarkLargePageRanges @ 0x1407AF36C (MiMarkLargePageRanges.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlClearBitsEx @ 0x1400137E8 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x14001757C (RtlSetBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MiUpdateLargePageBitMap(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  int v7; // esi
  __int64 v11; // rdi
  __int64 v12; // r14
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  unsigned __int8 v18; // cl
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r10
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // r9
  __int64 v28; // rcx
  __int64 *v29; // r10
  __int64 v30; // rax
  unsigned __int64 v31; // r9
  __int64 v32; // rcx
  __int64 *v33; // r8
  __int64 *v34; // r10
  __int64 v35; // rax
  bool v36; // zf
  __int64 *v37; // r8
  __int64 v38; // rcx
  _QWORD *v39; // r8
  _QWORD *v40; // r9
  unsigned __int64 v41; // rdx
  __int64 *v42; // r10
  __int64 v43; // rax
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 *v47; // r9
  __int64 *v48; // rbx
  __int64 v49; // rax
  __int64 *v50; // r9
  unsigned __int64 v51; // [rsp+28h] [rbp-50h]
  __int64 v52; // [rsp+28h] [rbp-50h]
  __int64 *v53; // [rsp+30h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-40h] BYREF

  v7 = 0;
  LODWORD(v11) = 2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    v11 = (unsigned int)(v11 - 1);
    v12 = 16LL * (unsigned int)v11 + a1 + 5592;
    v13 = *(_QWORD *)v12;
    if ( !*(_QWORD *)v12 )
      break;
    v14 = MiLargePageSizes[v11];
    v15 = a2 / v14;
    v51 = (~(v14 - 1) & (a3 + a2 + v14 - 1)) / v14;
    v16 = v51 - a2 / v14;
    if ( a5 == 1 )
      goto LABEL_13;
    if ( a4 != 1 )
    {
      v17 = v16 + v15 - 1;
      if ( v17 >= v13 )
        goto LABEL_27;
      if ( v16 <= 1 )
      {
        if ( v16 == 1 && !_bittest64(*(const signed __int64 **)(v12 + 8), v15) )
        {
          v18 = 1;
          goto LABEL_10;
        }
        goto LABEL_27;
      }
      v38 = *(_QWORD *)(v12 + 8);
      v39 = (_QWORD *)(v38 + 8 * (v15 >> 6));
      v40 = (_QWORD *)(v38 + 8 * (v17 >> 6));
      if ( v39 == v40 )
      {
        v41 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v16) << v15;
      }
      else
      {
        if ( ((-1LL << v15) & *v39) != 0 )
        {
          v18 = 0;
          goto LABEL_10;
        }
        if ( ++v39 != v40 )
        {
          while ( !*v39 )
          {
            if ( ++v39 == v40 )
              goto LABEL_50;
          }
LABEL_27:
          v18 = 0;
          goto LABEL_10;
        }
LABEL_50:
        v41 = 0xFFFFFFFFFFFFFFFFuLL >> -(char)(v16 + v15);
      }
      v36 = (v41 & *v39) == 0;
      goto LABEL_52;
    }
    v31 = v16 + v15 - 1;
    if ( v31 >= v13 )
    {
      v18 = 0;
      goto LABEL_10;
    }
    if ( v16 > 1 )
    {
      v32 = *(_QWORD *)(v12 + 8);
      v33 = (__int64 *)(v32 + 8 * (v15 >> 6));
      v34 = (__int64 *)(v32 + 8 * (v31 >> 6));
      v35 = *v33;
      if ( v33 == v34 )
      {
        v36 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v16) << v15) & v35) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v16) << v15;
      }
      else
      {
        if ( ((-1LL << v15) & v35) != -1LL << v15 )
        {
          v18 = 0;
          goto LABEL_10;
        }
        v37 = v33 + 1;
        if ( v37 != v34 )
        {
          while ( *v37 == -1 )
          {
            if ( ++v37 == v34 )
              goto LABEL_42;
          }
          goto LABEL_27;
        }
LABEL_42:
        v36 = ((0xFFFFFFFFFFFFFFFFuLL >> -(char)(v16 + v15)) & *v37) == 0xFFFFFFFFFFFFFFFFuLL >> -(char)(v16 + v15);
      }
LABEL_52:
      v18 = v36;
      goto LABEL_10;
    }
    if ( v16 != 1 )
      goto LABEL_27;
    v18 = _bittest64(*(const signed __int64 **)(v12 + 8), v15);
LABEL_10:
    if ( v18 == 1 )
      break;
LABEL_13:
    if ( !v7 )
    {
      v7 = 1;
      KeAcquireInStackQueuedSpinLock(&qword_140326B00, &LockHandle);
    }
    if ( a4 == 1 )
      RtlSetBitsEx(v12, v15, v16);
    else
      RtlClearBitsEx(v12, v15, v16);
    if ( !(_DWORD)v11 )
      break;
    v19 = MiLargePageSizes[(unsigned int)(v11 - 1)] / v14;
    v20 = v19;
    v21 = ~(v19 - 1);
    v23 = v21 & v15;
    v52 = v21 & (v19 + v51 - 1);
    v22 = v52;
    v24 = v52 - v23;
    if ( a4 != 1 )
      goto LABEL_29;
    v25 = *(_QWORD *)v12;
    v26 = v19 + v23;
    v27 = v19 + v23 - 1;
    if ( v27 >= *(_QWORD *)v12 )
      goto LABEL_24;
    if ( v19 <= 1 )
    {
      if ( v19 != 1 || !_bittest64(*(const signed __int64 **)(v12 + 8), v23) )
        goto LABEL_24;
    }
    else
    {
      v28 = *(_QWORD *)(v12 + 8);
      v29 = (__int64 *)(v28 + 8 * (v23 >> 6));
      v53 = (__int64 *)(v28 + 8 * (v27 >> 6));
      v30 = *v29;
      if ( v29 == v53 )
      {
        v22 = v52;
        v25 = *(_QWORD *)v12;
        if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v20) << v23) & v30) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v20) << v23 )
          goto LABEL_24;
      }
      else
      {
        if ( ((-1LL << v23) & v30) != -1LL << v23 )
          goto LABEL_23;
        v42 = v29 + 1;
        if ( v42 != v53 )
        {
          while ( *v42 == -1 )
          {
            if ( ++v42 == v53 )
              goto LABEL_61;
          }
LABEL_23:
          v22 = v52;
          v25 = *(_QWORD *)v12;
LABEL_24:
          v24 -= v20;
          if ( !v24 )
            break;
          v23 = v26;
          goto LABEL_62;
        }
LABEL_61:
        v43 = *v42;
        v22 = v52;
        v25 = *(_QWORD *)v12;
        if ( ((0xFFFFFFFFFFFFFFFFuLL >> (-1 - (unsigned __int8)v27)) & v43) != 0xFFFFFFFFFFFFFFFFuLL >> (-1 - (unsigned __int8)v27) )
          goto LABEL_24;
      }
    }
LABEL_62:
    v44 = v22 - v20;
    v45 = v44 + v20 - 1;
    if ( v45 < v25 )
    {
      if ( v20 > 1 )
      {
        v46 = *(_QWORD *)(v12 + 8);
        v47 = (__int64 *)(v46 + 8 * (v44 >> 6));
        v48 = (__int64 *)(v46 + 8 * (v45 >> 6));
        v49 = *v47;
        if ( v47 == v48 )
        {
          if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v20) << v44) & v49) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v20) << v44 )
            goto LABEL_29;
        }
        else if ( ((-1LL << v44) & v49) == -1LL << v44 )
        {
          v50 = v47 + 1;
          if ( v50 == v48 )
          {
LABEL_74:
            if ( ((0xFFFFFFFFFFFFFFFFuLL >> -(char)(v44 + v20)) & *v50) == 0xFFFFFFFFFFFFFFFFuLL >> -(char)(v44 + v20) )
              goto LABEL_29;
          }
          else
          {
            while ( *v50 == -1 )
            {
              if ( ++v50 == v48 )
                goto LABEL_74;
            }
          }
        }
      }
      else if ( v20 == 1 && _bittest64(*(const signed __int64 **)(v12 + 8), v44) )
      {
        goto LABEL_29;
      }
    }
    v24 -= v20;
    if ( !v24 )
      break;
LABEL_29:
    a5 = a4;
    a2 = v14 * v23;
    a3 = v14 * v24;
  }
  if ( v7 == 1 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
