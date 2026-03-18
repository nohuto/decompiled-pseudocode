/*
 * XREFs of ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C027E15C
 * Callers:
 *     EngLoadModule @ 0x1C027EB30 (EngLoadModule.c)
 *     EngLoadModuleForWrite @ 0x1C027EB40 (EngLoadModuleForWrite.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0031DE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     bMapFile @ 0x1C013CA40 (bMapFile.c)
 *     ?GetModuleHandleAndIncrementRefcount@@YAPEAXPEAG@Z @ 0x1C027E0B0 (-GetModuleHandleAndIncrementRefcount@@YAPEAXPEAG@Z.c)
 *     MakeSystemRelativePath @ 0x1C02D322C (MakeSystemRelativePath.c)
 */

__int64 __fastcall LoadModuleWorkHorse(WCHAR *Source, int a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // r15
  char *v8; // rax
  char *v9; // rbp
  char *v10; // rbx
  unsigned __int16 *v11; // r8
  HSEMAPHORE v12; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v14; // rdx
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
        v9 = v8;
        if ( v8 )
        {
          v10 = &v8[v7];
          if ( (unsigned int)bMapFile(Destination.Buffer, &v8[v7 + 24], a2, 0LL) )
          {
            v6 = (__int64)(v10 + 24);
            v11 = Source;
            if ( a2 )
              v11 = (unsigned __int16 *)&qword_1C015E270;
            StringCchCopyW(v9, (unsigned __int64)(unsigned int)v7 >> 1, (char *)v11);
            v12 = GreEngLoadModuleAllocListLock;
            *((_DWORD *)v10 + 4) = 1;
            *((_DWORD *)v10 + 5) = v7 + 24;
            if ( GreEngLoadModuleAllocListLock )
            {
              GreAcquireSemaphore(GreEngLoadModuleAllocListLock);
              v12 = GreEngLoadModuleAllocListLock;
            }
            Blink = GreEngLoadModuleAllocList.Blink;
            *(_QWORD *)v10 = GreEngLoadModuleAllocList.Flink;
            *((_QWORD *)v10 + 1) = Blink;
            if ( Blink->Flink != GreEngLoadModuleAllocList.Flink )
              __fastfail(3u);
            Blink->Flink = (struct _LIST_ENTRY *)v10;
            GreEngLoadModuleAllocList.Blink = (struct _LIST_ENTRY *)v10;
            v14 = *(_QWORD *)v12;
            if ( v14 )
            {
              EtwTraceGreLockReleaseSemaphore(L"GreEngLoadModuleAllocListLock", v14);
              GreReleaseSemaphoreInternal(GreEngLoadModuleAllocListLock);
            }
          }
          else
          {
            Win32FreePool(v9);
          }
        }
        Win32FreePool(Destination.Buffer);
      }
      return v6;
    }
  }
  return result;
}
