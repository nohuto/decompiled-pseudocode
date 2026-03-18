/*
 * XREFs of ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402D87C4
 * Callers:
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x14011E224 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x14002EC1C (PhysicalToLogicalInPlaceRgn.c)
 *     xxxCalcClientRect @ 0x1400333BC (xxxCalcClientRect.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     GetStyleWindow @ 0x1400463E0 (GetStyleWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     FillRect @ 0x140126BCC (FillRect.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x14012ED78 (-IsInsideUserApiHook@@YAHXZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxDrawWindowFrame @ 0x14025B5E8 (xxxDrawWindowFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GreWatchVisRgnChange @ 0x14032632C (GreWatchVisRgnChange.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxRedrawHungWindow(struct tagWND *a1, HRGN a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  __int64 EmptyRgn; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 DCEx; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  Gre::Base *v16; // r14
  __int64 UserSessionState; // rax
  __int16 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  struct tagWND *i; // r14
  __int64 v29; // r8
  int v30; // ebx
  __int64 v31; // r8
  HDC v32; // r14
  __int64 v33; // r8
  RECT v34; // xmm0
  int v35; // edx
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rcx
  HBRUSH v39; // rbx
  int ObjectOwner; // edi
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int BrushColor; // ebx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int128 v48; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v49[16]; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+48h] [rbp-28h] BYREF
  RECT v51; // [rsp+58h] [rbp-18h] BYREF

  v51 = 0LL;
  if ( *((_QWORD *)PtiCurrent((__int64)a1) + 61) )
  {
    v5 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v5) + 61) + 8LL);
    if ( (*(_DWORD *)(v5 + 64) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1985);
  }
  v7 = *((_QWORD *)a1 + 5);
  v8 = *(_QWORD *)(v7 + 136);
  if ( v8 && (*(_BYTE *)(v7 + 31) & 0x10) != 0 && (!a2 || !GetStyleWindow((__int64)a1, 2568)) )
  {
    if ( v8 <= 1 )
    {
      v51 = *(RECT *)(v7 + 88);
      v10 = GreCreateRectRgnIndirect(&v51);
      if ( !v10 )
        v10 = 1LL;
    }
    else
    {
      EmptyRgn = CreateEmptyRgn(v5, v4, v6);
      v10 = EmptyRgn;
      if ( !EmptyRgn )
      {
LABEL_12:
        v10 = 1LL;
        goto LABEL_15;
      }
      if ( !(unsigned int)GreCombineRgn(EmptyRgn, *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), 0LL, 5LL) )
      {
        GreDeleteObject(v10);
        goto LABEL_12;
      }
    }
LABEL_15:
    if ( a2 && v10 != 1 && (unsigned int)GreCombineRgn(v10, v10, a2, 1LL) == 1 )
    {
      GreDeleteObject(v10);
      return;
    }
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
    if ( !IsInsideUserApiHook(v12, v11) )
    {
      DCEx = _GetDCEx(a1, v10, 328833LL);
      v15 = *((_QWORD *)a1 + 5);
      v16 = (Gre::Base *)DCEx;
      if ( (*(_BYTE *)(v15 + 16) & 0x40) == 0
        || (UserSessionState = W32GetUserSessionState(v15, v14),
            v18 = 8193,
            *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) != *(_QWORD *)(UserSessionState + 18928)) )
      {
        v18 = 0x2000;
      }
      xxxDrawWindowFrame(a1, v16, v18);
      _ReleaseDC(v16);
    }
    xxxInternalInvalidate(a1, (HRGN)v10, 0x485u);
    v51 = *(RECT *)(*((_QWORD *)a1 + 5) + 88LL);
    xxxCalcClientRect(a1, &v51, 1);
    v21 = W32GetUserSessionState(v20, v19);
    SetRectRgnIndirect(*(_QWORD *)(v21 + 63360), &v51);
    if ( v10 <= 1 )
    {
      if ( !v10 )
        goto LABEL_44;
    }
    else
    {
      v24 = W32GetUserSessionState(v23, v22);
      v25 = GreCombineRgn(v10, v10, *(_QWORD *)(v24 + 63360), 1LL);
      if ( v25 )
      {
        if ( v25 == 1 )
        {
          GreDeleteObject(v10);
          v10 = 0LL;
LABEL_44:
          v31 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x8Bu;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) == 0 )
            v31 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x83u;
          v32 = (HDC)_GetDCEx(a1, v10, v31);
          GreWatchVisRgnChange(v32);
          v33 = *((_QWORD *)a1 + 5);
          v51 = *(RECT *)(v33 + 88);
          v34 = v51;
          v35 = *(_DWORD *)(v33 + 92);
          v36 = -*(_DWORD *)(v33 + 88);
          v51.right -= *(_DWORD *)(v33 + 88);
          v37 = (unsigned int)-v35;
          v51.bottom += v37;
          v51.top += v37;
          v51.left = v36 + _mm_cvtsi128_si32((__m128i)v34);
          v38 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
          v39 = *(HBRUSH *)(v38 + 72);
          if ( v39 )
          {
            if ( (unsigned __int64)v39 <= 0x1F )
              v39 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v38, v37) + 19904) + 8LL * (_QWORD)v39 + 4688);
          }
          else if ( (*(_BYTE *)(v33 + 18) & 1) != 0 )
          {
            v39 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v38, v37) + 19904) + 4816LL);
          }
          else
          {
            v39 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v38, v37) + 19904) + 4736LL);
          }
          ObjectOwner = GreGetObjectOwner(v39, 16LL);
          if ( ObjectOwner && ObjectOwner != (unsigned int)PsGetCurrentProcessId() )
          {
            BrushColor = GreGetBrushColor(v39);
            if ( BrushColor == -1 )
            {
              v44 = W32GetUserSessionState(v42, v41);
              BrushColor = GreGetBrushColor(*(_QWORD *)(*(_QWORD *)(v44 + 19904) + 4736LL));
            }
            v45 = W32GetUserSessionState(v42, v41);
            GreSetSolidBrush(*(_QWORD *)(v45 + 43064), BrushColor);
            v39 = *(HBRUSH *)(W32GetUserSessionState(v47, v46) + 43064);
          }
          FillRect(v32, &v51, v39);
          GreWatchVisRgnChange(v32);
          _ReleaseDC(v32);
          SetOrClrWF(1, a1, 0x108u, 1);
          SetOrClrWF(1, a1, 0x102u, 1);
          SetOrClrWF(1, a1, 0x120u, 1);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
          return;
        }
      }
      else
      {
        GreDeleteObject(v10);
        v10 = 1LL;
      }
    }
    v26 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v26 + 31) & 2) != 0 )
      goto LABEL_44;
    v27 = *(_QWORD *)(v26 + 136);
    v48 = 0LL;
    if ( v27 != 1 )
    {
      if ( (unsigned int)GreGetRgnBox(v27, &v51) )
        goto LABEL_35;
      v26 = *((_QWORD *)a1 + 5);
    }
    v51 = *(RECT *)(v26 + 88);
LABEL_35:
    for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
    {
      v29 = *((_QWORD *)i + 5);
      if ( (*(_BYTE *)(v29 + 31) & 0x10) != 0 && ((*(_BYTE *)(v29 + 20) & 4) != 0 || !*(_QWORD *)(v29 + 136)) )
      {
        if ( (unsigned int)IntersectRect(&v48, &v51.left, (int *)(v29 + 88)) )
        {
          v30 = PhysicalToLogicalInPlaceRgn(i);
          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v49);
          xxxInternalInvalidate(i, (HRGN)v10, 0x485u);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v49);
          if ( v30 )
            GreDeleteObject(v10);
        }
      }
    }
    goto LABEL_44;
  }
}
