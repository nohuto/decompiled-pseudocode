/*
 * XREFs of VerifierEngFreeMem @ 0x1403499D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BN@@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x14034938C (--0-$SEMOBJ@$0BN@@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 */

void __fastcall VerifierEngFreeMem(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  HSEMAPHORE v6; // rbx
  struct _GRETHREAD *v7; // rax
  bool v8; // zf
  HSEMAPHORE v9; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v2 = a1;
    v3 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
    if ( (*(_DWORD *)(v3 + 4760) & 8) != 0 )
    {
      v2 -= 4;
      SEMOBJ<29>::SEMOBJ<29>(&v9, v3);
      v4 = *v2;
      if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v5 = (_QWORD *)v2[1], (_QWORD *)*v5 != v2) )
        __fastfail(3u);
      v6 = v9;
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      if ( v6 )
      {
        EtwTraceGreLockReleaseSemaphore(L"PoolTracker", v6);
        v7 = GreGetCurrentThreadCrossSessionCheck();
        if ( v7 )
        {
          v8 = (*(_QWORD *)v7 & 0xFFFFFFFFDFFFFFFFuLL) == 0;
          *(_QWORD *)v7 &= ~0x20000000uLL;
          if ( v8 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v6);
      }
    }
    MultiUserGreTrackRemoveEngResource(v2 - 4);
    Win32FreePool(v2 - 4);
  }
}
