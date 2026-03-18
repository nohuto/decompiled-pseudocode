/*
 * XREFs of sub_14048A7D0 @ 0x14048A7D0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeQueryTimeIncrement @ 0x1400C7DB0 (KeQueryTimeIncrement.c)
 *     sub_140489880 @ 0x140489880 (sub_140489880.c)
 *     sub_14048AB98 @ 0x14048AB98 (sub_14048AB98.c)
 *     sub_1405174E0 @ 0x1405174E0 (sub_1405174E0.c)
 */

__int64 __fastcall sub_14048A7D0(int a1, int a2, int a3, int a4, _BYTE *a5)
{
  char v5; // di
  __int64 v7; // rbx
  unsigned __int8 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  char v14; // di
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned __int8 *v17; // rax
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  unsigned int v20; // edx
  unsigned int v21; // r8d
  int v22; // ecx
  unsigned int v23; // eax
  unsigned __int8 *v24; // r8
  __int64 v25; // r9
  unsigned int v26; // ecx
  unsigned int v27; // edx
  int v28; // eax
  char v29; // di
  __int64 v30; // rbx
  ULONG TimeIncrement; // eax
  __int128 *v32; // rcx
  char v33; // dl
  unsigned __int8 *v34; // rdx
  __int64 v35; // r10
  unsigned __int64 v36; // rax
  unsigned int v37; // ecx
  unsigned int v38; // r8d
  int v39; // eax
  unsigned int v40; // ecx
  __int64 v41; // r8
  unsigned int v42; // ecx
  unsigned int v43; // edx
  int v44; // eax
  __int128 v45; // [rsp+50h] [rbp-B0h]
  __int128 v46; // [rsp+70h] [rbp-90h]
  __int128 v47; // [rsp+88h] [rbp-78h]
  __int128 v48; // [rsp+A8h] [rbp-58h]
  _OWORD v49[3]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v50; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v51; // [rsp+F8h] [rbp-8h]
  __int128 v52; // [rsp+108h] [rbp+8h]
  _BYTE v53[16]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v54; // [rsp+128h] [rbp+28h]
  _QWORD v55[6]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v56[8]; // [rsp+178h] [rbp+78h] BYREF
  int v57; // [rsp+180h] [rbp+80h]
  char v58; // [rsp+1A8h] [rbp+A8h] BYREF
  int v59; // [rsp+1B0h] [rbp+B0h]
  _BYTE v60[104]; // [rsp+1D8h] [rbp+D8h] BYREF

  v5 = 0;
  if ( off_1406FB020 )
  {
    v8 = (unsigned __int8 *)qword_140701300;
  }
  else
  {
    if ( !Data )
      goto LABEL_54;
    v7 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBAF8, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBAF8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&qword_1406FBAF8, v7, (ULONG_PTR)&qword_1406FBAF8);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    if ( !qword_1406FBB68 )
      v5 = 1;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBAF8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1406FBAF8);
    KeAbPostRelease((ULONG_PTR)&qword_1406FBAF8);
    v8 = (unsigned __int8 *)qword_140701300;
    if ( v5 == 1
      || (int)sub_14048AB98(v53) >= 0
      && v54
      && v54 + 900000 > v54
      && (v10 = MEMORY[0xFFFFF78000000320], v9 = v54 + 900000, v9 > v10 * KeQueryTimeIncrement() / 10000) )
    {
      if ( !v5 )
      {
LABEL_17:
        if ( !off_1406FB020 )
          goto LABEL_18;
        goto LABEL_56;
      }
    }
    v14 = 0;
    if ( !off_1406FB020 )
    {
      if ( !Data )
        goto LABEL_54;
      v15 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBAF8, 0LL, 0LL);
      v16 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1406FBAF8, 0LL) )
        ExfAcquirePushLockExclusiveEx(&qword_1406FBAF8, v15, (ULONG_PTR)&qword_1406FBAF8);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      if ( !qword_1406FBB68 )
        v14 = 1;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1406FBAF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1406FBAF8);
      KeAbPostRelease((ULONG_PTR)&qword_1406FBAF8);
      if ( v14 )
      {
        dword_1406FB0F4 = 5;
        v32 = (__int128 *)&v58;
        v59 = 5;
        v33 = 2;
LABEL_51:
        sub_140489880((__int64)v32, v33, 0);
        goto LABEL_17;
      }
      if ( !Data )
        goto LABEL_17;
      v17 = (unsigned __int8 *)Data + 20;
      DWORD2(v47) = 4;
      *(_QWORD *)&v48 = 0LL;
      BYTE8(v48) = 1;
      if ( Data == (PVOID)-20LL )
        goto LABEL_52;
      v18 = *((unsigned int *)Data + 1);
      v19 = 0LL;
      if ( *((_DWORD *)Data + 1) )
      {
        v20 = 0;
        v21 = 0;
        do
        {
          v22 = *v17++;
          v22 -= 23737705;
          v20 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v20 + v22), 21), 21), 21);
          v21 += v20 + v22;
          --v18;
        }
        while ( v18 );
        v19 = __PAIR64__(v20, v21);
      }
      *(_QWORD *)&v47 = v19;
      if ( !(_DWORD)NumOfElements )
        goto LABEL_47;
      v23 = 16 * NumOfElements;
      if ( 16 * (unsigned __int64)(unsigned int)NumOfElements > 0xFFFFFFFF )
      {
LABEL_52:
        v19 = 0LL;
        DWORD2(v47) = 4;
      }
      else
      {
        v24 = (unsigned __int8 *)qword_140701300;
        v25 = v23;
        if ( v23 )
        {
          v26 = HIDWORD(v19);
          v27 = v19;
          do
          {
            v28 = *v24++;
            v28 -= 23737705;
            v26 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v26 + v28), 21), 21), 21);
            v27 += v26 + v28;
            --v25;
          }
          while ( v25 );
          v19 = __PAIR64__(v26, v27);
        }
      }
      *(_QWORD *)&v47 = v19;
