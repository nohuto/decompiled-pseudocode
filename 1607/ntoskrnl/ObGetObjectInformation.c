/*
 * XREFs of ObGetObjectInformation @ 0x1406666B0
 * Callers:
 *     ExpGetObjectInformation @ 0x1406AB6A8 (ExpGetObjectInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x1400B0F48 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x14010D3FC (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 *     ObpCreateTypeArray @ 0x140666D20 (ObpCreateTypeArray.c)
 *     ObpDestroyTypeArray @ 0x140666E5C (ObpDestroyTypeArray.c)
 *     ObQueryTypeName @ 0x14066728C (ObQueryTypeName.c)
 */

__int64 __fastcall ObGetObjectInformation(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __int64 v4; // r15
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v6; // r12
  unsigned int v8; // r14d
  unsigned int v9; // esi
  unsigned int *TypeArray; // rbx
  unsigned int v11; // edx
  __int64 v12; // rcx
  unsigned int *v13; // r13
  __int64 v14; // r11
  char v15; // dl
  unsigned int i; // eax
  __int64 v17; // rdi
  __int64 v18; // r10
  __int64 v19; // rcx
  _DWORD *v20; // r8
  int v21; // eax
  unsigned int v22; // ecx
  __int16 v23; // ax
  __int64 v24; // rcx
  unsigned int v25; // r8d
  int *v26; // rax
  int v27; // ecx
  int v28; // edx
  __int64 *v29; // rax
  unsigned int v30; // r8d
  __int64 v31; // r9
  __int64 v32; // r10
  __int64 v33; // rax
  int v34; // edi
  unsigned __int16 *v35; // rdx
  unsigned int v36; // eax
  unsigned __int16 *v37; // rbx
  unsigned __int64 v38; // rbx
  unsigned __int16 *v39; // rbx
  __int16 v40; // ax
  __int16 v41; // di
  bool v42; // cf
  unsigned int NumberOfBytes; // [rsp+30h] [rbp-B8h] BYREF
  int NumberOfBytes_4; // [rsp+34h] [rbp-B4h]
  char v45; // [rsp+38h] [rbp-B0h]
  unsigned int v46; // [rsp+3Ch] [rbp-ACh]
  unsigned __int16 *v47; // [rsp+40h] [rbp-A8h]
  int v48; // [rsp+48h] [rbp-A0h]
  unsigned int v49; // [rsp+4Ch] [rbp-9Ch]
  unsigned int v50; // [rsp+50h] [rbp-98h]
  __int64 v51; // [rsp+58h] [rbp-90h]
  unsigned int *v52; // [rsp+60h] [rbp-88h]
  unsigned __int16 *v53; // [rsp+68h] [rbp-80h]
  _DWORD *v54; // [rsp+70h] [rbp-78h]
  __int64 v55; // [rsp+78h] [rbp-70h]
  unsigned int *v56; // [rsp+80h] [rbp-68h]
  char *v57; // [rsp+88h] [rbp-60h]
  __int64 v58; // [rsp+90h] [rbp-58h]
  __int64 v59; // [rsp+98h] [rbp-50h]
  unsigned __int16 *v60; // [rsp+A0h] [rbp-48h]

  v4 = 0LL;
  v52 = 0LL;
  v55 = 536LL;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x218uLL, 0x7241624Fu);
  v6 = PoolWithTag;
  v53 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v47 = PoolWithTag;
  v8 = 0;
  v9 = 0;
  v51 = 0LL;
  TypeArray = (unsigned int *)ObpCreateTypeArray(ObpTypeObjectType);
  v56 = TypeArray;
  if ( !TypeArray )
  {
    ExFreePoolWithTag(v6, 0x7241624Fu);
    return 3221225473LL;
  }
  v11 = 0;
