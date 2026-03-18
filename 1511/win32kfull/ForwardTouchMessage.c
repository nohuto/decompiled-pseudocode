/*
 * XREFs of ForwardTouchMessage @ 0x1C01DCDB8
 * Callers:
 *     NtUserPostMessage @ 0x1C005F7D0 (NtUserPostMessage.c)
 *     NtUserfnTOUCH @ 0x1C0223490 (NtUserfnTOUCH.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01DC23C (-CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z.c)
 *     _FreeTouchInputInfo @ 0x1C01DCFC0 (_FreeTouchInputInfo.c)
 *     _PostMessageCheckIL @ 0x1C01E2A4C (_PostMessageCheckIL.c)
 */

__int64 __fastcall ForwardTouchMessage(
        struct tagTHREADINFO *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        struct tagTOUCHINPUT *a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        _QWORD *a9)
{
  struct tagWND *v11; // r14
  __int64 v13; // rsi
  struct HTOUCHINPUT__ *ValidTouchInputInfo; // rax
  struct HTOUCHINPUT__ *v15; // rsi
  unsigned int v16; // ebx
  unsigned int v17; // edi

  v11 = (struct tagWND *)a2;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || !a5 || !a4 || a4 > 0xFFFFFFFF )
  {
    UserSetLastError(87);
    return 0LL;
  }
  v13 = 48LL * (unsigned int)a4;
  if ( v13 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(0x555555555555555LL) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & (unsigned __int64)a5) != 0 )
      ExRaiseDatatypeMisalignment();
    a2 = W32UserProbeAddress;
    if ( (unsigned __int64)a5 + v13 > W32UserProbeAddress || (struct tagTOUCHINPUT *)((char *)a5 + v13) < a5 )
      *W32UserProbeAddress = 0;
  }
  ValidTouchInputInfo = CreateValidTouchInputInfo(a1, a2, a4, a5);
  v15 = ValidTouchInputInfo;
  if ( !ValidTouchInputInfo )
    return 0LL;
  if ( a6 )
  {
    v16 = PostMessageCheckIL(v11, a3, a4, (__int64)ValidTouchInputInfo);
    v17 = a8;
  }
  else
  {
    v17 = a8;
    *a9 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, struct HTOUCHINPUT__ *, __int64))mpFnidPfn[((_BYTE)a8 + 6) & 0x1F])(
            v11,
            a3,
            a4,
            ValidTouchInputInfo,
            a7);
    v16 = 1;
  }
  if ( !v16 || v17 >= 0x2AB && (v17 <= 0x2AC || v17 == 692) )
    FreeTouchInputInfo(v15, 1LL);
  return v16;
}
