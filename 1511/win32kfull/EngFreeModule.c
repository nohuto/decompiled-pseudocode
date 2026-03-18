/*
 * XREFs of EngFreeModule @ 0x1C027E460
 * Callers:
 *     <none>
 * Callees:
 *     vUnmapFile @ 0x1C00D8F10 (vUnmapFile.c)
 */

void __stdcall EngFreeModule(HANDLE h)
{
  HSEMAPHORE v1; // rax
  char *v2; // rdi
  bool v4; // zf
  int v5; // esi
  __int64 v6; // rdx
  char **v7; // rcx

  if ( h )
  {
    v1 = GreEngLoadModuleAllocListLock;
    v2 = (char *)h - 24;
    if ( GreEngLoadModuleAllocListLock )
    {
      GreAcquireSemaphore(GreEngLoadModuleAllocListLock);
      v1 = GreEngLoadModuleAllocListLock;
    }
    v4 = (*((_DWORD *)v2 + 4))-- == 1;
    v5 = *((_DWORD *)v2 + 4);
    if ( v4 )
    {
      v6 = *(_QWORD *)v2;
      v7 = (char **)*((_QWORD *)v2 + 1);
      if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || *v7 != v2 )
        __fastfail(3u);
      *v7 = (char *)v6;
      *(_QWORD *)(v6 + 8) = v7;
    }
    if ( *(_QWORD *)v1 )
    {
      EtwTraceGreLockReleaseSemaphore(L"GreEngLoadModuleAllocListLock", *(_QWORD *)v1);
      GreReleaseSemaphoreInternal(GreEngLoadModuleAllocListLock);
    }
    if ( !v5 )
    {
      vUnmapFile((PVOID *)h);
      Win32FreePool((char *)h - *((unsigned int *)v2 + 5));
    }
  }
}
