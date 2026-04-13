/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180008890
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18000846C (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18000805C (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180008140 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x1800085C8 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     memcmp_0 @ 0x18006FA2E (memcmp_0.c)
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
  unsigned __int8 *v12; // r8
  unsigned __int8 *v13; // rdi
  char v14; // al
  bool v15; // al
  size_t v16; // r12
  int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int *p_Source; // r8
  rsize_t v21; // r9
  unsigned int v22; // esi
  unsigned int v23; // eax
  bool v24; // zf
  rsize_t v25; // r9
  unsigned int *v26; // r8
  rsize_t v27; // rdx
  unsigned __int8 *v28; // r8
  bool v29; // si
  __int64 v30; // rcx
  __int64 v31; // rax
  char v32; // dl
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int16 v36; // r8
  rsize_t v37; // r9
  rsize_t v38; // rdx
  unsigned int *v39; // r8
  unsigned __int8 *InsertionPointOrIncrement; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int16 v41; // [rsp+40h] [rbp-41h] BYREF
  char v42; // [rsp+42h] [rbp-3Fh]
  unsigned int Source; // [rsp+44h] [rbp-3Dh] BYREF
  unsigned __int16 v44; // [rsp+48h] [rbp-39h]
  void *Buf2[2]; // [rsp+50h] [rbp-31h]
  __int16 v46; // [rsp+60h] [rbp-21h] BYREF
  __int16 v47; // [rsp+64h] [rbp-1Dh] BYREF
  __int16 v48; // [rsp+68h] [rbp-19h] BYREF
  char v49; // [rsp+6Ah] [rbp-17h]
  unsigned int v50; // [rsp+6Ch] [rbp-15h]
  __int16 v51; // [rsp+70h] [rbp-11h]
  __int64 v52; // [rsp+78h] [rbp-9h]
  void *v53; // [rsp+80h] [rbp-1h]
  __int16 v54; // [rsp+88h] [rbp+7h] BYREF
  char v55; // [rsp+8Ah] [rbp+9h]
  int v56; // [rsp+8Ch] [rbp+Bh]
  __int16 v57; // [rsp+90h] [rbp+Fh]
  __int128 v58; // [rsp+98h] [rbp+17h]
  __int16 v59; // [rsp+D8h] [rbp+57h] BYREF

  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    return 0;
  v12 = (unsigned __int8 *)*((_QWORD *)this + 4);
  v13 = (unsigned __int8 *)(v6 + 10);
  v41 = *((_WORD *)this + 1);
  v14 = *((_BYTE *)this + 4);
  Source = 0;
  v44 = 0;
  LOBYTE(v59) = 0;
  v42 = v14;
  InsertionPointOrIncrement = v13;
  *(_OWORD *)Buf2 = 0LL;
  v15 = wil::details_abi::UsageIndexProperty::Read(
          (wil::details_abi::UsageIndexProperty *)&v41,
          &InsertionPointOrIncrement,
          v12);
  v16 = a5;
  while ( 1 )
  {
    v29 = v15;
    if ( !v15 )
    {
      v13 = InsertionPointOrIncrement;
      goto LABEL_31;
    }
    v17 = Size == v44 ? memcmp_0(Buf1, Buf2[1], Size) : Size - v44;
    if ( v17 < 0 )
      break;
    if ( !v17 )
    {
      InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                    this,
                                    (struct wil::details_abi::UsageIndexProperty *)&v41,
                                    InsertionPointOrIncrement,
                                    a4,
                                    v16,
                                    a6);
      v13 = InsertionPointOrIncrement;
      if ( InsertionPointOrIncrement )
      {
        LOBYTE(v59) = 1;
        goto LABEL_38;
      }
      return 1;
    }
    v13 = InsertionPointOrIncrement;
    if ( *((_QWORD *)this + 2) )
    {
      v18 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
      v19 = Source;
      if ( Source > v18 && Source != (_DWORD)v18 )
      {
        v19 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
        Source = v19;
        if ( v42 == 1 )
        {
          v46 = v18;
          p_Source = (unsigned int *)&v46;
          v21 = 2LL;
          goto LABEL_16;
        }
        if ( v42 == 2 )
        {
          v21 = 4LL;
          p_Source = &Source;
LABEL_16:
          memcpy_s(Buf2[0], v21, p_Source, v21);
          v19 = Source;
        }
      }
      v13 += *((_QWORD *)this + 2) * v19;
      goto LABEL_28;
    }
    v54 = *((_WORD *)this + 3);
    v22 = 0;
    v55 = *((_BYTE *)this + 8);
    v23 = Source;
    v56 = 0;
    v57 = 0;
    v58 = 0LL;
    if ( Source )
    {
      do
      {
        v24 = !wil::details_abi::UsageIndexProperty::Read(
                 (wil::details_abi::UsageIndexProperty *)&v54,
                 &InsertionPointOrIncrement,
                 *((unsigned __int8 **)this + 4));
        v23 = Source;
        if ( v24 )
          break;
        ++v22;
      }
      while ( v22 < Source );
      v13 = InsertionPointOrIncrement;
    }
    if ( v23 != v22 )
    {
      Source = v22;
      if ( v42 == 1 )
      {
        v47 = v22;
        v25 = 2LL;
        v26 = (unsigned int *)&v47;
        v27 = 2LL;
      }
      else
      {
        if ( v42 != 2 )
          goto LABEL_28;
        v27 = 4LL;
        v26 = &Source;
        v25 = 4LL;
      }
      memcpy_s(Buf2[0], v27, v26, v25);
    }
LABEL_28:
    v28 = (unsigned __int8 *)*((_QWORD *)this + 4);
    InsertionPointOrIncrement = v13;
    v15 = wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v41,
            &InsertionPointOrIncrement,
            v28);
  }
  InsertionPointOrIncrement = v13;
