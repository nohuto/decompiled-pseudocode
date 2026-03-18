/*
 * XREFs of zzzAttachThreadInput @ 0x1C004340C
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0006F50 (xxxSetModernAppWindow.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0040454 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     NtUserAttachThreadInput @ 0x1C0042900 (NtUserAttachThreadInput.c)
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E1B7C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E2248 (TryDetachShellFrame.c)
 * Callees:
 *     LogMDAQueueOp @ 0x1C00433CC (LogMDAQueueOp.c)
 *     zzzReattachThreads @ 0x1C004392C (zzzReattachThreads.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D14F0 (ExemptedFromImmersiveRestrictions.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzAttachThreadInput(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned int v3; // ebp
  BOOL v6; // r14d
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 *i; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  __int64 v20; // rdx
  __int64 *v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 *v24; // rdx
  __int64 v25; // rax
  int v26; // eax

  v3 = a3 & 1;
  v6 = (a3 & 0x4000) != 0 && (a3 & 1) == 0;
  if ( a1 != a2 )
  {
    if ( (a3 & 0x8000) == 0 )
    {
      v7 = *(_QWORD *)(a2 + 384);
      if ( v7 != *(_QWORD *)(a1 + 384) || *(_QWORD *)(gptiCurrent + 384LL) != v7 )
      {
        v8 = *(_QWORD *)(a2 + 392);
        v9 = *(_QWORD *)(gptiCurrent + 384LL);
        v10 = *(_QWORD *)(v8 + 372);
        v11 = *(_QWORD *)(v9 + 832);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v11 <= (unsigned int)v10 )
          {
            if ( (_DWORD)v11 != (_DWORD)v10
              || (v10 >>= 32, HIDWORD(v11) != (_DWORD)v10) && HIDWORD(v11) != -1 && (_DWORD)v10 != -1 )
            {
              if ( (*(_DWORD *)(v9 + 12) & 0x80000000) == 0 )
              {
                v20 = a2;
LABEL_37:
                EtwTraceUIPIInputError(gptiCurrent, v20, v8, *(_QWORD *)(v8 + 372), 2);
                return 3221225506LL;
              }
            }
          }
        }
        v8 = *(_QWORD *)(a1 + 392);
        v12 = *(_QWORD *)(v8 + 372);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v11 <= (unsigned int)v12 )
          {
            if ( (_DWORD)v11 != (_DWORD)v12
              || (v13 = HIDWORD(v11), v14 = HIDWORD(v12), (_DWORD)v13 != (_DWORD)v14)
              && (_DWORD)v13 != -1
              && (_DWORD)v14 != -1 )
            {
              if ( (*(_DWORD *)(v9 + 12) & 0x80000000) == 0 )
              {
LABEL_67:
                v20 = a1;
                goto LABEL_37;
              }
            }
          }
        }
        if ( (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 384LL), v10)
          && ((unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a2 + 384))
           || (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 384)))
          && !(unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent)
          && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 776LL) & 0x100) == 0 )
        {
          v8 = *(_QWORD *)(a1 + 392);
          goto LABEL_67;
        }
      }
    }
    if ( (*(_DWORD *)(a2 + 448) & 0x40) != 0
      || (*(_DWORD *)(a1 + 448) & 0x40) != 0
      || *(_QWORD *)(a2 + 416) != *(_QWORD *)(a1 + 416) )
    {
      return 3221225506LL;
    }
    if ( v3 )
    {
      for ( i = (__int64 *)gpai; ; i = (__int64 *)*i )
      {
        if ( !i )
        {
          v16 = Win32AllocPool(32LL, 1767994197LL);
          if ( v16 )
          {
            *(_QWORD *)(v16 + 8) = a1;
            *(_QWORD *)(v16 + 16) = a2;
            *(_DWORD *)(v16 + 24) = 1;
            *(_QWORD *)v16 = gpai;
            gpai = v16;
            goto LABEL_25;
          }
          return 3221225495LL;
        }
        v25 = i[2];
        if ( v25 == a2 && i[1] == a1 )
          break;
        if ( v25 == a1 && i[1] == a2 )
          break;
      }
      v26 = *((_DWORD *)i + 6);
      if ( v26 == -1 )
        return 3221225485LL;
      *((_DWORD *)i + 6) = v26 + 1;
      return 0LL;
    }
    v21 = (__int64 *)gpai;
    if ( gpai )
    {
      while ( 1 )
      {
        v22 = (__int64 *)*v21;
        v23 = *(_QWORD *)(*v21 + 16);
        if ( v23 == a2 && v22[1] == a1 )
          break;
        if ( v23 == a1 && v22[1] == a2 )
          break;
        v21 = (__int64 *)*v21;
        if ( !*v22 )
          return 3221225485LL;
      }
      --*((_DWORD *)v22 + 6);
      v24 = (__int64 *)*v21;
      if ( !*(_DWORD *)(*v21 + 24) || v6 )
      {
        *v21 = *v24;
        Win32FreePool(v24);
LABEL_25:
        *(_DWORD *)(a2 + 1080) |= 0x200u;
        v17 = *(_DWORD *)(a1 + 1080) | 0x200;
        *(_DWORD *)(a1 + 1080) = v17;
        if ( (v17 & 0x400) != 0 )
          KeSetEvent(*(PRKEVENT *)(a1 + 656), 1, 0);
        if ( (*(_DWORD *)(a2 + 1080) & 0x400) != 0 )
          KeSetEvent(*(PRKEVENT *)(a2 + 656), 1, 0);
        LogMDAQueueOp(0xAEu, a1, a2, v3);
        v18 = *(_QWORD *)(gptiCurrent + 424LL);
        if ( !*(_QWORD *)(v18 + 40) && !*(_QWORD *)(v18 + 48) )
          zzzReattachThreads(0LL, a1, a2);
      }
      return 0LL;
    }
  }
  return 3221225485LL;
}
