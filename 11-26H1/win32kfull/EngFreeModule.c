/*
 * XREFs of EngFreeModule @ 0x14031C020
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401F2424 (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ?vUnmapFile@@YAXPEAUFILEVIEW@@H@Z @ 0x140265250 (-vUnmapFile@@YAXPEAUFILEVIEW@@H@Z.c)
 *     ??0?$SEMOBJ@$0BL@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14031BD24 (--0-$SEMOBJ@$0BL@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __stdcall EngFreeModule(HANDLE h)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  char *v3; // rsi
  int v4; // ebp
  __int64 v5; // rcx
  char **v6; // rax
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v8; // rax
  bool v9; // zf
  HSEMAPHORE v10; // [rsp+30h] [rbp+8h] BYREF

  if ( h )
  {
    v2 = Gre::Base::Globals((Gre::Base *)h);
    v3 = (char *)h - 24;
    SEMOBJ<27>::SEMOBJ<27>(&v10, v2);
    v4 = *((_DWORD *)h - 2) - 1;
    *((_DWORD *)h - 2) = v4;
    if ( !v4 )
    {
      v5 = *(_QWORD *)v3;
      if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v6 = (char **)*((_QWORD *)v3 + 1), *v6 != v3) )
        __fastfail(3u);
      *v6 = (char *)v5;
      *(_QWORD *)(v5 + 8) = v6;
    }
    if ( v10 )
    {
      GlobalLockName = GrepGetGlobalLockName(27);
      EtwTraceGreLockReleaseSemaphore(GlobalLockName, v10);
      v8 = GreGetCurrentThreadCrossSessionCheck();
      if ( v8 )
      {
        v9 = (*(_QWORD *)v8 & 0xFFFFFFFFF7FFFFFFuLL) == 0;
        *(_QWORD *)v8 &= ~0x8000000uLL;
        if ( v9 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v10);
    }
    if ( !v4 )
    {
      vUnmapFile((struct FILEVIEW *)h);
      Win32FreePool((char *)h - *((unsigned int *)v3 + 5));
    }
  }
}
