/*
 * XREFs of UmfdUnloadFontFileInternal @ 0x1400D31B4
 * Callers:
 *     UmfdLoadFontFile @ 0x1400D2D30 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFile @ 0x1400D34D0 (UmfdUnloadFontFile.c)
 * Callees:
 *     ?Remove@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z @ 0x1400D329C (-Remove@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1400FCF74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1400FD4AC (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall UmfdUnloadFontFileInternal(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct W32_PUSH_LOCK *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ecx
  _QWORD v13[6]; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v14; // [rsp+58h] [rbp-20h]

  SessionState = W32GetSessionState(a1, a2, a3);
  v8 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(SessionState + 96) + 24232LL);
  if ( *(_QWORD *)(SessionState + 96) != -24232LL )
    GreAcquirePushLockExclusive(v8);
  v9 = W32GetSessionState(v6, v5, v7);
  NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Remove(*(NSInstrumentation::CPlatformReaderWriterLock **)(*(_QWORD *)(v9 + 96) + 24160LL));
  if ( v8 )
    GreReleasePushLockExclusive(v8);
  FontDriverDdiRequest::FontDriverDdiRequest(v13, 5LL);
  v13[5] = a1;
  v13[0] = &UnloadFontFileRequest::`vftable';
  v14 = 0;
  v10 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(a1 + 20), v13);
  v11 = v14;
  if ( v10 < 0 )
    return 0;
  return v11;
}
