/*
 * XREFs of MiObtainDynamicVa @ 0x140018AD0
 * Callers:
 *     MiExpandNonPagedPool @ 0x1400168DC (MiExpandNonPagedPool.c)
 *     MiObtainSystemVa @ 0x140018A70 (MiObtainSystemVa.c)
 * Callees:
 *     MiReclaimSystemVa @ 0x140019340 (MiReclaimSystemVa.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBitsEx @ 0x1400B4BC4 (RtlSetBitsEx.c)
 *     MiExtendDynamicBitMap @ 0x1401405C0 (MiExtendDynamicBitMap.c)
 */

unsigned __int64 __fastcall MiObtainDynamicVa(__int64 *a1, unsigned int a2, int a3)
{
  unsigned __int64 v3; // rdi
  __int64 *v4; // r12
  unsigned __int64 v5; // r15
  unsigned __int64 *v6; // r14
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r14
  unsigned __int64 *v13; // r8
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rdi
  unsigned int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r15
  unsigned __int64 *v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rsi
  unsigned int v27; // eax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  int v31; // esi
  __int64 v33; // rdx
  unsigned __int64 *v34; // r11
  bool v35; // zf
  __int64 v36; // rcx
  unsigned int v37; // r10d
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 *v43; // r11
  __int64 v44; // rcx
  unsigned int v45; // r10d
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rdx
  unsigned int v52; // ecx
  unsigned __int64 *v53; // r9
  __int64 v54; // rdx
  unsigned int v55; // ecx
  unsigned __int64 *v56; // r9
  __int64 v57; // rcx
  unsigned __int64 v58; // r10
  __int64 v59; // rcx
  __int64 v60; // rcx
  unsigned __int64 v61; // r10
  __int64 v62; // rcx
  unsigned int v63; // r9d
  __int64 v64; // rcx
  unsigned int v65; // r9d
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rcx
  unsigned __int64 v71; // [rsp+28h] [rbp-69h]
  unsigned __int64 v72; // [rsp+28h] [rbp-69h]
  __int64 *v73; // [rsp+60h] [rbp-31h]
  _QWORD v74[2]; // [rsp+80h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-1h] BYREF
  int v78; // [rsp+108h] [rbp+77h]

  v78 = a3;
  v3 = a2;
  v4 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = v4[3];
      v73 = v4;
      v6 = (unsigned __int64 *)v4;
      if ( a3 == 15 )
      {
        v6 = v74;
        v73 = v74;
        v50 = v4[1] + 8 * ((unsigned __int64)v4[2] >> 6);
        v5 = v4[6];
        v74[0] = v4[5];
        v74[1] = v50 - 8LL * (v74[0] >> 6);
      }
      if ( *v6 )
        break;
LABEL_107:
      if ( !(unsigned int)MiExtendDynamicBitMap(v4, v6) )
        return 0LL;
      a3 = v78;
    }
    v7 = *v6;
    v8 = (unsigned int)v3;
    v9 = v5 & -(__int64)(v5 < *v6);
    v10 = *v6 - 1;
    v71 = v9;
    if ( (_DWORD)v3 )
    {
      v11 = v6[1];
      while ( 1 )
      {
        if ( v10 - v9 + 1 < v8 )
          goto LABEL_74;
        v12 = v10 - v8 + 1;
        v13 = (unsigned __int64 *)(v11 + 8 * (v9 >> 6));
        v14 = ((1LL << (v9 & 0x3F)) - 1) | *v13;
        v15 = v11 + 8 * (v12 >> 6);
        if ( v8 <= 0x7F )
        {
          v16 = 64;
          if ( v8 < 0x40 )
          {
            if ( v8 > 1 )
            {
              v33 = 0LL;
              v34 = (unsigned __int64 *)(v11 + 8 * (v10 >> 6));
              while ( v14 != -1LL )
              {
LABEL_41:
                v35 = !_BitScanForward64((unsigned __int64 *)&v36, v14);
                if ( v35 )
                  LODWORD(v36) = 64;
                if ( (unsigned int)(v33 + v36) >= v8 )
                {
                  v40 = -v33;
LABEL_48:
                  v18 = ((__int64)((__int64)v13 - v11) >> 3 << 6) + v40;
                  goto LABEL_15;
                }
                v37 = v8;
                v38 = ~v14;
                while ( 1 )
                {
                  v38 &= v38 >> (v37 >> 1);
                  if ( !v38 )
                    break;
                  v37 -= v37 >> 1;
                  if ( v37 <= 1 )
                  {
                    _BitScanForward64(&v39, v38);
                    v40 = (unsigned int)v39;
                    goto LABEL_48;
                  }
                }
                if ( v13 == v34 )
                  goto LABEL_74;
                v35 = !_BitScanReverse64((unsigned __int64 *)&v41, v14);
                if ( v35 )
                  v33 = 64LL;
                else
                  v33 = (unsigned int)(63 - v41);
                v14 = *++v13;
              }
              while ( (unsigned __int64)++v13 <= v15 )
              {
                v14 = *v13;
                if ( *v13 != -1LL )
                {
                  v33 = 0LL;
                  goto LABEL_41;
                }
              }
LABEL_74:
              v18 = -1LL;
              goto LABEL_160;
            }
            while ( v14 == -1LL )
            {
              if ( (unsigned __int64)++v13 > v15 )
                goto LABEL_74;
              v14 = *v13;
            }
            _BitScanForward64(&v17, ~v14);
            v18 = v17 + ((__int64)((__int64)v13 - v11) >> 3 << 6);
LABEL_15:
            if ( v18 <= v12 )
              goto LABEL_16;
LABEL_106:
            v18 = -1LL;
            goto LABEL_160;
          }
          while ( 2 )
          {
            while ( (v14 & 0x8000000000000000uLL) != 0 )
            {
              if ( (unsigned __int64)++v13 > v15 )
                goto LABEL_74;
              v14 = *v13;
            }
            v35 = !_BitScanReverse64((unsigned __int64 *)&v57, v14);
            if ( !v35 )
              v16 = 63 - v57;
            v18 = ((((__int64)((__int64)v13 - v11) >> 3) + 1) << 6) - v16;
            if ( v18 > v12 )
              goto LABEL_74;
            v58 = v8 - v16;
            if ( v8 == v16 )
              goto LABEL_16;
            v14 = *++v13;
            if ( v58 >= 0x40 )
            {
              if ( !v14 )
              {
                v58 -= 64LL;
                if ( !v58 )
                  goto LABEL_16;
                v14 = *++v13;
                goto LABEL_114;
              }
            }
            else
            {
LABEL_114:
              v35 = !_BitScanForward64((unsigned __int64 *)&v59, v14);
              if ( v35 )
                LODWORD(v59) = 64;
              if ( (unsigned int)v59 >= v58 )
                goto LABEL_16;
            }
            v16 = 64;
            continue;
          }
        }
        if ( (v12 & 0x3F) != 0 )
          v15 += 8LL;
        if ( !v14 )
        {
          v52 = 0;
          goto LABEL_88;
        }
        if ( !*++v13 )
          break;
        do
        {
          do
          {
LABEL_84:
            if ( (unsigned __int64)v13 > v15 )
              goto LABEL_106;
            ++v13;
          }
          while ( *v13 );
          v35 = !_BitScanReverse64((unsigned __int64 *)&v51, *(v13 - 1));
          if ( v35 )
            v52 = 64;
          else
            v52 = 63 - v51;
LABEL_88:
          v18 = ((__int64)((__int64)v13 - v11) >> 3 << 6) - v52;
          if ( v18 > v12 )
            goto LABEL_106;
          v53 = &v13[(v8 - v52) >> 6];
          while ( ++v13 != v53 )
          {
            if ( *v13 )
              goto LABEL_84;
          }
          v63 = ((_BYTE)v8 - (_BYTE)v52) & 0x3F;
          if ( (((_BYTE)v8 - (_BYTE)v52) & 0x3F) == 0 )
            break;
          v35 = !_BitScanForward64((unsigned __int64 *)&v64, *v13);
          if ( v35 )
            LODWORD(v64) = 64;
        }
        while ( (unsigned int)v64 < v63 );
LABEL_16:
        if ( v18 != -1LL )
        {
LABEL_17:
          v4 = a1;
          v19 = v18;
          v6 = (unsigned __int64 *)v73;
          v3 = a2;
          v72 = v18;
          goto LABEL_18;
        }
LABEL_160:
        if ( !v71 )
          goto LABEL_17;
        v69 = v8 + v5;
        v71 = 0LL;
        v9 = 0LL;
        if ( v8 + v5 > v7 )
          v69 = v7;
        v10 = v69 - 1;
      }
      v35 = !_BitScanReverse64((unsigned __int64 *)&v67, v14);
      if ( v35 )
        v52 = 64;
      else
        v52 = 63 - v67;
      goto LABEL_88;
    }
    v19 = v9 & 0xFFFFFFFFFFFFFFF8uLL;
    v72 = v19;
