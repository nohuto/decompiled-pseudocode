/*
 * XREFs of xxxProcessHidInput @ 0x1C01CCFA0
 * Callers:
 *     ProcessHidRawInput @ 0x1C01CC720 (ProcessHidRawInput.c)
 *     DitTouchInject @ 0x1C01D6B0C (DitTouchInject.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C009A5A8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UpdateInputGlobalsEx @ 0x1C00A3FC0 (UpdateInputGlobalsEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_TABLE@@@Z @ 0x1C01CBF70 (-HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_T.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01CBFDC (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 */

__int64 __fastcall xxxProcessHidInput(struct DEVICEINFO *a1)
{
  __int64 v1; // r15
  int v2; // r14d
  int v4; // ebp
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  struct tagPROCESS_HID_REQUEST *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  int *v16; // rsi
  struct tagPROCESS_HID_REQUEST *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r10
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned __int16 v22; // cx
  unsigned __int64 v23; // rdx
  bool v24; // zf
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  int v30; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0LL;
  v2 = 0;
  v4 = 1;
  result = (unsigned int)*gpsi;
  if ( (result & 0x2000) == 0 )
  {
    if ( (result & 0x4000) == 0
      || *((_DWORD *)a1 + 79) && (result = *((_QWORD *)a1 + 58), *(_DWORD *)(result + 40) == 851973) )
    {
      if ( *((int *)a1 + 64) >= 0 )
      {
        ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v30);
        v7 = gpqForeground;
        if ( gpqForeground )
        {
          v8 = *(_QWORD *)(gpqForeground + 88LL);
          v9 = v8 ? *(_QWORD *)(v8 + 16) : *(_QWORD *)(gpqForeground + 64LL);
          v1 = *(_QWORD *)(v9 + 376);
          v10 = HidIsRequestedByThisProcess(a1, *(struct tagPROCESS_HID_TABLE **)(v1 + 776));
          if ( v10 )
          {
            v7 = gpqForeground;
            v11 = *((_QWORD *)v10 + 4);
            v12 = gpqForeground;
            if ( !v11 || (v12 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 384LL), *(char *)(v11 + 44) >= 0) )
            {
              if ( (*((_BYTE *)a1 + 64) & 0x40) == 0
                || (v13 = *(unsigned int *)(*((_QWORD *)a1 + 60) + 252LL), (v13 & 0x40) != 0)
                || (!(unsigned int)IsDwmInputThread(v13, v6)
                  ? (v14 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL))
                  : (v14 = *(_QWORD *)(*((_QWORD *)a1 + 60) + 1512LL)),
                    (v6 = gbEnforceUIPI, v7 = *(_QWORD *)(v12 + 380), !gbEnforceUIPI)
                 || (unsigned int)v14 > (unsigned int)v7
                 || (_DWORD)v14 == (_DWORD)v7
                 && ((v15 = HIDWORD(v14), v7 >>= 32, (_DWORD)v15 == (_DWORD)v7) || (_DWORD)v15 == -1 || (_DWORD)v7 == -1)) )
              {
                if ( (unsigned int)PostHidInput(a1, (struct tagQ *)v12, (struct tagWND *)v11, 0LL) )
                {
                  v2 = 1;
                  v4 = 0;
                }
              }
            }
          }
        }
        result = (__int64)&RawInputManagerObject::gHidRequestTable[4];
        v16 = (int *)RawInputManagerObject::gHidRequestTable[4];
        if ( v16 != (int *)&RawInputManagerObject::gHidRequestTable[4] )
        {
          while ( 1 )
          {
            if ( v16[20] <= 0 )
              goto LABEL_67;
            v17 = HidIsRequestedByThisProcess(a1, (struct tagPROCESS_HID_TABLE *)v16);
            if ( !v17 )
              goto LABEL_67;
            v7 = *((unsigned int *)v17 + 5);
            if ( (v7 & 1) == 0 || (v7 & 2) != 0 && !v4 )
              goto LABEL_67;
            v6 = *((_QWORD *)v17 + 5);
            if ( v6 )
            {
              (*((void (__fastcall **)(struct DEVICEINFO *))v17 + 5))(a1);
              goto LABEL_67;
            }
            v18 = *((_QWORD *)v17 + 4);
            v19 = *(_QWORD *)(v18 + 16);
            v20 = *(_QWORD *)(v19 + 376);
            if ( v20 == v1 )
              goto LABEL_67;
            v7 = grpdeskRitInput;
            if ( *(_QWORD *)(v18 + 24) != grpdeskRitInput || *(char *)(v18 + 44) < 0 || *(char *)(v18 + 43) < 0 )
              goto LABEL_67;
            v21 = *((_QWORD *)a1 + 59);
            v22 = *(_WORD *)(v21 + 16);
            v23 = *(unsigned __int16 *)(v21 + 18);
            if ( v22 == 12 )
              break;
            if ( v22 == 1 )
            {
              v24 = (_WORD)v23 == 9;
LABEL_40:
              if ( v24 )
                goto LABEL_65;
              goto LABEL_45;
            }
            if ( v22 >= 0xFF00u )
              goto LABEL_65;
LABEL_45:
            if ( !gpqForeground
              || (v23 = *(_QWORD *)(gpqForeground + 380LL),
                  v25 = *(_QWORD *)(*(_QWORD *)(v19 + 384) + 380LL),
                  !gbEnforceUIPI)
              || (unsigned int)v25 > (unsigned int)v23
              || (_DWORD)v25 == (_DWORD)v23
              && ((v26 = HIDWORD(v25), v23 >>= 32, (_DWORD)v26 == (_DWORD)v23) || (_DWORD)v26 == -1 || (_DWORD)v23 == -1)
              || *(int *)(v20 + 12) < 0 )
            {
              if ( (*((_BYTE *)a1 + 64) & 0x40) == 0 )
                goto LABEL_65;
              v27 = *(unsigned int *)(*((_QWORD *)a1 + 60) + 252LL);
              if ( (v27 & 0x40) != 0 )
                goto LABEL_65;
              v28 = (unsigned int)IsDwmInputThread(v27, v23)
                  ? *(_QWORD *)(*((_QWORD *)a1 + 60) + 1512LL)
                  : *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
              v19 = *(_QWORD *)(v18 + 16);
              v6 = gbEnforceUIPI;
              v7 = *(_QWORD *)(*(_QWORD *)(v19 + 384) + 380LL);
              if ( !gbEnforceUIPI
                || (unsigned int)v28 > (unsigned int)v7
                || (_DWORD)v28 == (_DWORD)v7
                && ((v29 = HIDWORD(v28), v7 >>= 32, (_DWORD)v29 == (_DWORD)v7)
                 || (v6 = 0xFFFFFFFFLL, (_DWORD)v29 == -1)
                 || (_DWORD)v7 == -1) )
              {
LABEL_65:
                result = PostHidInput(a1, *(struct tagQ **)(v19 + 384), (struct tagWND *)v18, 1LL);
                if ( !(_DWORD)result )
                  goto LABEL_68;
                v2 = 1;
              }
            }
            else
            {
              EtwTraceUIPIInputError(*(_QWORD *)(v18 + 16), 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 5);
            }
LABEL_67:
            v16 = *(int **)v16;
            result = (__int64)&RawInputManagerObject::gHidRequestTable[4];
            if ( v16 == (int *)&RawInputManagerObject::gHidRequestTable[4] )
              goto LABEL_68;
          }
          v24 = (_WORD)v23 == 1;
          goto LABEL_40;
        }
LABEL_68:
        if ( v2 )
        {
          result = *((unsigned int *)a1 + 87);
          if ( (result & 2) == 0 )
            result = UpdateInputGlobalsEx(
                       (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                       0,
                       2u,
                       0);
        }
        if ( !v30 )
          return UserSessionSwitchLeaveCrit(v7, v6);
      }
    }
  }
  return result;
}
