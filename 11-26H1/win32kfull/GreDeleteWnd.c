/*
 * XREFs of GreDeleteWnd @ 0x14031A0A0
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?GrepDoBanding@@YAHAEAVXDCOBJ@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x14028FC9C (-GrepDoBanding@@YAHAEAVXDCOBJ@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     NtGdiEndPage @ 0x140312400 (NtGdiEndPage.c)
 *     EngDeleteWnd @ 0x140319F60 (EngDeleteWnd.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006BE08 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401F2424 (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140288CE4 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x140318488 (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     ?vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x14031881C (-vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 *     ??0?$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z @ 0x140318F6C (--0-$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z.c)
 *     ?bValid@EWNDOBJ@@QEBAHXZ @ 0x140319098 (-bValid@EWNDOBJ@@QEBAHXZ.c)
 *     ?vDelete@EWNDOBJ@@QEAAXXZ @ 0x1403190C4 (-vDelete@EWNDOBJ@@QEAAXXZ.c)
 */

void __fastcall GreDeleteWnd(struct EWNDOBJ *a1)
{
  Gre::Base *v2; // rcx
  __int64 v3; // rdi
  struct Gre::Base::SESSION_GLOBALS *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v8; // rax
  bool v9; // zf
  struct EWNDOBJ *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  _QWORD *v18; // rcx
  EWNDOBJ *v19; // rcx
  const wchar_t *v20; // rax
  struct _GRETHREAD *v21; // rax
  _BYTE v22[184]; // [rsp+20h] [rbp-B8h] BYREF
  HSEMAPHORE v23; // [rsp+E0h] [rbp+8h] BYREF
  HSEMAPHORE v24; // [rsp+E8h] [rbp+10h] BYREF
  HDEV v25; // [rsp+F0h] [rbp+18h] BYREF

  if ( EWNDOBJ::bValid(a1) )
  {
    v3 = *((_QWORD *)v2 + 21);
    v4 = Gre::Base::Globals(v2);
    v25 = *(HDEV *)(*(_QWORD *)(v3 + 32) + 48LL);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v22, (struct PDEVOBJ *)&v25);
    SEMOBJ<33>::SEMOBJ<33>(&v24, v4);
    SEMOBJ<34>::SEMOBJ<34>(&v23, (__int64)a1);
    TRACKOBJ::vUpdateDrv((TRACKOBJ *)v3, a1, 0x20u);
    if ( v23 )
    {
      GlobalLockName = GrepGetGlobalLockName(34);
      EtwTraceGreLockReleaseSemaphore(GlobalLockName, v23);
      v8 = GreGetCurrentThreadCrossSessionCheck();
      if ( v8 )
      {
        v9 = (*(_QWORD *)v8 & 0xFFFFFFFBFFFFFFFFuLL) == 0;
        *(_QWORD *)v8 &= ~0x400000000uLL;
        if ( v9 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v23);
    }
    v10 = *(struct EWNDOBJ **)(v3 + 24);
    if ( v10 == a1 )
    {
      *(_QWORD *)(v3 + 24) = *((_QWORD *)a1 + 20);
    }
    else
    {
      while ( v10 )
      {
        v11 = (_QWORD *)((char *)v10 + 160);
        v10 = (struct EWNDOBJ *)*((_QWORD *)v10 + 20);
        if ( v10 == a1 )
        {
          *v11 = *((_QWORD *)a1 + 20);
          break;
        }
      }
    }
    EWNDOBJ::vDelete(a1, v5, v6);
    *((_DWORD *)a1 + 38) = 0;
    Win32FreePool(a1);
    if ( !*(_QWORD *)(v3 + 24) )
    {
      v15 = *(_QWORD *)(W32GetSessionState(v13, v12) + 96);
      v17 = *(_QWORD *)(v15 + 4816);
      if ( v3 == v17 )
      {
        *(_QWORD *)(v15 + 4816) = *(_QWORD *)(v3 + 8);
      }
      else
      {
        while ( v17 )
        {
          v18 = (_QWORD *)(v17 + 8);
          v17 = *(_QWORD *)(v17 + 8);
          if ( v17 == v3 )
          {
            *v18 = *(_QWORD *)(v3 + 8);
            break;
          }
        }
      }
      v19 = *(EWNDOBJ **)(v3 + 16);
      if ( v19 )
      {
        EWNDOBJ::vDelete(v19, v14, v16);
        *(_DWORD *)(*(_QWORD *)(v3 + 16) + 152LL) = 0;
        Win32FreePool(*(void **)(v3 + 16));
      }
      *(_DWORD *)v3 = 0;
      Win32FreePool((void *)v3);
    }
    vSpWndobjChange(v25, 0LL);
    if ( v24 )
    {
      v20 = GrepGetGlobalLockName(33);
      EtwTraceGreLockReleaseSemaphore(v20, v24);
      v21 = GreGetCurrentThreadCrossSessionCheck();
      if ( v21 )
      {
        v9 = (*(_QWORD *)v21 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
        *(_QWORD *)v21 &= ~0x200000000uLL;
        if ( v9 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v24);
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v22);
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v25, v4);
  }
}
