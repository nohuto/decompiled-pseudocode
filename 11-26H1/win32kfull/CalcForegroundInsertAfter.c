/*
 * XREFs of CalcForegroundInsertAfter @ 0x140049328
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x140049100 (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagCVR@@@Z @ 0x14004952C (-CheckTopmost@@YAHPEAUtagCVR@@@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1402A06E8 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 * Callees:
 *     GetLastTopMostWindow @ 0x140048390 (GetLastTopMostWindow.c)
 */

__int64 __fastcall CalcForegroundInsertAfter(__int64 a1)
{
  __int64 LastTopMostWindow; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  bool v5; // zf
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  _BYTE *v10; // rdx
  __int64 v11; // r9
  _QWORD *v12; // rdi
  _QWORD *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 20LL) & 0x20) != 0 )
  {
    LastTopMostWindow = 0LL;
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 112LL);
    while ( v3 )
    {
      v4 = LastTopMostWindow;
      if ( (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 20LL) & 0x20) != 0 )
        break;
      v5 = a1 == v3;
      LastTopMostWindow = v3;
      v3 = *(_QWORD *)(v3 + 88);
      if ( v5 )
        LastTopMostWindow = v4;
    }
  }
  else
  {
    LastTopMostWindow = GetLastTopMostWindow(a1);
  }
  v6 = *(_QWORD *)(a1 + 40);
  LOBYTE(v3) = *(_BYTE *)(v6 + 31) & 0xC0;
  if ( (_BYTE)v3 != 64 )
  {
    if ( tagTHREADINFO::ComputeAndTestForegroundActivate(*(tagTHREADINFO **)(a1 + 16)) )
      return LastTopMostWindow;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL);
    if ( (*(_DWORD *)(v6 + 12) & 0x80100) != 0 )
      return LastTopMostWindow;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(v6, v3) + 18928) )
    return LastTopMostWindow;
  UserSessionState = W32GetUserSessionState(v8, v7);
  v11 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v11 + 464) == *(_QWORD *)(UserSessionState + 18928) )
    return LastTopMostWindow;
  v12 = (_QWORD *)LastTopMostWindow;
  if ( LastTopMostWindow )
  {
    v13 = (_QWORD *)LastTopMostWindow;
    goto LABEL_18;
  }
  v13 = *(_QWORD **)(*(_QWORD *)(a1 + 104) + 112LL);
  if ( !v13 )
    goto LABEL_27;
LABEL_18:
  while ( v13 != (_QWORD *)a1 )
  {
    v10 = (_BYTE *)v13[5];
    if ( (v10[20] & 0x20) == 0
      && (v13[2] != v11 || (v10[24] & 8) != 0 || (v10[31] & 0xC0) != 0x40 && (v10[31] & 0x10) == 0) )
    {
      LastTopMostWindow = (__int64)v13;
      v13 = (_QWORD *)v13[11];
      if ( v13 )
        continue;
    }
    if ( !v13 )
      goto LABEL_27;
    break;
  }
  if ( (*(_BYTE *)(v13[5] + 20LL) & 0x20) != 0 )
  {
LABEL_27:
    LastTopMostWindow = (__int64)v12;
    if ( !v12 )
      v12 = *(_QWORD **)(*(_QWORD *)(a1 + 104) + 112LL);
    v14 = 0LL;
    v16 = *(_QWORD *)(W32GetUserSessionState(v13, v10) + 18928);
    if ( *(_QWORD *)(v16 + 128) )
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v16, v15) + 18928) + 128LL) + 16LL);
    while ( v12 )
    {
      v17 = v12[5];
      if ( (*(_BYTE *)(v17 + 20) & 0x20) != 0 )
        break;
      if ( v12[2] == v14 )
      {
        if ( v12[15] )
        {
          LastTopMostWindow = (__int64)v12;
        }
        else if ( (*(_BYTE *)(v17 + 31) & 0x10) != 0 )
        {
          LastTopMostWindow = (__int64)v12;
        }
      }
      v12 = (_QWORD *)v12[11];
    }
  }
  return LastTopMostWindow;
}
