/*
 * XREFs of NtGdiGetDCObject @ 0x1C0040C40
 * Callers:
 *     CreateCompatiblePublicDC @ 0x1C00CCE28 (CreateCompatiblePublicDC.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0027E60 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C002DBA0 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     GreDereferenceObject @ 0x1C007F7C0 (GreDereferenceObject.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00E4674 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C014B6AC (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C014B71C (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C014B76C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetDCObject(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // r14
  bool v4; // zf
  _QWORD *v5; // rax
  __int64 v6; // rdx
  int v7; // ebx
  struct SURFACE *v8; // r14
  __int64 *v10; // rax
  __int64 v11; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rsi
  DC *v19; // r15
  __int64 v20; // rbx
  char v21; // bl
  __int64 v22; // rax
  DCVISRGNSHARELOCK *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v26[2]; // [rsp+38h] [rbp-41h] BYREF
  DC *v27[3]; // [rsp+48h] [rbp-31h] BYREF
  __int128 v28; // [rsp+60h] [rbp-19h] BYREF
  __int64 v29; // [rsp+70h] [rbp-9h]
  int v30; // [rsp+78h] [rbp-1h]
  _QWORD v31[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v32; // [rsp+90h] [rbp+17h]
  __int64 v33; // [rsp+98h] [rbp+1Fh]
  HDC v34; // [rsp+A0h] [rbp+27h]
  int v35; // [rsp+A8h] [rbp+2Fh]
  char v36; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v37; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  v26[1] = 0LL;
  v3 = 0LL;
  v26[0] = HmgLockEx(a1, a2, 0LL);
  if ( v26[0] )
  {
    v4 = (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v26) == 0;
    v5 = (_QWORD *)v26[0];
    if ( v4 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v26[0] + 12LL));
      v5 = 0LL;
      v26[0] = 0LL;
    }
    if ( v5 )
    {
      v6 = v5[10];
      v7 = *(_DWORD *)(v6 + 8);
      if ( (v7 & 0x1000) != 0 )
      {
        GreDCSelectBrush(v5, *(_QWORD *)(v6 + 16));
        v5 = (_QWORD *)v26[0];
      }
      if ( (v7 & 0x2000) != 0 )
      {
        GreDCSelectPen(v5, *(_QWORD *)(v5[10] + 24LL));
        v5 = (_QWORD *)v26[0];
      }
      if ( v2 == 327680 )
      {
        v31[1] = 0LL;
        v28 = 0LL;
        v29 = 0LL;
        v30 = 0;
        v31[0] = 0LL;
        v34 = 0LL;
        v33 = 0LL;
        v32 = 0LL;
        DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v28, (struct XDCOBJ *)v26);
        v8 = *(struct SURFACE **)(v26[0] + 512LL);
        if ( !v8 )
          v8 = SURFACE::pdibDefault;
        v3 = *((_QWORD *)v8 + 4);
        if ( v31[0] )
        {
          v11 = *(_QWORD *)(v31[0] + 48LL);
          if ( (v30 & 0x1000) != 0 )
          {
            DEVLOCKOBJ::bUnMapTrgSurfaceView((DEVLOCKOBJ *)&v28);
            if ( (v30 & 0x10) != 0 )
            {
              *(_DWORD *)(v31[0] + 36LL) &= ~0x4000u;
              *(_QWORD *)(v31[0] + 512LL) = *(_QWORD *)(v11 + 2576);
            }
            DEVLOCKOBJ::vClearRenderState((DEVLOCKOBJ *)&v28);
          }
          XDCOBJ::vUnlock((XDCOBJ *)v31);
          v31[0] = 0LL;
        }
        if ( (v30 & 0x1000) != 0 )
        {
          GreDecLockCount();
          v30 &= ~0x1000u;
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          if ( ThreadWin32Thread )
          {
            *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
            *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
          }
        }
        if ( (_QWORD)v28 )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v28);
          GreReleaseSemaphoreInternal(v28);
        }
        if ( (v30 & 8) != 0 )
          v30 &= ~8u;
        if ( *((_QWORD *)&v28 + 1) )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsemDMC", *((_QWORD *)&v28 + 1));
          GreReleaseSemaphoreInternal(*((_QWORD *)&v28 + 1));
        }
        if ( v33 )
        {
          v27[1] = 0LL;
          XDCOBJ::vLock((XDCOBJ *)v27, v34);
          LOBYTE(v13) = 5;
          v14 = HmgShareLock(v32, v13);
          LOBYTE(v15) = 5;
          v16 = (__int64 *)v14;
          v17 = HmgShareLock(v33, v15);
          v18 = *v16;
          v19 = v27[0];
          v20 = v17;
          *((_QWORD *)v27[0] + 64) = v17;
          DEC_SHARE_REF_CNT(v16);
          v25 = 0LL;
          DEC_SHARE_REF_CNT(v20);
          v37 = 0LL;
          GreDereferenceObject(v18, 1LL);
          v34 = 0LL;
          v32 = 0LL;
          *((_DWORD *)v19 + 9) |= v35;
          if ( (*((_DWORD *)v19 + 9) & 0x200) != 0 )
          {
            v21 = 0;
            if ( !(unsigned int)GreGetLockCount()
              && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
            {
              GreAcquireSemaphoreSharedInternal(ghsemGreLock);
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
              v21 = 1;
            }
            DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v36);
            v22 = HmgShareUnlockRemoveObject(v33, 0LL, 0LL, 0LL, 5);
            if ( v22 )
              SURFACE::bDeleteSurface(v22, 0LL, 1LL);
            *((_QWORD *)v19 + 65) = 0LL;
            DC::vClearRendering(v19);
            v33 = 0LL;
            DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v23);
            if ( v21 )
            {
              EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
              GreReleaseSemaphoreInternal(ghsemGreLock);
            }
          }
          else
          {
            v24 = HmgShareUnlockRemoveObject(v33, 0LL, 0LL, 0LL, 5);
            if ( v24 )
              SURFACE::bDeleteSurface(v24, 0LL, 1LL);
            *((_QWORD *)v19 + 65) = 0LL;
            v33 = 0LL;
          }
          XDCOBJ::vUnlock((XDCOBJ *)v27);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v37);
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v25);
        }
        goto LABEL_21;
      }
      if ( v2 == 0x80000 )
      {
        v3 = v5[11];
      }
      else if ( v2 == 655360 )
      {
        v3 = *(_QWORD *)(v5[10] + 176LL);
      }
      else
      {
        if ( v2 == 0x100000 )
        {
          v10 = (__int64 *)v5[18];
        }
        else
        {
          if ( v2 != 3145728 && v2 != 5242880 )
            goto LABEL_21;
          v10 = (__int64 *)v5[19];
        }
        v3 = *v10;
      }
LABEL_21:
      XDCOBJ::RestoreAttributes((XDCOBJ *)v26);
      _InterlockedDecrement((volatile signed __int32 *)(v26[0] + 12LL));
    }
  }
  return v3;
}
