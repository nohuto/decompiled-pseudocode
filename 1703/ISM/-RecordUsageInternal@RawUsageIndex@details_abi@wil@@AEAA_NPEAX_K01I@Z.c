/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18003E9E4
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18003E5C4 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s_0 @ 0x18003CA8C (memcpy_s_0.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18003E19C (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18003E290 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18003E720 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     _invalid_parameter_noinfo @ 0x18009D7E2 (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x18009EAF2 (memcmp_0.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *Buf1,
        size_t Size,
        void *a4,
        size_t a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  void *v8; // r15
  const void *v10; // r14
  char *v12; // rdi
  char v13; // r12
  int v14; // ecx
  unsigned __int64 v15; // rax
  unsigned int v16; // esi
  unsigned int v17; // r14d
  unsigned int v18; // esi
  rsize_t v19; // r9
  rsize_t v20; // rdx
  unsigned int *p_Source; // r8
  unsigned __int8 *v22; // r8
  char v24; // r14
  __int64 v25; // rcx
  int v26; // r15d
  void *v27; // r12
  __int64 v28; // rax
  char v29; // dl
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  char *v33; // rcx
  size_t v34; // r8
  rsize_t v35; // r9
  rsize_t v36; // rdx
  unsigned int *v37; // r8
  __int16 Source; // [rsp+30h] [rbp-50h] BYREF
  void *Src; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int16 v40; // [rsp+40h] [rbp-40h] BYREF
  char v41; // [rsp+42h] [rbp-3Eh]
  unsigned int v42; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned __int16 v43; // [rsp+48h] [rbp-38h]
  void *Buf2[2]; // [rsp+50h] [rbp-30h]
  __int16 v45; // [rsp+60h] [rbp-20h] BYREF
  char v46; // [rsp+62h] [rbp-1Eh]
  unsigned int v47; // [rsp+64h] [rbp-1Ch]
  __int16 v48; // [rsp+68h] [rbp-18h]
  __int128 v49; // [rsp+70h] [rbp-10h]
  __int16 v50; // [rsp+C0h] [rbp+40h] BYREF
  void *v51; // [rsp+C8h] [rbp+48h]
  void *v52; // [rsp+D8h] [rbp+58h]

  v52 = a4;
  v51 = Buf1;
  v6 = *((_QWORD *)this + 3);
  v8 = a4;
  v10 = Buf1;
  if ( !v6 )
    return 0;
  v40 = *((_WORD *)this + 1);
  v12 = (char *)(v6 + 10);
  v13 = 0;
  v41 = *((_BYTE *)this + 4);
  v42 = 0;
  v43 = 0;
  *(_OWORD *)Buf2 = 0LL;
  LOBYTE(v50) = 0;
  while ( 1 )
  {
    v22 = (unsigned __int8 *)*((_QWORD *)this + 4);
    Src = v12;
    if ( !wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v40,
            (unsigned __int8 **)&Src,
            v22) )
    {
      v12 = (char *)Src;
      *((_QWORD *)this + 4) = Src;
      goto LABEL_30;
    }
    v14 = Size == v43 ? memcmp_0(v10, Buf2[1], Size) : Size - v43;
    if ( v14 < 0 )
      break;
    if ( !v14 )
    {
      Src = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
              this,
              (struct wil::details_abi::UsageIndexProperty *)&v40,
              (unsigned __int8 *)Src,
              v8,
              a5,
              a6);
      v12 = (char *)Src;
      if ( Src )
      {
        v13 = 1;
        LOBYTE(v50) = 1;
        goto LABEL_30;
      }
      return 1;
    }
    v12 = (char *)Src;
    if ( *((_QWORD *)this + 2) )
    {
      v15 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
      v16 = v42;
      if ( v42 > v15 && v42 != (_DWORD)v15 )
      {
        v16 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
        v42 = v16;
        if ( v41 == 1 )
        {
          Source = v15;
          memcpy_s_0(Buf2[0], 2uLL, &Source, 2uLL);
        }
        else if ( v41 == 2 )
        {
          memcpy_s_0(Buf2[0], 4uLL, &v42, 4uLL);
          v16 = v42;
        }
      }
      v12 += *((_QWORD *)this + 2) * v16;
    }
    else
    {
      v17 = v42;
      v18 = 0;
      v45 = *((_WORD *)this + 3);
      v46 = *((_BYTE *)this + 8);
      v47 = 0;
      v48 = 0;
      v49 = 0LL;
      if ( v42 )
      {
        do
        {
          if ( !wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v45,
                  (unsigned __int8 **)&Src,
                  *((unsigned __int8 **)this + 4)) )
            break;
          ++v18;
        }
        while ( v18 < v17 );
        v12 = (char *)Src;
        v8 = v52;
      }
      if ( v17 != v18 )
      {
        v42 = v18;
        if ( v41 == 1 )
        {
          v19 = 2LL;
          Source = v18;
          v20 = 2LL;
          p_Source = (unsigned int *)&Source;
        }
        else
        {
          if ( v41 != 2 )
            goto LABEL_27;
          v20 = 4LL;
          p_Source = &v42;
          v19 = 4LL;
        }
        memcpy_s_0(Buf2[0], v20, p_Source, v19);
      }
LABEL_27:
      v10 = v51;
    }
  }
  Src = v12;
LABEL_30:
  v24 = v41;
  v25 = 0LL;
  if ( v13 )
  {
    v27 = Buf2[0];
    v26 = v42;
  }
  else
  {
    v26 = 1;
    Buf2[1] = v51;
    v27 = 0LL;
    v42 = 1;
    v43 = Size;
    Buf2[0] = 0LL;
    if ( v40 )
      v25 = v40;
    else
      v25 = (unsigned __int16)Size + 2LL;
    if ( v41 == 1 )
    {
      v25 += 2LL;
    }
    else if ( v41 == 2 )
    {
      v25 += 4LL;
    }
  }
  LOWORD(v28) = *((_WORD *)this + 3);
  v29 = *((_BYTE *)this + 8);
  v47 = a6;
  v48 = a5;
  v45 = v28;
  v46 = v29;
  *(_QWORD *)&v49 = 0LL;
  *((_QWORD *)&v49 + 1) = v52;
  if ( (_WORD)v28 )
    v28 = (unsigned __int16)v28;
  else
    v28 = (unsigned __int16)a5 + 2LL;
  if ( v29 == 1 )
  {
    v28 += 2LL;
  }
  else if ( v29 == 2 )
  {
    v28 += 4LL;
  }
  v30 = v28 + v25;
  v31 = *((_QWORD *)this + 5);
  if ( *((_QWORD *)this + 4) < v31 )
    v32 = v31 - *((_QWORD *)this + 4);
  else
    v32 = 0LL;
  if ( v32 >= v30 )
  {
    v33 = &v12[v30];
    v34 = *((_QWORD *)this + 4) - (_QWORD)v12;
    if ( v34 )
    {
      if ( !v33 || !v12 )
      {
        *(_DWORD *)_o__errno() = 22;
        goto LABEL_56;
      }
      if ( *((_QWORD *)this + 5) - v30 - (unsigned __int64)v12 >= v34 )
      {
        memmove(v33, v12, v34);
      }
      else
      {
        *(_DWORD *)_o__errno() = 34;
LABEL_56:
        invalid_parameter_noinfo();
      }
    }
    *((_QWORD *)this + 4) += v30;
    if ( (_BYTE)v50 )
    {
      if ( v24 )
      {
        v42 = v26 + 1;
        if ( v24 == 1 )
        {
          v35 = 2LL;
          v50 = v26 + 1;
          v36 = 2LL;
          v37 = (unsigned int *)&v50;
        }
        else
        {
          if ( v24 != 2 )
            goto LABEL_69;
          v37 = &v42;
          v35 = 4LL;
          v36 = 4LL;
        }
        memcpy_s_0(v27, v36, v37, v35);
      }
    }
    else
    {
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v40,
        (char **)&Src,
        *((char **)this + 4));
    }
LABEL_69:
    wil::details_abi::UsageIndexProperty::Write(
      (wil::details_abi::UsageIndexProperty *)&v45,
      (char **)&Src,
      *((char **)this + 4));
    *((_BYTE *)this + 56) = 1;
    return 1;
  }
  return 0;
}
