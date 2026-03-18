/*
 * XREFs of zzzAttachThreadInput @ 0x1C008AE54
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0007700 (xxxSetModernAppWindow.c)
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     NtUserAttachThreadInput @ 0x1C0102920 (NtUserAttachThreadInput.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0103828 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E218C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E276C (TryDetachShellFrame.c)
 * Callees:
 *     zzzReattachThreads @ 0x1C008B6B4 (zzzReattachThreads.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D3168 (ExemptedFromImmersiveRestrictions.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzAttachThreadInput(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // ebp
  BOOL v6; // r14d
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 *i; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  __int64 *v23; // rcx
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 *v26; // rdx
  int v27; // eax

  v3 = a3 & 1;
  v6 = (a3 & 0x4000) != 0 && (a3 & 1) == 0;
  if ( a1 == a2 )
    return 3221225485LL;
  if ( (a3 & 0x8000) == 0 )
  {
    v7 = *(_QWORD *)(a2 + 376);
    if ( v7 != *(_QWORD *)(a1 + 376) || *(_QWORD *)(gptiCurrent + 376LL) != v7 )
    {
      v8 = *(_QWORD *)(a2 + 384);
      v9 = *(_QWORD *)(gptiCurrent + 376LL);
      v10 = *(_QWORD *)(v8 + 372);
      v11 = *(_QWORD *)(v9 + 832);
      if ( !gbEnforceUIPI
        || (unsigned int)v11 > (unsigned int)v10
        || (_DWORD)v11 == (_DWORD)v10
        && ((v12 = HIDWORD(v10), HIDWORD(v11) == (_DWORD)v12) || HIDWORD(v11) == -1 || (_DWORD)v12 == -1)
        || (*(_DWORD *)(v9 + 12) & 0x80000000) != 0 )
      {
        v8 = *(_QWORD *)(a1 + 384);
        v13 = *(_QWORD *)(v8 + 372);
        if ( !gbEnforceUIPI
          || (unsigned int)v11 > (unsigned int)v13
          || (_DWORD)v11 == (_DWORD)v13
          && ((v14 = HIDWORD(v11), v15 = HIDWORD(v13), (_DWORD)v14 == (_DWORD)v15)
           || (_DWORD)v15 == -1
           || (_DWORD)v14 == -1)
          || (*(_DWORD *)(v9 + 12) & 0x80000000) != 0 )
        {
          if ( !(unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 376LL))
            || !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a2 + 376))
            && !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 376))
            || (unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent)
            || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 776LL) & 0x100) != 0 )
          {
            goto LABEL_15;
          }
          v8 = *(_QWORD *)(a1 + 384);
        }
        v18 = a1;
      }
      else
      {
        v18 = a2;
      }
      EtwTraceUIPIInputError(gptiCurrent, v18, v8, *(_QWORD *)(v8 + 372), 2);
      return 3221225506LL;
    }
  }
LABEL_15:
  if ( (*(_DWORD *)(a2 + 440) & 0x40) != 0
    || (*(_DWORD *)(a1 + 440) & 0x40) != 0
    || *(_QWORD *)(a2 + 408) != *(_QWORD *)(a1 + 408) )
  {
    return 3221225506LL;
  }
  if ( v3 )
  {
    for ( i = (__int64 *)gpai; ; i = (__int64 *)*i )
    {
      if ( !i )
      {
        v20 = Win32AllocPool(32LL);
        if ( v20 )
        {
          *(_QWORD *)(v20 + 8) = a1;
          *(_QWORD *)(v20 + 16) = a2;
          *(_DWORD *)(v20 + 24) = 1;
          *(_QWORD *)v20 = gpai;
          gpai = v20;
          goto LABEL_35;
        }
        return 3221225495LL;
      }
      v17 = i[2];
      if ( v17 == a2 && i[1] == a1 )
        break;
      if ( v17 == a1 && i[1] == a2 )
        break;
    }
    v27 = *((_DWORD *)i + 6);
    if ( v27 == -1 )
      return 3221225485LL;
    *((_DWORD *)i + 6) = v27 + 1;
    return 0LL;
  }
  v23 = (__int64 *)gpai;
  if ( gpai )
  {
    while ( 1 )
    {
      v24 = (__int64 *)*v23;
      v25 = *(_QWORD *)(*v23 + 16);
      if ( v25 == a2 && v24[1] == a1 )
        break;
      if ( v25 == a1 && v24[1] == a2 )
        break;
      v23 = (__int64 *)*v23;
      if ( !*v24 )
        return 3221225485LL;
    }
    --*((_DWORD *)v24 + 6);
    v26 = (__int64 *)*v23;
    if ( !*(_DWORD *)(*v23 + 24) || v6 )
    {
      *v23 = *v26;
      Win32FreePool(v26);
LABEL_35:
      *(_DWORD *)(a2 + 1072) |= 0x200u;
      v21 = *(_DWORD *)(a1 + 1072) | 0x200;
      *(_DWORD *)(a1 + 1072) = v21;
      if ( (v21 & 0x400) != 0 )
        KeSetEvent(*(PRKEVENT *)(a1 + 648), 1, 0);
      if ( (*(_DWORD *)(a2 + 1072) & 0x400) != 0 )
        KeSetEvent(*(PRKEVENT *)(a2 + 648), 1, 0);
      v22 = *(_QWORD *)(gptiCurrent + 416LL);
      if ( !*(_QWORD *)(v22 + 40) && !*(_QWORD *)(v22 + 48) )
        zzzReattachThreads(0LL, a1, a2);
    }
    return 0LL;
  }
  return 3221225485LL;
}
