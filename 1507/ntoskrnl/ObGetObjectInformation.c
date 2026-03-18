/*
 * XREFs of ObGetObjectInformation @ 0x1406AC304
 * Callers:
 *     ExpGetObjectInformation @ 0x1406EE520 (ExpGetObjectInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140426100 (ObQueryNameStringMode.c)
 *     ObpCreateTypeArray @ 0x1406AC9A4 (ObpCreateTypeArray.c)
 *     ObpDestroyTypeArray @ 0x1406ACB04 (ObpDestroyTypeArray.c)
 *     ObQueryTypeName @ 0x1406ACFC0 (ObQueryTypeName.c)
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
  char v14; // dl
  unsigned int i; // eax
  __int64 v16; // rdi
  char *v17; // r10
  __int64 v18; // rcx
  _DWORD *v19; // r8
  int v20; // eax
  unsigned int v21; // ecx
  __int16 v22; // ax
  __int64 v23; // rcx
  unsigned int v24; // r8d
  int *v25; // rcx
  POBJECT_TYPE *v26; // r9
  int v27; // eax
  int v28; // edx
  __int64 v29; // rbx
  int v30; // edi
  unsigned __int16 *v31; // rdx
  unsigned int v32; // eax
  unsigned __int16 *v33; // rbx
  unsigned __int64 v34; // rbx
  unsigned __int16 *v35; // rbx
  __int16 v36; // ax
  __int16 v37; // di
  bool v38; // cf
  unsigned int NumberOfBytes; // [rsp+30h] [rbp-B8h] BYREF
  int NumberOfBytes_4; // [rsp+34h] [rbp-B4h]
  char v41; // [rsp+38h] [rbp-B0h]
  unsigned int v42; // [rsp+3Ch] [rbp-ACh]
  unsigned __int16 *v43; // [rsp+40h] [rbp-A8h]
  int v44; // [rsp+48h] [rbp-A0h]
  unsigned int v45; // [rsp+4Ch] [rbp-9Ch]
  unsigned int v46; // [rsp+50h] [rbp-98h]
  __int64 v47; // [rsp+58h] [rbp-90h]
  unsigned int *v48; // [rsp+60h] [rbp-88h]
  unsigned __int16 *v49; // [rsp+68h] [rbp-80h]
  char *v50; // [rsp+70h] [rbp-78h]
  unsigned int *v51; // [rsp+78h] [rbp-70h]
  _DWORD *v52; // [rsp+80h] [rbp-68h]
  __int64 v53; // [rsp+88h] [rbp-60h]
  __int64 v54; // [rsp+90h] [rbp-58h]
  __int64 v55; // [rsp+98h] [rbp-50h]
  unsigned __int16 *v56; // [rsp+A0h] [rbp-48h]

  v4 = 0LL;
  v48 = 0LL;
  v53 = 536LL;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x218uLL, 0x7241624Fu);
  v6 = PoolWithTag;
  v49 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v43 = PoolWithTag;
  v8 = 0;
  v9 = 0;
  v47 = 0LL;
  TypeArray = (unsigned int *)ObpCreateTypeArray(ObpTypeObjectType);
  v51 = TypeArray;
  if ( !TypeArray )
  {
    ExFreePoolWithTag(v6, 0x7241624Fu);
    return 3221225473LL;
  }
  v11 = 0;
LABEL_6:
  v45 = v11;
  if ( v11 < *TypeArray )
  {
    v12 = *(_QWORD *)&TypeArray[2 * v11 + 2];
    if ( !v12 )
      goto LABEL_79;
    v52 = (_DWORD *)(v12 + 80);
    if ( (PVOID)(v12 + 80) == ObpTypeObjectType )
      goto LABEL_79;
    v13 = (unsigned int *)ObpCreateTypeArray(v12 + 80);
    v48 = v13;
    if ( !v13 )
      goto LABEL_78;
    v14 = 1;
    v41 = 1;
    for ( i = 0; ; ++i )
    {
      v46 = i;
      if ( i >= *v13 )
      {
LABEL_77:
        ObpDestroyTypeArray(v13);
        v48 = 0LL;
        TypeArray = v51;
LABEL_78:
        v11 = v45;
LABEL_79:
        ++v11;
        goto LABEL_6;
      }
      v16 = *(_QWORD *)&v13[2 * i + 2];
      if ( v16 )
        break;
LABEL_76:
      ;
    }
    v17 = (char *)(v16 + 80);
    v50 = (char *)(v16 + 80);
    if ( v14 )
    {
      v41 = 0;
      if ( v47 && v9 < a3 )
        *(_DWORD *)v47 = v9;
      v18 = a2 + v9;
      v47 = v18;
      v54 = v18;
      v9 += 48;
      v42 = v9;
      if ( v9 < 0x30 )
        goto LABEL_18;
      if ( v9 >= a3 )
        goto LABEL_21;
      *(_DWORD *)v18 = 0;
      v19 = v52;
      *(_DWORD *)(v18 + 4) = v52[11];
      *(_DWORD *)(v18 + 8) = v19[12];
      *(_DWORD *)(v18 + 12) = *((unsigned __int8 *)v19 + 40);
      *(_DWORD *)(v18 + 16) = v19[18];
      *(_OWORD *)(v18 + 20) = *(_OWORD *)(v19 + 19);
      *(_DWORD *)(v18 + 36) = v19[23];
      *(_DWORD *)(v18 + 40) = v19[25];
      *(_BYTE *)(v18 + 44) = (*((_BYTE *)v19 + 66) & 8) != 0;
      NumberOfBytes = 0;
      v20 = ObQueryTypeName(v16 + 80, v18 + 48, a3 - v9, &NumberOfBytes);
      v44 = v20;
      v21 = (NumberOfBytes + 7) & 0xFFFFFFF8;
      NumberOfBytes = v21;
      if ( v20 < 0 )
      {
        v8 = v20;
        NumberOfBytes_4 = v20;
      }
      else
      {
        v22 = v21 - 16;
        v23 = v47;
        *(_WORD *)(v47 + 50) = v22;
        *(_QWORD *)(v23 + 56) += a1 - a2;
        v21 = NumberOfBytes;
      }
      v9 += v21;
      v42 = v9;
      if ( v9 < v21 )
      {
LABEL_18:
        v8 = -1073741675;
LABEL_19:
        NumberOfBytes_4 = v8;
        goto LABEL_77;
      }
      v17 = v50;
      v24 = a3;
    }
    else
    {
      v24 = a3;
      if ( v9 < a3 )
        *(_DWORD *)v4 = v9;
    }
    v4 = a2 + v9;
    v55 = v4;
    v9 += 64;
    v42 = v9;
    if ( v9 < 0x40 )
      goto LABEL_18;
    if ( v9 >= v24 )
    {
LABEL_21:
      v8 = -1073741820;
      goto LABEL_19;
    }
    *(_DWORD *)v4 = 0;
    *(_QWORD *)(v4 + 8) = v17;
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(v16 + 16);
    *(_WORD *)(v4 + 24) = *(_WORD *)(v16 + 24);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(v16 + 32);
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v16 + 40);
    *(_WORD *)(v4 + 26) = *(unsigned __int8 *)(v16 + 59);
    *(_QWORD *)(v4 + 56) = *(_QWORD *)(v16 + 72) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (*(_BYTE *)(v16 + 58) & 8) != 0 )
      v25 = (int *)(v16 + 32 - ObpInfoMaskToOffset[*(_BYTE *)(v16 + 58) & 0xF]);
    else
      v25 = 0LL;
    v26 = (POBJECT_TYPE *)v52;
    v27 = v52[26];
    v28 = v52[27];
    if ( v25 )
    {
      v27 = *v25;
      v28 = v25[1];
    }
    *(_DWORD *)(v4 + 36) = v27;
    *(_DWORD *)(v4 + 40) = v28;
    if ( (*(_BYTE *)(v16 + 58) & 0x10) != 0 )
      v29 = v16 + 32 - ObpInfoMaskToOffset[*(_BYTE *)(v16 + 58) & 0x1F];
    else
      v29 = 0LL;
    if ( v29 && *(_QWORD *)v29 )
      *(_QWORD *)(v4 + 48) = *(_QWORD *)(*(_QWORD *)v29 + 744LL);
    NumberOfBytes = 0;
    v30 = 0;
    v44 = 0;
    if ( v26[20] && v26 == IoFileObjectType )
    {
      v31 = v43;
      *(_OWORD *)v43 = *(_OWORD *)(v17 + 88);
      if ( !*v31 || !*((_QWORD *)v31 + 1) )
      {
LABEL_59:
        if ( NumberOfBytes )
        {
          NumberOfBytes = (NumberOfBytes + 7) & 0xFFFFFFF8;
          v9 += NumberOfBytes;
          v42 = v9;
          if ( v9 < NumberOfBytes )
            goto LABEL_18;
          if ( v30 < 0 )
          {
            v9 += 16;
            v42 = v9;
            if ( v9 < 0x10 )
              goto LABEL_18;
            if ( v9 < v24 )
            {
              RtlInitUnicodeString((PUNICODE_STRING)(v4 + 64), 0LL);
              v8 = v30;
              NumberOfBytes_4 = v30;
              goto LABEL_75;
            }
          }
          else
          {
            v36 = *v31;
            if ( *v31 && v9 < v24 )
            {
              v37 = v36 + 2;
              *(_WORD *)(v4 + 64) = v36;
              memmove((void *)(v4 + 80), *((const void **)v31 + 1), (unsigned __int16)(v36 + 2));
              *(_QWORD *)(v4 + 72) = a1 + v4 + 80 - a2;
              *(_WORD *)(v4 + 66) = v37;
LABEL_75:
              i = v46;
              v14 = v41;
              goto LABEL_76;
            }
            if ( !*v31 )
            {
              v38 = v9 < v24;
              goto LABEL_72;
            }
          }
LABEL_73:
          v8 = -1073741820;
          NumberOfBytes_4 = -1073741820;
          goto LABEL_75;
        }
        v9 += 16;
        v42 = v9;
        if ( v9 < 0x10 )
          goto LABEL_18;
        v38 = v9 < v24;
LABEL_72:
        if ( v38 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v4 + 64), 0LL);
          goto LABEL_75;
        }
        goto LABEL_73;
      }
      v32 = *v31 + 2;
      NumberOfBytes = v32;
      if ( v32 > 0x208 )
      {
        NumberOfBytes = 520;
        *v31 = 518;
        v32 = NumberOfBytes;
      }
      v33 = v31 + 8;
      memmove(v31 + 8, *((const void **)v31 + 1), v32 - 2LL);
      v31 = v43;
      *((_QWORD *)v43 + 1) = v33;
      v31[1] = NumberOfBytes;
      *(_WORD *)(*((_QWORD *)v31 + 1) + 2LL * (*v31 >> 1)) = 0;
      NumberOfBytes += 16;
    }
    else
    {
      v34 = v53;
      v30 = ObQueryNameStringMode(v17, (__int64)v43, v53, &NumberOfBytes, 0);
      v44 = v30;
      if ( v30 == -1073741820 )
      {
        v24 = a3;
        if ( NumberOfBytes <= v34 || NumberOfBytes + v9 >= a3 )
        {
          v31 = v43;
          goto LABEL_59;
        }
        v35 = v6;
        v6 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x7241624Fu);
        v49 = v6;
        if ( v6 )
        {
          ExFreePoolWithTag(v35, 0x7241624Fu);
          v53 = NumberOfBytes;
          v43 = v6;
          v56 = v6;
          v30 = ObQueryNameStringMode(v50, (__int64)v6, NumberOfBytes, &NumberOfBytes, 0);
          v44 = v30;
        }
        else
        {
          v6 = v35;
          v49 = v35;
          v30 = -1073741670;
          v44 = -1073741670;
        }
      }
      v31 = v43;
    }
    v24 = a3;
    goto LABEL_59;
  }
  if ( a4 )
    *a4 = v9;
  ObpDestroyTypeArray(TypeArray);
  ExFreePoolWithTag(v6, 0x7241624Fu);
  if ( !v47 )
    return (unsigned int)-1073741823;
  return v8;
}
