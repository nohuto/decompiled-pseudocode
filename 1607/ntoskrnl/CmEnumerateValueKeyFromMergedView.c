/*
 * XREFs of CmEnumerateValueKeyFromMergedView @ 0x1405FFAA8
 * Callers:
 *     NtEnumerateValueKey @ 0x140438410 (NtEnumerateValueKey.c)
 *     CmQueryKey @ 0x1404396E0 (CmQueryKey.c)
 * Callees:
 *     CmpTransSearchAddTransFromKeyBody @ 0x1403FBA4C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpFindNameInList @ 0x140401914 (CmpFindNameInList.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpLockTwoKcbsShared @ 0x140437AF0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x140437EA0 (CmpUnlockTwoKcbs.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpQueryKeyValueData @ 0x14043F230 (CmpQueryKeyValueData.c)
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
  __int64 v12; // r15
  int KeyValueData; // ebx
  _DWORD *v14; // r13
  __int64 v15; // rdi
  unsigned __int64 v16; // rsi
  char v17; // al
  unsigned int *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r15
  unsigned int v22; // r15d
  unsigned int v23; // r12d
  __int64 v24; // rax
  __int64 v25; // r14
  unsigned int v26; // r12d
  __int64 v27; // rax
  __int64 v28; // r15
  char v29; // r9
  __int64 v30; // rcx
  unsigned int v31; // ecx
  __int64 v32; // rax
  unsigned int v34; // [rsp+48h] [rbp-69h]
  _DWORD v35[2]; // [rsp+50h] [rbp-61h] BYREF
  __int64 v36; // [rsp+58h] [rbp-59h]
  _DWORD v37[2]; // [rsp+60h] [rbp-51h] BYREF
  __int64 v38; // [rsp+68h] [rbp-49h] BYREF
  unsigned int *v39; // [rsp+70h] [rbp-41h]
  _DWORD v40[2]; // [rsp+78h] [rbp-39h] BYREF
  __int64 v41; // [rsp+80h] [rbp-31h]
  _DWORD v42[2]; // [rsp+88h] [rbp-29h] BYREF
  _DWORD v43[2]; // [rsp+90h] [rbp-21h] BYREF
  __int64 v44; // [rsp+98h] [rbp-19h]
  __int64 v45; // [rsp+A0h] [rbp-11h]
  __int16 v46; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-1h]
  unsigned int v48; // [rsp+F8h] [rbp+47h]

  v38 = 0LL;
  v45 = 0LL;
  v42[0] = -1;
  v42[1] = 0;
  v12 = 0LL;
  v41 = 0LL;
  KeyValueData = 0;
  v43[0] = -1;
  v14 = 0LL;
  v43[1] = 0;
  v39 = 0LL;
  v34 = 0;
  v48 = 0;
  v36 = 0LL;
  v37[0] = -1;
  v37[1] = 0;
  v44 = 0LL;
  v40[0] = -1;
  v40[1] = 0;
  v35[0] = -1;
  v35[1] = 0;
  if ( !a3 )
    CmpLockRegistry();
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    KeyValueData = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v38);
    if ( KeyValueData < 0 )
    {
      if ( !a3 )
        goto LABEL_65;
      return (unsigned int)KeyValueData;
    }
    v12 = v38;
  }
  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(_QWORD *)(a2 + 8);
  if ( !a3 )
    CmpLockTwoKcbsShared(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 8));
  if ( CmpIsKeyDeletedForKeyBody(a1, v12) )
  {
    v17 = *(_BYTE *)(a1 + 48);
LABEL_13:
    KeyValueData = (v17 & 1) != 0 ? -1073740763 : -1073741444;
    goto LABEL_63;
  }
  if ( CmpIsKeyDeletedForKeyBody(a2, v12) )
  {
    v17 = *(_BYTE *)(a2 + 48);
    goto LABEL_13;
  }
  if ( !v12 )
    goto LABEL_23;
  if ( *(_QWORD *)(v15 + 280) == v12 )
  {
    v18 = (unsigned int *)(v15 + 272);
    v39 = (unsigned int *)(v15 + 272);
  }
  else
  {
    v18 = 0LL;
  }
  if ( *(_QWORD *)(v16 + 280) == v12 )
    v14 = (_DWORD *)(v16 + 272);
  if ( !v18 )
  {
LABEL_23:
    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 8LL))(
            *(_QWORD *)(v15 + 24),
            *(unsigned int *)(v15 + 32),
            v42);
    v45 = v19;
    if ( !v19 )
    {
      KeyValueData = -1073741670;
      goto LABEL_63;
    }
    v18 = (unsigned int *)(v19 + 36);
    v39 = (unsigned int *)(v19 + 36);
  }
  if ( v14 )
    goto LABEL_30;
  v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v16 + 24) + 8LL))(
          *(_QWORD *)(v16 + 24),
          *(unsigned int *)(v16 + 32),
          v43);
  v41 = v20;
  v21 = v20;
  if ( v20 )
  {
    v14 = (_DWORD *)(v20 + 36);
LABEL_30:
    v22 = 0;
    v23 = a4;
    while ( v34 < *v18 )
    {
      v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 8LL))(
              *(_QWORD *)(v15 + 24),
              v18[1],
              v37);
      v36 = v24;
      if ( !v24 )
      {
        KeyValueData = -1073741670;
        goto LABEL_58;
      }
      v25 = *(_QWORD *)(v15 + 24);
      v26 = *(_DWORD *)(v24 + 4LL * v34);
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v25 + 8))(v25, v26, v35);
      v28 = v27;
      if ( !v27 )
        goto LABEL_45;
      v29 = *(_BYTE *)(v27 + 16);
      v47 = v27 + 20;
      v46 = *(_WORD *)(v27 + 2);
      if ( CmpFindNameInList(
             *(_QWORD *)(v16 + 24),
             (int)v14,
             (int)&v46,
             (unsigned __int8)(v29 & 1) << 16,
             0LL,
             (__int64)&v38)
        && (_DWORD)v38 == -1 )
      {
        if ( v48 == a4 )
        {
          v30 = v15;
LABEL_52:
          KeyValueData = CmpQueryKeyValueData(v30, v26, v28, a5, Src, a7, a8);
          if ( v28 )
            (*(void (__fastcall **)(__int64, _DWORD *))(v25 + 16))(v25, v35);
          goto LABEL_54;
        }
        v22 = ++v48;
      }
      else
      {
        v22 = v48;
      }
      ++v34;
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 16LL))(*(_QWORD *)(v15 + 24), v35);
      if ( v36 )
      {
        (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 16LL))(*(_QWORD *)(v15 + 24), v37);
        v36 = 0LL;
      }
      v23 = a4;
      if ( v22 > a4 )
        goto LABEL_54;
      v18 = v39;
    }
    v31 = v22 + *v14;
    if ( v31 > v23 )
    {
      v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v16 + 24) + 8LL))(
              *(_QWORD *)(v16 + 24),
              (unsigned int)v14[1],
              v40);
      v44 = v32;
      if ( !v32
        || (v25 = *(_QWORD *)(v16 + 24),
            v26 = *(_DWORD *)(v32 + 4LL * (v23 - v22)),
            (v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v25 + 8))(v25, v26, v35)) == 0) )
      {
LABEL_45:
        KeyValueData = -1073741670;
        goto LABEL_54;
      }
      v30 = v16;
      goto LABEL_52;
    }
    KeyValueData = -2147483622;
    if ( a9 )
      *a9 = v31;
LABEL_54:
    if ( v36 )
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 16LL))(*(_QWORD *)(v15 + 24), v37);
    if ( v44 )
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v16 + 24) + 16LL))(*(_QWORD *)(v16 + 24), v40);
LABEL_58:
    v21 = v41;
    goto LABEL_59;
  }
  KeyValueData = -1073741670;
LABEL_59:
  if ( v45 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 16LL))(*(_QWORD *)(v15 + 24), v42);
  if ( v21 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v16 + 24) + 16LL))(*(_QWORD *)(v16 + 24), v43);
LABEL_63:
  if ( !a3 )
  {
    CmpUnlockTwoKcbs((char *)v15, v16);
LABEL_65:
    CmpUnlockRegistry();
  }
  return (unsigned int)KeyValueData;
}
