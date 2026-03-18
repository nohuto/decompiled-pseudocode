/*
 * XREFs of ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C027BD8C
 * Callers:
 *     EngLoadModule @ 0x1C027C780 (EngLoadModule.c)
 *     EngLoadModuleForWrite @ 0x1C027C790 (EngLoadModuleForWrite.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0060C84 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     bMapFile @ 0x1C00BCB3C (bMapFile.c)
 *     ?GetModuleHandleAndIncrementRefcount@@YAPEAXPEAG@Z @ 0x1C027BCE0 (-GetModuleHandleAndIncrementRefcount@@YAPEAXPEAG@Z.c)
 *     MakeSystemRelativePath @ 0x1C02D76B0 (MakeSystemRelativePath.c)
 */

__int64 __fastcall LoadModuleWorkHorse(WCHAR *Source, int a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // r15
  char *v8; // rax
  __int64 v9; // rdx
  char *v10; // rbp
  char *v11; // rbx
  __int64 v12; // rdx
  unsigned __int16 *v13; // r8
  HSEMAPHORE v14; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-38h] BYREF

  v3 = -1LL;
  result = -1LL;
  v6 = 0LL;
  do
    ++result;
  while ( Source[result] );
  if ( result )
  {
    if ( a2 || (result = (__int64)GetModuleHandleAndIncrementRefcount(Source), (v6 = result) == 0) )
    {
      do
        ++v3;
      while ( Source[v3] );
      v7 = (2 * (_DWORD)v3 + 9) & 0xFFFFFFF8;
      if ( (unsigned int)MakeSystemRelativePath(Source, &Destination) )
      {
        v8 = (char *)PALLOCMEM2((unsigned int)(v7 + 104), 1818846791LL, 1);
        v10 = v8;
        if ( v8 )
        {
          v11 = &v8[v7];
          if ( (unsigned int)bMapFile(Destination.Buffer, &v8[v7 + 24], a2, 0LL) )
          {
            v6 = (__int64)(v11 + 24);
            v13 = Source;
            if ( a2 )
              v13 = (unsigned __int16 *)&qword_1C015B240;
            StringCchCopyW(v10, (unsigned __int64)(unsigned int)v7 >> 1, (char *)v13);
            v14 = GreEngLoadModuleAllocListLock;
            *((_DWORD *)v11 + 4) = 1;
            *((_DWORD *)v11 + 5) = v7 + 24;
            if ( GreEngLoadModuleAllocListLock )
            {
              GreAcquireSemaphore(GreEngLoadModuleAllocListLock);
              v14 = GreEngLoadModuleAllocListLock;
            }
            Blink = GreEngLoadModuleAllocList.Blink;
            if ( Blink->Flink != GreEngLoadModuleAllocList.Flink )
              __fastfail(3u);
            *(_QWORD *)v11 = GreEngLoadModuleAllocList.Flink;
            *((_QWORD *)v11 + 1) = Blink;
            Blink->Flink = (struct _LIST_ENTRY *)v11;
            GreEngLoadModuleAllocList.Blink = (struct _LIST_ENTRY *)v11;
            v9 = *(_QWORD *)v14;
            if ( v9 )
            {
              EtwTraceGreLockReleaseSemaphore(L"GreEngLoadModuleAllocListLock", v9);
              GreReleaseSemaphoreInternal(GreEngLoadModuleAllocListLock);
            }
          }
          else
          {
            Win32FreePool(v10, v12);
          }
        }
        Win32FreePool(Destination.Buffer, v9);
      }
      return v6;
    }
  }
  return result;
}
