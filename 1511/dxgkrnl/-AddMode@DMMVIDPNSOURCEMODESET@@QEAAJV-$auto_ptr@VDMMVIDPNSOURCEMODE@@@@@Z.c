/*
 * XREFs of ?AddMode@DMMVIDPNSOURCEMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@@Z @ 0x1C0092580
 * Callers:
 *     ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0092960 (-AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D.c)
 * Callees:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C0006838 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C0019540 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::AddMode(
        _QWORD *a1,
        __int64 (__fastcall ****a2)(_QWORD, __int64),
        __int64 a3,
        __int64 a4)
{
  _DWORD *v6; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // rbx
  int v13; // eax
  _QWORD *v14; // rbx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rbx
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax

  if ( !*a2 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v22);
  }
  v6 = *a2;
  v7 = a1 + 6;
  v8 = *((unsigned int *)*a2 + 6);
  if ( (_QWORD *)*v7 == v7 )
  {
    v9 = 0LL;
  }
  else
  {
    v9 = *v7 - 8LL;
    if ( !v9 )
    {
LABEL_9:
      v11 = a1 + 6;
      if ( (_QWORD *)*v11 == v11 || (v12 = *v11 - 8LL) == 0 )
      {
LABEL_17:
        v15 = a1 + 6;
        if ( (_QWORD *)*v15 == v15 )
          goto LABEL_22;
        v16 = *v15 - 8LL;
        if ( *v15 == 8LL )
          goto LABEL_22;
        while ( (_DWORD *)v16 != v6 )
        {
          v17 = *(_QWORD **)(v16 + 8);
          if ( v17 != v15 )
          {
            v16 = (__int64)(v17 - 1);
            if ( v16 )
              continue;
          }
          goto LABEL_22;
        }
        if ( !v16 )
        {
LABEL_22:
          v18 = (_QWORD *)a1[7];
          v19 = v6 + 2;
          *v19 = v15;
          v19[1] = v18;
          if ( (_QWORD *)*v18 != v15 )
            __fastfail(3u);
          *v18 = v19;
          a1[7] = v19;
          ++a1[8];
        }
        else
        {
          v29 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v29);
        }
        v20 = (__int64)(*a2 + 4);
        if ( a1 )
        {
          if ( (*a2)[5] )
          {
            v31 = WdLogNewEntry5_WdAssertion(v15);
            WdLogEvent5_WdAssertion(v31);
          }
          *(_QWORD *)(v20 + 8) = a1;
        }
        else
        {
          v30 = WdLogNewEntry5_WdError(v15);
          *(_QWORD *)(v30 + 24) = v20;
          *(_QWORD *)(v30 + 32) = *(_QWORD *)(v20 + 8);
          WdLogEvent5_WdError(v30);
        }
        *a2 = 0LL;
        return 0LL;
      }
      while ( 1 )
      {
        v13 = *(_DWORD *)(v12 + 72);
        if ( v13 != v6[18] )
          goto LABEL_14;
        if ( v13 != 1 )
        {
          if ( v13 == 2 )
          {
            if ( *(_DWORD *)(v12 + 76) == v6[19] )
              goto LABEL_49;
            goto LABEL_14;
          }
          if ( v13 <= 2 || v13 > 4 )
          {
            if ( (unsigned int)(v13 - 1) <= 3 )
            {
              v24 = WdLogNewEntry5_WdAssertion(v9);
              WdLogEvent5_WdAssertion(v24);
            }
            goto LABEL_14;
          }
        }
        if ( *(_DWORD *)(v12 + 76) == v6[19]
          && *(_DWORD *)(v12 + 80) == v6[20]
          && *(_DWORD *)(v12 + 84) == v6[21]
          && *(_DWORD *)(v12 + 88) == v6[22]
          && *(_DWORD *)(v12 + 92) == v6[23]
          && *(_DWORD *)(v12 + 96) == v6[24]
          && *(_DWORD *)(v12 + 100) == v6[25]
          && *(_DWORD *)(v12 + 104) == v6[26] )
        {
LABEL_49:
          v23 = 1;
          goto LABEL_50;
        }
LABEL_14:
        v14 = *(_QWORD **)(v12 + 8);
        if ( v14 == a1 + 6 )
          v12 = 0LL;
        else
          v12 = (__int64)(v14 - 1);
        if ( !v12 )
          goto LABEL_17;
      }
    }
    while ( *(_DWORD *)(v9 + 24) != (_DWORD)v8 )
    {
      v10 = *(_QWORD **)(v9 + 8);
      if ( v10 == a1 + 6 )
        v9 = 0LL;
      else
        v9 = (__int64)(v10 - 1);
      if ( !v9 )
        goto LABEL_9;
    }
  }
  if ( !v9 )
    goto LABEL_9;
  v23 = 2 - (DMMVIDPNSOURCEMODE::operator==(v9, (__int64)v6) != 0);
LABEL_50:
  v25 = (unsigned int)(v23 - 1);
  if ( (_DWORD)v25 )
  {
    if ( (_DWORD)v25 == 1 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v27[3] = *((unsigned int *)*a2 + 6);
      v27[4] = *a2;
      v27[5] = a1;
      WdLogEvent5_WdError(v27);
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(a2);
      return 3223192356LL;
    }
    else
    {
      v26 = WdLogNewEntry5_WdError(v25);
      WdLogEvent5_WdError(v26);
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(a2);
      return 3221225473LL;
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdTrace(v25, v8, a3, a4);
    *(_QWORD *)(v28 + 24) = *a2;
    *(_QWORD *)(v28 + 32) = a1;
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(a2);
    return 3223192340LL;
  }
}
