/*
 * XREFs of ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C008DFDC
 * Callers:
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C008DE4C (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C008E470 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z @ 0x1C008E570 (--0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z @ 0x1C01AB804 (-_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z.c)
 */

void __fastcall CCD_SET_STRING_ID::_ParseMonitorDescriptors(CCD_SET_STRING_ID *this)
{
  char v2; // di
  unsigned __int16 v3; // si
  unsigned int v4; // ebp
  char v5; // dl
  void *v6; // rcx
  SIZE_T v7; // rax
  PVOID v8; // rax
  __int64 v9; // rcx
  __int16 v10; // bp
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int i; // edi
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int16 v18; // ax
  __int64 v19; // rax
  __int64 v20; // r14
  unsigned int v21; // esi
  __int64 v22; // r15
  unsigned int v23; // ebp
  unsigned __int16 v24; // r13
  unsigned __int16 v25; // r12
  int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // rbp
  __int64 v29; // r14
  __int64 v30; // [rsp+60h] [rbp+8h]
  __int64 v31; // [rsp+68h] [rbp+10h]

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
      v15 = v2 == 43;
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
      v15 = v2 == v5;
    }
    if ( !v15 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v16);
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
  v8 = operator new(v7, 0x63644356u, PagedPool);
  *((_QWORD *)this + 3) = v8;
  if ( v8 )
  {
LABEL_12:
    v10 = 0;
    v11 = 0;
    **((_QWORD **)this + 3) = 0LL;
    *((_WORD *)this + 16) = 1;
    if ( *((_WORD *)this + 4) )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v11 + *((_QWORD *)this + 2)) == 42 )
          goto LABEL_24;
        if ( *(_BYTE *)(v11 + *((_QWORD *)this + 2)) == 43
          || *(_BYTE *)(v11 + *((_QWORD *)this + 2)) == 94
          || *(_BYTE *)(v11 + *((_QWORD *)this + 2)) == 126 )
        {
          break;
        }
LABEL_17:
        if ( ++v11 >= *((unsigned __int16 *)this + 4) )
          goto LABEL_18;
      }
      ++v10;
LABEL_24:
      v14 = *((unsigned __int16 *)this + 4);
      if ( v11 + 1 == (_DWORD)v14 )
      {
        *((_WORD *)this + 4) = v14 - 1;
      }
      else
      {
        v18 = *((_WORD *)this + 16);
        if ( v18 < v3
          || (v19 = WdLogNewEntry5_WdAssertion(v14), WdLogEvent5_WdAssertion(v19), v18 = *((_WORD *)this + 16), v18 < v3) )
        {
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * v18) = v11 + 1;
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 2) = v10;
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 4) = 0;
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 6) = (*((_WORD *)this + 16))++;
        }
      }
      goto LABEL_17;
    }
LABEL_18:
    v12 = *((unsigned __int16 *)this + 16) - 1;
    if ( *((_WORD *)this + 16) != 1 )
    {
      v20 = 0LL;
      v21 = 1;
      v22 = v12;
      v30 = v12;
      do
      {
        v23 = v21;
        if ( v21 <= v12 )
        {
          do
          {
            v31 = *((_QWORD *)this + 3);
            v24 = *(_WORD *)(v20 + v31 + 6);
            v25 = *(_WORD *)(v31 + 8LL * v23 + 6);
            v26 = CCD_SET_STRING_ID::_CompareDescriptors(this, v24, v25);
            if ( v26 > 0 || !v26 && v24 > v25 )
            {
              *(_WORD *)(v20 + v31 + 6) = v25;
              *(_WORD *)(*((_QWORD *)this + 3) + 8LL * v23 + 6) = v24;
            }
            ++v23;
          }
          while ( v23 <= v12 );
          v22 = v30;
        }
        ++v21;
        v20 += 8LL;
        v30 = --v22;
      }
      while ( v22 );
    }
    for ( i = 1; i < *((unsigned __int16 *)this + 16); ++i )
    {
      v27 = *((_QWORD *)this + 3);
      v28 = *(unsigned __int16 *)(v27 + 8LL * (i - 1) + 6);
      v29 = *(unsigned __int16 *)(v27 + 8LL * i + 6);
      if ( !(unsigned int)CCD_SET_STRING_ID::_CompareDescriptors(
                            this,
                            *(unsigned __int16 *)(v27 + 8LL * i + 6),
                            *(unsigned __int16 *)(v27 + 8LL * (i - 1) + 6)) )
        *(_WORD *)(v27 + 8 * v29 + 4) = *(_WORD *)(v27 + 8 * v28 + 4) + 1;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v17 + 24) = v3;
    WdLogEvent5_WdLowResource(v17);
    *(_DWORD *)this = -1073741801;
  }
}
