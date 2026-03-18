/*
 * XREFs of xxxInternalDoSyncPaint @ 0x14004FFD0
 * Callers:
 *     xxxDoSyncPaint @ 0x140046CFC (xxxDoSyncPaint.c)
 *     xxxInternalDoSyncPaint @ 0x14004FFD0 (xxxInternalDoSyncPaint.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxInternalDoSyncPaint @ 0x14004FFD0 (xxxInternalDoSyncPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x140050370 (xxxSimpleDoSyncPaint.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140051270 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 */

void __fastcall xxxInternalDoSyncPaint(struct tagWND *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagWND *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct tagBWL *v10; // rax
  struct tagBWL *v11; // r12
  _QWORD *v12; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r13
  __int64 v25; // rbx
  _QWORD *i; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 UserSessionState; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rdx
  ULONG_PTR *v35; // r14
  ULONG_PTR v36; // rbx
  ULONG_PTR v37; // rcx
  __int64 v38; // rcx
  ULONG_PTR *v39; // rax
  ULONG_PTR v40; // r8
  ULONG_PTR *v41; // rcx
  __int64 v42; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-38h] BYREF

  xxxSimpleDoSyncPaint(a1);
  if ( (a2 & 0x20) != 0 || (a2 & 4) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) != 0 )
  {
    v6 = (struct tagWND *)*((_QWORD *)a1 + 14);
    v9 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 63424);
    if ( v9 )
    {
      *(_QWORD *)(W32GetUserSessionState(v8, v7) + 63424) = 0LL;
    }
    else
    {
      v42 = Win32AllocPoolZInit(296LL, 1819767637LL);
      v9 = v42;
      if ( !v42 )
        return;
      *(_QWORD *)(v42 + 16) = v42 + 280;
    }
    *(_QWORD *)(v9 + 8) = v9 + 32;
    *(_QWORD *)(v9 + 24) = 0LL;
    v10 = InternalBuildHwndList((struct tagBWL *)v9, v6, 2u);
    v11 = v10;
    v12 = (_QWORD *)*((_QWORD *)v10 + 1);
    if ( (unsigned __int64)v12 >= *((_QWORD *)v10 + 2) )
    {
      Win32FreePool(v10);
    }
    else
    {
      *v12 = 1LL;
      CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v12);
      if ( CurrentThreadWin32Thread )
        v14 = *CurrentThreadWin32Thread;
      else
        v14 = 0LL;
      *((_QWORD *)v11 + 3) = v14;
      v15 = (__int64 *)PsGetCurrentThreadWin32Thread(v14);
      if ( v15 )
        v18 = *v15;
      else
        v18 = 0LL;
      *((_QWORD *)v11 + 3) = v18;
      v19 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 63232);
      *(_QWORD *)v11 = v19;
      *(_QWORD *)(W32GetUserSessionState(v19, v20) + 63232) = v11;
      v22 = (__int64 *)PsGetCurrentThreadWin32Thread(v21);
      if ( v22 )
        v24 = *v22;
      else
        v24 = 0LL;
      v25 = *((_QWORD *)v11 + 4);
      for ( i = (_QWORD *)((char *)v11 + 32); v25 != 1; ++i )
      {
        if ( v25 )
        {
          PsGetCurrentThreadWin32Thread(v23);
          v23 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 19904);
          if ( (unsigned __int64)(unsigned __int16)v25 < *(_QWORD *)(v23 + 8) )
          {
            UserSessionState = W32GetUserSessionState(v23, v29);
            v33 = *(_DWORD *)(W32GetUserSessionState(v32, v31) + 19928) * (unsigned int)(unsigned __int16)v25
                + *(_QWORD *)(UserSessionState + 19920);
            v35 = (ULONG_PTR *)HMPkheFromPhe(v33);
            LOWORD(v25) = WORD1(v25) & 0x7FFF;
            if ( ((WORD1(v25) & 0x7FFF) == *(_WORD *)(v33 + 26)
               || (_WORD)v25 == 0x7FFF
               || !(_WORD)v25 && PsGetCurrentProcessWow64Process(v23, v34))
              && (*(_BYTE *)(v33 + 25) & 1) == 0
              && *(_BYTE *)(v33 + 24) == 1 )
            {
              v36 = *v35;
              if ( *v35 )
              {
                if ( (*(_BYTE *)(*(_QWORD *)(v36 + 40) + 31LL) & 0x40) == 0 || v24 == *(_QWORD *)(v36 + 16) )
                {
                  v37 = *v35;
                  BugCheckParameter3[0] = *(_QWORD *)(v24 + 448);
                  *(_QWORD *)(v24 + 448) = BugCheckParameter3;
                  BugCheckParameter3[1] = v36;
                  HMLockObject(v37);
                  xxxInternalDoSyncPaint(v36, a2);
                  v39 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v38);
                  if ( v39 )
                    v40 = *v39;
                  else
                    v40 = 0LL;
                  v41 = *(ULONG_PTR **)(v40 + 448);
                  if ( v41 != BugCheckParameter3 )
                    KeBugCheckEx(0x164u, 0x3BuLL, v40, (ULONG_PTR)BugCheckParameter3, 0LL);
                  *(_QWORD *)(v40 + 448) = *v41;
                  HMUnlockObject(v41[1]);
                }
              }
            }
          }
        }
        v25 = i[1];
      }
      FreeHwndList(v11);
    }
  }
}
