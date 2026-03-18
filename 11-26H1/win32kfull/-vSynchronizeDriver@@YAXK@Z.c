/*
 * XREFs of ?vSynchronizeDriver@@YAXK@Z @ 0x14006B94C
 * Callers:
 *     GreFlush @ 0x14006B930 (GreFlush.c)
 *     ?GreSynchronizeTimer@@YAXPEAXI_K_J@Z @ 0x140325F70 (-GreSynchronizeTimer@@YAXPEAXI_K_J@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$00@@YAXXZ @ 0x14006B7F4 (--$GrepAcquireLockValidate@$00@@YAXXZ.c)
 *     ??$GrepReleaseLockValidate@$00@@YAXXZ @ 0x14006B880 (--$GrepReleaseLockValidate@$00@@YAXXZ.c)
 *     ??$GrepReleaseLockValidate@$01@@YAXXZ @ 0x14006BBF4 (--$GrepReleaseLockValidate@$01@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x14006BD7C (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall vSynchronizeDriver(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  Gre::Base *v4; // rcx
  __int64 v5; // rbp
  struct Gre::Base::SESSION_GLOBALS *v6; // r15
  HSEMAPHORE v7; // r14
  __int64 i; // rcx
  HSEMAPHORE v9; // rbx
  struct _GRETHREAD *v10; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rbx
  HSEMAPHORE v16; // rbx
  unsigned int v17; // r9d
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v3 = a1;
  v5 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  if ( v3 == 64 )
  {
    if ( *(_DWORD *)(v5 + 4712) == -1 )
      return;
  }
  else if ( v3 != 128 || *(_QWORD *)(v5 + 4720) == -1LL )
  {
    return;
  }
  v6 = Gre::Base::Globals(v4);
  v7 = (HSEMAPHORE)(*(_QWORD *)v6 + 624LL);
  GreAcquireSemaphoreSharedInternal(v7);
  GrepAcquireLockValidate<1>();
  for ( i = 0LL; ; i = v14 )
  {
    v13 = hdevEnumerateDisplayOnly(i);
    v14 = v13;
    if ( !v13 )
      break;
    v18 = v13;
    if ( (v3 & *(_DWORD *)(v13 + 2112)) != 0 )
    {
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v18) )
      {
        v15 = *(_QWORD *)v6;
        EtwTraceGreLockAcquireSemaphoreExclusive(L"GreLock", *(_QWORD *)v6 + 1144LL, 0LL);
        GreAcquireSemaphoreInternal((HSEMAPHORE)(v15 + 1144));
        GrepAcquireLockValidate<2>();
        v16 = *(HSEMAPHORE *)(v18 + 48);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"DevLock", v16, 0LL);
        GreAcquireSemaphoreInternal(v16);
        GrepAcquireLockValidate<8>();
      }
      if ( (v3 & *(_DWORD *)(v18 + 2112)) != 0 && (*(_DWORD *)(v18 + 40) & 0x400) == 0 )
      {
        v17 = 0;
        if ( v3 == 64 )
        {
          if ( *(_DWORD *)(v5 + 4712) != -1 )
            v17 = 2;
        }
        else
        {
          v17 = *(_QWORD *)(v5 + 4720) != -1LL;
        }
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v18,
          (struct _SURFOBJ *)((*(_QWORD *)(v18 + 2544) + 24LL) & -(__int64)(*(_QWORD *)(v18 + 2544) != 0LL)),
          0LL,
          v17);
      }
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v18) )
      {
        v9 = *(HSEMAPHORE *)(v18 + 48);
        EtwTraceGreLockReleaseSemaphore(L"DevLock", v9);
        v10 = GreGetCurrentThreadCrossSessionCheck();
        if ( v10 )
        {
          if ( (*((_BYTE *)v10 + 16))-- == 1 )
            *(_QWORD *)v10 &= ~0x100uLL;
          if ( !*(_QWORD *)v10 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v9);
        v12 = *(_QWORD *)v6;
        EtwTraceGreLockReleaseSemaphore(L"GreLock", *(_QWORD *)v6 + 1144LL);
        GrepReleaseLockValidate<2>();
        GreReleaseSemaphoreExclusiveInternal((HSEMAPHORE)(v12 + 1144));
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"DynamicModeChange", v7);
  GrepReleaseLockValidate<1>();
  GreReleaseSemaphoreSharedInternal(v7);
}
