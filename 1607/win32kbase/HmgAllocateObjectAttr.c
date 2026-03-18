/*
 * XREFs of HmgAllocateObjectAttr @ 0x1C005BDE0
 * Callers:
 *     GreSetBrushOwner @ 0x1C00246C0 (GreSetBrushOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C005B950 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C005BC90 (NtGdiCreateRectRgn.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C005BF2C (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00C039C (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateObjectAttr()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rbx
  int v4; // edx
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 *v9; // rax
  char *v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 *v18; // rdx
  __int64 **v19; // rcx
  __int64 v20; // rcx
  void *v21; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v1 = 0LL;
  v2 = *(_QWORD *)(ThreadWin32Thread + 32);
  if ( v2 )
  {
    *(_QWORD *)(ThreadWin32Thread + 32) = 0LL;
    return v2;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL);
  GreAcquireHmgrSemaphore(v5, v4, v6);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 48) || (v12 = (char *)HmgAllocateSecureUserMemory(&v21)) == 0LL )
  {
LABEL_3:
    v7 = *(_QWORD *)(CurrentProcessWin32Process + 48);
    if ( v7 )
    {
      v8 = CurrentProcessWin32Process + 208;
      v1 = *(_QWORD *)(CurrentProcessWin32Process + 48);
      v9 = *(__int64 **)(CurrentProcessWin32Process + 208);
      if ( (*((_DWORD *)v9 + 4))-- == 1 )
      {
        v18 = (__int64 *)*v9;
        v19 = (__int64 **)v9[1];
        if ( *(__int64 **)(*v9 + 8) != v9 || *v19 != v9 )
          __fastfail(3u);
        *v19 = v18;
        v18[1] = (__int64)v19;
        Win32FreePool();
        if ( *(_QWORD *)v8 == v8 )
        {
          *(_QWORD *)(CurrentProcessWin32Process + 48) = 0LL;
          goto LABEL_7;
        }
        v7 = *(_QWORD *)(*(_QWORD *)v8 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v8 + 16LL) - 1) + 24);
      }
      else
      {
        v7 = v9[(unsigned int)(*((_DWORD *)v9 + 4) - 1) + 3];
      }
      *(_QWORD *)(CurrentProcessWin32Process + 48) = v7;
    }
LABEL_7:
    GreReleaseHmgrSemaphore(v7);
    return v1;
  }
  v13 = PALLOCMEM2(0x568uLL, 1717658183LL, 0);
  if ( v13 )
  {
    v14 = (_QWORD *)(CurrentProcessWin32Process + 208);
    v15 = *(_QWORD *)(CurrentProcessWin32Process + 208);
    if ( *(_QWORD *)(v15 + 8) != CurrentProcessWin32Process + 208 )
      __fastfail(3u);
    *v13 = v15;
    v13[1] = v14;
    *(_QWORD *)(v15 + 8) = v13;
    v16 = 170LL;
    *v14 = v13;
    v17 = v13 + 3;
    *((_DWORD *)v13 + 4) = 170;
    *(_QWORD *)(CurrentProcessWin32Process + 48) = v12 + 4056;
    do
    {
      *v17 = v12;
      v12 += 24;
      ++v17;
      --v16;
    }
    while ( v16 );
    goto LABEL_3;
  }
  HmgFreeAllocateSecureUserMemory(v12, v21);
  GreReleaseHmgrSemaphore(v20);
  return 0LL;
}
