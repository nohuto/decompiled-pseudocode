/*
 * XREFs of ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00934F0
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C00934B0 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     DwmAsyncOwnerChange @ 0x1C00541C4 (DwmAsyncOwnerChange.c)
 *     DwmAsyncChildUnlink @ 0x1C0063590 (DwmAsyncChildUnlink.c)
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     DwmAsyncChildLink @ 0x1C0093730 (DwmAsyncChildLink.c)
 */

__int64 __fastcall DwmNotifyChildrenLinkUnlink(const struct tagDESKTOP *a1, int a2)
{
  unsigned int v4; // esi
  struct tagBWL *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct tagBWL *v9; // r13
  unsigned __int64 *i; // r14
  __int64 v11; // rdi
  __int64 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rdi
  _QWORD *v23; // rbx
  void *v24; // rax
  __int64 v25; // rcx
  struct tagBWL *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  struct tagBWL *v30; // rbp
  unsigned __int64 *j; // r14
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdi
  void *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rbx
  void *v41; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdi
  void *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rbx
  void *v52; // rax
  __int64 *v53; // rbx
  void *v54; // rax
  __int64 *v55; // rbx
  void *v56; // rax

  v4 = 1;
  v5 = BuildHwndList(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) + 96LL), (struct tagWND *)3, 0LL);
  v9 = v5;
  if ( !v5 )
    return 0;
  for ( i = (unsigned __int64 *)((char *)v5 + 32); *i != 1; ++i )
  {
    LOBYTE(v6) = 1;
    v43 = HMValidateHandleNoSecure(*i, v6, v7, v8);
    v45 = v43;
    if ( v43 )
    {
      if ( a2 )
      {
        v46 = (void *)ReferenceDwmApiPort(v44, v6, v7, v8);
        DwmAsyncChildLink(v46, *(_DWORD *)(v45 + 304));
        v51 = *(_QWORD **)(v45 + 104);
        if ( v51 )
          v51 = (_QWORD *)*v51;
        v52 = (void *)ReferenceDwmApiPort(v48, v47, v49, v50);
        DwmAsyncOwnerChange(v52, *(_QWORD *)v45, (__int64)v51);
      }
      else
      {
        v55 = *(__int64 **)(v43 + 88);
        v56 = (void *)ReferenceDwmApiPort(v44, v6, v7, v8);
        DwmAsyncChildUnlink(v56, *(_QWORD *)v45, *v55);
      }
    }
  }
  FreeHwndList(v9);
  v11 = *((_QWORD *)a1 + 12);
  v12 = *(__int64 **)(*((_QWORD *)a1 + 1) + 16LL);
  v17 = (void *)ReferenceDwmApiPort(v14, v13, v15, v16);
  if ( a2 )
  {
    DwmAsyncChildLink(v17, *(_DWORD *)(v11 + 304));
    v22 = (__int64 *)*((_QWORD *)a1 + 12);
    v23 = (_QWORD *)v22[13];
    if ( v23 )
      v23 = (_QWORD *)*v23;
    v24 = (void *)ReferenceDwmApiPort(v19, v18, v20, v21);
    DwmAsyncOwnerChange(v24, *v22, (__int64)v23);
  }
  else
  {
    DwmAsyncChildUnlink(v17, *(_QWORD *)v11, *v12);
  }
  v25 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 96LL);
  if ( v25 )
  {
    v26 = BuildHwndList(v25, (struct tagWND *)3, 0LL);
    v30 = v26;
    if ( v26 )
    {
      for ( j = (unsigned __int64 *)((char *)v26 + 32); *j != 1; ++j )
      {
        LOBYTE(v27) = 1;
        v32 = HMValidateHandleNoSecure(*j, v27, v28, v29);
        v34 = v32;
        if ( v32 )
        {
          if ( a2 )
          {
            v35 = (void *)ReferenceDwmApiPort(v33, v27, v28, v29);
            DwmAsyncChildLink(v35, *(_DWORD *)(v34 + 304));
            v40 = *(_QWORD **)(v34 + 104);
            if ( v40 )
              v40 = (_QWORD *)*v40;
            v41 = (void *)ReferenceDwmApiPort(v37, v36, v38, v39);
            DwmAsyncOwnerChange(v41, *(_QWORD *)v34, (__int64)v40);
          }
          else
          {
            v53 = *(__int64 **)(v32 + 88);
            v54 = (void *)ReferenceDwmApiPort(v33, v27, v28, v29);
            DwmAsyncChildUnlink(v54, *(_QWORD *)v34, *v53);
          }
        }
      }
      FreeHwndList(v30);
      return v4;
    }
    return 0;
  }
  return v4;
}
