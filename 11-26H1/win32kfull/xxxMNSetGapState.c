/*
 * XREFs of xxxMNSetGapState @ 0x1402F9954
 * Callers:
 *     xxxInsertMenuItem @ 0x14003470C (xxxInsertMenuItem.c)
 *     NtUserMNDragLeave @ 0x1402B7D20 (NtUserMNDragLeave.c)
 *     xxxMNUpdateDraggingInfo @ 0x1402F9B58 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x14000D208 (MNGetpItemFromIndex.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x14000EC74 (safe_cast_fnid_to_PMENUWND.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxInvalidateRect @ 0x14002C804 (xxxInvalidateRect.c)
 *     IsMFMWFPWindow @ 0x14008A0E4 (IsMFMWFPWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     MNGetpItem @ 0x1402D9360 (MNGetpItem.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_QWORD *__fastcall xxxMNSetGapState(__int64 a1, unsigned int a2, char a3, int a4)
{
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 UserSessionState; // rax
  int v23; // eax
  _QWORD v25[2]; // [rsp+20h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v25, 0LL);
  v27 = 0LL;
  if ( (a3 & 3) != 0 )
  {
    LOBYTE(v8) = IsMFMWFPWindow(a1);
    if ( v8 )
    {
      v10 = safe_cast_fnid_to_PMENUWND(v9);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 8);
        if ( v11 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v25, v11);
          if ( *(_QWORD *)v25[0] )
          {
            v12 = MNGetpItem((__int64)v25, a2);
            if ( v12 )
            {
              LODWORD(v27) = *(_DWORD *)(*(_QWORD *)v12 + 64LL);
              DWORD2(v27) = *(_DWORD *)(*(_QWORD *)v12 + 64LL) + *(_DWORD *)(*(_QWORD *)v12 + 72LL);
              DWORD1(v27) = *(_DWORD *)(*(_QWORD *)v12 + 68LL);
              HIDWORD(v27) = *(_DWORD *)(*(_QWORD *)v12 + 68LL) + *(_DWORD *)(*(_QWORD *)v12 + 76LL);
              if ( (a3 & 1) == 0 )
              {
                v18 = MNGetpItem((__int64)v25, a2 + 1);
                v20 = *v19;
                v21 = *(unsigned int *)(*v19 + 4);
                if ( a4 )
                {
                  LODWORD(v21) = v21 | 0x40000000;
                  *(_DWORD *)(v20 + 4) = v21;
                  if ( !v18 )
                    goto LABEL_20;
                  *(_DWORD *)(*(_QWORD *)v18 + 4LL) |= 0x80000000;
                }
                else
                {
                  LODWORD(v21) = v21 & 0xBFFFFFFF;
                  *(_DWORD *)(v20 + 4) = v21;
                  if ( !v18 )
                    goto LABEL_20;
                  *(_DWORD *)(*(_QWORD *)v18 + 4LL) &= ~0x80000000;
                }
                UserSessionState = W32GetUserSessionState(v21, v20);
                HIDWORD(v27) += *(_DWORD *)(*(_QWORD *)(UserSessionState + 19904) + 2172LL);
                goto LABEL_20;
              }
              v13 = MNGetpItem((__int64)v25, a2 - 1);
              v15 = *v14;
              v16 = *(unsigned int *)(*v14 + 4);
              if ( a4 )
              {
                LODWORD(v16) = v16 | 0x80000000;
                *(_DWORD *)(v15 + 4) = v16;
                if ( v13 )
                {
                  *(_DWORD *)(*(_QWORD *)v13 + 4LL) |= 0x40000000u;
LABEL_13:
                  v17 = W32GetUserSessionState(v16, v15);
                  DWORD1(v27) -= *(_DWORD *)(*(_QWORD *)(v17 + 19904) + 2172LL);
                }
              }
              else
              {
                LODWORD(v16) = v16 & 0x7FFFFFFF;
                *(_DWORD *)(v15 + 4) = v16;
                if ( v13 )
                {
                  *(_DWORD *)(*(_QWORD *)v13 + 4LL) &= ~0x40000000u;
                  goto LABEL_13;
                }
              }
LABEL_20:
              v23 = *(_DWORD *)(*(_QWORD *)MNGetpItemFromIndex(
                                             *(_QWORD *)(*(_QWORD *)v25[0] + 40LL),
                                             *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 40LL) + 116LL))
                              + 68LL);
              DWORD1(v27) -= v23;
              HIDWORD(v27) -= v23;
              Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, a1);
              xxxInvalidateRect(a1, (__int64)&v27, 1);
              Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
            }
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v25);
}
