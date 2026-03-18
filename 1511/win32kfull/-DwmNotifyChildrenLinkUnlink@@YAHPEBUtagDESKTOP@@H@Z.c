/*
 * XREFs of ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00D26D8
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C00D2698 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     DwmAsyncOwnerChange @ 0x1C0068E08 (DwmAsyncOwnerChange.c)
 *     FreeHwndList @ 0x1C006D900 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006D970 (BuildHwndList.c)
 *     DwmAsyncChildLink @ 0x1C00D2918 (DwmAsyncChildLink.c)
 *     DwmAsyncChildUnlink @ 0x1C00D2CAC (DwmAsyncChildUnlink.c)
 */

__int64 __fastcall DwmNotifyChildrenLinkUnlink(const struct tagDESKTOP *a1, int a2)
{
  unsigned int v4; // esi
  struct tagBWL *v5; // rax
  struct tagBWL *v6; // r13
  unsigned __int64 *i; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rbx
  void *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  void *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 *v30; // rdi
  _QWORD *v31; // rbx
  void *v32; // rax
  __int64 v33; // rcx
  struct tagBWL *v34; // rax
  struct tagBWL *v35; // rbp
  unsigned __int64 *j; // r14
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // r8
  __int64 v41; // r9
  void *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _QWORD *v47; // rbx
  void *v48; // rax
  void *v50; // rax
  void *v51; // rax

  v4 = 1;
  v5 = BuildHwndList(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) + 96LL), 3, 0LL);
  v6 = v5;
  if ( !v5 )
    return 0;
  for ( i = (unsigned __int64 *)((char *)v5 + 32); *i != 1; ++i )
  {
    v10 = HMValidateHandleNoSecure(*i, 1);
    if ( v10 )
    {
      if ( a2 )
      {
        v13 = (void *)ReferenceDwmApiPort(v9, v8, v11, v12);
        DwmAsyncChildLink(v13, *(_DWORD *)(v10 + 304));
        v18 = *(_QWORD **)(v10 + 104);
        if ( v18 )
          v18 = (_QWORD *)*v18;
        v19 = (void *)ReferenceDwmApiPort(v15, v14, v16, v17);
        DwmAsyncOwnerChange(v19, *(_QWORD *)v10, (__int64)v18);
      }
      else
      {
        v51 = (void *)ReferenceDwmApiPort(v9, v8, v11, v12);
        DwmAsyncChildUnlink(v51);
      }
    }
  }
  FreeHwndList(v6);
  v20 = *((_QWORD *)a1 + 12);
  v25 = (void *)ReferenceDwmApiPort(v22, v21, v23, v24);
  if ( a2 )
  {
    DwmAsyncChildLink(v25, *(_DWORD *)(v20 + 304));
    v30 = (__int64 *)*((_QWORD *)a1 + 12);
    v31 = (_QWORD *)v30[13];
    if ( v31 )
      v31 = (_QWORD *)*v31;
    v32 = (void *)ReferenceDwmApiPort(v27, v26, v28, v29);
    DwmAsyncOwnerChange(v32, *v30, (__int64)v31);
  }
  else
  {
    DwmAsyncChildUnlink(v25);
  }
  v33 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 96LL);
  if ( v33 )
  {
    v34 = BuildHwndList(v33, 3, 0LL);
    v35 = v34;
    if ( v34 )
    {
      for ( j = (unsigned __int64 *)((char *)v34 + 32); *j != 1; ++j )
      {
        v39 = HMValidateHandleNoSecure(*j, 1);
        if ( v39 )
        {
          if ( a2 )
          {
            v42 = (void *)ReferenceDwmApiPort(v38, v37, v40, v41);
            DwmAsyncChildLink(v42, *(_DWORD *)(v39 + 304));
            v47 = *(_QWORD **)(v39 + 104);
            if ( v47 )
              v47 = (_QWORD *)*v47;
            v48 = (void *)ReferenceDwmApiPort(v44, v43, v45, v46);
            DwmAsyncOwnerChange(v48, *(_QWORD *)v39, (__int64)v47);
          }
          else
          {
            v50 = (void *)ReferenceDwmApiPort(v38, v37, v40, v41);
            DwmAsyncChildUnlink(v50);
          }
        }
      }
      FreeHwndList(v35);
      return v4;
    }
    return 0;
  }
  return v4;
}
