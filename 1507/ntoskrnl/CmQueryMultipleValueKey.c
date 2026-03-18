/*
 * XREFs of CmQueryMultipleValueKey @ 0x140429678
 * Callers:
 *     NtQueryMultipleValueKey @ 0x140542CE4 (NtQueryMultipleValueKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140427A00 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpGetValueData @ 0x140428050 (CmpGetValueData.c)
 *     CmpFindValueByName @ 0x140429D14 (CmpFindValueByName.c)
 *     CmpFindNameInList @ 0x140429D40 (CmpFindNameInList.c)
 *     CmRmIsKCBDeleted @ 0x1404C69A0 (CmRmIsKCBDeleted.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpUnlockTwoKcbs @ 0x1404C6A80 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404C6EF0 (CmpLockTwoKcbsShared.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 */

__int64 __fastcall CmQueryMultipleValueKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6,
        unsigned int *a7)
{
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r14
  int v12; // ebx
  int v14; // r14d
  int v15; // edi
  ULONG_PTR v16; // r14
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rdx
  int v21; // r8d
  __int64 v22; // rax
  unsigned __int16 *v23; // r15
  __int64 v24; // rdx
  unsigned __int16 v25; // cx
  unsigned int ValueByName; // r13d
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // r15d
  unsigned int v30; // ecx
  unsigned int v31; // r8d
  __int64 v32; // rdx
  __int64 v33; // r13
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned int v36; // eax
  char v37; // [rsp+40h] [rbp-D8h]
  unsigned int Size; // [rsp+44h] [rbp-D4h] BYREF
  unsigned int Size_4; // [rsp+48h] [rbp-D0h]
  unsigned int v40; // [rsp+4Ch] [rbp-CCh]
  int v41; // [rsp+50h] [rbp-C8h]
  __int64 v42; // [rsp+58h] [rbp-C0h]
  int v43; // [rsp+60h] [rbp-B8h]
  __int64 v44; // [rsp+68h] [rbp-B0h]
  unsigned int v45; // [rsp+70h] [rbp-A8h]
  int v46; // [rsp+74h] [rbp-A4h] BYREF
  __int64 v47; // [rsp+78h] [rbp-A0h]
  int v48; // [rsp+80h] [rbp-98h] BYREF
  int v49; // [rsp+84h] [rbp-94h] BYREF
  void *Src; // [rsp+88h] [rbp-90h] BYREF
  int v51; // [rsp+90h] [rbp-88h] BYREF
  __int64 v52; // [rsp+98h] [rbp-80h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-78h]
  __int64 v54; // [rsp+A8h] [rbp-70h]
  unsigned int v55; // [rsp+B0h] [rbp-68h]
  __int64 v56; // [rsp+B8h] [rbp-60h]
  __int64 v57; // [rsp+C0h] [rbp-58h]
  __int64 v58; // [rsp+C8h] [rbp-50h]
  __int64 v59; // [rsp+D0h] [rbp-48h]
  ULONG_PTR v60; // [rsp+D8h] [rbp-40h]
  char v61; // [rsp+120h] [rbp+8h] BYREF
  __int64 v62; // [rsp+130h] [rbp+18h]
  unsigned int v63; // [rsp+138h] [rbp+20h]

  v63 = a4;
  v62 = a3;
  v54 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  v46 = -1;
  v40 = 0;
  Size_4 = 0;
  v37 = 0;
  v48 = -1;
  v53 = 0LL;
  v49 = -1;
  v9 = 0LL;
  v56 = 0LL;
  v10 = 0LL;
  v52 = 0LL;
  v43 = 0;
  v41 = 0;
  Src = 0LL;
  v61 = 0;
  v51 = -1;
  CmpLockRegistry();
  v11 = *(_QWORD *)(a1 + 8);
  v47 = v11;
  v58 = v11;
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    if ( (unsigned __int8)CmRmIsKCBDeleted(v11, 0LL) == 1 )
    {
      v12 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? 0x2A9 : 0;
LABEL_5:
      CmpUnlockRegistry();
      return (unsigned int)(v12 - 1073741444);
    }
    v14 = CmpSearchAddTrans(a1, 0, 0, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), 0, (__int64)&v52);
    if ( v14 < 0 )
    {
      CmpUnlockRegistry();
      return (unsigned int)v14;
    }
    v10 = v52;
    v11 = v47;
  }
  if ( a2 )
  {
    v9 = *(_QWORD *)(a2 + 8);
    v56 = v9;
  }
  CmpLockTwoKcbsShared(v9, v11);
  if ( (unsigned __int8)CmRmIsKCBDeleted(v11, v10) == 1 )
  {
    v12 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? 0x2A9 : 0;
    CmpUnlockTwoKcbs(v9, v11);
    goto LABEL_5;
  }
  if ( !v9 || (unsigned __int8)CmRmIsKCBDeleted(v9, v10) != 1 )
  {
    v16 = *(_QWORD *)(v11 + 32);
    v60 = v16;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v16 + 2848), 1u);
    v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v16 + 8))(v16, *(unsigned int *)(v47 + 40), &v48);
    v57 = v17;
    if ( !v17 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v16 + 2848));
