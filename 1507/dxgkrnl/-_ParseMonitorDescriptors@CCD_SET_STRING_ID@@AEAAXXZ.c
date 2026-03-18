/*
 * XREFs of ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0066FC8
 * Callers:
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C006745C (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z @ 0x1C006755C (--0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00675B8 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z @ 0x1C017E194 (-_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z.c)
 */

void __fastcall CCD_SET_STRING_ID::_ParseMonitorDescriptors(
        CCD_SET_STRING_ID *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // di
  unsigned __int16 v6; // si
  unsigned int v7; // ebp
  void *v8; // rcx
  unsigned __int64 v9; // rax
  void *v10; // rax
  __int64 v11; // rcx
  __int16 v12; // bp
  unsigned int v13; // edi
  __int64 v14; // rdx
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
  v5 = 0;
  v6 = 1;
  v7 = 0;
  do
  {
    LOBYTE(a2) = *(_BYTE *)(v7 + *((_QWORD *)this + 2));
    if ( (char)a2 < 42 )
      goto LABEL_7;
    if ( (char)a2 <= 43 )
    {
      ++v6;
      if ( !v5 )
      {
        v5 = 43;
        goto LABEL_7;
      }
      v18 = v5 == 43;
    }
    else
    {
      if ( (_BYTE)a2 != 94 && (_BYTE)a2 != 126 )
        goto LABEL_7;
      ++v6;
      if ( !v5 )
      {
        v5 = *(_BYTE *)(v7 + *((_QWORD *)this + 2));
        goto LABEL_7;
      }
      v18 = v5 == (char)a2;
    }
    if ( !v18 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v7, a2, a3, a4);
      WdLogEvent5_WdAssertion(v19);
    }
LABEL_7:
    ++v7;
  }
  while ( v7 < *((unsigned __int16 *)this + 4) );
  if ( v6 <= *((_WORD *)this + 16) )
    goto LABEL_12;
  v8 = (void *)*((_QWORD *)this + 3);
  *((_WORD *)this + 16) = 0;
  operator delete(v8);
  v9 = 8LL * v6;
  if ( !is_mul_ok(v6, 8uLL) )
    v9 = -1LL;
  v10 = operator new[](v9, 0x63644356u, PagedPool);
  *((_QWORD *)this + 3) = v10;
  if ( v10 )
  {
LABEL_12:
    v12 = 0;
    v13 = 0;
    **((_QWORD **)this + 3) = 0LL;
    *((_WORD *)this + 16) = 1;
    if ( *((_WORD *)this + 4) )
    {
      while ( 1 )
      {
        v14 = (unsigned int)(*(char *)(v13 + *((_QWORD *)this + 2)) - 42);
        if ( *(_BYTE *)(v13 + *((_QWORD *)this + 2)) == 42 )
          goto LABEL_24;
        v14 = (unsigned int)(*(char *)(v13 + *((_QWORD *)this + 2)) - 43);
        if ( *(_BYTE *)(v13 + *((_QWORD *)this + 2)) == 43 )
          break;
        v14 = (unsigned int)(*(char *)(v13 + *((_QWORD *)this + 2)) - 94);
        if ( *(_BYTE *)(v13 + *((_QWORD *)this + 2)) == 94 || *(_BYTE *)(v13 + *((_QWORD *)this + 2)) == 126 )
          break;
LABEL_17:
        if ( ++v13 >= *((unsigned __int16 *)this + 4) )
          goto LABEL_18;
      }
      ++v12;
LABEL_24:
      v17 = *((unsigned __int16 *)this + 4);
      if ( v13 + 1 == (_DWORD)v17 )
      {
        *((_WORD *)this + 4) = v17 - 1;
      }
      else
      {
        v21 = *((_WORD *)this + 16);
        if ( v21 < v6
          || (v22 = WdLogNewEntry5_WdAssertion(v17, v14, a3, a4),
              WdLogEvent5_WdAssertion(v22),
              v21 = *((_WORD *)this + 16),
              v21 < v6) )
        {
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * v21) = v13 + 1;
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 2) = v12;
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
    v20 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v20 + 24) = v6;
    WdLogEvent5_WdLowResource(v20);
    *(_DWORD *)this = -1073741801;
  }
}
