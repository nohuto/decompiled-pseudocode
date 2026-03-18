/*
 * XREFs of GreSetPointer @ 0x1C003B8F4
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C0053910 (zzzUpdateCursorImage.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C008823C (UpdateCursorImageForMonitorDpi.c)
 *     SetPointer @ 0x1C0096E50 (SetPointer.c)
 *     GreInternalHidePointer @ 0x1C00EBBF0 (GreInternalHidePointer.c)
 * Callees:
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C0039DC8 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C003BB38 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C003BB68 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

void __fastcall GreSetPointer(HDEV a1, struct _CURSINFO *a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  int v9; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  char v12; // r13
  unsigned int v13; // r12d
  int v14; // edx
  int v15; // r8d
  __int64 **v16; // rcx
  __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 **v19; // r14
  __int64 v20; // rcx
  unsigned int v21; // r15d
  __int64 *v22; // rbx
  bool v23; // zf
  __int64 v24; // [rsp+30h] [rbp-58h]
  __int64 v25; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v26[72]; // [rsp+40h] [rbp-48h] BYREF
  HDEV v27; // [rsp+90h] [rbp+8h] BYREF
  __int64 v28; // [rsp+98h] [rbp+10h]
  unsigned int v29; // [rsp+A8h] [rbp+20h]

  v29 = a4;
  v27 = a1;
  v9 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v24 = ThreadWin32Thread;
  v11 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    v12 = *(_BYTE *)(ThreadWin32Thread + 328);
    *(_BYTE *)(ThreadWin32Thread + 328) = 0;
  }
  else
  {
    v12 = v29;
  }
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v26, ghsemDynamicModeChange);
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v27) )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  v25 = *((_QWORD *)v27 + 9);
  GreAcquireSemaphore(v25);
  gCachedSetPointerState = a1;
  if ( a2 )
  {
    xmmword_1C0322DC8 = *(_OWORD *)a2;
    xmmword_1C0322DD8 = *((_OWORD *)a2 + 1);
    xmmword_1C0322DE8 = *((_OWORD *)a2 + 2);
    qword_1C0322DF8 = *((_QWORD *)a2 + 6);
  }
  else
  {
    memset(&xmmword_1C0322DC8, 0, 0x38uLL);
  }
  v13 = a5;
  dword_1C0322E08 = a5;
  dword_1C0322E00 = a3;
  dword_1C0322E04 = a4;
  if ( gulCachedPointerRefs )
  {
    bCachedSetPointerRefs = 1;
    v14 = 1;
    if ( (a3 & 0x20) != 0 )
    {
      v9 = 1;
      LOBYTE(a3) = a3 | 0x40;
    }
  }
  else
  {
    v14 = 0;
  }
  v15 = *((_DWORD *)v27 + 14);
  if ( (v15 & 0x20000) != 0 )
  {
    v16 = (__int64 **)*((_QWORD *)v27 + 228);
    v17 = v14;
    v18 = *((_DWORD *)v16 + 4);
    v19 = (__int64 **)*v16;
    v20 = v9;
    v21 = v29;
    v28 = v20;
    a5 = v18;
    do
    {
      v22 = v19[6];
      if ( !v17 || (v22[269] & 0x2000) != 0 || (v22[7] & 4) != 0 || v20 )
      {
        GreAcquireSemaphore(v22[9]);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", v22[9], 4LL);
        vSetPointer((HDEV)v19[6], a2, a3, v21, v13);
        EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()", v22[9]);
        GreReleaseSemaphoreInternal(v22[9]);
        v20 = v28;
      }
      v23 = a5-- == 1;
      v19 = (__int64 **)*v19;
    }
    while ( !v23 );
    v11 = v24;
  }
  else if ( !v14 || ((_DWORD)v27[538] & 0x2000) != 0 || (v15 & 4) != 0 || v9 )
  {
    vSetPointer(a1, a2, a3, a4, a5);
  }
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v27) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  if ( v11 )
    *(_BYTE *)(v11 + 328) = v12;
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v26);
}
