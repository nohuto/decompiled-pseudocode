/*
 * XREFs of UnlinkWindow @ 0x14012E600
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1400452D8 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x14012C99C (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     ?xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14012D750 (-xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     SetWindowGroupBand @ 0x14017A7AC (SetWindowGroupBand.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     IsDesktopWindow @ 0x14012E9F0 (IsDesktopWindow.c)
 */

LONG_PTR __fastcall UnlinkWindow(struct tagWND *a1, __int64 *a2)
{
  int v4; // r14d
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  LONG_PTR result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  void *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct tagWND *v25; // rax
  __int64 v26; // rax
  __int64 *v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 *v30; // [rsp+20h] [rbp-50h] BYREF
  __int64 v31; // [rsp+28h] [rbp-48h]
  _OWORD v32[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v33; // [rsp+50h] [rbp-20h]
  int v34; // [rsp+58h] [rbp-18h]
  _QWORD v35[2]; // [rsp+5Ch] [rbp-14h]

  if ( (*((_DWORD *)a1 + 95) & 0x2000000) == 0
    || !(unsigned int)IsWindowDesktopComposed(a1)
    || (unsigned int)IsDesktopWindow(a1) )
  {
    goto LABEL_2;
  }
  v24 = *((_QWORD *)a1 + 3);
  v25 = 0LL;
  if ( v24 )
    v25 = *(struct tagWND **)(v24 + 112);
  if ( a1 == v25 || a2 == *(__int64 **)(W32GetUserSessionState(v24, v23) + 68464) )
  {
LABEL_2:
    v4 = 0;
  }
  else
  {
    v4 = 1;
    DirtyVisRgnTrackers(a1);
  }
  v5 = (__int64 *)((char *)a1 + 88);
  if ( (struct tagWND *)a2[14] == a1 )
  {
    v6 = *v5;
    if ( *v5 )
      v7 = *(_QWORD *)(v6 + 48);
    else
      v7 = 0LL;
    *(_QWORD *)(a2[5] + 56) = v7;
    v30 = a2 + 14;
LABEL_7:
    v31 = v6;
    HMAssignmentLock(&v30, 0LL);
    goto LABEL_8;
  }
  v26 = *((_QWORD *)a1 + 12);
  if ( v26 )
  {
    v6 = *v5;
    v27 = (__int64 *)(v26 + 88);
    v28 = *(_QWORD *)(v26 + 40);
    if ( *v5 )
      v29 = *(_QWORD *)(v6 + 48);
    else
      v29 = 0LL;
    *(_QWORD *)(v28 + 72) = v29;
    v30 = v27;
    goto LABEL_7;
  }
LABEL_8:
  v8 = *v5;
  v9 = (__int64 *)((char *)a1 + 96);
  if ( *v5 )
  {
    v10 = *v9;
    v11 = (__int64 *)(v8 + 96);
    v12 = *(_QWORD *)(v8 + 40);
    if ( *v9 )
      v13 = *(_QWORD *)(v10 + 48);
    else
      v13 = 0LL;
    *(_QWORD *)(v12 + 80) = v13;
    v30 = v11;
    v31 = v10;
    HMAssignmentLock(&v30, 0LL);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = 0LL;
    HMAssignmentUnlock((char *)a1 + 88);
  }
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 80LL) = 0LL;
  result = HMAssignmentUnlock((char *)a1 + 96);
  *((_DWORD *)a1 + 95) &= 0xFCFFFFFF;
  if ( v4 )
  {
    v17 = *a2;
    v18 = *(_QWORD *)a1;
    v19 = (void *)ReferenceDwmApiPort(v16, v15);
    result = W32GetSessionState(v21, v20, v22);
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(result + 96) + 4648LL));
    if ( v19 )
    {
      memset(v32, 0, sizeof(v32));
      WORD2(v32[0]) = 0x8000;
      v33 = 0LL;
      LODWORD(v32[0]) = 3932180;
      v34 = 1073741843;
      v35[0] = v18;
      v35[1] = v17;
      LpcRequestPort(v19, v32);
      return ObfDereferenceObject(v19);
    }
  }
  return result;
}
