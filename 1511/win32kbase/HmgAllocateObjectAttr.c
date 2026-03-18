/*
 * XREFs of HmgAllocateObjectAttr @ 0x1C005D650
 * Callers:
 *     GreSetBrushOwner @ 0x1C00357B0 (GreSetBrushOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C005D1F0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C005D500 (NtGdiCreateRectRgn.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C005D79C (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00B5A24 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 __fastcall HmgAllocateObjectAttr(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 *v14; // rax
  char *v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 *v21; // rdx
  __int64 **v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  void *v26; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v4 = 0LL;
  v5 = *(_QWORD *)(ThreadWin32Thread + 32);
  if ( v5 )
  {
    *(_QWORD *)(ThreadWin32Thread + 32) = 0LL;
    return v5;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL);
  GreAcquireHmgrSemaphore(v8, v7, v9);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 48) || (v17 = (char *)HmgAllocateSecureUserMemory(&v26)) == 0LL )
  {
LABEL_3:
    v12 = *(_QWORD *)(CurrentProcessWin32Process + 48);
    if ( v12 )
    {
      v13 = CurrentProcessWin32Process + 208;
      v4 = *(_QWORD *)(CurrentProcessWin32Process + 48);
      v14 = *(__int64 **)(CurrentProcessWin32Process + 208);
      if ( (*((_DWORD *)v14 + 4))-- == 1 )
      {
        v21 = (__int64 *)*v14;
        v22 = (__int64 **)v14[1];
        if ( *(__int64 **)(*v14 + 8) != v14 || *v22 != v14 )
          __fastfail(3u);
        *v22 = v21;
        v21[1] = (__int64)v22;
        Win32FreePool();
        if ( *(_QWORD *)v13 == v13 )
        {
          *(_QWORD *)(CurrentProcessWin32Process + 48) = 0LL;
          goto LABEL_7;
        }
        v12 = *(_QWORD *)(*(_QWORD *)v13 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v13 + 16LL) - 1) + 24);
      }
      else
      {
        v12 = v14[(unsigned int)(*((_DWORD *)v14 + 4) - 1) + 3];
      }
      *(_QWORD *)(CurrentProcessWin32Process + 48) = v12;
    }
LABEL_7:
    GreReleaseHmgrSemaphore(v12, v10, v11);
    return v4;
  }
  v18 = PALLOCMEM2(0x568uLL, 1717658183LL, 0);
  if ( v18 )
  {
    v19 = *(_QWORD *)(CurrentProcessWin32Process + 208);
    *v18 = v19;
    v18[1] = CurrentProcessWin32Process + 208;
    if ( *(_QWORD *)(v19 + 8) != CurrentProcessWin32Process + 208 )
      __fastfail(3u);
    *(_QWORD *)(v19 + 8) = v18;
    v10 = 170LL;
    *(_QWORD *)(CurrentProcessWin32Process + 208) = v18;
    v20 = v18 + 3;
    *((_DWORD *)v18 + 4) = 170;
    *(_QWORD *)(CurrentProcessWin32Process + 48) = v17 + 4056;
    do
    {
      *v20 = v17;
      v17 += 24;
      ++v20;
      --v10;
    }
    while ( v10 );
    goto LABEL_3;
  }
  HmgFreeAllocateSecureUserMemory(v17, v26);
  GreReleaseHmgrSemaphore(v24, v23, v25);
  return 0LL;
}
