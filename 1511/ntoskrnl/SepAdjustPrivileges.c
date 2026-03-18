/*
 * XREFs of SepAdjustPrivileges @ 0x1403C2C94
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x1403C28D4 (NtAdjustPrivilegesToken.c)
 * Callees:
 *     AppContainerPrivilegesEnabledExt_0 @ 0x140001290 (AppContainerPrivilegesEnabledExt_0.c)
 *     RtlSidDominates @ 0x140004D80 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x140004E6C (SepCopyTokenIntegrity.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SepAdtTokenRightAdjusted @ 0x1406511B4 (SepAdtTokenRightAdjusted.c)
 */

__int64 __fastcall SepAdjustPrivileges(
        __int64 a1,
        char a2,
        char a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  BOOL v9; // r12d
  int v10; // ebx
  int v12; // r13d
  __int64 result; // rax
  int v14; // r14d
  bool v16; // r14
  unsigned __int64 v17; // r12
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned int v21; // r13d
  int v22; // edx
  __int64 v23; // rcx
  int v24; // r8d
  unsigned int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rcx
  signed int v33; // edx
  unsigned int v34; // r13d
  BOOL v35; // r8d
  int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v42; // [rsp+3Ch] [rbp-CCh]
  __int16 v43; // [rsp+40h] [rbp-C8h] BYREF
  char v44; // [rsp+42h] [rbp-C6h]
  char v45; // [rsp+43h] [rbp-C5h]
  unsigned int v46; // [rsp+44h] [rbp-C4h]
  __int64 v47; // [rsp+48h] [rbp-C0h]
  _QWORD v48[2]; // [rsp+50h] [rbp-B8h]
  BOOL v49; // [rsp+60h] [rbp-A8h]
  unsigned int v50; // [rsp+64h] [rbp-A4h]
  __int64 v51; // [rsp+68h] [rbp-A0h]
  __int64 v52; // [rsp+70h] [rbp-98h]
  void *Buf1; // [rsp+78h] [rbp-90h]
  _BYTE *v54; // [rsp+88h] [rbp-80h]
  __int64 v55; // [rsp+90h] [rbp-78h]
  _DWORD *v56; // [rsp+98h] [rbp-70h]
  _QWORD v57[54]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v58[54]; // [rsp+258h] [rbp+150h] BYREF

  v10 = 0;
  LOBYTE(v9) = 0;
  v56 = a7;
  v12 = 0;
  v44 = a3;
  *(_QWORD *)((char *)v48 + 4) = 0LL;
  v50 = a4;
  v54 = a9;
  v47 = 0LL;
  v42 = 0;
  LODWORD(v48[0]) = 0;
  v43 = 0;
  v49 = v9;
  v52 = 0LL;
  v55 = 0LL;
  v46 = 0;
  memset(v57, 0, 420);
  memset(v58, 0, 420);
  *a8 = 0;
  *a9 = 0;
  SepCopyTokenIntegrity();
  result = AppContainerPrivilegesEnabledExt_0();
  if ( (_DWORD)result == -1073741637 )
  {
    v45 = 0;
  }
  else
  {
    if ( (int)result < 0 )
      return result;
    v45 = 1;
  }
  result = RtlSidDominates((char *)Buf1, (char *)SeHighMandatorySid, (bool *)&v43);
  LODWORD(v51) = result;
  v14 = result;
  if ( (int)result < 0 )
    return result;
  if ( !(_BYTE)v43 )
  {
    result = RtlSidDominates((char *)Buf1, *(char **)&SeMediumMandatorySid, (bool *)&v43 + 1);
    LODWORD(v51) = result;
    v14 = result;
    if ( (int)result < 0 )
      return result;
    v49 = HIBYTE(v43) == 0;
  }
  if ( v44 )
  {
    v33 = 0;
    v34 = 0;
    do
    {
      if ( ((1LL << v33) & *(_QWORD *)(a1 + 72)) != 0 )
      {
        if ( a2 )
        {
          v35 = ((1LL << v33) & *(_QWORD *)(a1 + 80)) != 0;
          v51 = v33;
          v36 = v35 | 2;
          v48[0] = v33;
          v37 = v34++;
          v38 = 3 * v37;
          *(_QWORD *)((char *)v57 + 4 * v38) = v33;
          *((_DWORD *)&v57[1] + v38) = v36;
          if ( a6 )
          {
            v39 = 3LL * (unsigned int)*a8;
            *(_QWORD *)(a6 + 4 * v39 + 4) = v33;
            *(_DWORD *)(a6 + 4 * v39 + 12) = v36;
          }
          v40 = *(_QWORD *)(a1 + 72);
          _bittestandreset64(&v40, (unsigned int)v33);
          *(_QWORD *)(a1 + 72) = v40;
        }
        ++*a8;
      }
      ++v33;
    }
    while ( (unsigned int)v33 <= 0x23 );
    v46 = v34;
    v12 = 0;
LABEL_22:
    if ( !v44 && ((unsigned int)v47 < v50 || v12) )
      v14 = 262;
  }
  else if ( v50 )
  {
    v16 = v49;
    Buf1 = (void *)v50;
    while ( 1 )
    {
      v17 = *a5;
      v18 = *(_QWORD *)(a1 + 64);
      if ( _bittest64(&v18, v17) )
        break;
LABEL_20:
      a5 += 3;
      Buf1 = (char *)Buf1 - 1;
      if ( !Buf1 )
      {
        v14 = v51;
        goto LABEL_22;
      }
    }
    v19 = *(_QWORD *)a5;
    LODWORD(v47) = v47 + 1;
    v20 = *(_QWORD *)(a1 + 72);
    v21 = a5[2];
    v48[0] = v19;
    v22 = ((v20 & (1LL << v19)) != 0 ? 2 : 0) | (((1LL << v19) & *(_QWORD *)(a1 + 80)) != 0);
    if ( (v21 & 4) != 0 )
    {
      v12 = v42;
      if ( a2 )
      {
        *(_QWORD *)(a1 + 72) = v20 & ~(1LL << v19);
        *(_DWORD *)(a1 + 200) |= 0x800u;
        *(_QWORD *)(a1 + 64) = v18 & ~(1LL << v19);
      }
      goto LABEL_20;
    }
    if ( _bittest64(&v20, v17) || (v21 & 2) == 0 )
    {
      if ( (_bittest64(&v20, v17) & ((v21 & 2) == 0)) != 0 )
      {
        if ( a2 )
        {
          if ( a6 )
          {
            v28 = 3LL * (unsigned int)*a8;
            *(_QWORD *)(a6 + 4 * v28 + 4) = v48[0];
            *(_DWORD *)(a6 + 4 * v28 + 12) = v22;
          }
          v29 = 3LL * v46;
          v30 = v46 + 1;
          *(_QWORD *)((char *)v57 + 4 * v29) = v48[0];
          *((_DWORD *)&v57[1] + v29) = v22;
          v31 = *(_QWORD *)(a1 + 72) & ~(1LL << v19);
          v46 = v30;
          *(_QWORD *)(a1 + 72) = v31;
        }
        ++*a8;
      }
      v12 = v42;
      goto LABEL_20;
    }
    if ( !a2 )
      goto LABEL_16;
    if ( a6 )
    {
      v26 = 3LL * (unsigned int)*a8;
      *(_QWORD *)(a6 + 4 * v26 + 4) = v48[0];
      *(_DWORD *)(a6 + 4 * v26 + 12) = v22;
    }
    v23 = 3LL * HIDWORD(v47);
    v24 = HIDWORD(v47) + 1;
    *(_QWORD *)((char *)v58 + 4 * v23) = v48[0];
    *((_DWORD *)&v58[1] + v23) = v22;
    HIDWORD(v47) = v24;
    if ( (_BYTE)v43 )
    {
      *(_QWORD *)(a1 + 72) |= 1LL << v19;
LABEL_16:
      v12 = v42;
LABEL_17:
      ++*a8;
      goto LABEL_20;
    }
    if ( HIBYTE(v43) )
    {
      v27 = 0x120160684LL;
      v12 = v42;
      if ( !_bittest64(&v27, *a5) )
        goto LABEL_39;
    }
    else
    {
      if ( !v16 )
        goto LABEL_16;
      v32 = v52;
      v12 = v42;
      if ( !v45 )
        v32 = 0x200800000LL;
      if ( (*(_DWORD *)(a1 + 200) & 0x4000) == 0 )
        v32 = 0x202800000LL;
      if ( _bittest64(&v32, *a5) )
      {
LABEL_39:
        *(_QWORD *)(a1 + 72) |= 1LL << v19;
        goto LABEL_17;
      }
    }
    v42 = ++v12;
    goto LABEL_17;
  }
  if ( *a8 && a2 )
  {
    v25 = v46;
    *v54 = 1;
    SepAdtTokenRightAdjusted(a1, (unsigned int)v57, v25, (unsigned int)v58, HIDWORD(v47), v14 >= 0);
  }
  if ( a6 )
  {
    if ( *a8 > 1u )
      v10 = 12 * (*a8 - 1);
    *v56 = v10 + 16;
  }
  return (unsigned int)v14;
}
