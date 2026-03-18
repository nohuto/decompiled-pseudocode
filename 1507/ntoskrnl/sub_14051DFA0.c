/*
 * XREFs of sub_14051DFA0 @ 0x14051DFA0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeQueryTimeIncrement @ 0x1401011C0 (KeQueryTimeIncrement.c)
 *     sub_14051D108 @ 0x14051D108 (sub_14051D108.c)
 *     sub_14051E368 @ 0x14051E368 (sub_14051E368.c)
 *     sub_1406ECC3C @ 0x1406ECC3C (sub_1406ECC3C.c)
 */

__int64 __fastcall sub_14051DFA0(int a1, int a2, int a3, __int64 a4, _BYTE *a5)
{
  char v5; // di
  int v6; // r13d
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // r9
  unsigned __int8 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rbx
  int v13; // eax
  int v14; // eax
  char v16; // di
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // r9
  unsigned __int8 *v21; // rax
  __int64 v22; // r9
  unsigned __int64 v23; // rbx
  unsigned int v24; // edx
  unsigned int v25; // r8d
  int v26; // ecx
  unsigned int v27; // eax
  unsigned __int8 *v28; // r8
  __int64 v29; // r9
  unsigned int v30; // ecx
  unsigned int v31; // edx
  int v32; // eax
  char v33; // di
  __int64 v34; // rbx
  ULONG TimeIncrement; // eax
  __int128 *v36; // rcx
  char v37; // dl
  __int64 v38; // r9
  unsigned __int8 *v39; // rdx
  __int64 v40; // r10
  unsigned __int64 v41; // rax
  unsigned int v42; // ecx
  unsigned int v43; // r8d
  int v44; // eax
  unsigned int v45; // ecx
  __int64 v46; // r8
  unsigned int v47; // ecx
  unsigned int v48; // edx
  int v49; // eax
  __int128 v50; // [rsp+50h] [rbp-B0h]
  __int128 v51; // [rsp+70h] [rbp-90h]
  __int128 v52; // [rsp+88h] [rbp-78h]
  __int128 v53; // [rsp+A8h] [rbp-58h]
  _OWORD v54[3]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v55; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v56; // [rsp+F8h] [rbp-8h]
  __int128 v57; // [rsp+108h] [rbp+8h]
  _BYTE v58[16]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v59; // [rsp+128h] [rbp+28h]
  _QWORD v60[6]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v61[8]; // [rsp+178h] [rbp+78h] BYREF
  int v62; // [rsp+180h] [rbp+80h]
  char v63; // [rsp+1A8h] [rbp+A8h] BYREF
  int v64; // [rsp+1B0h] [rbp+B0h]
  _BYTE v65[104]; // [rsp+1D8h] [rbp+D8h] BYREF

  v5 = 0;
  v6 = a4;
  if ( off_14077E020 )
  {
    v10 = (unsigned __int8 *)qword_140784300;
  }
  else
  {
    if ( !Data )
      goto LABEL_54;
    v7 = KeAbPreAcquire((ULONG_PTR)&qword_14077EAF0, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EAF0, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&qword_14077EAF0, v7, (ULONG_PTR)&qword_14077EAF0, v8);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    if ( !qword_14077EB68 )
      v5 = 1;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EAF0, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_14077EAF0);
    KeAbPostRelease((ULONG_PTR)&qword_14077EAF0);
    v10 = (unsigned __int8 *)qword_140784300;
    if ( v5 == 1
      || (int)sub_14051E368(v58) >= 0
      && v59
      && v59 + 900000 > v59
      && (v12 = MEMORY[0xFFFFF78000000320], v11 = v59 + 900000, v11 > v12 * KeQueryTimeIncrement() / 10000) )
    {
      if ( !v5 )
      {
LABEL_17:
        if ( !off_14077E020 )
          goto LABEL_18;
        goto LABEL_56;
      }
    }
    v16 = 0;
    if ( !off_14077E020 )
    {
      if ( !Data )
        goto LABEL_54;
      v17 = KeAbPreAcquire((ULONG_PTR)&qword_14077EAF0, 0LL, 0LL, v9);
      v19 = v17;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14077EAF0, 0LL) )
        ExfAcquirePushLockExclusiveEx(&qword_14077EAF0, v17, (ULONG_PTR)&qword_14077EAF0, v18);
      if ( v19 )
        *(_BYTE *)(v19 + 26) |= 1u;
      if ( !qword_14077EB68 )
        v16 = 1;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14077EAF0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_14077EAF0);
      KeAbPostRelease((ULONG_PTR)&qword_14077EAF0);
      if ( v16 )
      {
        dword_14077E0F0 = 5;
        v36 = (__int128 *)&v63;
        v64 = 5;
        v37 = 2;
LABEL_51:
        sub_14051D108((__int64)v36, v37, 0, v20);
        goto LABEL_17;
      }
      if ( !Data )
        goto LABEL_17;
      v21 = (unsigned __int8 *)Data + 20;
      DWORD2(v52) = 4;
      *(_QWORD *)&v53 = 0LL;
      BYTE8(v53) = 1;
      if ( Data == (PVOID)-20LL )
        goto LABEL_52;
      v22 = *((unsigned int *)Data + 1);
      v23 = 0LL;
      if ( *((_DWORD *)Data + 1) )
      {
        v24 = 0;
        v25 = 0;
        do
        {
          v26 = *v21++;
          v26 -= 23737705;
          v24 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v24 + v26), 21), 21), 21);
          v25 += v24 + v26;
          --v22;
        }
        while ( v22 );
        v23 = __PAIR64__(v24, v25);
      }
      *(_QWORD *)&v52 = v23;
      if ( !(_DWORD)NumOfElements )
        goto LABEL_47;
      v27 = 16 * NumOfElements;
      if ( 16 * (unsigned __int64)(unsigned int)NumOfElements > 0xFFFFFFFF )
      {
LABEL_52:
        v23 = 0LL;
        DWORD2(v52) = 4;
      }
      else
      {
        v28 = (unsigned __int8 *)qword_140784300;
        v29 = v27;
        if ( v27 )
        {
          v30 = HIDWORD(v23);
          v31 = v23;
          do
          {
            v32 = *v28++;
            v32 -= 23737705;
            v30 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v30 + v32), 21), 21), 21);
            v31 += v30 + v32;
            --v29;
          }
          while ( v29 );
          v23 = __PAIR64__(v30, v31);
        }
      }
      *(_QWORD *)&v52 = v23;
