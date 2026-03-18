/*
 * XREFs of ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0061A14
 * Callers:
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C0061EA8 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z @ 0x1C0061FA8 (--0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C0062004 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z @ 0x1C0182638 (-_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z.c)
 */

void __fastcall CCD_SET_STRING_ID::_ParseMonitorDescriptors(CCD_SET_STRING_ID *this)
{
  char v2; // di
  unsigned __int16 v3; // si
  unsigned int v4; // ebp
  char v5; // dl
  void *v6; // rcx
  unsigned __int64 v7; // rax
  void *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int16 v13; // bp
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int i; // edi
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int16 v21; // ax
  __int64 v22; // rax
  __int64 v23; // r14
  unsigned int v24; // esi
  __int64 v25; // r15
  unsigned int v26; // ebp
  unsigned __int16 v27; // r13
  unsigned __int16 v28; // r12
  int v29; // eax
  __int64 v30; // rsi
  __int64 v31; // rbp
  __int64 v32; // r14
  __int64 v33; // [rsp+60h] [rbp+8h]
  __int64 v34; // [rsp+68h] [rbp+10h]

  if ( !*((_WORD *)this + 4) )
  {
    *((_WORD *)this + 16) = 0;
    operator delete(*((void **)this + 3));
    *((_QWORD *)this + 3) = 0LL;
    return;
  }
  v2 = 0;
  v3 = 1;
  v4 = 0;
  do
  {
    v5 = *(_BYTE *)(v4 + *((_QWORD *)this + 2));
    if ( v5 < 42 )
      goto LABEL_7;
    if ( v5 <= 43 )
    {
      ++v3;
      if ( !v2 )
      {
        v2 = 43;
        goto LABEL_7;
      }
      v18 = v2 == 43;
    }
    else
    {
      if ( v5 != 94 && v5 != 126 )
        goto LABEL_7;
      ++v3;
      if ( !v2 )
      {
        v2 = *(_BYTE *)(v4 + *((_QWORD *)this + 2));
        goto LABEL_7;
      }
      v18 = v2 == v5;
    }
    if ( !v18 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v19);
    }
LABEL_7:
    ++v4;
  }
  while ( v4 < *((unsigned __int16 *)this + 4) );
  if ( v3 <= *((_WORD *)this + 16) )
    goto LABEL_12;
  v6 = (void *)*((_QWORD *)this + 3);
  *((_WORD *)this + 16) = 0;
  operator delete(v6);
  v7 = 8LL * v3;
  if ( !is_mul_ok(v3, 8uLL) )
    v7 = -1LL;
  v8 = operator new[](v7, 0x63644356u, PagedPool);
  *((_QWORD *)this + 3) = v8;
  if ( v8 )
  {
LABEL_12:
    v13 = 0;
    v14 = 0;
    **((_QWORD **)this + 3) = 0LL;
    *((_WORD *)this + 16) = 1;
    if ( *((_WORD *)this + 4) )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v14 + *((_QWORD *)this + 2)) == 42 )
          goto LABEL_24;
        if ( *(_BYTE *)(v14 + *((_QWORD *)this + 2)) == 43
          || *(_BYTE *)(v14 + *((_QWORD *)this + 2)) == 94
          || *(_BYTE *)(v14 + *((_QWORD *)this + 2)) == 126 )
        {
          break;
        }
LABEL_17:
        if ( ++v14 >= *((unsigned __int16 *)this + 4) )
          goto LABEL_18;
      }
      ++v13;
LABEL_24:
      v17 = *((unsigned __int16 *)this + 4);
      if ( v14 + 1 == (_DWORD)v17 )
      {
        *((_WORD *)this + 4) = v17 - 1;
      }
      else
      {
        v21 = *((_WORD *)this + 16);
        if ( v21 < v3
          || (v22 = WdLogNewEntry5_WdAssertion(v17), WdLogEvent5_WdAssertion(v22), v21 = *((_WORD *)this + 16), v21 < v3) )
        {
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * v21) = v14 + 1;
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 2) = v13;
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 4) = 0;
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 6) = (*((_WORD *)this + 16))++;
        }
      }
      goto LABEL_17;
    }
LABEL_18:
    v15 = *((unsigned __int16 *)this + 16) - 1;
    if ( *((_WORD *)this + 16) != 1 )
    {
      v23 = 0LL;
      v24 = 1;
      v25 = v15;
      v33 = v15;
      do
      {
        v26 = v24;
        if ( v24 <= v15 )
        {
          do
          {
            v34 = *((_QWORD *)this + 3);
            v27 = *(_WORD *)(v23 + v34 + 6);
            v28 = *(_WORD *)(v34 + 8LL * v26 + 6);
            v29 = CCD_SET_STRING_ID::_CompareDescriptors(this, v27, v28);
            if ( v29 > 0 || !v29 && v27 > v28 )
            {
              *(_WORD *)(v23 + v34 + 6) = v28;
              *(_WORD *)(*((_QWORD *)this + 3) + 8LL * v26 + 6) = v27;
            }
            ++v26;
          }
          while ( v26 <= v15 );
          v25 = v33;
        }
        ++v24;
        v23 += 8LL;
        v33 = --v25;
      }
      while ( v25 );
    }
    for ( i = 1; i < *((unsigned __int16 *)this + 16); ++i )
    {
      v30 = *((_QWORD *)this + 3);
      v31 = *(unsigned __int16 *)(v30 + 8LL * (i - 1) + 6);
      v32 = *(unsigned __int16 *)(v30 + 8LL * i + 6);
      if ( !(unsigned int)CCD_SET_STRING_ID::_CompareDescriptors(
                            this,
                            *(unsigned __int16 *)(v30 + 8LL * i + 6),
                            *(unsigned __int16 *)(v30 + 8LL * (i - 1) + 6)) )
        *(_WORD *)(v30 + 8 * v32 + 4) = *(_WORD *)(v30 + 8 * v31 + 4) + 1;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
    *(_QWORD *)(v20 + 24) = v3;
    WdLogEvent5_WdLowResource(v20);
    *(_DWORD *)this = -1073741801;
  }
}
