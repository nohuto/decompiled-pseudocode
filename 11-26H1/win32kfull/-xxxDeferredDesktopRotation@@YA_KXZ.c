/*
 * XREFs of ?xxxDeferredDesktopRotation@@YA_KXZ @ 0x14015B4C0
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14004544C (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     NtUserDeferredDesktopRotation @ 0x1402B0FB0 (NtUserDeferredDesktopRotation.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x14015B5D0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14017B358 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 */

unsigned __int64 __fastcall xxxDeferredDesktopRotation(__int64 a1)
{
  __int64 v1; // rdi
  __int64 *v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rbx
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  _QWORD v11[3]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v12[16]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v13; // [rsp+58h] [rbp-10h]
  int v14; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((_QWORD *)PtiCurrent(a1) + 61);
  v2 = *(__int64 **)(v1 + 8);
  if ( v2 )
  {
    v3 = *v2;
    v4 = *(_DWORD *)(*v2 + 64);
    if ( (v4 & 2) != 0 )
    {
      *(_DWORD *)(v3 + 64) = v4 & 0xFFFFFFFD;
      v5 = *(_QWORD *)(v1 + 264);
      *(_QWORD *)(v1 + 264) = 0LL;
      v6 = PtiCurrent(v3);
      v11[0] = *((_QWORD *)v6 + 47);
      *((_QWORD *)v6 + 47) = v11;
      v11[2] = _lambda_27f747716261ed0f75ba1156a6124405_::_lambda_invoker_cdecl_;
      v11[1] = v5;
      Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v12, v1);
      v14 = 0;
      UserSessionState = W32GetUserSessionState(v8, v7);
      xxxDesktopsRecalcAndBroadcastDisplayChange(
        v1,
        v5,
        *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19904) + 6996LL),
        1LL,
        &v14,
        0LL);
      if ( v13 != -1 )
      {
        PopAndFreeW32ThreadLock((__int64)v12);
        v13 = -1LL;
      }
      PopAndFreeW32ThreadLock((__int64)v11);
    }
  }
  return 0LL;
}