LABEL_6:
  v49 = v11;
  if ( v11 < *TypeArray )
  {
    v12 = *(_QWORD *)&TypeArray[2 * v11 + 2];
    if ( !v12 )
      goto LABEL_75;
    v54 = (_DWORD *)(v12 + 80);
    if ( (PVOID)(v12 + 80) == ObpTypeObjectType )
      goto LABEL_75;
    v13 = (unsigned int *)ObpCreateTypeArray(v12 + 80);
    v52 = v13;
    LODWORD(v14) = 0;
    if ( !v13 )
      goto LABEL_74;
    v15 = 1;
    v45 = 1;
    for ( i = 0; ; ++i )
    {
      v50 = i;
      if ( i >= *v13 )
      {
LABEL_73:
        ObpDestroyTypeArray(v13);
        v52 = 0LL;
        TypeArray = v56;
LABEL_74:
        v11 = v49;
LABEL_75:
        ++v11;
        goto LABEL_6;
      }
      v17 = *(_QWORD *)&v13[2 * i + 2];
      if ( v17 )
        break;
LABEL_72:
      ;
    }
    v18 = v17 + 80;
    v57 = (char *)(v17 + 80);
    if ( v15 )
    {
      v45 = v14;
      if ( v51 && v9 < a3 )
        *(_DWORD *)v51 = v9;
      v19 = a2 + v9;
      v51 = v19;
      v58 = v19;
      v9 += 48;
      v46 = v9;
      if ( v9 < 0x30 )
        goto LABEL_18;
      if ( v9 >= a3 )
        goto LABEL_21;
      *(_DWORD *)v19 = v14;
      v20 = v54;
      *(_DWORD *)(v19 + 4) = v54[11];
      *(_DWORD *)(v19 + 8) = v20[12];
      *(_DWORD *)(v19 + 12) = *((unsigned __int8 *)v20 + 40);
      *(_DWORD *)(v19 + 16) = v20[18];
      *(_OWORD *)(v19 + 20) = *(_OWORD *)(v20 + 19);
      *(_DWORD *)(v19 + 36) = v20[23];
      *(_DWORD *)(v19 + 40) = v20[25];
      *(_BYTE *)(v19 + 44) = (*((_BYTE *)v20 + 66) & 8) != 0;
      NumberOfBytes = v14;
      v21 = ObQueryTypeName(v17 + 80, v19 + 48, a3 - v9, &NumberOfBytes);
      v48 = v21;
      v22 = (NumberOfBytes + 7) & 0xFFFFFFF8;
      NumberOfBytes = v22;
      LODWORD(v14) = 0;
      if ( v21 < 0 )
      {
        v8 = v21;
        NumberOfBytes_4 = v21;
      }
      else
      {
        v23 = v22 - 16;
        v24 = v51;
        *(_WORD *)(v51 + 50) = v23;
        *(_QWORD *)(v24 + 56) += a1 - a2;
        v22 = NumberOfBytes;
      }
      v9 += v22;
      v46 = v9;
      if ( v9 < v22 )
      {
LABEL_18:
        v8 = -1073741675;
LABEL_19:
        NumberOfBytes_4 = v8;
        goto LABEL_73;
      }
      v18 = v17 + 80;
      v25 = a3;
    }
    else
    {
      v25 = a3;
      if ( v9 < a3 )
        *(_DWORD *)v4 = v9;
    }
    v4 = a2 + v9;
    v59 = v4;
    v9 += 64;
    v46 = v9;
    if ( v9 < 0x40 )
      goto LABEL_18;
    if ( v9 >= v25 )
    {
LABEL_21:
      v8 = -1073741820;
      goto LABEL_19;
    }
    *(_DWORD *)v4 = v14;
    *(_QWORD *)(v4 + 8) = v18;
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(v17 + 16);
    *(_WORD *)(v4 + 24) = *(_WORD *)(v17 + 24);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(v17 + 32);
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v17 + 40);
    *(_WORD *)(v4 + 26) = *(unsigned __int8 *)(v17 + 59);
    *(_QWORD *)(v4 + 56) = *(_QWORD *)(v17 + 72) & 0xFFFFFFFFFFFFFFF0uLL;
    v26 = (int *)OBJECT_HEADER_TO_QUOTA_INFO(v17 + 32);
    v27 = v54[26];
    v28 = v54[27];
    if ( v26 )
    {
      v27 = *v26;
      v28 = v26[1];
    }
    *(_DWORD *)(v4 + 36) = v27;
    *(_DWORD *)(v4 + 40) = v28;
    v29 = (__int64 *)OBJECT_HEADER_TO_PROCESS_INFO(v17 + 32);
    if ( v29 )
    {
      v33 = *v29;
      if ( v33 )
        *(_QWORD *)(v4 + 48) = *(_QWORD *)(v33 + 744);
    }
    NumberOfBytes = v14;
    v34 = v14;
    v48 = v14;
    if ( *(_QWORD *)(v31 + 160) != v14 && (POBJECT_TYPE *)v31 == IoFileObjectType )
    {
      v35 = v47;
      *(_OWORD *)v47 = *(_OWORD *)(v32 + 88);
      if ( !*v35 || *((_QWORD *)v35 + 1) == v14 )
      {
LABEL_54:
        if ( NumberOfBytes )
        {
          NumberOfBytes = (NumberOfBytes + 7) & 0xFFFFFFF8;
          v9 += NumberOfBytes;
          v46 = v9;
          if ( v9 < NumberOfBytes )
            goto LABEL_18;
          if ( v34 < 0 )
          {
            v9 += 16;
            v46 = v9;
            if ( v9 < 0x10 )
              goto LABEL_18;
            if ( v9 < v30 )
            {
              RtlInitUnicodeString((PUNICODE_STRING)(v4 + 64), 0LL);
              v8 = v34;
              NumberOfBytes_4 = v34;
              goto LABEL_70;
            }
          }
          else
          {
            v40 = *v35;
            if ( *v35 && v9 < v30 )
            {
              v41 = v40 + 2;
              *(_WORD *)(v4 + 64) = v40;
              memmove((void *)(v4 + 80), *((const void **)v35 + 1), (unsigned __int16)(v40 + 2));
              *(_QWORD *)(v4 + 72) = a1 + v4 + 80 - a2;
              *(_WORD *)(v4 + 66) = v41;
LABEL_70:
              LODWORD(v14) = 0;
              goto LABEL_71;
            }
            if ( *v35 == (_WORD)v14 )
            {
              v42 = v9 < v30;
              goto LABEL_67;
            }
          }
LABEL_68:
          v8 = -1073741820;
          NumberOfBytes_4 = -1073741820;
LABEL_71:
          i = v50;
          v15 = v45;
          goto LABEL_72;
        }
        v9 += 16;
        v46 = v9;
        if ( v9 < 0x10 )
          goto LABEL_18;
        v42 = v9 < v30;
LABEL_67:
        if ( v42 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v4 + 64), 0LL);
          goto LABEL_70;
        }
        goto LABEL_68;
      }
      v36 = *v35 + 2;
      NumberOfBytes = v36;
      if ( v36 > 0x208 )
      {
        NumberOfBytes = 520;
        *v35 = 518;
        v36 = NumberOfBytes;
      }
      v37 = v35 + 8;
      memmove(v35 + 8, *((const void **)v35 + 1), v36 - 2LL);
      v35 = v47;
      *((_QWORD *)v47 + 1) = v37;
      v35[1] = NumberOfBytes;
      LODWORD(v14) = 0;
      *(_WORD *)(*((_QWORD *)v35 + 1) + 2LL * (*v35 >> 1)) = 0;
      NumberOfBytes += 16;
