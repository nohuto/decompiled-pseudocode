/*
 * XREFs of DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x140071F20
 * Callers:
 *     <none>
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400150C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1400718A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x14017515C (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x14030CA70 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKOBJ_bPrepareTrgDcoWrap(__int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v11; // r13
  unsigned int v12; // r15d
  __int64 v13; // r12
  struct _DC_ATTR *UserAttr; // rax
  DC *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rbx
  unsigned int v20; // esi
  Gre::Base *v21; // rcx
  HSEMAPHORE v22; // rsi
  struct _GRETHREAD *v23; // rax
  __int64 v24; // rcx
  struct _GRETHREAD *v25; // rbx
  __int64 v26; // rdx
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v28; // rdx
  bool v29; // zf
  __int64 v30; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rsi
  unsigned int v40; // edi
  __int64 v41; // r14
  struct _DC_ATTR *v42; // rax
  int v43; // r8d
  unsigned __int64 i; // rcx
  int v45; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v4 = 1;
  if ( !a2 )
    goto LABEL_2;
  v6 = *a2;
  if ( (*(_DWORD *)(v6 + 36) & 0x200) == 0 )
    goto LABEL_2;
  v7 = *(_QWORD *)(v6 + 48);
  v8 = HmgLock(*(_QWORD *)(a1 + 48), *(_QWORD *)v6, 1LL, 0LL);
  *(_QWORD *)(a1 + 32) = v8;
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v8 + 12));
      *(_QWORD *)(a1 + 32) = 0LL;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 )
  {
    GrepAuditBehaviorRestrictionViolations(1LL);
  }
  v9 = *(_QWORD *)(a1 + 32);
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 44) & 2) == 0 )
    {
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      v11 = *(_QWORD *)(a1 + 32);
      v12 = CurrentProcessId & 0xFFFFFFFC;
      if ( *(_QWORD *)v11 )
      {
        v13 = HmgPentryFromPobj(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 32));
      }
      else
      {
        v13 = v11 + 2152;
        *(_OWORD *)(v11 + 2152) = 0LL;
        *(_QWORD *)(v11 + 2168) = 0LL;
        *(_DWORD *)(v11 + 2160) = -2147483630;
        *(_QWORD *)(v11 + 2168) = GreEncodeUserModePointer(0LL);
      }
      if ( v12 == (*(_DWORD *)(v13 + 8) & 0xFFFFFFFE) )
      {
        UserAttr = DCOBJ::GetUserAttr((DCOBJ *)(a1 + 32));
        if ( UserAttr )
        {
          if ( !DC::SaveAttributes(*(DC **)(a1 + 32), UserAttr) )
          {
            _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)(a1 + 32) + 12LL));
            *(_QWORD *)(a1 + 32) = 0LL;
            goto LABEL_18;
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 44LL) |= 2u;
      *(_DWORD *)(a1 + 40) = 1;
    }
    v15 = *(DC **)(a1 + 32);
    if ( (*((_DWORD *)v15 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(v15);
  }
LABEL_18:
  v16 = *(_QWORD *)(a1 + 32);
  v17 = *(_QWORD *)(v7 + 1408);
  if ( !v16 || !*(_BYTE *)(a1 + 129) )
  {
LABEL_19:
    v4 = 0;
LABEL_2:
    *(_QWORD *)(a1 + 32) = 0LL;
    return v4;
  }
  if ( (*(_DWORD *)(*a2 + 36) & 0x4001) == 1 && v17 && !*(_QWORD *)(a1 + 136) )
  {
    *(_DWORD *)(v16 + 36) |= 0x4000u;
    DC::pSurface(*(DC **)(a1 + 32), (struct SURFACE *)(v17 - 24), v17);
    *(_DWORD *)(a1 + 24) |= 0x10u;
  }
  if ( (*(_DWORD *)(a1 + 24) & 0x1000) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 32);
    if ( v18 )
    {
      if ( *(_BYTE *)(a1 + 129) )
      {
        v19 = *(_QWORD *)(v18 + 496);
        if ( v19 )
        {
          v20 = SURFACE::Map(v19, v16, v17);
          if ( v20 <= 1 )
          {
            if ( (*(_DWORD *)(v19 + 112) & 0x800) != 0
              && *(_QWORD *)(v19 + 248)
              && (unsigned int)bHookRedir((struct XDCOBJ *)(a1 + 32)) )
            {
              *(_DWORD *)(a1 + 24) |= 0x400u;
            }
            if ( (*(_DWORD *)(v19 + 112) & 0x10) != 0 && (unsigned int)bHookBmpDrv((struct XDCOBJ *)(a1 + 32)) )
              *(_DWORD *)(a1 + 24) |= 0x2000u;
            if ( v20 == 1 )
              *(_DWORD *)(a1 + 24) |= 0x40u;
            return v4;
          }
          if ( v20 != 2 )
            return v4;
          v21 = *(Gre::Base **)(a1 + 32);
          if ( v21
            && *(_BYTE *)(a1 + 129)
            && (*(_DWORD *)(a1 + 24) & 0x1000) != 0
            && (*((_DWORD *)v21 + 9) & 0x200) != 0 )
          {
            v22 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v21) + 728LL);
            GreAcquireSemaphoreSharedInternal(v22);
            v23 = GreGetCurrentThreadCrossSessionCheck();
            v25 = v23;
            if ( v23 )
            {
              v26 = *(_QWORD *)v23;
              if ( (*(_QWORD *)v23 & 0xFFFFFFDFFFFFFFF8uLL) != 0 && (*(_QWORD *)v23 & 8) == 0 )
              {
                v43 = 38;
                for ( i = 0LL; i < 0x40; ++i )
                {
                  v45 = i;
                  if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v26) == 0 )
                    v45 = v43;
                  v43 = v45;
                }
                if ( v45 > 3 && v45 != 38 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(i, v26);
              }
              v24 = *((unsigned __int8 *)v25 + 11);
              *((_BYTE *)v25 + 11) = v24 + 1;
              if ( !(_BYTE)v24 )
                *(_QWORD *)v25 |= 8uLL;
            }
            if ( !*(_QWORD *)(a1 + 136) )
              DC::vClearRendering(*(DC **)(a1 + 32));
            if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 36LL) & 0x4000) == 0 )
            {
              CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v24);
              if ( CurrentThreadWin32Thread )
              {
                v28 = 0LL;
                v29 = *CurrentThreadWin32Thread == 0LL;
                v30 = *CurrentThreadWin32Thread + 8LL;
                if ( !v29 )
                  v28 = v30;
                if ( v28 )
                  *(_DWORD *)(v28 + 336) &= ~1u;
              }
            }
            EtwTraceGreLockReleaseSemaphore(L"DCVisRgn", v22);
            CurrentThread = KeGetCurrentThread();
            v32 = 0LL;
            if ( !(unsigned __int8)KeIsAttachedProcess()
              || (CurrentProcess = PsGetCurrentProcess(v33),
                  ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                  CurrentThreadProcess = PsGetCurrentThreadProcess(),
                  ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
                v32 = *ThreadWin32Thread;
              v35 = 0LL;
              if ( v32 )
                v35 = v32 + 8;
              if ( v35 )
              {
                v29 = (*(_BYTE *)(v35 + 11))-- == 1;
                if ( v29 )
                  *(_QWORD *)v35 &= ~8uLL;
                if ( !*(_QWORD *)v35 )
                  GrepOnAllLocksReleased();
              }
            }
            GreReleaseSemaphoreSharedInternal(v22);
          }
          v36 = *(_QWORD *)(a1 + 32);
          if ( v36 && *(_BYTE *)(a1 + 128) )
          {
            *(_DWORD *)(v36 + 40) &= ~2u;
            *(_BYTE *)(a1 + 128) = 0;
          }
          v37 = *(_QWORD *)(a1 + 32);
          if ( v37 )
          {
            if ( *(_DWORD *)(a1 + 40) && (*(_DWORD *)(v37 + 44) & 2) != 0 )
            {
              v38 = (unsigned int)PsGetCurrentProcessId();
              v39 = *(_QWORD *)(a1 + 32);
              v40 = v38 & 0xFFFFFFFC;
              if ( *(_QWORD *)v39 )
              {
                v41 = HmgPentryFromPobj(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 32));
              }
              else
              {
                v41 = v39 + 2152;
                *(_OWORD *)(v39 + 2152) = 0LL;
                *(_QWORD *)(v39 + 2168) = 0LL;
                *(_DWORD *)(v39 + 2160) = -2147483630;
                *(_QWORD *)(v39 + 2168) = GreEncodeUserModePointer(0LL);
              }
              if ( v40 == (*(_DWORD *)(v41 + 8) & 0xFFFFFFFE) )
              {
                v42 = DCOBJ::GetUserAttr((DCOBJ *)(a1 + 32));
                if ( v42 )
                  DC::RestoreAttributes(*(DC **)(a1 + 32), v42);
              }
              *(_DWORD *)(*(_QWORD *)(a1 + 32) + 44LL) &= ~2u;
              *(_DWORD *)(a1 + 40) = 0;
            }
            v4 = 0;
            _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)(a1 + 32) + 12LL));
            goto LABEL_2;
          }
          goto LABEL_19;
        }
      }
    }
  }
  return v4;
}
