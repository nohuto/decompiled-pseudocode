/*
 * XREFs of HmgAllocateDcAttr @ 0x1C002498C
 * Callers:
 *     GreSetupDCAttributes @ 0x1C0020D30 (GreSetupDCAttributes.c)
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C005BF2C (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00C039C (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateDcAttr()
{
  __int64 v0; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 *v12; // rdx
  __int64 **v13; // rcx
  char *v14; // rdi
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *v21; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v0 = *ThreadWin32Thread;
  v3 = *(_QWORD *)(v0 + 24);
  v4 = 0LL;
  if ( v3 )
  {
    *(_QWORD *)(v0 + 24) = 0LL;
    return v3;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  GreAcquireHmgrSemaphore();
  if ( *(_QWORD *)(CurrentProcessWin32Process + 40) || (v14 = (char *)HmgAllocateSecureUserMemory(&v21)) == 0LL )
  {
LABEL_7:
    v8 = *(_QWORD *)(CurrentProcessWin32Process + 40);
    if ( v8 )
    {
      v9 = CurrentProcessWin32Process + 192;
      v4 = *(_QWORD *)(CurrentProcessWin32Process + 40);
      v10 = *(__int64 **)(CurrentProcessWin32Process + 192);
      if ( (*((_DWORD *)v10 + 4))-- == 1 )
      {
        v12 = (__int64 *)*v10;
        v13 = (__int64 **)v10[1];
        if ( *(__int64 **)(*v10 + 8) != v10 || *v13 != v10 )
          __fastfail(3u);
        *v13 = v12;
        v12[1] = (__int64)v13;
        Win32FreePool(v10);
        if ( *(_QWORD *)v9 == v9 )
        {
          *(_QWORD *)(CurrentProcessWin32Process + 40) = 0LL;
          goto LABEL_11;
        }
        v8 = *(_QWORD *)(*(_QWORD *)v9 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v9 + 16LL) - 1) + 24);
      }
      else
      {
        v8 = v10[(unsigned int)(*((_DWORD *)v10 + 4) - 1) + 3];
      }
      *(_QWORD *)(CurrentProcessWin32Process + 40) = v8;
    }
LABEL_11:
    GreReleaseHmgrSemaphore(v8, v7);
    return v4;
  }
  v15 = PALLOCMEM2(0x60uLL);
  if ( v15 )
  {
    v16 = (__int64 *)(CurrentProcessWin32Process + 192);
    v17 = *(_QWORD *)(CurrentProcessWin32Process + 192);
    if ( *(_QWORD *)(v17 + 8) != CurrentProcessWin32Process + 192 )
      __fastfail(3u);
    *(_QWORD *)v15 = v17;
    *(_QWORD *)(v15 + 8) = v16;
    *(_QWORD *)(v17 + 8) = v15;
    v7 = 9LL;
    *v16 = v15;
    v18 = (_QWORD *)(v15 + 24);
    *(_DWORD *)(v15 + 16) = 9;
    *(_QWORD *)(CurrentProcessWin32Process + 40) = v14 + 3328;
    do
    {
      *v18 = v14;
      v14 += 416;
      ++v18;
      --v7;
    }
    while ( v7 );
    goto LABEL_7;
  }
  HmgFreeAllocateSecureUserMemory(v14, v21);
  GreReleaseHmgrSemaphore(v20, v19);
  return 0LL;
}