LABEL_53:
      v30 = a3;
      goto LABEL_54;
    }
    v38 = v55;
    v34 = ObQueryNameStringMode((char *)v32, (__int64)v47, v55, &NumberOfBytes, v14);
    v48 = v34;
    if ( v34 == -1073741820 )
    {
      v30 = a3;
      if ( NumberOfBytes <= v38 || NumberOfBytes + v9 >= a3 )
      {
        v35 = v47;
        LODWORD(v14) = 0;
        goto LABEL_54;
      }
      v39 = v6;
      v6 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x7241624Fu);
      v53 = v6;
      LODWORD(v14) = 0;
      if ( !v6 )
      {
        v6 = v39;
        v53 = v39;
        v34 = -1073741670;
        v48 = -1073741670;
LABEL_52:
        v35 = v47;
        goto LABEL_53;
      }
      ExFreePoolWithTag(v39, 0x7241624Fu);
      v55 = NumberOfBytes;
      v47 = v6;
      v60 = v6;
      v34 = ObQueryNameStringMode(v57, (__int64)v6, NumberOfBytes, &NumberOfBytes, 0);
      v48 = v34;
    }
    LODWORD(v14) = 0;
    goto LABEL_52;
  }
  if ( a4 )
    *a4 = v9;
  ObpDestroyTypeArray(TypeArray);
  ExFreePoolWithTag(v6, 0x7241624Fu);
  if ( !v51 )
    return (unsigned int)-1073741823;
  return v8;
}
