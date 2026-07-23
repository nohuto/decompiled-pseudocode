/*
 * XREFs of MiObtainDynamicVa @ 0x1400A19B0
 * Callers:
 *     MiObtainSystemVa @ 0x1400A194C (MiObtainSystemVa.c)
 *     MiExpandNonPagedPool @ 0x1400FF5A4 (MiExpandNonPagedPool.c)
 *     MiGetLargePageWorkMapping @ 0x14013B330 (MiGetLargePageWorkMapping.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlSetBitsEx @ 0x14001757C (RtlSetBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReclaimSystemVa @ 0x1400A221C (MiReclaimSystemVa.c)
 *     MiExtendDynamicBitMap @ 0x140149FCC (MiExtendDynamicBitMap.c)
 *     MiFindClearBitsAlignedEx @ 0x14014BA80 (MiFindClearBitsAlignedEx.c)
 */

__int64 __fastcall MiObtainDynamicVa(__int64 *a1, unsigned int a2, int a3, int a4)
{
  unsigned __int64 v4; // rdi
  __int64 *v5; // r12
  unsigned __int64 v6; // r15
  unsigned __int64 *v7; // r14
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r14
  unsigned __int64 *v14; // r8
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rdi
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r15
  unsigned __int64 *v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 ClearBitsAligned; // rbx
  int v31; // esi
  __int64 v33; // rdx
  bool v34; // zf
  __int64 v35; // rax
  unsigned int v36; // r10d
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned int v43; // r10d
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  unsigned int v51; // ecx
  unsigned __int64 *v52; // r9
  __int64 v53; // rax
  unsigned int v54; // ecx
  __int64 v55; // rcx
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rax
  __int64 v58; // rcx
  unsigned int v59; // eax
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rax
  __int64 v62; // rdx
  unsigned __int64 *v63; // r9
  unsigned int v64; // r9d
  __int64 v65; // rcx
  unsigned int v66; // r9d
  __int64 v67; // rcx
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rcx
  unsigned __int64 v71; // [rsp+28h] [rbp-79h]
  unsigned __int64 v72; // [rsp+28h] [rbp-79h]
  __int64 *v73; // [rsp+58h] [rbp-49h]
  _QWORD v74[2]; // [rsp+88h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-9h] BYREF
  int v78; // [rsp+118h] [rbp+77h]

  v78 = a3;
  v4 = a2;
  v5 = a1;
  while ( 1 )
  {
    v6 = v5[3];
    v73 = v5;
    v7 = (unsigned __int64 *)v5;
    if ( a3 == 15 )
    {
      v7 = v74;
      v73 = v74;
      v48 = v5[1] + 8 * ((unsigned __int64)v5[2] >> 6);
      v6 = v5[6];
      v74[0] = v5[5];
      v74[1] = v48 - 8LL * (v74[0] >> 6);
    }
    if ( *v7 )
      break;
LABEL_107:
    if ( !(unsigned int)MiExtendDynamicBitMap(v5, v7) )
      return 0LL;
    a3 = v78;
  }
  v8 = *v7;
  v9 = (unsigned int)v4;
  v10 = v6 & -(__int64)(v6 < *v7);
  v11 = *v7 - 1;
  v71 = v10;
  if ( (_DWORD)v4 )
  {
    v12 = v7[1];
    while ( 1 )
    {
      if ( v11 - v10 + 1 < v9 )
        goto LABEL_75;
      v13 = v11 - v9 + 1;
      v14 = (unsigned __int64 *)(v12 + 8 * (v10 >> 6));
      v15 = ((1LL << (v10 & 0x3F)) - 1) | *v14;
      v16 = v12 + 8 * (v13 >> 6);
      if ( v9 <= 0x7F )
      {
        v17 = 64;
        if ( v9 < 0x40 )
        {
          if ( v9 > 1 )
          {
            v33 = 0LL;
            while ( v15 != -1LL )
            {
LABEL_42:
              v34 = !_BitScanForward64((unsigned __int64 *)&v35, v15);
              if ( v34 )
                LODWORD(v35) = 64;
              if ( (unsigned int)(v33 + v35) >= v9 )
              {
                v40 = -v33;
LABEL_53:
                v19 = ((__int64)((__int64)v14 - v12) >> 3 << 6) + v40;
                goto LABEL_15;
              }
              v36 = v9;
              v37 = ~v15;
              while ( 1 )
              {
                v37 &= v37 >> (v36 >> 1);
                if ( !v37 )
                  break;
                v36 -= v36 >> 1;
                if ( v36 <= 1 )
                {
                  _BitScanForward64(&v39, v37);
                  v40 = (unsigned int)v39;
                  goto LABEL_53;
                }
              }
              if ( v14 == (unsigned __int64 *)(v12 + 8 * (v11 >> 6)) )
                goto LABEL_75;
              v34 = !_BitScanReverse64((unsigned __int64 *)&v38, v15);
              if ( v34 )
                v33 = 64LL;
              else
                v33 = (unsigned int)(63 - v38);
              v15 = *++v14;
            }
            while ( (unsigned __int64)++v14 <= v16 )
            {
              v15 = *v14;
              if ( *v14 != -1LL )
              {
                v33 = 0LL;
                goto LABEL_42;
              }
            }
LABEL_75:
            v19 = -1LL;
            goto LABEL_166;
          }
          while ( v15 == -1LL )
          {
            if ( (unsigned __int64)++v14 > v16 )
              goto LABEL_75;
            v15 = *v14;
          }
          _BitScanForward64(&v18, ~v15);
          v19 = v18 + ((__int64)((__int64)v14 - v12) >> 3 << 6);
LABEL_15:
          if ( v19 <= v13 )
            goto LABEL_16;
LABEL_97:
          v19 = -1LL;
          goto LABEL_166;
        }
        while ( 1 )
        {
          while ( (v15 & 0x8000000000000000uLL) != 0 )
          {
            if ( (unsigned __int64)++v14 > v16 )
              goto LABEL_97;
            v15 = *v14;
          }
          v34 = !_BitScanReverse64((unsigned __int64 *)&v55, v15);
          if ( !v34 )
            v17 = 63 - v55;
          v19 = ((((__int64)((__int64)v14 - v12) >> 3) + 1) << 6) - v17;
          if ( v19 > v13 )
            goto LABEL_97;
          v56 = v9 - v17;
          if ( v9 == v17 )
            goto LABEL_16;
          ++v14;
          v17 = 64;
          v15 = *v14;
          if ( v56 >= 0x40 )
          {
            if ( v15 )
              continue;
            v56 -= 64LL;
            if ( !v56 )
              goto LABEL_16;
            v15 = *++v14;
          }
          v34 = !_BitScanForward64(&v57, v15);
          if ( v34 )
            v57 = 64LL;
          if ( v57 >= v56 )
            goto LABEL_16;
          v17 = 64;
        }
      }
      if ( (v13 & 0x3F) != 0 )
        v16 += 8LL;
      if ( !v15 )
      {
        v51 = 0;
        goto LABEL_92;
      }
      if ( !*++v14 )
        break;
      do
      {
        do
        {
LABEL_88:
          if ( (unsigned __int64)v14 > v16 )
            goto LABEL_97;
          ++v14;
        }
        while ( *v14 );
        v34 = !_BitScanReverse64((unsigned __int64 *)&v50, *(v14 - 1));
        if ( v34 )
          v51 = 64;
        else
          v51 = 63 - v50;
LABEL_92:
        v19 = ((__int64)((__int64)v14 - v12) >> 3 << 6) - v51;
        if ( v19 > v13 )
          goto LABEL_97;
        v52 = &v14[(v9 - v51) >> 6];
        while ( ++v14 != v52 )
        {
          if ( *v14 )
            goto LABEL_88;
        }
        v64 = ((_BYTE)v9 - (_BYTE)v51) & 0x3F;
        if ( (((_BYTE)v9 - (_BYTE)v51) & 0x3F) == 0 )
          break;
        v34 = !_BitScanForward64((unsigned __int64 *)&v65, *v14);
        if ( v34 )
          LODWORD(v65) = 64;
      }
      while ( (unsigned int)v65 < v64 );
LABEL_16:
      if ( v19 != -1LL )
      {
LABEL_17:
        v5 = a1;
        v20 = v19;
        v7 = (unsigned __int64 *)v73;
        v4 = a2;
        v72 = v19;
        goto LABEL_18;
      }
LABEL_166:
      if ( !v71 )
        goto LABEL_17;
      v69 = v9 + v6;
      v71 = 0LL;
      v10 = 0LL;
      if ( v9 + v6 > v8 )
        v69 = v8;
      v11 = v69 - 1;
    }
    v34 = !_BitScanReverse64((unsigned __int64 *)&v68, v15);
    if ( v34 )
      v51 = 64;
    else
      v51 = 63 - v68;
    goto LABEL_92;
  }
  v20 = v10 & 0xFFFFFFFFFFFFFFF8uLL;
  v72 = v20;
LABEL_18:
  if ( v20 == -1LL )
    goto LABEL_107;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v5 + 8, &LockHandle);
  if ( !a4 )
  {
    v21 = v20 & -(__int64)(v20 < *v7);
    v22 = *v7 - 1;
    if ( !v4 )
    {
      ClearBitsAligned = v21 & 0xFFFFFFFFFFFFFFF8uLL;
      goto LABEL_32;
    }
    v23 = v7[1];
    while ( 1 )
    {
      if ( v22 - v21 + 1 < v4 )
      {
        v29 = -1LL;
        goto LABEL_172;
      }
      v24 = v22 - v4 + 1;
      v25 = (unsigned __int64 *)(v23 + 8 * (v21 >> 6));
      v26 = ((1LL << (v21 & 0x3F)) - 1) | *v25;
      v27 = v23 + 8 * (v24 >> 6);
      if ( v4 > 0x7F )
      {
        if ( (v24 & 0x3F) != 0 )
          v27 += 8LL;
        if ( v26 )
        {
          if ( *++v25 )
            goto LABEL_104;
          v34 = !_BitScanReverse64((unsigned __int64 *)&v53, v26);
          if ( v34 )
            v54 = 64;
          else
            v54 = 63 - v53;
        }
        else
        {
          v54 = 0;
        }
        while ( 1 )
        {
          v29 = ((__int64)((__int64)v25 - v23) >> 3 << 6) - v54;
          if ( v29 > v24 )
            break;
          v63 = &v25[(v4 - v54) >> 6];
          while ( ++v25 != v63 )
          {
            if ( *v25 )
              goto LABEL_104;
          }
          v66 = ((_BYTE)v4 - (_BYTE)v54) & 0x3F;
          if ( (((_BYTE)v4 - (_BYTE)v54) & 0x3F) == 0 )
            goto LABEL_30;
          v34 = !_BitScanForward64((unsigned __int64 *)&v67, *v25);
          if ( v34 )
            LODWORD(v67) = 64;
          if ( (unsigned int)v67 >= v66 )
            goto LABEL_30;
          do
          {
LABEL_104:
            if ( (unsigned __int64)v25 > v27 )
              goto LABEL_83;
            ++v25;
          }
          while ( *v25 );
          v34 = !_BitScanReverse64((unsigned __int64 *)&v62, *(v25 - 1));
          if ( v34 )
            v54 = 64;
          else
            v54 = 63 - v62;
        }
LABEL_83:
        v29 = -1LL;
        goto LABEL_77;
      }
      if ( v4 >= 0x40 )
        break;
      if ( v4 <= 1 )
      {
        while ( v26 == -1 )
        {
          if ( (unsigned __int64)++v25 > v27 )
            goto LABEL_83;
          v26 = *v25;
        }
        _BitScanForward64(&v28, ~v26);
        v29 = v28 + ((__int64)((__int64)v25 - v23) >> 3 << 6);
        if ( v29 <= v24 )
          goto LABEL_30;
        goto LABEL_83;
      }
      v41 = 0LL;
      while ( 1 )
      {
        if ( v26 == -1 )
        {
          while ( (unsigned __int64)++v25 <= v27 )
          {
            v26 = *v25;
            if ( *v25 != -1LL )
            {
              v41 = 0LL;
              goto LABEL_59;
            }
          }
LABEL_76:
          v29 = -1LL;
          goto LABEL_77;
        }
LABEL_59:
        v34 = !_BitScanForward64((unsigned __int64 *)&v42, v26);
        if ( v34 )
          LODWORD(v42) = 64;
        if ( (unsigned int)(v41 + v42) >= v4 )
          break;
        v43 = v4;
        v44 = ~v26;
        while ( 1 )
        {
          v44 &= v44 >> (v43 >> 1);
          if ( !v44 )
            break;
          v43 -= v43 >> 1;
          if ( v43 <= 1 )
          {
            _BitScanForward64(&v46, v44);
            v47 = (unsigned int)v46;
            goto LABEL_70;
          }
        }
        if ( v25 == (unsigned __int64 *)(v23 + 8 * (v22 >> 6)) )
          goto LABEL_76;
        v34 = !_BitScanReverse64((unsigned __int64 *)&v45, v26);
        if ( v34 )
          v41 = 64LL;
        else
          v41 = (unsigned int)(63 - v45);
        v26 = *++v25;
      }
      v47 = -v41;
LABEL_70:
      v29 = ((__int64)((__int64)v25 - v23) >> 3 << 6) + v47;
      if ( v29 > v24 )
        goto LABEL_76;
LABEL_30:
      if ( v29 != -1LL )
        goto LABEL_31;
LABEL_77:
      v20 = v72;
LABEL_172:
      if ( !v21 )
      {
LABEL_31:
        v5 = a1;
        ClearBitsAligned = v29;
        v7 = (unsigned __int64 *)v73;
LABEL_32:
        v4 = a2;
        goto LABEL_33;
      }
      v70 = v4 + v20;
      v21 = 0LL;
      if ( v4 + v20 > *v7 )
        v70 = *v7;
      v22 = v70 - 1;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v26 < 0 )
        {
          if ( (unsigned __int64)++v25 > v27 )
            goto LABEL_83;
          v26 = *v25;
        }
        v34 = !_BitScanReverse64((unsigned __int64 *)&v58, v26);
        if ( v34 )
          v59 = 64;
        else
          v59 = 63 - v58;
        v29 = ((((__int64)((__int64)v25 - v23) >> 3) + 1) << 6) - v59;
        if ( v29 > v24 )
          goto LABEL_83;
        v60 = v4 - v59;
        if ( v4 == v59 )
          goto LABEL_30;
        v26 = *++v25;
        if ( v60 >= 0x40 )
          break;
LABEL_135:
        v34 = !_BitScanForward64(&v61, v26);
        if ( v34 )
          v61 = 64LL;
        if ( v61 >= v60 )
          goto LABEL_30;
      }
      if ( !v26 )
      {
        v60 -= 64LL;
        if ( !v60 )
          goto LABEL_30;
        v26 = *++v25;
        goto LABEL_135;
      }
    }
  }
  ClearBitsAligned = MiFindClearBitsAlignedEx(v7, (unsigned int)v4, v20);
LABEL_33:
  if ( ClearBitsAligned == -1 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_107;
  }
  RtlSetBitsEx((__int64)v7, ClearBitsAligned, v4);
  v31 = v78;
  if ( v78 == 15 )
  {
    v49 = 8 * (v7[1] - v5[1]);
    if ( a2 == 1 )
      v5[6] = ClearBitsAligned + 1;
    ClearBitsAligned += v49;
    v31 = 9;
  }
  else if ( a2 == 1 )
  {
    v5[3] = ClearBitsAligned + 1;
  }
  if ( v5 == &qword_140326CA0 )
  {
    qword_140326B08 -= v4 << 21;
    MiReclaimSystemVa(0LL);
  }
  _InterlockedExchangeAdd64(&qword_140327EF0[v31], v4);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5[4] + (ClearBitsAligned << 21);
}
