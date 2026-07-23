/*
 * XREFs of FsRtlIsDbcsInExpression @ 0x14061EE30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     FsRtlDoesDbcsContainWildCards @ 0x14061EDC0 (FsRtlDoesDbcsContainWildCards.c)
 */

BOOLEAN __stdcall FsRtlIsDbcsInExpression(PANSI_STRING Expression, PANSI_STRING Name)
{
  PANSI_STRING v2; // r11
  void *v4; // r9
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
  char *v19; // r10
  char *v20; // r14
  unsigned int v21; // r13d
  unsigned __int16 v22; // r8
  __int16 v23; // bp
  char *Buffer; // rcx
  char v25; // dl
  __int16 v26; // ax
  __int64 v27; // r15
  unsigned int v28; // ebx
  int v29; // eax
  int v30; // edx
  __int16 v31; // cx
  unsigned __int16 v32; // ax
  __int16 v33; // di
  int v34; // r10d
  char v35; // r8
  __int16 v36; // si
  char *v37; // r8
  char v38; // dl
  __int16 v39; // ax
  _OWORD *PoolWithTag; // rax
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rbx
  unsigned __int16 v47; // r10
  unsigned __int16 v48; // dx
  char *v49; // r11
  char v50; // r9
  __int16 v51; // r8
  __int16 v52; // ax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rbx
  __int16 v56; // di
  __int16 v57; // ax
  __int64 v58; // rax
  unsigned int v59; // edi
  char *v60; // rax
  __int16 v61; // bx
  char v62; // [rsp+20h] [rbp-B8h]
  unsigned __int16 v63; // [rsp+22h] [rbp-B6h]
  __int16 v64; // [rsp+24h] [rbp-B4h]
  int v65; // [rsp+28h] [rbp-B0h]
  __int16 v66; // [rsp+2Ch] [rbp-ACh]
  unsigned int v68; // [rsp+38h] [rbp-A0h]
  _STRING Namea; // [rsp+40h] [rbp-98h] BYREF
  _OWORD *v70; // [rsp+50h] [rbp-88h]
  int v71; // [rsp+58h] [rbp-80h]
  _WORD v72[16]; // [rsp+60h] [rbp-78h] BYREF
  char v73; // [rsp+80h] [rbp-58h] BYREF

  v2 = Name;
  v66 = 0;
  v4 = 0LL;
  v70 = 0LL;
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
        v26 = 2;
        v66 = v25 + (Buffer[v22 + 1] << 8);
      }
      else
      {
        v66 = v25;
        v26 = 1;
      }
      v22 += v26;
      v63 = v22;
    }
    v68 = 0;
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
              v65 = v30;
              v33 = 2 * v30;
              if ( (_WORD)v30 == v32 )
              {
                v58 = v28++;
                *(_WORD *)&v20[2 * v58] = v23;
                goto LABEL_80;
              }
              v71 = v32;
              v34 = (unsigned __int16)v30;
              if ( (unsigned __int16)v30 == v32 - 1
                && (v35 = Expression->Buffer[(unsigned __int16)v30], (unsigned __int8)v35 >= 0x80u)
                && (_BYTE)NlsMbOemCodePageTag
                && NlsOemLeadByteInfoTable[(unsigned __int8)v35] )
              {
                v36 = v35;
                v64 = 1;
              }
              else
              {
                v37 = Expression->Buffer;
                v38 = v37[(unsigned __int16)v30];
                if ( (unsigned __int8)v38 >= 0x80u
                  && (_BYTE)NlsMbOemCodePageTag
                  && NlsOemLeadByteInfoTable[(unsigned __int8)v38] )
                {
                  v36 = v38 + (v37[v34 + 1] << 8);
                  v39 = 2;
                }
                else
                {
                  v36 = v38;
                  v39 = 1;
                }
                v64 = v39;
              }
              if ( v28 >= 0xE && !v4 )
              {
                PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 8LL * (v71 + 1), 0x64725346u);
                v41 = *(_OWORD *)v20;
                v2 = Name;
                v4 = PoolWithTag;
                v70 = PoolWithTag;
                *PoolWithTag = v41;
                v42 = *((_OWORD *)v20 + 1);
                v20 = (char *)PoolWithTag;
                PoolWithTag[1] = v42;
                v43 = 2 * Expression->Length + 2;
                v44 = *(_QWORD *)&Namea.Length;
                *(_OWORD *)((char *)PoolWithTag + 2 * v43) = *(_OWORD *)*(_QWORD *)&Namea.Length;
                *(_OWORD *)((char *)PoolWithTag + 2 * v43 + 16) = *(_OWORD *)(v44 + 16);
                *(_QWORD *)&Namea.Length = (char *)PoolWithTag + 4 * Expression->Length + 4;
              }
              if ( v36 != 42 )
                break;
              v30 = v65;
              v31 = v64;
              v22 = v63;
              v5 = v62;
              v45 = v28;
              v46 = v28 + 1;
              *(_WORD *)&v20[2 * v45] = v33;
              *(_WORD *)&v20[2 * v46] = v33 + 1;
              v28 = v46 + 1;
            }
            if ( v36 != 60 )
              break;
            v5 = v62;
            if ( v62 || v66 != 46 )
              goto LABEL_63;
            v22 = v63;
            v47 = v2->Length;
            v48 = v63;
            if ( v63 >= v2->Length )
            {
LABEL_61:
              v30 = v65;
              v31 = v64;
              v53 = v28++;
              *(_WORD *)&v20[2 * v53] = v33 + 1;
            }
            else
            {
              v49 = v2->Buffer;
              while ( 1 )
              {
                v50 = v49[v48];
                if ( (unsigned __int8)v50 >= 0x80u
                  && (_BYTE)NlsMbOemCodePageTag
                  && NlsOemLeadByteInfoTable[(unsigned __int8)v50] )
                {
                  v51 = v50 + (v49[v48 + 1] << 8);
                  v52 = 2;
                }
                else
                {
                  v51 = v50;
                  v52 = 1;
                }
                if ( v51 == 46 )
                  break;
                v48 += v52;
                if ( v48 >= v47 )
                {
                  v4 = v70;
                  v2 = Name;
                  v22 = v63;
                  goto LABEL_61;
                }
              }
              v4 = v70;
LABEL_63:
              v30 = v65;
              v31 = v64;
              v2 = Name;
              v22 = v63;
              v54 = v28;
              v55 = v28 + 1;
              *(_WORD *)&v20[2 * v54] = v33;
              *(_WORD *)&v20[2 * v55] = v33 + 1;
              v28 = v55 + 1;
            }
          }
          v31 = v64;
          v56 = 2 * v64 + v33;
          if ( v36 != 62 )
            break;
          v5 = v62;
          v30 = v65;
          v22 = v63;
          if ( !v62 )
          {
            if ( v66 != 46 )
            {
              *(_WORD *)&v20[2 * v28++] = v56;
              goto LABEL_80;
            }
            goto LABEL_71;
          }
        }
        if ( v36 != 34 )
          break;
        if ( !v62 )
        {
          v57 = v66;
          if ( v66 == 46 )
          {
LABEL_73:
            v22 = v63;
            v5 = 0;
            *(_WORD *)&v20[2 * v28++] = v56;
            goto LABEL_80;
          }
          goto LABEL_77;
        }
        v22 = v63;
        v5 = v62;
LABEL_71:
        v30 = v65;
      }
      if ( v62 )
      {
        v22 = v63;
        v5 = v62;
        goto LABEL_80;
      }
      if ( v36 == 63 )
        goto LABEL_73;
      v57 = v66;
LABEL_77:
      v22 = v63;
      v18 = v36 == v57;
      v5 = 0;
      if ( v18 )
        *(_WORD *)&v20[2 * v28++] = v56;
LABEL_80:
      v19 = *(char **)&Namea.Length;
      if ( (unsigned int)v27 >= v21 )
        break;
      v59 = v68;
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
      v68 = v59;
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
    v20 = v60;
  }
  while ( !v5 );
  v61 = *(_WORD *)&v19[2 * v21 - 2];
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v61 == v23;
}