LABEL_47:
      v50 = v47;
      v51 = 0uLL;
      v52 = v48;
      if ( (int)sub_14048AB98(v55) < 0 )
        goto LABEL_17;
      v29 = 4;
      if ( v55[0] != v19 )
      {
        DWORD2(v50) = 4;
        v29 = 6;
      }
      v30 = MEMORY[0xFFFFF78000000320];
      TimeIncrement = KeQueryTimeIncrement();
      v32 = &v50;
      *(_QWORD *)&v51 = v30 * TimeIncrement / 10000;
      v33 = v29;
      goto LABEL_51;
    }
  }
LABEL_56:
  if ( KiQueryUnbiasedInterruptTime() / 0x989680uLL > 0x2A30 )
  {
    dword_1406FB0F4 = 2;
    v57 = 2;
    sub_140489880((__int64)v56, 2, 0);
    v60[40] = 0;
    sub_140489880((__int64)v60, 32, 0);
  }
LABEL_18:
  if ( Data )
  {
    v11 = sub_14048AB98(v49);
    if ( v11 >= 0 )
    {
      v12 = DWORD2(v49[0]);
      goto LABEL_21;
    }
    if ( v11 != -1073741275 || !Data )
      goto LABEL_74;
    v34 = (unsigned __int8 *)Data + 20;
    DWORD2(v45) = 4;
    *(_QWORD *)&v46 = 0LL;
    BYTE8(v46) = 1;
    if ( Data == (PVOID)-20LL )
      goto LABEL_72;
    v35 = *((unsigned int *)Data + 1);
    v36 = 0LL;
    if ( *((_DWORD *)Data + 1) )
    {
      v37 = 0;
      v38 = 0;
      do
      {
        v39 = *v34++;
        v39 -= 23737705;
        v37 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v37 + v39), 21), 21), 21);
        v38 += v37 + v39;
        --v35;
      }
      while ( v35 );
      v36 = __PAIR64__(v37, v38);
    }
    *(_QWORD *)&v45 = v36;
    if ( !(_DWORD)NumOfElements )
      goto LABEL_73;
    v40 = 16 * NumOfElements;
    if ( 16 * (unsigned __int64)(unsigned int)NumOfElements > 0xFFFFFFFF )
    {
LABEL_72:
      *(_QWORD *)&v45 = 0LL;
      DWORD2(v45) = 4;
    }
    else
    {
      v41 = v40;
      if ( v40 )
      {
        v42 = HIDWORD(v36);
        v43 = v36;
        do
        {
          v44 = *v8++;
          v44 -= 23737705;
          v42 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v42 + v44), 21), 21), 21);
          v43 += v42 + v44;
          --v41;
        }
        while ( v41 );
        v36 = __PAIR64__(v42, v43);
      }
      *(_QWORD *)&v45 = v36;
    }
LABEL_73:
    v49[0] = v45;
    DWORD2(v49[0]) = 4;
    v49[1] = 0uLL;
    v49[2] = v46;
    sub_140489880((__int64)v49, -1, 0);
    goto LABEL_74;
  }
LABEL_54:
  v12 = dword_1406FB0F4;
LABEL_21:
  if ( !v12 )
  {
    *a5 = 0;
    return 3221225524LL;
  }
LABEL_74:
  *a5 = 1;
  return sub_1405174E0(a1, a2, a3, a4, 0);
}
