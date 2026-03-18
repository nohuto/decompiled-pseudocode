/*
 * XREFs of NtUserInjectGesture @ 0x1C0216690
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _PostMessageCheckIL @ 0x1C01D8C8C (_PostMessageCheckIL.c)
 *     AllocGestureInfo @ 0x1C01FB12C (AllocGestureInfo.c)
 *     ValidateGestureCaller @ 0x1C01FB6E8 (ValidateGestureCaller.c)
 *     ValidateGestureInfo @ 0x1C01FB7B4 (ValidateGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C01FB7F0 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserInjectGesture(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  const void *v9; // r14
  __int64 v10; // rdi
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // xmm1_8
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  _BYTE v24[16]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v25[3]; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD v26[3]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-60h]
  __int128 v28; // [rsp+B0h] [rbp-58h]
  __int128 v29; // [rsp+C0h] [rbp-48h]
  __int128 v30; // [rsp+D0h] [rbp-38h]
  __int64 v31; // [rsp+E0h] [rbp-28h]

  v9 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v24);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v25;
    v25[1] = v10;
    ++*(_DWORD *)(v10 + 8);
    if ( a3 || !a4 || a2 )
    {
      v12 = 87LL;
    }
    else
    {
      if ( *(char *)(v10 + 44) >= 0 && *(char *)(v10 + 43) >= 0 )
      {
        if ( !(unsigned int)ValidateGestureCaller(gptiCurrent, v10) )
        {
LABEL_10:
          v11 = 0;
LABEL_31:
          ThreadUnlock1(v14, v13);
          goto LABEL_32;
        }
        v15 = a4 + 56;
        if ( a4 + 56 < a4 || v15 > W32UserProbeAddress )
          a4 = W32UserProbeAddress;
        v28 = *(_OWORD *)a4;
        v29 = *(_OWORD *)(a4 + 16);
        v30 = *(_OWORD *)(a4 + 32);
        v16 = *(_QWORD *)(a4 + 48);
        v31 = v16;
        v26[0] = v28;
        v26[1] = v29;
        v26[2] = v30;
        v27 = v16;
        if ( (_DWORD)v16 )
        {
          if ( a5 )
          {
            if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v15) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a5) != 0 )
              ExRaiseDatatypeMisalignment();
            v15 = (unsigned int)v16 + a5;
            v13 = W32UserProbeAddress;
            if ( v15 > W32UserProbeAddress || v15 < a5 )
              *W32UserProbeAddress = 0;
            v9 = (const void *)a5;
LABEL_25:
            if ( (unsigned int)ValidateGestureInfo(v15, v13, v26) )
            {
              v17 = AllocGestureInfo(v10, 0, (__int64)v26, v9);
              v18 = v17;
              if ( v17 )
              {
                EtwTracePostInjectedGestureMessage(v10, v17);
                v11 = PostMessageCheckIL(
                        (struct tagWND *)v10,
                        281LL,
                        *(unsigned int *)(*(_QWORD *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v18
                                                    + gSharedInfo[1])
                                        + 40LL),
                        v18);
                if ( !v11 )
                  FreeGestureInfo(v18, 1LL, v19, v20);
                goto LABEL_31;
              }
            }
            goto LABEL_10;
          }
        }
        else if ( !a5 )
        {
          goto LABEL_25;
        }
        v11 = 0;
        UserSetLastError(87LL);
        goto LABEL_31;
      }
      v12 = 1400LL;
    }
    v11 = 0;
    UserSetLastError(v12);
    goto LABEL_31;
  }
  v11 = 0;
LABEL_32:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v24);
  UserSessionSwitchLeaveCrit(v22, v21);
  return v11;
}
