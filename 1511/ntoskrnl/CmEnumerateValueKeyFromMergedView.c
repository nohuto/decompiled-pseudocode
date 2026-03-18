/*
 * XREFs of CmEnumerateValueKeyFromMergedView @ 0x1405E1414
 * Callers:
 *     CmQueryKey @ 0x1403FF980 (CmQueryKey.c)
 *     NtEnumerateValueKey @ 0x140423C60 (NtEnumerateValueKey.c)
 * Callees:
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     CmpFindNameInList @ 0x1403F40B0 (CmpFindNameInList.c)
 *     CmpLockTwoKcbsShared @ 0x1403FD8E0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1403FDDA0 (CmpUnlockTwoKcbs.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 *     CmpQueryKeyValueData @ 0x140422850 (CmpQueryKeyValueData.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 */

__int64 __fastcall CmEnumerateValueKeyFromMergedView(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned int a4,
        int a5,
        _DWORD *Src,
        unsigned int a7,
        int *a8,
        unsigned int *a9)
{
  unsigned int v11; // r15d
  int KeyValueData; // ebx
  _DWORD *v14; // r12
  unsigned int v15; // r13d
  __int64 v16; // r9
  __int64 v17; // rdi
  unsigned __int64 v18; // rsi
  char v19; // al
  unsigned int *v20; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // rcx
  unsigned int v29; // ecx
  __int64 v30; // rax
  int v32; // [rsp+48h] [rbp-71h] BYREF
  int v33; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v34; // [rsp+50h] [rbp-69h] BYREF
  int v35; // [rsp+54h] [rbp-65h]
  int v36; // [rsp+58h] [rbp-61h] BYREF
  __int64 v37; // [rsp+60h] [rbp-59h]
  int v38; // [rsp+68h] [rbp-51h] BYREF
  char *v39; // [rsp+70h] [rbp-49h] BYREF
  __int64 v40; // [rsp+78h] [rbp-41h]
  unsigned int *v41; // [rsp+80h] [rbp-39h]
  int v42; // [rsp+88h] [rbp-31h]
  __int64 v43; // [rsp+90h] [rbp-29h]
  __int64 v44; // [rsp+98h] [rbp-21h]
  __int16 v45; // [rsp+A0h] [rbp-19h]
  __int64 v46; // [rsp+A8h] [rbp-11h]
  unsigned int v47; // [rsp+108h] [rbp+4Fh]

  v39 = 0LL;
  v11 = a4;
  v43 = 0LL;
  v34 = -1;
  KeyValueData = 0;
  v40 = 0LL;
  v14 = 0LL;
  v38 = -1;
  v15 = 0;
  v41 = 0LL;
  v47 = 0;
  v37 = 0LL;
  v33 = -1;
  v44 = 0LL;
  v36 = -1;
  v32 = -1;
  if ( !a3 )
    CmpLockRegistry();
  v16 = *(_QWORD *)(a1 + 56);
  if ( v16 || *(_QWORD *)(a1 + 64) )
  {
    KeyValueData = CmpSearchAddTrans(a1, 0LL, 0LL, v16, *(__int128 **)(a1 + 64), 0, &v39);
    if ( KeyValueData < 0 )
    {
      if ( !a3 )
        goto LABEL_63;
      return (unsigned int)KeyValueData;
    }
  }
  v17 = *(_QWORD *)(a1 + 8);
  v18 = *(_QWORD *)(a2 + 8);
  if ( !a3 )
    CmpLockTwoKcbsShared(*(_QWORD *)(a1 + 8), v18);
  if ( CmRmIsKCBDeleted(v17, (__int64)v39) )
  {
    v19 = *(_BYTE *)(a1 + 48);
LABEL_12:
    KeyValueData = (v19 & 1) != 0 ? -1073740763 : -1073741444;
    goto LABEL_61;
  }
  if ( CmRmIsKCBDeleted(v18, (__int64)v39) )
  {
    v19 = *(_BYTE *)(a2 + 48);
    goto LABEL_12;
  }
  if ( !v39 )
    goto LABEL_22;
  if ( *(char **)(v17 + 280) == v39 )
  {
    v20 = (unsigned int *)(v17 + 272);
    v41 = (unsigned int *)(v17 + 272);
  }
  else
  {
    v20 = 0LL;
  }
  if ( *(char **)(v18 + 280) == v39 )
    v14 = (_DWORD *)(v18 + 272);
  if ( !v20 )
  {
LABEL_22:
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v17 + 32) + 8LL))(
            *(_QWORD *)(v17 + 32),
            *(unsigned int *)(v17 + 40),
            &v34);
    v43 = v21;
    if ( !v21 )
    {
      KeyValueData = -1073741670;
      goto LABEL_61;
    }
    v20 = (unsigned int *)(v21 + 36);
    v41 = (unsigned int *)(v21 + 36);
  }
  if ( v14 )
    goto LABEL_29;
  v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v18 + 32) + 8LL))(
          *(_QWORD *)(v18 + 32),
          *(unsigned int *)(v18 + 40),
          &v38);
  v40 = v22;
  v23 = v22;
  if ( v22 )
  {
    v14 = (_DWORD *)(v22 + 36);
LABEL_29:
    while ( v47 < *v20 )
    {
      v24 = v37;
      if ( !v37 )
      {
        v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v17 + 32) + 8LL))(
                *(_QWORD *)(v17 + 32),
                v20[1],
                &v33);
        v37 = v24;
        if ( !v24 )
        {
          KeyValueData = -1073741670;
          goto LABEL_56;
        }
      }
      v25 = *(_QWORD *)(v17 + 32);
      v35 = *(_DWORD *)(v24 + 4LL * v47);
      v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v25 + 8))(v25, (unsigned int)v35, &v32);
      v27 = v26;
      if ( !v26 )
        goto LABEL_43;
      v46 = v26 + 20;
      v45 = *(_WORD *)(v26 + 2);
      if ( CmpFindNameInList(*(_QWORD *)(v18 + 32), (__int64)v14) && v42 == -1 )
      {
        if ( v15 == a4 )
        {
          v28 = v17;
LABEL_50:
          KeyValueData = CmpQueryKeyValueData(v28, v35, v27, a5, Src, a7, a8);
          if ( v27 )
            (*(void (__fastcall **)(__int64, int *))(v25 + 16))(v25, &v32);
          goto LABEL_52;
        }
        ++v15;
      }
      ++v47;
      (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v17 + 32) + 16LL))(*(_QWORD *)(v17 + 32), &v32);
      if ( v37 )
      {
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v17 + 32) + 16LL))(*(_QWORD *)(v17 + 32), &v33);
        v37 = 0LL;
      }
      v11 = a4;
      if ( v15 > a4 )
        goto LABEL_52;
      v20 = v41;
    }
    v29 = v15 + *v14;
    if ( v29 > v11 )
    {
      v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v18 + 32) + 8LL))(
              *(_QWORD *)(v18 + 32),
              (unsigned int)v14[1],
              &v36);
      v44 = v30;
      if ( !v30
        || (v25 = *(_QWORD *)(v18 + 32),
            v35 = *(_DWORD *)(v30 + 4LL * (v11 - v15)),
            (v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v25 + 8))(v25, (unsigned int)v35, &v32)) == 0) )
      {
LABEL_43:
        KeyValueData = -1073741670;
        goto LABEL_52;
      }
      v28 = v18;
      goto LABEL_50;
    }
    KeyValueData = -2147483622;
    if ( a9 )
      *a9 = v29;
LABEL_52:
    if ( v37 )
      (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v17 + 32) + 16LL))(*(_QWORD *)(v17 + 32), &v33);
    if ( v44 )
      (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v18 + 32) + 16LL))(*(_QWORD *)(v18 + 32), &v36);
LABEL_56:
    v23 = v40;
  }
  else
  {
    KeyValueData = -1073741670;
  }
  if ( v43 )
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v17 + 32) + 16LL))(*(_QWORD *)(v17 + 32), &v34);
  if ( v23 )
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v18 + 32) + 16LL))(*(_QWORD *)(v18 + 32), &v38);
LABEL_61:
  if ( !a3 )
  {
    CmpUnlockTwoKcbs((char *)v17, (char *)v18);
LABEL_63:
    CmpUnlockRegistry();
  }
  return (unsigned int)KeyValueData;
}
