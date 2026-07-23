/*
 * XREFs of FsRtlIsDbcsInExpression @ 0x1405F4A18
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     FsRtlDoesDbcsContainWildCards @ 0x1405F49A8 (FsRtlDoesDbcsContainWildCards.c)
 */

BOOLEAN __stdcall FsRtlIsDbcsInExpression(PANSI_STRING Expression, PANSI_STRING Name)
{
  PANSI_STRING v2; // r11
  void *v4; // r10
  char v5; // si
  unsigned __int16 Length; // bx
  unsigned __int16 v7; // bp
  _STRING v9; // xmm0
  unsigned __int16 v10; // di
  unsigned __int64 v11; // xmm0_8
  __int64 v12; // rdi
  BOOLEAN DoesDbcsContainWildCards; // al
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned __int8 v16; // r8
  int v17; // eax
  bool v18; // zf
  char *v19; // r9
  char *v20; // r14
  unsigned int v21; // r13d
  unsigned __int16 v22; // bx
  __int16 v23; // bp
  char *Buffer; // r8
  char v25; // dl
  __int16 v26; // ax
  __int64 v27; // r15
  unsigned int v28; // ebx
  int v29; // eax
  int v30; // r8d
  __int16 v31; // cx
  unsigned __int16 v32; // ax
  __int16 v33; // di
  int v34; // r9d
  char v35; // dl
  char *v36; // r9
  __int16 v37; // ax
  __int16 v38; // si
  _OWORD *PoolWithTag; // rax
  _OWORD *v40; // rdx
  __int128 v41; // xmm1
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rbx
  unsigned __int16 v45; // r9
  unsigned __int16 v46; // r10
  char *v47; // r11
  char v48; // r8
  __int16 v49; // dx
  __int16 v50; // ax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rbx
  __int16 v54; // di
  __int64 v55; // rax
  __int16 v56; // ax
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // edi
  char *v60; // rax
  __int16 v61; // bx
  char v62; // [rsp+20h] [rbp-B8h]
  unsigned __int16 v63; // [rsp+22h] [rbp-B6h]
  __int16 v64; // [rsp+24h] [rbp-B4h]
  __int16 v65; // [rsp+28h] [rbp-B0h]
  int v66; // [rsp+2Ch] [rbp-ACh]
  int v68; // [rsp+38h] [rbp-A0h]
  _OWORD *v69; // [rsp+40h] [rbp-98h]
  unsigned int v70; // [rsp+48h] [rbp-90h]
  _STRING Namea; // [rsp+50h] [rbp-88h] BYREF
  _WORD v72[16]; // [rsp+60h] [rbp-78h] BYREF
  char v73; // [rsp+80h] [rbp-58h] BYREF

  v2 = Name;
  v65 = 0;
  v4 = 0LL;
  v69 = 0LL;
  v5 = 0;
  Length = Name->Length;
  v62 = 0;
  if ( !Name->Length )
    return Length + Expression->Length == 0;
  v7 = Expression->Length;
  if ( !Expression->Length )
    return Length + Expression->Length == 0;
  if ( v7 == 1 && *Expression->Buffer == 42 )
    return 1;
  if ( *Expression->Buffer == 42 )
  {
    v9 = *Expression;
    *(_QWORD *)&Namea.Length = *(_QWORD *)&v9.Length;
    v10 = v9.Length;
    v11 = _mm_srli_si128((__m128i)v9, 8).m128i_u64[0];
    v12 = (unsigned __int16)(v10 - 1);
    Namea.Length = v12;
    Namea.Buffer = (char *)(v11 + 1);
    DoesDbcsContainWildCards = FsRtlDoesDbcsContainWildCards(&Namea);
    v14 = 0;
    if ( !DoesDbcsContainWildCards )
    {
      if ( Length >= (unsigned __int16)(v7 - 1) )
      {
        v15 = Length - (unsigned __int16)v12;
        if ( !(_BYTE)NlsMbOemCodePageTag || !v15 )
          return memcmp((const void *)(v11 + 1), &Name->Buffer[v15], (unsigned __int16)v12) == 0;
        do
        {
          v16 = Name->Buffer[v14];
          if ( v16 < 0x80u || (v17 = 2, !NlsOemLeadByteInfoTable[v16]) )
            v17 = 1;
          v14 += v17;
        }
        while ( v14 < v15 );
        if ( v14 <= v15 )
          return memcmp((const void *)(v11 + 1), &Name->Buffer[v15], (unsigned __int16)v12) == 0;
      }
      return 0;
    }
    v2 = Name;
    v4 = 0LL;
    v5 = 0;
  }
  v19 = (char *)v72;
  v72[0] = 0;
  *(_QWORD *)&Namea.Length = v72;
  v20 = &v73;
  v21 = 1;
  v63 = 0;
  v22 = 0;
  v23 = 2 * v7;
  do
  {
    if ( v22 >= v2->Length )
    {
      v62 = 1;
      v5 = 1;
      if ( *(_WORD *)&v19[2 * v21 - 2] == v23 )
        break;
    }
    else
    {
      Buffer = v2->Buffer;
      v25 = Buffer[v22];
      if ( (unsigned __int8)v25 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[(unsigned __int8)v25] )
      {
        v65 = v25 + (Buffer[v22 + 1] << 8);
        v26 = 2;
      }
      else
      {
        v65 = v25;
        v26 = 1;
      }
      v63 = v26 + v22;
    }
    v70 = 0;
    LODWORD(v27) = 0;
    v28 = 0;
    do
    {
      v29 = *(unsigned __int16 *)&v19[2 * (unsigned int)v27];
      v27 = (unsigned int)(v27 + 1);
      v30 = (v29 + 1) / 2;
      v31 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v32 = Expression->Length;
              if ( (_WORD)v30 == Expression->Length )
                goto LABEL_80;
              LOWORD(v30) = v31 + v30;
              v66 = v30;
              v33 = 2 * v30;
              if ( (_WORD)v30 == v32 )
              {
                v58 = v28++;
                *(_WORD *)&v20[2 * v58] = v23;
                goto LABEL_80;
              }
              v34 = v32;
              v68 = v32;
              if ( (unsigned __int16)v30 == v32 - 1 )
              {
                v35 = Expression->Buffer[(unsigned __int16)v30];
                if ( (unsigned __int8)v35 >= 0x80u
                  && (_BYTE)NlsMbOemCodePageTag
                  && NlsOemLeadByteInfoTable[(unsigned __int8)v35] )
                {
                  v64 = 1;
LABEL_42:
                  v38 = v35;
                  goto LABEL_43;
                }
              }
              v36 = Expression->Buffer;
              v35 = v36[(unsigned __int16)v30];
              if ( (unsigned __int8)v35 < 0x80u
                || !(_BYTE)NlsMbOemCodePageTag
                || (v4 = v69, !NlsOemLeadByteInfoTable[(unsigned __int8)v35]) )
              {
                v34 = v32;
                v64 = 1;
                goto LABEL_42;
              }
              v37 = v36[(unsigned __int16)v30 + 1];
              v34 = v68;
              v38 = v35 + (v37 << 8);
              v64 = 2;
LABEL_43:
              if ( v28 >= 0xE && !v4 )
              {
                PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 8LL * (v34 + 1), 0x64725346u);
                v40 = *(_OWORD **)&Namea.Length;
                v4 = PoolWithTag;
                v30 = v66;
                v2 = Name;
                *PoolWithTag = *(_OWORD *)v20;
                v69 = PoolWithTag;
                v41 = *((_OWORD *)v20 + 1);
                v20 = (char *)PoolWithTag;
                PoolWithTag[1] = v41;
                v42 = Expression->Length;
                *(_OWORD *)((char *)PoolWithTag + 4 * v42 + 4) = *v40;
                *(_OWORD *)((char *)PoolWithTag + 4 * v42 + 20) = v40[1];
                *(_QWORD *)&Namea.Length = (char *)PoolWithTag + 4 * Expression->Length + 4;
              }
              if ( v38 != 42 )
                break;
              v31 = v64;
              v5 = v62;
              v43 = v28;
              v44 = v28 + 1;
              *(_WORD *)&v20[2 * v43] = v33;
              *(_WORD *)&v20[2 * v44] = v33 + 1;
              v28 = v44 + 1;
            }
            if ( v38 != 60 )
              break;
            v5 = v62;
            if ( v62 || v65 != 46 )
              goto LABEL_63;
            v45 = v63;
            v46 = v2->Length;
            if ( v63 >= v2->Length )
            {
LABEL_61:
              v30 = v66;
              v4 = v69;
              v31 = v64;
              v51 = v28++;
              *(_WORD *)&v20[2 * v51] = v33 + 1;
            }
            else
            {
              v47 = v2->Buffer;
              while ( 1 )
              {
                v48 = v47[v45];
                if ( (unsigned __int8)v48 >= 0x80u
                  && (_BYTE)NlsMbOemCodePageTag
                  && (v5 = 0, NlsOemLeadByteInfoTable[(unsigned __int8)v48]) )
                {
                  v49 = v48 + (v47[v45 + 1] << 8);
                  v50 = 2;
                }
                else
                {
                  v49 = v48;
                  v50 = 1;
                }
                if ( v49 == 46 )
                  break;
                v45 += v50;
                if ( v45 >= v46 )
                {
                  v2 = Name;
                  goto LABEL_61;
                }
              }
              v4 = v69;
LABEL_63:
              v30 = v66;
              v31 = v64;
              v2 = Name;
              v52 = v28;
              v53 = v28 + 1;
              *(_WORD *)&v20[2 * v52] = v33;
              *(_WORD *)&v20[2 * v53] = v33 + 1;
              v28 = v53 + 1;
            }
          }
          v31 = v64;
          v54 = 2 * v64 + v33;
          if ( v38 != 62 )
            break;
          v5 = v62;
          if ( !v62 && v65 != 46 )
            goto LABEL_67;
        }
        if ( v38 != 34 )
          break;
        if ( !v62 )
        {
          v56 = v65;
          if ( v65 == 46 )
          {
LABEL_72:
            v5 = 0;
            v57 = v28++;
            *(_WORD *)&v20[2 * v57] = v54;
            goto LABEL_80;
          }
          goto LABEL_76;
        }
        v5 = v62;
      }
      if ( v62 )
      {
        v5 = v62;
        goto LABEL_80;
      }
      if ( v38 == 63 )
        goto LABEL_72;
      v56 = v65;
LABEL_76:
      v18 = v38 == v56;
      v5 = 0;
      if ( v18 )
      {
LABEL_67:
        v55 = v28++;
        *(_WORD *)&v20[2 * v55] = v54;
      }
LABEL_80:
      v19 = *(char **)&Namea.Length;
      if ( (unsigned int)v27 >= v21 )
        break;
      v59 = v70;
      do
      {
        if ( v59 >= v28 )
          break;
        for ( ; (unsigned int)v27 < v21; v27 = (unsigned int)(v27 + 1) )
        {
          if ( *(_WORD *)(*(_QWORD *)&Namea.Length + 2 * v27) >= *(_WORD *)&v20[2 * v59] )
            break;
        }
        ++v59;
      }
      while ( (unsigned int)v27 < v21 );
      v70 = v59;
    }
    while ( (unsigned int)v27 < v21 );
    if ( !v28 )
    {
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      return 0;
    }
    *(_QWORD *)&Namea.Length = v20;
    v60 = v19;
    v19 = v20;
    v21 = v28;
    v22 = v63;
    v20 = v60;
  }
  while ( !v5 );
  v61 = *(_WORD *)&v19[2 * v21 - 2];
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v61 == v23;
}
