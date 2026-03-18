/*
 * XREFs of GreMovePointer @ 0x1C00DB180
 * Callers:
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     zzzInternalSetCursorPos @ 0x1C00DB4DC (zzzInternalSetCursorPos.c)
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C00E317C (ApplyGatheredDeviceInfoSummaryInformation.c)
 *     GreInternalHidePointer @ 0x1C010A9B0 (GreInternalHidePointer.c)
 *     HideMouseTrails @ 0x1C01CBC40 (HideMouseTrails.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D19A4 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 *     ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01D315C (-MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0055BFC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C005DCD4 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C00DB37C (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 */

void __fastcall GreMovePointer(HDEV a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  int v6; // r12d
  int v7; // r15d
  int v8; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // r14
  int v11; // edx
  HDEV v12; // rax
  __int64 **v13; // rcx
  __int64 v14; // r14
  int v15; // eax
  __int64 *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rbx
  int v19; // r9d
  int v20; // r8d
  int v21; // edx
  bool v22; // zf
  __int64 v23; // [rsp+20h] [rbp-20h]
  __int64 v24; // [rsp+28h] [rbp-18h]
  _BYTE v25[16]; // [rsp+30h] [rbp-10h] BYREF
  HDEV v26; // [rsp+80h] [rbp+40h] BYREF
  char v27; // [rsp+88h] [rbp+48h]
  int v28; // [rsp+90h] [rbp+50h]
  int v29; // [rsp+98h] [rbp+58h]

  v26 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v24 = ThreadWin32Thread;
  v10 = ThreadWin32Thread;
  v27 = 0;
  if ( ThreadWin32Thread )
  {
    v27 = *(_BYTE *)(ThreadWin32Thread + 328);
    *(_BYTE *)(ThreadWin32Thread + 328) = 0;
  }
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v25, ghsemDynamicModeChange);
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v26) )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  GreAcquireSemaphore(*((_QWORD *)v26 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", *((_QWORD *)v26 + 9), 4LL);
  gCachedMovePointerState = a1;
  dword_1C0331C90 = v7;
  dword_1C0331C94 = v6;
  dword_1C0331C98 = v5;
  if ( gulCachedPointerRefs )
  {
    v11 = 1;
    bCachedMovePointerRefs = 1;
    if ( gbForceSoftwareCursor )
      v8 = 1;
  }
  else
  {
    v11 = 0;
  }
  v12 = v26;
  if ( ((_DWORD)v26[14] & 0x20000) != 0 )
  {
    v13 = (__int64 **)*((_QWORD *)v26 + 228);
    v14 = v11;
    v15 = *((_DWORD *)v13 + 4);
    v16 = *v13;
    v17 = v8;
    v23 = v8;
    v29 = v15;
    while ( 1 )
    {
      v18 = v16[6];
      v28 = v5;
      if ( v7 < *((_DWORD *)v16 + 7)
        || v7 >= *((_DWORD *)v16 + 9)
        || v6 < *((_DWORD *)v16 + 8)
        || v6 >= *((_DWORD *)v16 + 10) )
      {
        if ( v14 && (*(_DWORD *)(v18 + 2152) & 0x2000) == 0 )
          goto LABEL_39;
        GreAcquireSemaphore(*(_QWORD *)(v18 + 72));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", *(_QWORD *)(v18 + 72), 4LL);
        v19 = v5;
        v20 = -1;
        v21 = -1;
      }
      else
      {
        if ( v14 && (*(_DWORD *)(v18 + 2152) & 0x2000) == 0 && !v17 )
          goto LABEL_39;
        if ( v17 )
          v28 = v5 | 4;
        GreAcquireSemaphore(*(_QWORD *)(v18 + 72));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", *(_QWORD *)(v18 + 72), 4LL);
        v19 = v28;
        v20 = v6 - *((_DWORD *)v16 + 8);
        v21 = v7 - *((_DWORD *)v16 + 7);
      }
      vMovePointer((HDEV)v16[6], v21, v20, v19);
      EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()", *(_QWORD *)(v18 + 72));
      GreReleaseSemaphoreInternal(*(_QWORD *)(v18 + 72));
      v17 = v23;
LABEL_39:
      v22 = v29-- == 1;
      v16 = (__int64 *)*v16;
      if ( v22 )
      {
        v10 = v24;
        goto LABEL_12;
      }
    }
  }
  if ( !v11 || ((_DWORD)v26[538] & 0x2000) != 0 || v8 )
  {
    if ( v8 )
      v5 |= 4u;
    vMovePointer(a1, v7, v6, v5);
LABEL_12:
    v12 = v26;
  }
  *((_DWORD *)v12 + 20) = v7;
  *((_DWORD *)v26 + 21) = v6;
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", *((_QWORD *)v26 + 9));
  GreReleaseSemaphoreInternal(*((_QWORD *)v26 + 9));
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v26) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  if ( v10 )
    *(_BYTE *)(v10 + 328) = v27;
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v25);
}
