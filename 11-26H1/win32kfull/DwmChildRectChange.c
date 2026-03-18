/*
 * XREFs of DwmChildRectChange @ 0x14004E990
 * Callers:
 *     OffsetWindow @ 0x140018874 (OffsetWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1400421A8 (zzzUpdateLayeredWindow.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1401D3714 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140260B0C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140038D64 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x14004E5D8 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x14004F06C (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     ScaleDPIRect @ 0x140176948 (ScaleDPIRect.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

LONG_PTR __fastcall DwmChildRectChange(struct tagWND *a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  INT v8; // r14d
  __int64 v9; // rdi
  void *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  LONG_PTR result; // rax
  __int64 v15; // rcx
  unsigned __int16 ScaledLogPixels; // ax
  __int64 v17; // rbx
  INT v18; // edi
  INT a; // [rsp+30h] [rbp-89h] BYREF
  struct tagRECT v20; // [rsp+38h] [rbp-81h] BYREF
  int v21; // [rsp+50h] [rbp-69h] BYREF
  __int16 v22; // [rsp+54h] [rbp-65h]
  int v23; // [rsp+78h] [rbp-41h]
  __int64 v24; // [rsp+7Ch] [rbp-3Dh]
  __int128 v25; // [rsp+84h] [rbp-35h]
  __int128 v26; // [rsp+94h] [rbp-25h]
  __int128 v27; // [rsp+A4h] [rbp-15h]
  INT v28; // [rsp+B4h] [rbp-5h]
  __int128 v29; // [rsp+C0h] [rbp+7h] BYREF
  __int128 v30; // [rsp+D0h] [rbp+17h] BYREF
  __int128 v31; // [rsp+E0h] [rbp+27h] BYREF

  v1 = *((_QWORD *)a1 + 5);
  a = 0;
  v29 = *(_OWORD *)(v1 + 88);
  v30 = *(_OWORD *)(v1 + 104);
  v31 = (__int128)*CalculateContentRect(&v20, a1, &a);
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v3);
  if ( CurrentThreadWin32Thread
    && *CurrentThreadWin32Thread
    && *((_QWORD *)PtiCurrent(v5) + 61)
    && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v6) + 61) + 8LL) + 64LL) & 1) != 0
    && (v7 = *((_QWORD *)a1 + 5), (*(_DWORD *)(v7 + 288) & 0x4000000F) == 0x40000000)
    && (v15 = *(unsigned __int16 *)(v7 + 284), (_WORD)v15 != 96) )
  {
    *(_QWORD *)&v20.left = 0LL;
    ScaledLogPixels = GreGetScaledLogPixels(v15);
    v17 = *(_QWORD *)&v20.left;
    v18 = ScaledLogPixels;
    ScaleDPIRect(
      (unsigned int)&v29,
      (unsigned int)&v29,
      ScaledLogPixels,
      96,
      *(__int64 *)&v20.left,
      *(__int64 *)&v20.left);
    ScaleDPIRect((unsigned int)&v30, (unsigned int)&v30, (unsigned __int16)v18, 96, v17, v17);
    ScaleDPIRect((unsigned int)&v31, (unsigned int)&v31, (unsigned __int16)v18, 96, v17, v17);
    v8 = EngMulDiv(a, v18, 96);
  }
  else
  {
    v8 = a;
  }
  WindowMargins::CheckForChanges(a1, 5LL);
  v9 = *(_QWORD *)a1;
  v10 = (void *)ReferenceDwmApiPort();
  result = IncrementDWMWindowUniqueness(v12, v11, v13);
  if ( v10 )
  {
    memset_0(&v21, 0, 0x68uLL);
    v21 = 6815808;
    v25 = v29;
    v22 = 0x8000;
    v23 = 1073741845;
    v24 = v9;
    v27 = v31;
    v28 = v8;
    v26 = v30;
    EtwUpdateEvent(v9);
    LpcRequestPort(v10, &v21);
    return ObfDereferenceObject(v10);
  }
  return result;
}
