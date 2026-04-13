/*
 * XREFs of ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180001AB4
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x180001E74 (--0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@$00$0IAAAAAAAAAAA@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180012CD0 (-NotifyFailure@-$ActivityBase@$00$0IAAAAAAAAAAA@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180013480 (-NotifyFailure@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180004CCC (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x180004D84 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 */

void __fastcall wil::StoredFailureInfo::SetFailureInfo(wil::StoredFailureInfo *this, const struct wil::FailureInfo *a2)
{
  __int64 v3; // rdi
  __int64 v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rbp
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // rbp
  __int64 v34; // rbp
  volatile signed __int32 *v35; // rax
  unsigned __int64 v36; // rbp
  volatile signed __int32 *v37; // rcx
  volatile signed __int32 *v38; // rax
  volatile signed __int32 *v39; // r15
  volatile signed __int32 *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // [rsp+50h] [rbp+8h]

  v3 = 0LL;
  *(_OWORD *)this = *(_OWORD *)a2;
  v5 = 2LL;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  v6 = *((_QWORD *)a2 + 2);
  if ( v6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(v6 + 2 * v7) );
    v52 = 2 * v7 + 2;
  }
  else
  {
    v52 = 2LL;
  }
  v8 = *((_QWORD *)a2 + 4);
  if ( v8 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(v8 + v10) );
    v9 = v10 + 1;
  }
  else
  {
    v9 = 1LL;
  }
  v11 = *((_QWORD *)a2 + 5);
  if ( v11 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v11 + v13) );
    v12 = v13 + 1;
  }
  else
  {
    v12 = 1LL;
  }
  v14 = *((_QWORD *)a2 + 6);
  if ( v14 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v14 + v16) );
    v15 = v16 + 1;
  }
  else
  {
    v15 = 1LL;
  }
  v17 = *((_QWORD *)a2 + 8);
  if ( v17 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v17 + v19) );
    v18 = v19 + 1;
  }
  else
  {
    v18 = 1LL;
  }
  v20 = *((_QWORD *)a2 + 15);
  if ( v20 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_BYTE *)(v20 + v22) );
    v21 = v22 + 1;
  }
  else
  {
    v21 = 1LL;
  }
  v23 = *((_QWORD *)a2 + 13);
  if ( v23 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( *(_BYTE *)(v23 + v25) );
    v24 = v25 + 1;
  }
  else
  {
    v24 = 1LL;
  }
  v26 = *((_QWORD *)a2 + 14);
  if ( v26 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *(_WORD *)(v26 + 2 * v28) );
    v27 = 2 * v28 + 2;
  }
  else
  {
    v27 = 2LL;
  }
  v29 = *((_QWORD *)a2 + 10);
  if ( v29 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( *(_BYTE *)(v31 + v29) );
    v30 = v31 + 1;
  }
  else
  {
    v30 = 1LL;
  }
  v32 = *((_QWORD *)a2 + 11);
  if ( v32 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( *(_WORD *)(v32 + 2 * v33) );
    v5 = 2 * v33 + 2;
  }
  v34 = v5 + v30;
  v35 = (volatile signed __int32 *)*((_QWORD *)this + 18);
  v36 = v52 + v9 + v12 + v15 + v18 + v21 + v24 + v27 + v34;
  if ( !v35 || *v35 != 1 || *((_QWORD *)this + 19) < v36 )
  {
    if ( v35 )
    {
      if ( _InterlockedExchangeAdd(v35, 0xFFFFFFFF) == 1 )
        free(*((void **)this + 18));
      *((_QWORD *)this + 18) = 0LL;
      *((_QWORD *)this + 19) = 0LL;
    }
    if ( v36 )
    {
      v38 = (volatile signed __int32 *)malloc(v36 + 4);
      v39 = v38;
      if ( v38 )
      {
        *v38 = 0;
        v40 = (volatile signed __int32 *)*((_QWORD *)this + 18);
        if ( v40 )
        {
          if ( _InterlockedExchangeAdd(v40, 0xFFFFFFFF) == 1 )
            free(*((void **)this + 18));
          *((_QWORD *)this + 18) = 0LL;
          *((_QWORD *)this + 19) = 0LL;
        }
        *((_QWORD *)this + 18) = v39;
        *((_QWORD *)this + 19) = v36;
        _InterlockedAdd(v39, 1u);
      }
    }
    else
    {
      v37 = (volatile signed __int32 *)*((_QWORD *)this + 18);
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37, 0xFFFFFFFF) == 1 )
          free(*((void **)this + 18));
        *((_QWORD *)this + 18) = 0LL;
        *((_QWORD *)this + 19) = 0LL;
      }
    }
  }
  v41 = *((_QWORD *)this + 18);
  if ( v41 )
    v3 = v41 + 4;
  v42 = (*((_QWORD *)this + 19) + v3) & -(__int64)(v3 != 0);
  v43 = wil::details::WriteResultString<unsigned short const *>(v3, v42, *((_QWORD *)a2 + 2), (char *)this + 16);
  v44 = wil::details::WriteResultString<char const *>(v43, v42, *((_QWORD *)a2 + 4), (char *)this + 32);
  v45 = wil::details::WriteResultString<char const *>(v44, v42, *((_QWORD *)a2 + 5), (char *)this + 40);
  v46 = wil::details::WriteResultString<char const *>(v45, v42, *((_QWORD *)a2 + 6), (char *)this + 48);
  v47 = wil::details::WriteResultString<char const *>(v46, v42, *((_QWORD *)a2 + 8), (char *)this + 64);
  v48 = wil::details::WriteResultString<char const *>(v47, v42, *((_QWORD *)a2 + 15), (char *)this + 120);
  v49 = wil::details::WriteResultString<char const *>(v48, v42, *((_QWORD *)a2 + 13), (char *)this + 104);
  v50 = wil::details::WriteResultString<unsigned short const *>(v49, v42, *((_QWORD *)a2 + 14), (char *)this + 112);
  v51 = wil::details::WriteResultString<char const *>(v50, v42, *((_QWORD *)a2 + 10), (char *)this + 80);
  wil::details::WriteResultString<unsigned short const *>(v51, v42, *((_QWORD *)a2 + 11), (char *)this + 88);
}
