/*
 * XREFs of ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1402157B8
 * Callers:
 *     xxxWaitForInputIdle @ 0x14022D64C (xxxWaitForInputIdle.c)
 * Callees:
 *     ?xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x14002457C (-xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?ClearQueueServerEvent@@YAXG@Z @ 0x140025944 (-ClearQueueServerEvent@@YAXG@Z.c)
 *     xxxRemoveQueueCompletion @ 0x140026360 (xxxRemoveQueueCompletion.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ClientDeliverUserApc @ 0x1401B6300 (ClientDeliverUserApc.c)
 */

__int64 __fastcall xxxPollAndWaitForSingleObject(PVOID Object, void *a2, unsigned int a3)
{
  void *v4; // rbx
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rbp
  struct tagTHREADINFO *v8; // rax
  BOOL v9; // r13d
  unsigned __int64 v10; // r14
  int v11; // edi
  __int64 v12; // rcx
  char v13; // bl
  __int64 UserSessionState; // rax
  __int64 v15; // rcx
  NTSTATUS v16; // edi
  __int64 v17; // rcx
  __int64 v19; // rax
  unsigned int v20; // eax
  _QWORD v21[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v22; // [rsp+50h] [rbp-38h]
  union _LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+20h] BYREF

  Timeout.QuadPart = 0LL;
  v4 = a2;
  v7 = PtiCurrent((__int64)Object);
  if ( !*((_QWORD *)v7 + 115) )
  {
    v19 = Win32AllocPoolNonPagedZInit(24LL, 1819308885LL);
    *((_QWORD *)v7 + 115) = v19;
    if ( !v19 )
      return 0xFFFFFFFFLL;
  }
  v8 = PtiCurrent(v6);
  v21[0] = *((_QWORD *)v8 + 47);
  *((_QWORD *)v8 + 47) = v21;
  v22 = UserDereferenceObject;
  v21[1] = Object;
  if ( Object )
    ObfReferenceObject(Object);
  v9 = v4 != 0LL;
  ClearQueueServerEvent(64LL);
  v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  while ( 1 )
  {
    if ( a3 <= 0x1F4 )
    {
      v11 = a3;
LABEL_7:
      a3 = 0;
      goto LABEL_8;
    }
    v11 = 500;
    if ( a3 != -1 )
    {
      v20 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v10;
      LODWORD(v10) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( v20 >= a3 )
        goto LABEL_7;
      a3 -= v20;
    }
LABEL_8:
    Timeout.QuadPart = -10000LL * v11;
    **((_QWORD **)v7 + 115) = Object;
    v12 = *((_QWORD *)v7 + 115);
    *(_QWORD *)(v12 + 8) = *((_QWORD *)v7 + 201);
    *(_QWORD *)(*((_QWORD *)v7 + 115) + 16LL) = v4;
    v13 = 0;
    UserSessionState = W32GetUserSessionState(v12, 0LL);
    if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(UserSessionState + 16)) == 1 )
    {
      v13 = 1;
      LeaveMitRitHazardCrit();
    }
    UserSessionSwitchLeaveCrit(v15);
    v16 = KeWaitForMultipleObjects(v9 + 2, *((PVOID **)v7 + 115), WaitAny, WrUserRequest, 1, 0, &Timeout, 0LL);
    EnterCrit(1LL, 0LL);
    if ( v13 )
      EnterMitRitHazardCrit();
    if ( v16 == 1 )
    {
      xxxRemoveQueueCompletion(v17);
    }
    else
    {
      if ( v16 >= 0 )
      {
        if ( v16 != 192 )
          goto LABEL_15;
        ClientDeliverUserApc();
      }
      v16 = -1;
    }
LABEL_15:
    if ( (*(_DWORD *)(*((_QWORD *)v7 + 60) + 4LL) & 0x40) != 0 )
      xxxReceiveMessages(v7);
    if ( v16 != 258 && v16 != 1 )
      goto LABEL_23;
    if ( !a3 )
      break;
    v4 = a2;
  }
  if ( v16 == 1 )
    v16 = 258;
LABEL_23:
  if ( v22 != -1 )
    PopAndFreeW32ThreadLock((__int64)v21);
  return (unsigned int)v16;
}
