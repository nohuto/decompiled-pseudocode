/*
 * XREFs of CmQueryMultipleValueKey @ 0x140401114
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1404C0BFC (NtQueryMultipleValueKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401B4118 (CmQueryMultipleValueForLayeredKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1403FBA4C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpFindValueByName @ 0x1404018E8 (CmpFindValueByName.c)
 *     CmpFindNameInList @ 0x140401914 (CmpFindNameInList.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140401990 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpLockTwoKcbsShared @ 0x140437AF0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x140437EA0 (CmpUnlockTwoKcbs.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpGetValueData @ 0x140441E30 (CmpGetValueData.c)
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
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // r13
  unsigned int MultipleValueForLayeredKey; // ebx
  int v15; // ebx
  int v16; // r14d
  int v17; // edi
  __int64 v18; // r14
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rcx
  int v23; // r8d
  __int64 v24; // rax
  unsigned __int16 *v25; // r15
  __int64 v26; // rdx
  unsigned __int16 v27; // cx
  unsigned int ValueByName; // r12d
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // r15d
  unsigned int v32; // ecx
  unsigned int v33; // r8d
  unsigned int v34; // edx
  __int64 v35; // r12
  __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned int v38; // eax
  char v39; // [rsp+40h] [rbp-E8h]
  unsigned int Size; // [rsp+44h] [rbp-E4h] BYREF
  unsigned int Size_4; // [rsp+48h] [rbp-E0h]
  int v42; // [rsp+4Ch] [rbp-DCh]
  unsigned int v43; // [rsp+50h] [rbp-D8h]
  __int64 v44; // [rsp+58h] [rbp-D0h]
  int v45; // [rsp+60h] [rbp-C8h]
  __int64 v46; // [rsp+68h] [rbp-C0h]
  unsigned int v47; // [rsp+70h] [rbp-B8h]
  void *Src; // [rsp+78h] [rbp-B0h] BYREF
  _DWORD v49[2]; // [rsp+80h] [rbp-A8h] BYREF
  _DWORD v50[2]; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+90h] [rbp-98h] BYREF
  _DWORD v52[2]; // [rsp+98h] [rbp-90h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-88h]
  _DWORD v54[4]; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-70h]
  __int64 v56; // [rsp+C0h] [rbp-68h]
  __int64 v57; // [rsp+C8h] [rbp-60h]
  __int64 v58; // [rsp+D0h] [rbp-58h]
  __int64 v59; // [rsp+D8h] [rbp-50h]
  __int64 v60; // [rsp+E0h] [rbp-48h]
  char v61; // [rsp+130h] [rbp+8h] BYREF
  __int64 v62; // [rsp+140h] [rbp+18h]
  unsigned int v63; // [rsp+148h] [rbp+20h]

  v63 = a4;
  v62 = a3;
  v55 = 0LL;
  v44 = 0LL;
  v46 = 0LL;
  v49[0] = -1;
  v49[1] = 0;
  v43 = 0;
  Size_4 = 0;
  v39 = 0;
  v50[0] = -1;
  v50[1] = 0;
  v53 = 0LL;
  v54[0] = -1;
  v54[1] = 0;
  v10 = 0LL;
  v56 = 0LL;
  v11 = 0LL;
  v51 = 0LL;
  v45 = 0;
  v42 = 0;
  Src = 0LL;
  v61 = 0;
  v52[0] = -1;
  v52[1] = 0;
  CmpLockRegistry();
  v12 = *(_QWORD *)(a1 + 8);
  v59 = v12;
  if ( *(_WORD *)(v12 + 58) )
  {
    MultipleValueForLayeredKey = CmQueryMultipleValueForLayeredKey(a1, a3, v63, a5, a6, a7);
    CmpUnlockRegistry();
    return MultipleValueForLayeredKey;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    CmpLockKcbShared(v12);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      v15 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? 0x2A9 : 0;
      CmpUnlockKcb((PVOID)v12);
LABEL_7:
      CmpUnlockRegistry();
      return (unsigned int)(v15 - 1073741444);
    }
    CmpUnlockKcb((PVOID)v12);
    v16 = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v51);
    if ( v16 < 0 )
    {
      CmpUnlockRegistry();
      return (unsigned int)v16;
    }
    v11 = v51;
  }
  if ( a2 )
  {
    v10 = *(_QWORD *)(a2 + 8);
    v56 = v10;
  }
  CmpLockTwoKcbsShared(v10, v12);
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v11) )
  {
    v15 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? 0x2A9 : 0;
    CmpUnlockTwoKcbs(v10, v12);
    goto LABEL_7;
  }
  if ( !a2 || !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v11) )
  {
    v18 = *(_QWORD *)(v12 + 24);
    v60 = v18;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v18 + 2848), 1u);
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v18 + 8))(v18, *(unsigned int *)(v12 + 32), v50);
    v57 = v19;
    if ( !v19 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v18 + 2848));
LABEL_27:
      v17 = -1073741670;
      goto LABEL_28;
    }
    CmpUpdateKeyNodeAccessBits(v18, v19, *(unsigned int *)(v12 + 32));
    ExReleaseResourceLite(*(PERESOURCE *)(v18 + 2848));
    if ( v11 )
    {
      v20 = (unsigned __int8)v45;
      if ( *(_QWORD *)(v12 + 280) == v11 )
        v20 = 1;
      v45 = v20;
    }
    if ( v10 )
    {
      v55 = *(_QWORD *)(v10 + 24);
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v55 + 8))(v55, *(unsigned int *)(v10 + 32), v54);
      v53 = v21;
      if ( !v21 )
      {
        (*(void (__fastcall **)(__int64, _DWORD *))(v18 + 16))(v18, v50);
        goto LABEL_27;
      }
      LOBYTE(v23) = v42;
      if ( v11 )
      {
        v23 = (unsigned __int8)v42;
        if ( *(_QWORD *)(v10 + 280) == v11 )
          v23 = 1;
        v42 = v23;
      }
    }
    else
    {
      LOBYTE(v23) = v42;
      v21 = 0LL;
    }
    v17 = 0;
    v24 = 0LL;
    while ( 1 )
    {
      v47 = v24;
      if ( (unsigned int)v24 >= v63 )
        break;
      v25 = *(unsigned __int16 **)(v62 + 24 * v24);
      if ( *v25 )
      {
        v26 = *((_QWORD *)v25 + 1);
        do
        {
          if ( *(_WORD *)(v26 + 2 * ((unsigned __int64)*v25 >> 1) - 2) )
            break;
          v27 = *v25 - 2;
          *v25 = v27;
        }
        while ( v27 );
      }
      ValueByName = -1;
      Size = -1;
      if ( v56 )
      {
        v44 = v55;
        if ( (_BYTE)v23 )
        {
          CmpFindNameInList(v55, v56 + 272, (_DWORD)v25, 0, 0LL, (__int64)&Size);
          ValueByName = Size;
        }
        else
        {
          ValueByName = CmpFindValueByName(v55, v21, v25);
          Size = ValueByName;
        }
      }
      if ( ValueByName == -1 )
      {
        v44 = v18;
        if ( (_BYTE)v45 )
        {
          CmpFindNameInList(v18, v12 + 272, (_DWORD)v25, 0, 0LL, (__int64)&Size);
          ValueByName = Size;
        }
        else
        {
          ValueByName = CmpFindValueByName(v18, v57, v25);
        }
        if ( ValueByName == -1 )
        {
          v17 = -1073741772;
          break;
        }
      }
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(v44 + 8))(v44, ValueByName, v49, v21);
      v30 = v29;
      v46 = v29;
      v58 = v29;
      if ( !v29 )
      {
        v17 = -1073741670;
        goto LABEL_72;
      }
      v31 = *(_DWORD *)(v29 + 4);
      if ( v31 >= 0x80000000 )
        v31 += 0x80000000;
      Size = v31;
      v32 = (Size_4 + 3) & 0xFFFFFFFC;
      Size_4 = v32;
      LODWORD(v51) = v32;
      v33 = (v43 + 3) & 0xFFFFFFFC;
      v43 = v33;
      v54[2] = v33;
      if ( v31 + v32 > *a6 || v31 + v32 < v32 || v39 )
      {
        v39 = 1;
      }
      else
      {
        v34 = ValueByName;
        v35 = v44;
        if ( !(unsigned __int8)CmpGetValueData(
                                 v44,
                                 v34,
                                 v29,
                                 (unsigned int)&Size,
                                 (__int64)&Src,
                                 (__int64)&v61,
                                 (__int64)v52) )
        {
          v17 = -1073741670;
          v30 = v46;
          goto LABEL_73;
        }
        v31 = Size;
        memmove((void *)(a5 + Size_4), Src, Size);
        if ( v61 )
        {
          ExFreePoolWithTag(Src, 0);
          v61 = 0;
        }
        else
        {
          (*(void (__fastcall **)(__int64, _DWORD *))(v35 + 16))(v35, v52);
        }
        Src = 0LL;
        v36 = 3LL * v47;
        v37 = v62;
        *(_DWORD *)(v62 + 8 * v36 + 16) = *(_DWORD *)(v46 + 12);
        *(_DWORD *)(v37 + 8 * v36 + 8) = v31;
        v38 = Size_4;
        *(_DWORD *)(v37 + 8 * v36 + 12) = Size_4;
        Size_4 = v31 + v38;
        v33 = v43;
      }
      v43 = v31 + v33;
      (*(void (__fastcall **)(__int64, _DWORD *))(v44 + 16))(v44, v49);
      v46 = 0LL;
      v24 = v47 + 1;
      LOBYTE(v23) = v42;
      v21 = v53;
    }
    if ( v17 < 0 )
    {
      v30 = v46;
    }
    else
    {
      if ( v39 )
        v17 = -2147483643;
      *a6 = Size_4;
      v30 = v46;
      if ( a7 )
        *a7 = v43;
    }
LABEL_72:
    v35 = v44;
LABEL_73:
    if ( v30 )
      (*(void (__fastcall **)(__int64, _DWORD *))(v35 + 16))(v35, v49);
    if ( v53 )
      (*(void (__fastcall **)(__int64, _DWORD *))(v55 + 16))(v55, v54);
    (*(void (__fastcall **)(__int64, _DWORD *))(v18 + 16))(v18, v50);
    v22 = v56;
    goto LABEL_78;
  }
  v17 = (*(_BYTE *)(a2 + 48) & 1) != 0 ? -1073740763 : -1073741444;
LABEL_28:
  v22 = v10;
LABEL_78:
  CmpUnlockTwoKcbs(v22, v12);
  CmpUnlockRegistry();
  return (unsigned int)v17;
}