LABEL_38:
  if ( !v29 )
LABEL_31:
    *((_QWORD *)this + 4) = v13;
  v30 = 0LL;
  if ( !(_BYTE)v59 )
  {
    Source = 1;
    v44 = Size;
    Buf2[0] = 0LL;
    Buf2[1] = Buf1;
    if ( v41 )
      v30 = v41;
    else
      v30 = (unsigned __int16)Size + 2LL;
    if ( v42 == 1 )
    {
      v30 += 2LL;
    }
    else if ( v42 == 2 )
    {
      v30 += 4LL;
    }
  }
  LOWORD(v31) = *((_WORD *)this + 3);
  v32 = *((_BYTE *)this + 8);
  v48 = v31;
  v49 = v32;
  v50 = a6;
  v51 = v16;
  v52 = 0LL;
  v53 = a4;
  if ( (_WORD)v31 )
    v31 = (unsigned __int16)v31;
  else
    v31 = (unsigned __int16)v16 + 2LL;
  if ( v32 == 1 )
  {
    v31 += 2LL;
  }
  else if ( v32 == 2 )
  {
    v31 += 4LL;
  }
  v33 = v31 + v30;
  v34 = *((_QWORD *)this + 5);
  if ( *((_QWORD *)this + 4) < v34 )
    v35 = v34 - *((_QWORD *)this + 4);
  else
    v35 = 0LL;
  if ( v35 >= v33 )
  {
    memmove_s(&v13[v33], *((_QWORD *)this + 5) - v33 - (_QWORD)v13, v13, *((_QWORD *)this + 4) - (_QWORD)v13);
    *((_QWORD *)this + 4) += v33;
    if ( !(_BYTE)v59 )
    {
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v41,
        (char **)&InsertionPointOrIncrement,
        *((char **)this + 4));
LABEL_65:
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v48,
        (char **)&InsertionPointOrIncrement,
        *((char **)this + 4));
      *((_BYTE *)this + 56) = 1;
      return 1;
    }
    if ( !v42 )
      goto LABEL_65;
    v36 = Source + 1;
    if ( Source == Source + 1 )
      goto LABEL_65;
    ++Source;
    if ( v42 == 1 )
    {
      v37 = 2LL;
      v59 = v36;
      v38 = 2LL;
      v39 = (unsigned int *)&v59;
    }
    else
    {
      if ( v42 != 2 )
        goto LABEL_65;
      v39 = &Source;
      v37 = 4LL;
      v38 = 4LL;
    }
    memcpy_s(Buf2[0], v38, v39, v37);
    goto LABEL_65;
  }
  return 0;
}
