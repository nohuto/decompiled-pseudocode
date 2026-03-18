/*
 * XREFs of NtUserInjectGesture @ 0x1C021CBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _PostMessageCheckIL @ 0x1C01E2A4C (_PostMessageCheckIL.c)
 *     AllocGestureInfo @ 0x1C0203DDC (AllocGestureInfo.c)
 *     ValidateGestureCaller @ 0x1C020439C (ValidateGestureCaller.c)
 *     ValidateGestureInfo @ 0x1C0204468 (ValidateGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C02044A0 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserInjectGesture(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  const void *v9; // r14
  __int64 v10; // rdi
  unsigned int v11; // ebx
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // xmm1_8
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  _BYTE v22[8]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-C0h]
  _QWORD v24[3]; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD v25[3]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-60h]
  __int128 v27; // [rsp+B0h] [rbp-58h]
  __int128 v28; // [rsp+C0h] [rbp-48h]
  __int128 v29; // [rsp+D0h] [rbp-38h]
  __int64 v30; // [rsp+E0h] [rbp-28h]

  v9 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v22);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v24;
    v24[1] = v10;
    ++*(_DWORD *)(v10 + 8);
    if ( a3 || !a4 || a2 )
    {
      v12 = 87;
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
        v27 = *(_OWORD *)a4;
        v28 = *(_OWORD *)(a4 + 16);
        v29 = *(_OWORD *)(a4 + 32);
        v16 = *(_QWORD *)(a4 + 48);
        v30 = v16;
        v25[0] = v27;
        v25[1] = v28;
        v25[2] = v29;
        v26 = v16;
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
            v23 = a5;
LABEL_25:
            if ( (unsigned int)ValidateGestureInfo(v15, v13, v25) )
            {
              v17 = AllocGestureInfo(v10, 0, (__int64)v25, v9);
              v18 = v17;
              if ( v17 )
              {
                EtwTracePostInjectedGestureMessage(v10, v17);
                v11 = PostMessageCheckIL(
                        (struct tagWND *)v10,
                        0x119u,
                        *(unsigned int *)(*(_QWORD *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v18
                                                    + gSharedInfo[1])
                                        + 40LL),
                        v18);
                if ( !v11 )
                  FreeGestureInfo(v18);
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
        UserSetLastError(87);
        goto LABEL_31;
      }
      v12 = 1400;
    }
    v11 = 0;
    UserSetLastError(v12);
    goto LABEL_31;
  }
  v11 = 0;
LABEL_32:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v22);
  UserSessionSwitchLeaveCrit(v20, v19);
  return v11;
}