LABEL_25:
      v11 = v47;
      v15 = -1073741670;
      goto LABEL_26;
    }
    CmpUpdateKeyNodeAccessBits(v16, v17, *(_DWORD *)(v47 + 40));
    ExReleaseResourceLite(*(PERESOURCE *)(v16 + 2848));
    if ( v10 )
    {
      v18 = (unsigned __int8)v43;
      if ( *(_QWORD *)(v47 + 280) == v10 )
        v18 = 1;
      v43 = v18;
    }
    if ( v9 )
    {
      v54 = *(_QWORD *)(v9 + 32);
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v54 + 8))(v54, *(unsigned int *)(v9 + 40), &v49);
      v53 = v19;
      if ( !v19 )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(v16 + 16))(v16, &v48);
        goto LABEL_25;
      }
      LOBYTE(v21) = v41;
      if ( v10 )
      {
        v21 = (unsigned __int8)v41;
        if ( *(_QWORD *)(v9 + 280) == v10 )
          v21 = 1;
        v41 = v21;
      }
    }
    else
    {
      LOBYTE(v21) = v41;
      v19 = 0LL;
    }
    v15 = 0;
    v22 = 0LL;
    while ( 1 )
    {
      v45 = v22;
      if ( (unsigned int)v22 >= v63 )
        break;
      v23 = *(unsigned __int16 **)(v62 + 24 * v22);
      if ( *v23 )
      {
        v24 = *((_QWORD *)v23 + 1);
        do
        {
          if ( *(_WORD *)(v24 + 2 * ((unsigned __int64)*v23 >> 1) - 2) )
            break;
          v25 = *v23 - 2;
          *v23 = v25;
        }
        while ( v25 );
      }
      ValueByName = -1;
      Size = -1;
      if ( v9 )
      {
        v42 = v54;
        if ( (_BYTE)v21 )
        {
          CmpFindNameInList(v54, v9 + 272, (_DWORD)v23, 0, 0LL, (__int64)&Size);
          ValueByName = Size;
        }
        else
        {
          ValueByName = CmpFindValueByName(v54, v19, v23);
          Size = ValueByName;
        }
      }
      if ( ValueByName == -1 )
      {
        v42 = v16;
        if ( (_BYTE)v43 )
        {
          CmpFindNameInList(v16, v47 + 272, (_DWORD)v23, 0, 0LL, (__int64)&Size);
          ValueByName = Size;
        }
        else
        {
          ValueByName = CmpFindValueByName(v16, v57, v23);
        }
        if ( ValueByName == -1 )
        {
          v15 = -1073741772;
          break;
        }
      }
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64))(v42 + 8))(v42, ValueByName, &v46, v19);
      v28 = v27;
      v44 = v27;
      v59 = v27;
      if ( !v27 )
      {
        v15 = -1073741670;
        goto LABEL_69;
      }
      v29 = *(_DWORD *)(v27 + 4);
      if ( v29 >= 0x80000000 )
        v29 += 0x80000000;
      Size = v29;
      v30 = (Size_4 + 3) & 0xFFFFFFFC;
      Size_4 = v30;
      LODWORD(v52) = v30;
      v31 = (v40 + 3) & 0xFFFFFFFC;
      v40 = v31;
      v55 = v31;
      if ( v29 + v30 > *a6 || v29 + v30 < v30 || v37 )
      {
        v37 = 1;
      }
      else
      {
        v32 = ValueByName;
        v33 = v42;
        if ( !CmpGetValueData(v42, v32, v27, &Size, (__int64 *)&Src, &v61, (__int64)&v51) )
        {
          v15 = -1073741670;
          v28 = v44;
          goto LABEL_70;
        }
        v29 = Size;
        memmove((void *)(a5 + Size_4), Src, Size);
        if ( v61 )
        {
          ExFreePoolWithTag(Src, 0);
          v61 = 0;
        }
        else
        {
          (*(void (__fastcall **)(__int64, int *))(v33 + 16))(v33, &v51);
        }
        Src = 0LL;
        v34 = 3LL * v45;
        v35 = v62;
        *(_DWORD *)(v62 + 8 * v34 + 16) = *(_DWORD *)(v44 + 12);
        *(_DWORD *)(v35 + 8 * v34 + 8) = v29;
        v36 = Size_4;
        *(_DWORD *)(v35 + 8 * v34 + 12) = Size_4;
        Size_4 = v29 + v36;
        v31 = v40;
      }
      v40 = v29 + v31;
      (*(void (__fastcall **)(__int64, int *))(v42 + 16))(v42, &v46);
      v44 = 0LL;
      v22 = v45 + 1;
      LOBYTE(v21) = v41;
      v19 = v53;
    }
    if ( v15 >= 0 )
    {
      if ( v37 )
        v15 = -2147483643;
      *a6 = Size_4;
      if ( a7 )
        *a7 = v40;
    }
    v28 = v44;
LABEL_69:
    v33 = v42;
LABEL_70:
    if ( v28 )
      (*(void (__fastcall **)(__int64, int *))(v33 + 16))(v33, &v46);
    if ( v53 )
      (*(void (__fastcall **)(__int64, int *))(v54 + 16))(v54, &v49);
    (*(void (__fastcall **)(ULONG_PTR, int *))(v16 + 16))(v16, &v48);
    v20 = v47;
    goto LABEL_75;
  }
  v15 = (*(_BYTE *)(a2 + 48) & 1) != 0 ? -1073740763 : -1073741444;
LABEL_26:
  v20 = v11;
LABEL_75:
  CmpUnlockTwoKcbs(v9, v20);
  CmpUnlockRegistry();
  return (unsigned int)v15;
}
