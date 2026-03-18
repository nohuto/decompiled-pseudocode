/*
 * XREFs of ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x14011E330
 * Callers:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x14011E2E4 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x14011E330 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     xxxSimpleDoSyncPaint @ 0x140050370 (xxxSimpleDoSyncPaint.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x14011E330 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxCompositedPaint @ 0x14011E700 (xxxCompositedPaint.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x14011EA74 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     DecPaintCount @ 0x14012BF18 (DecPaintCount.c)
 */

void __fastcall xxxUpdateWindow2(struct tagTHREADINFO **a1, int a2)
{
  struct tagWND *v4; // rdi
  struct tagTHREADINFO *v5; // rax
  struct tagTHREADINFO *v6; // rcx
  struct tagWND *v7; // rax
  __int64 v8; // rdx
  struct tagTHREADINFO **v9; // rax
  struct tagTHREADINFO *v10; // rcx
  struct tagTHREADINFO *v11; // rdi
  struct tagTHREADINFO *v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  ULONG_PTR v15; // rcx
  ULONG_PTR *v16; // rdx
  ULONG_PTR v17; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  ULONG_PTR *v21; // rax
  ULONG_PTR v22; // rcx
  ULONG_PTR *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  struct tagTHREADINFO *v27; // rax
  struct tagTHREADINFO *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  ULONG_PTR v32; // [rsp+30h] [rbp-20h] BYREF
  struct tagTHREADINFO *i; // [rsp+38h] [rbp-18h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-10h] BYREF

  v4 = (struct tagWND *)a1;
  if ( a1 )
  {
    while ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 27LL) & 2) == 0 )
    {
      v4 = (struct tagWND *)*((_QWORD *)v4 + 13);
      if ( !v4 )
        goto LABEL_4;
    }
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      v19 = *CurrentThreadWin32Thread;
    else
      v19 = 0LL;
    BugCheckParameter3[0] = *(_QWORD *)(v19 + 448);
    *(_QWORD *)(v19 + 448) = BugCheckParameter3;
    BugCheckParameter3[1] = (ULONG_PTR)v4;
    HMLockObject(v4);
    xxxCompositedPaint(v4);
    v21 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v20);
    if ( v21 )
      v22 = *v21;
    else
      v22 = 0LL;
    v23 = *(ULONG_PTR **)(v22 + 448);
    if ( v23 != BugCheckParameter3 )
      KeBugCheckEx(0x164u, 0x3BuLL, v22, (ULONG_PTR)BugCheckParameter3, 0LL);
    *(_QWORD *)(v22 + 448) = *v23;
    v17 = v23[1];
    goto LABEL_30;
  }
LABEL_4:
  v5 = a1[5];
  if ( *((_QWORD *)v5 + 17) )
  {
    if ( !(unsigned int)ValidateParents((struct tagWND *)a1, a2 & 4) )
      return;
    goto LABEL_33;
  }
  if ( (*((_BYTE *)v5 + 17) & 0x10) != 0 )
  {
LABEL_33:
    if ( (*((_BYTE *)a1[5] + 17) & 0x10) != 0 )
    {
      SetOrClrWF(0, (struct tagWND *)a1, 0x110u, 1);
      if ( !*((_QWORD *)a1[5] + 17) )
        DecPaintCount(a1);
    }
    SetOrClrWF(1, (struct tagWND *)a1, 0x240u, 1);
    SetOrClrWF(0, (struct tagWND *)a1, 0x120u, 1);
    v25 = *((unsigned int *)PtiCurrent(v24) + 340);
    if ( (v25 & 0x40000) == 0 || (v27 = PtiCurrent(v25), v28 = a1[2], v27 == v28) )
    {
      xxxSendMessage((struct tagWND *)a1, 0xFu);
    }
    else
    {
      v29 = *((_QWORD *)v28 + 106);
      v30 = v29 + 16;
      v31 = -v29;
      if ( (v30 & -(__int64)(v31 != 0)) == 0
        || *(_DWORD *)((v30 & -(__int64)(v31 != 0)) + 8) != 15
        || *(_QWORD *)((v30 & -(__int64)(v31 != 0)) + 0x10)
        || *(_QWORD *)((v30 & -(__int64)(v31 != 0)) + 0x18) )
      {
        PostMessage((int)a1, 15, 0, 0);
      }
    }
    if ( (*((_BYTE *)a1[5] + 18) & 0x40) != 0 )
      xxxSimpleDoSyncPaint((struct tagWND *)a1);
  }
  if ( (a2 & 1) != 0 )
  {
    v6 = a1[3];
    v7 = 0LL;
    if ( v6 )
    {
      v8 = *((_QWORD *)v6 + 1);
      if ( v8 )
        v7 = *(struct tagWND **)(v8 + 24);
    }
    if ( a1 != (struct tagTHREADINFO **)v7 )
    {
      v9 = (struct tagTHREADINFO **)PsGetCurrentThreadWin32Thread(v6);
      if ( v9 )
        v10 = *v9;
      else
        v10 = 0LL;
      v11 = 0LL;
      v32 = *((_QWORD *)v10 + 56);
      *((_QWORD *)v10 + 56) = &v32;
      v12 = a1[14];
      for ( i = 0LL; v12; v12 = (struct tagTHREADINFO *)*((_QWORD *)v12 + 11) )
      {
        v13 = *((_QWORD *)v12 + 5);
        if ( (*(_BYTE *)(v13 + 24) & 0x20) != 0 && (*(_QWORD *)(v13 + 136) || (*(_BYTE *)(v13 + 17) & 0x10) != 0) )
        {
          v10 = v12;
          while ( 1 )
          {
            v10 = (struct tagTHREADINFO *)*((_QWORD *)v10 + 11);
            if ( !v10 )
              break;
            v26 = *((_QWORD *)v10 + 5);
            if ( *(_QWORD *)(v26 + 136) || (*(_BYTE *)(v26 + 17) & 0x10) != 0 )
              goto LABEL_18;
          }
        }
        i = v12;
        HMLockObject(v12);
        if ( v11 )
          HMUnlockObject(v11);
        xxxUpdateWindow2(v12, a2 | 4);
        v11 = i;
LABEL_18:
        ;
      }
      v14 = (_QWORD *)PsGetCurrentThreadWin32Thread(v10);
      v15 = v14 ? *v14 : 0LL;
      v16 = *(ULONG_PTR **)(v15 + 448);
      if ( v16 != &v32 )
        KeBugCheckEx(0x164u, 0x3BuLL, v15, (ULONG_PTR)&v32, 0LL);
      *(_QWORD *)(v15 + 448) = *v16;
      v17 = v16[1];
      if ( v17 )
LABEL_30:
        HMUnlockObject(v17);
    }
  }
}
