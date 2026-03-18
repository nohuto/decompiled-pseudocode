/*
 * XREFs of NtGdiGetDCObject @ 0x1C00D3E90
 * Callers:
 *     CreateCompatiblePublicDC @ 0x1C0126D64 (CreateCompatiblePublicDC.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C000C01C (GreDereferenceObject.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C001D740 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00DF1D4 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C01121D4 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0112244 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0112294 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C025E5C0 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C025FFC0 (--0DCOBJ@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C02B0114 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetDCObject(HDC a1, int a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  int v6; // esi
  __int64 *v7; // rax
  struct SURFACE *v8; // rdi
  __int64 v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  HSURF v14; // rbx
  char v15; // bl
  __int64 v16; // rax
  DCVISRGNSHARELOCK *v17; // rcx
  __int64 v18; // rax
  __int128 v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h]
  int v22; // [rsp+48h] [rbp-B8h]
  _QWORD v23[6]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  HDC v26; // [rsp+90h] [rbp-70h]
  int v27; // [rsp+98h] [rbp-68h]
  DC *v28[6]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v29[32]; // [rsp+D0h] [rbp-30h] BYREF
  HSURF *v30; // [rsp+F0h] [rbp-10h]
  _QWORD v31[6]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v32[32]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v33; // [rsp+148h] [rbp+48h]
  char v34; // [rsp+180h] [rbp+80h] BYREF

  v3 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v31, a1);
  v4 = (_QWORD *)v31[0];
  if ( v31[0] )
  {
    v5 = *(_QWORD *)(v31[0] + 80LL);
    v6 = *(_DWORD *)(v5 + 8);
    if ( (v6 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v31[0], *(_QWORD *)(v5 + 16));
      v4 = (_QWORD *)v31[0];
    }
    if ( (v6 & 0x2000) != 0 )
    {
      GreDCSelectPen(v4, *(_QWORD *)(v4[10] + 24LL));
      v4 = (_QWORD *)v31[0];
    }
    switch ( a2 )
    {
      case 0x50000:
        DCOBJ::DCOBJ((DCOBJ *)v23);
        v21 = 0LL;
        v20 = 0LL;
        v22 = 0;
        v23[0] = 0LL;
        v26 = 0LL;
        v25 = 0LL;
        v24 = 0LL;
        DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v20, (struct XDCOBJ *)v31);
        v8 = *(struct SURFACE **)(v31[0] + 512LL);
        if ( !v8 )
          v8 = SURFACE::pdibDefault;
        v3 = *((_QWORD *)v8 + 4);
        if ( v23[0] )
        {
          v9 = *(_QWORD *)(v23[0] + 48LL);
          if ( (v22 & 0x1000) != 0 )
          {
            DEVLOCKOBJ::bUnMapTrgSurfaceView((DEVLOCKOBJ *)&v20);
            if ( (v22 & 0x10) != 0 )
            {
              *(_DWORD *)(v23[0] + 36LL) &= ~0x4000u;
              *(_QWORD *)(v23[0] + 512LL) = *(_QWORD *)(v9 + 2576);
            }
            DEVLOCKOBJ::vClearRenderState((DEVLOCKOBJ *)&v20);
          }
          XDCOBJ::vUnlock((XDCOBJ *)v23);
          v23[0] = 0LL;
        }
        if ( (v22 & 0x1000) != 0 )
        {
          GreDecLockCount();
          v22 &= ~0x1000u;
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          if ( ThreadWin32Thread )
          {
            *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
            *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
          }
        }
        if ( (_QWORD)v20 )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v20);
          GreReleaseSemaphoreInternal(v20);
        }
        if ( (v22 & 8) != 0 )
          v22 &= ~8u;
        if ( *((_QWORD *)&v20 + 1) )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsemDMC", *((_QWORD *)&v20 + 1));
          GreReleaseSemaphoreInternal(*((_QWORD *)&v20 + 1));
        }
        if ( v25 )
        {
          DCOBJ::DCOBJ((DCOBJ *)v28, v26);
          SURFREF::SURFREF((SURFREF *)v29);
          SURFREF::SURFREF((SURFREF *)v32);
          LOBYTE(v11) = 5;
          v12 = HmgShareLock(v24, v11);
          LOBYTE(v13) = 5;
          v30 = (HSURF *)v12;
          v33 = HmgShareLock(v25, v13);
          v14 = *v30;
          *((_QWORD *)v28[0] + 64) = v33;
          DEC_SHARE_REF_CNT(v30);
          v30 = 0LL;
          DEC_SHARE_REF_CNT(v33);
          v33 = 0LL;
          GreDereferenceObject(v14, 1u);
          v26 = 0LL;
          v24 = 0LL;
          *((_DWORD *)v28[0] + 9) |= v27;
          if ( (*((_DWORD *)v28[0] + 9) & 0x200) != 0 )
          {
            v15 = 0;
            if ( !(unsigned int)GreGetLockCount()
              && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
            {
              GreAcquireSemaphoreSharedInternal(ghsemGreLock);
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
              v15 = 1;
            }
            DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v34);
            v16 = HmgShareUnlockRemoveObject(v25, 0LL, 0LL, 0LL, 5);
            if ( v16 )
              SURFACE::bDeleteSurface(v16, 0LL, 1LL);
            *((_QWORD *)v28[0] + 65) = 0LL;
            DC::vClearRendering(v28[0]);
            v25 = 0LL;
            DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v17);
            if ( v15 )
            {
              EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
              GreReleaseSemaphoreInternal(ghsemGreLock);
            }
          }
          else
          {
            v18 = HmgShareUnlockRemoveObject(v25, 0LL, 0LL, 0LL, 5);
            if ( v18 )
              SURFACE::bDeleteSurface(v18, 0LL, 1LL);
            *((_QWORD *)v28[0] + 65) = 0LL;
            v25 = 0LL;
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v32);
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v29);
          DCOBJ::~DCOBJ((DCOBJ *)v28);
        }
        DCOBJ::~DCOBJ((DCOBJ *)v23);
        break;
      case 0x80000:
        v3 = v4[11];
        break;
      case 0xA0000:
        v3 = *(_QWORD *)(v4[10] + 176LL);
        break;
      case 0x100000:
        v7 = (__int64 *)v4[18];
        goto LABEL_13;
      default:
        if ( ((a2 - 3145728) & 0xFFDFFFFF) == 0 )
        {
          v7 = (__int64 *)v4[19];
LABEL_13:
          v3 = *v7;
        }
        break;
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v31);
  return v3;
}
