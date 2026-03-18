/*
 * XREFs of _EnableIAMThreadAccess @ 0x1401A2CF0
 * Callers:
 *     NtUserEnableIAMAccess @ 0x1401A2AC0 (NtUserEnableIAMAccess.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1401A2EE8 (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall EnableIAMThreadAccess(const struct tagTHREADINFO *a1, int a2)
{
  unsigned int v2; // edi
  struct tagIAM_THREAD *IAMThread; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagIAM_THREAD *v9; // rax
  __int64 v10; // rdx
  struct tagIAM_THREAD **v11; // rcx

  v2 = 0;
  if ( a2 )
  {
    IAMThread = FindIAMThread(a1);
    if ( IAMThread )
    {
LABEL_13:
      *((_QWORD *)IAMThread + 3) = *((_QWORD *)a1 + 61);
      return 1;
    }
    IAMThread = (struct tagIAM_THREAD *)Win32AllocPoolZInit(32LL, 1869443925LL);
    if ( IAMThread )
    {
      v7 = W32GetUserSessionState(v6, v5) + 71168;
      v8 = *(_QWORD *)v7;
      if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 )
        goto LABEL_5;
      *(_QWORD *)IAMThread = v8;
      *((_QWORD *)IAMThread + 1) = v7;
      *(_QWORD *)(v8 + 8) = IAMThread;
      *(_QWORD *)v7 = IAMThread;
      *((_QWORD *)IAMThread + 2) = a1;
      goto LABEL_13;
    }
  }
  else
  {
    v9 = FindIAMThread(a1);
    if ( v9 )
    {
      v10 = *(_QWORD *)v9;
      if ( *(struct tagIAM_THREAD **)(*(_QWORD *)v9 + 8LL) != v9
        || (v11 = (struct tagIAM_THREAD **)*((_QWORD *)v9 + 1), *v11 != v9) )
      {
LABEL_5:
        __fastfail(3u);
      }
      *v11 = (struct tagIAM_THREAD *)v10;
      *(_QWORD *)(v10 + 8) = v11;
      Win32FreePool(v9);
      return 1;
    }
  }
  return v2;
}