LABEL_47:
      v55 = v52;
      v56 = 0uLL;
      v57 = v53;
      if ( (int)sub_14051E368(v60) < 0 )
        goto LABEL_17;
      v33 = 4;
      if ( v60[0] != v23 )
      {
        DWORD2(v55) = 4;
        v33 = 6;
      }
      v34 = MEMORY[0xFFFFF78000000320];
      TimeIncrement = KeQueryTimeIncrement();
      v36 = &v55;
      *(_QWORD *)&v56 = v34 * TimeIncrement / 10000;
      v37 = v33;
      goto LABEL_51;
    }
  }
LABEL_56:
  if ( (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]) / 0x989680uLL > 0x2A30 )
  {
    dword_14077E0F0 = 2;
    v62 = 2;
    sub_14051D108((__int64)v61, 2, 0, 0xFFFFF78000000008uLL);
    v65[40] = 0;
    sub_14051D108((__int64)v65, 32, 0, v38);
  }
LABEL_18:
  if ( Data )
  {
    v13 = sub_14051E368(v54);
    if ( v13 >= 0 )
    {
      v14 = DWORD2(v54[0]);
      goto LABEL_21;
    }
    if ( v13 != -1073741275 || !Data )
      goto LABEL_74;
    v39 = (unsigned __int8 *)Data + 20;
    DWORD2(v50) = 4;
    *(_QWORD *)&v51 = 0LL;
    BYTE8(v51) = 1;
    if ( Data == (PVOID)-20LL )
      goto LABEL_72;
    v40 = *((unsigned int *)Data + 1);
    v41 = 0LL;
    if ( *((_DWORD *)Data + 1) )
    {
      v42 = 0;
      v43 = 0;
      do
      {
        v44 = *v39++;
        v44 -= 23737705;
        v42 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v42 + v44), 21), 21), 21);
        v43 += v42 + v44;
        --v40;
      }
      while ( v40 );
      v41 = __PAIR64__(v42, v43);
    }
    *(_QWORD *)&v50 = v41;
    if ( !(_DWORD)NumOfElements )
      goto LABEL_73;
    v45 = 16 * NumOfElements;
    if ( 16 * (unsigned __int64)(unsigned int)NumOfElements > 0xFFFFFFFF )
    {
LABEL_72:
      *(_QWORD *)&v50 = 0LL;
      DWORD2(v50) = 4;
    }
    else
    {
      v46 = v45;
      if ( v45 )
      {
        v47 = HIDWORD(v41);
        v48 = v41;
        do
        {
          v49 = *v10++;
          v49 -= 23737705;
          v47 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v47 + v49), 21), 21), 21);
          v48 += v47 + v49;
          --v46;
        }
        while ( v46 );
        v41 = __PAIR64__(v47, v48);
      }
      *(_QWORD *)&v50 = v41;
    }
LABEL_73:
    v54[0] = v50;
    DWORD2(v54[0]) = 4;
    v54[1] = 0uLL;
    v54[2] = v51;
    sub_14051D108((__int64)v54, -1, 0, (unsigned int)NumOfElements);
    goto LABEL_74;
  }
LABEL_54:
  v14 = dword_14077E0F0;
LABEL_21:
  if ( !v14 )
  {
    *a5 = 0;
    return 3221225524LL;
  }
LABEL_74:
  *a5 = 1;
  return sub_1406ECC3C(a1, a2, a3, v6, 0);
}