LABEL_18:
    if ( v19 == -1LL )
      goto LABEL_107;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v4 + 8, &LockHandle);
    v20 = v19 & -(__int64)(v19 < *v6);
    v21 = *v6 - 1;
    if ( v3 )
    {
      v22 = v6[1];
      while ( 1 )
      {
        if ( v21 - v20 + 1 < v3 )
        {
          v29 = -1LL;
          goto LABEL_166;
        }
        v23 = v21 - v3 + 1;
        v24 = (unsigned __int64 *)(v22 + 8 * (v20 >> 6));
        v25 = ((1LL << (v20 & 0x3F)) - 1) | *v24;
        v26 = v22 + 8 * (v23 >> 6);
        if ( v3 > 0x7F )
        {
          if ( (v23 & 0x3F) != 0 )
            v26 += 8LL;
          if ( !v25 )
          {
            v55 = 0;
            goto LABEL_101;
          }
          if ( !*++v24 )
          {
            v35 = !_BitScanReverse64((unsigned __int64 *)&v68, v25);
            if ( v35 )
              v55 = 64;
            else
              v55 = 63 - v68;
            goto LABEL_101;
          }
LABEL_97:
          while ( (unsigned __int64)v24 <= v26 )
          {
            if ( !*++v24 )
            {
              v35 = !_BitScanReverse64((unsigned __int64 *)&v54, *(v24 - 1));
              if ( v35 )
                v55 = 64;
              else
                v55 = 63 - v54;
LABEL_101:
              v29 = ((__int64)((__int64)v24 - v22) >> 3 << 6) - v55;
              if ( v29 > v23 )
                break;
              v56 = &v24[(v3 - v55) >> 6];
              while ( ++v24 != v56 )
              {
                if ( *v24 )
                  goto LABEL_97;
              }
              v65 = (v3 - v55) & 0x3F;
              if ( !v65 )
                goto LABEL_29;
              v35 = !_BitScanForward64((unsigned __int64 *)&v66, *v24);
              if ( v35 )
                LODWORD(v66) = 64;
              if ( (unsigned int)v66 >= v65 )
                goto LABEL_29;
            }
          }
LABEL_79:
          v29 = -1LL;
          goto LABEL_76;
        }
        v27 = 64;
        if ( v3 >= 0x40 )
          break;
        if ( v3 <= 1 )
        {
          while ( v25 == -1 )
          {
            if ( (unsigned __int64)++v24 > v26 )
              goto LABEL_79;
            v25 = *v24;
          }
          _BitScanForward64(&v28, ~v25);
          v29 = v28 + ((__int64)((__int64)v24 - v22) >> 3 << 6);
          if ( v29 <= v23 )
            goto LABEL_29;
          goto LABEL_79;
        }
        v42 = 0LL;
        v43 = (unsigned __int64 *)(v22 + 8 * (v21 >> 6));
        while ( 1 )
        {
          if ( v25 == -1 )
          {
            while ( (unsigned __int64)++v24 <= v26 )
            {
              v25 = *v24;
              if ( *v24 != -1LL )
              {
                v42 = 0LL;
                goto LABEL_55;
              }
            }
LABEL_75:
            v29 = -1LL;
            goto LABEL_76;
          }
LABEL_55:
          v35 = !_BitScanForward64((unsigned __int64 *)&v44, v25);
          if ( v35 )
            LODWORD(v44) = 64;
          if ( (unsigned int)(v42 + v44) >= v3 )
            break;
          v45 = v3;
          v46 = ~v25;
          while ( 1 )
          {
            v46 &= v46 >> (v45 >> 1);
            if ( !v46 )
              break;
            v45 -= v45 >> 1;
            if ( v45 <= 1 )
            {
              _BitScanForward64(&v47, v46);
              v48 = (unsigned int)v47;
              goto LABEL_62;
            }
          }
          if ( v24 == v43 )
            goto LABEL_75;
          v35 = !_BitScanReverse64((unsigned __int64 *)&v49, v25);
          if ( v35 )
            v42 = 64LL;
          else
            v42 = (unsigned int)(63 - v49);
          v25 = *++v24;
        }
        v48 = -v42;
LABEL_62:
        v29 = ((__int64)((__int64)v24 - v22) >> 3 << 6) + v48;
        if ( v29 > v23 )
          goto LABEL_75;
LABEL_29:
        if ( v29 != -1LL )
          goto LABEL_30;
LABEL_76:
        v19 = v72;
LABEL_166:
        if ( !v20 )
        {
LABEL_30:
          v4 = a1;
          v30 = v29;
          v6 = (unsigned __int64 *)v73;
          goto LABEL_31;
        }
        v70 = v3 + v19;
        v20 = 0LL;
        if ( v3 + v19 > *v6 )
          v70 = *v6;
        v21 = v70 - 1;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v25 < 0 )
          {
            if ( (unsigned __int64)++v24 > v26 )
              goto LABEL_79;
            v25 = *v24;
          }
          v35 = !_BitScanReverse64((unsigned __int64 *)&v60, v25);
          if ( !v35 )
            v27 = 63 - v60;
          v29 = ((((__int64)((__int64)v24 - v22) >> 3) + 1) << 6) - v27;
          if ( v29 > v23 )
            goto LABEL_79;
          v61 = v3 - v27;
          if ( v3 == v27 )
            goto LABEL_29;
          ++v24;
          v27 = 64;
          v25 = *v24;
          if ( v61 >= 0x40 )
            break;
LABEL_129:
          v35 = !_BitScanForward64((unsigned __int64 *)&v62, v25);
          if ( v35 )
            LODWORD(v62) = 64;
          if ( (unsigned int)v62 >= v61 )
            goto LABEL_29;
          v27 = 64;
        }
        if ( !v25 )
        {
          v61 -= 64LL;
          if ( !v61 )
            goto LABEL_29;
          v25 = *++v24;
          goto LABEL_129;
        }
      }
    }
    v30 = v20 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_31:
    if ( v30 != -1LL )
      break;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !(unsigned int)MiExtendDynamicBitMap(v4, v6) )
      return 0LL;
    a3 = v78;
    v3 = a2;
  }
  RtlSetBitsEx(v6, v30, a2);
  v31 = v78;
  if ( v78 == 15 )
  {
    v31 = 9;
    v30 += 8 * (v6[1] - v4[1]);
  }
  if ( a2 == 1 )
    v4[3] = v30 + 1;
  if ( v4 == &qword_1402FE920 )
  {
    qword_1402FE788 -= (unsigned __int64)a2 << 21;
    MiReclaimSystemVa(0LL);
  }
  _InterlockedExchangeAdd64(&qword_1402FFCB0[v31], a2);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4[4] + (v30 << 21);
}
