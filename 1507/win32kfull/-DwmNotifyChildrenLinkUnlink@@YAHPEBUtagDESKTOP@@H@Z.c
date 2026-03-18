/*
 * XREFs of ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C014A8F4
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C014A8B4 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     DwmAsyncOwnerChange @ 0x1C005B838 (DwmAsyncOwnerChange.c)
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     DwmAsyncChildLink @ 0x1C00E482C (DwmAsyncChildLink.c)
 *     DwmAsyncChildUnlink @ 0x1C00E4D5C (DwmAsyncChildUnlink.c)
 */

__int64 __fastcall DwmNotifyChildrenLinkUnlink(const struct tagDESKTOP *a1, int a2)
{
  unsigned int v4; // esi
  struct tagBWL *v5; // rax
  struct tagBWL *v6; // r13
  unsigned __int64 *i; // r14
  __int64 v8; // rdi
  __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rdi
  _QWORD *v22; // rbx
  void *v23; // rax
  __int64 v24; // rcx
  struct tagBWL *v25; // rax
  struct tagBWL *v26; // rbp
  unsigned __int64 *j; // r14
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdi
  __int64 *v34; // rax
  __int64 v35; // r15
  __int64 *v36; // rbx
  void *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rbx
  void *v43; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdi
  __int64 *v51; // rax
  __int64 v52; // r15
  __int64 *v53; // rbx
  void *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  _QWORD *v59; // rbx
  void *v60; // rax
  __int64 *v61; // rbx
  void *v62; // rax
  __int64 *v63; // rbx
  void *v64; // rax

  v4 = 1;
  v5 = BuildHwndList(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) + 96LL), 3, 0LL);
  v6 = v5;
  if ( !v5 )
    return 0;
  for ( i = (unsigned __int64 *)((char *)v5 + 32); *i != 1; ++i )
  {
    v45 = HMValidateHandleNoSecure(*i, 1);
    v50 = v45;
    if ( v45 )
    {
      if ( a2 )
      {
        v51 = *(__int64 **)(v45 + 80);
        if ( v51 )
          v52 = *v51;
        else
          v52 = 0LL;
        v53 = *(__int64 **)(v50 + 88);
        v54 = (void *)ReferenceDwmApiPort(v47, v46, v48, v49);
        DwmAsyncChildLink(v54, *(_QWORD *)v50, *v53, v52, *(_DWORD *)(v50 + 304));
        v59 = *(_QWORD **)(v50 + 104);
        if ( v59 )
          v59 = (_QWORD *)*v59;
        v60 = (void *)ReferenceDwmApiPort(v56, v55, v57, v58);
        DwmAsyncOwnerChange(v60, *(_QWORD *)v50, (__int64)v59);
      }
      else
      {
        v63 = *(__int64 **)(v45 + 88);
        v64 = (void *)ReferenceDwmApiPort(v47, v46, v48, v49);
        DwmAsyncChildUnlink(v64, *(_QWORD *)v50, *v63);
      }
    }
  }
  FreeHwndList(v6);
  v8 = *((_QWORD *)a1 + 12);
  v9 = *(__int64 **)(*((_QWORD *)a1 + 1) + 16LL);
  v14 = (void *)ReferenceDwmApiPort(v11, v10, v12, v13);
  v15 = *v9;
  v16 = *(_QWORD *)v8;
  if ( a2 )
  {
    DwmAsyncChildLink(v14, v16, v15, 1LL, *(_DWORD *)(v8 + 304));
    v21 = (__int64 *)*((_QWORD *)a1 + 12);
    v22 = (_QWORD *)v21[13];
    if ( v22 )
      v22 = (_QWORD *)*v22;
    v23 = (void *)ReferenceDwmApiPort(v18, v17, v19, v20);
    DwmAsyncOwnerChange(v23, *v21, (__int64)v22);
  }
  else
  {
    DwmAsyncChildUnlink(v14, v16, v15);
  }
  v24 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 96LL);
  if ( v24 )
  {
    v25 = BuildHwndList(v24, 3, 0LL);
    v26 = v25;
    if ( v25 )
    {
      for ( j = (unsigned __int64 *)((char *)v25 + 32); *j != 1; ++j )
      {
        v28 = HMValidateHandleNoSecure(*j, 1);
        v33 = v28;
        if ( v28 )
        {
          if ( a2 )
          {
            v34 = *(__int64 **)(v28 + 80);
            if ( v34 )
              v35 = *v34;
            else
              v35 = 0LL;
            v36 = *(__int64 **)(v33 + 88);
            v37 = (void *)ReferenceDwmApiPort(v30, v29, v31, v32);
            DwmAsyncChildLink(v37, *(_QWORD *)v33, *v36, v35, *(_DWORD *)(v33 + 304));
            v42 = *(_QWORD **)(v33 + 104);
            if ( v42 )
              v42 = (_QWORD *)*v42;
            v43 = (void *)ReferenceDwmApiPort(v39, v38, v40, v41);
            DwmAsyncOwnerChange(v43, *(_QWORD *)v33, (__int64)v42);
          }
          else
          {
            v61 = *(__int64 **)(v28 + 88);
            v62 = (void *)ReferenceDwmApiPort(v30, v29, v31, v32);
            DwmAsyncChildUnlink(v62, *(_QWORD *)v33, *v61);
          }
        }
      }
      FreeHwndList(v26);
      return v4;
    }
    return 0;
  }
  return v4;
}
