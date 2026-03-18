/*
 * XREFs of NtUserMsgWaitForMultipleObjectsEx @ 0x1400226D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetInputEvent @ 0x140022BD0 (xxxGetInputEvent.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GetInputBits @ 0x140022F60 (GetInputBits.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x140022FA8 (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     ??1?$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@XZ @ 0x14002300C (--1-$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@XZ.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x140023060 (xxxMsgWaitForMultipleObjectsEx.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140023380 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     _SetWaitForQueueAttach @ 0x140258310 (_SetWaitForQueueAttach.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtUserMsgWaitForMultipleObjectsEx(unsigned int a1, volatile void *a2, int a3, int a4, int a5)
{
  unsigned __int16 v5; // bx
  __int64 v7; // rsi
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 CurrentProcess; // rax
  void *v19; // rbx
  char *v20; // rdx
  _OWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  int *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r10
  int v30; // eax
  __int64 CurrentProcessWow64Process; // rax
  ULONG v32; // r8d
  __int64 v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // rbx
  _QWORD *v37; // rax
  _QWORD *v38; // rcx
  __int64 *v39; // rax
  __int64 v40; // [rsp+40h] [rbp-928h]
  __int64 InputEvent; // [rsp+68h] [rbp-900h]
  _BYTE v43[32]; // [rsp+70h] [rbp-8F8h] BYREF
  char v44; // [rsp+90h] [rbp-8D8h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-8B8h]
  __int64 v46; // [rsp+B8h] [rbp-8B0h]
  __int64 v47; // [rsp+C0h] [rbp-8A8h]
  _BYTE v48[1160]; // [rsp+4E0h] [rbp-488h] BYREF

  v5 = a4;
  HIDWORD(v40) = a4;
  v7 = a1;
  v8 = -1;
  EnterCrit(0LL, 0LL);
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v9);
  if ( CurrentThreadWin32Thread )
    v11 = *CurrentThreadWin32Thread;
  else
    v11 = 0LL;
  if ( (a5 & 0xFFFFFFE0) != 0 || (unsigned int)v7 > 0x3F )
  {
    UserSetLastError(87LL);
    goto LABEL_30;
  }
  v12 = *(_QWORD *)(v11 + 480);
  if ( v12 && ((a5 & 1) == 0 || !(_DWORD)v7) && (unsigned __int16)GetInputBits(v12, v5, a5 & 4) )
  {
    v8 = v7;
    goto LABEL_30;
  }
  InputEvent = xxxGetInputEvent(v5 | ((unsigned __int16)a5 << 16));
  if ( InputEvent )
  {
    if ( (a5 & 1) != 0 )
    {
      v14 = 0LL;
      v15 = (__int64 *)PsGetCurrentThreadWin32Thread(v13);
      if ( v15 )
        v16 = *v15;
      else
        v16 = 0LL;
      if ( (unsigned int)ZwCancelWaitCompletionPacket(*(_QWORD *)(v16 + 1640), 0LL) == 259 )
      {
        LOBYTE(v17) = 1;
        ZwCancelWaitCompletionPacket(*(_QWORD *)(v16 + 1640), v17);
        KeSetEvent(*(PRKEVENT *)(v16 + 760), 1, 0);
      }
    }
    else
    {
      v39 = (__int64 *)PsGetCurrentThreadWin32Thread(v13);
      if ( v39 )
        v13 = *v39;
      else
        v13 = 0LL;
      v14 = *(_QWORD *)(v13 + 1624);
      if ( !v14 )
        goto LABEL_30;
    }
    CurrentProcess = PsGetCurrentProcess();
    v19 = *(void **)(PsGetProcessPeb(CurrentProcess) + 32);
    memset_0(v48, 0, 0x448uLL);
    RtlCopyFromUser(v48, v19, 0x448uLL);
    v20 = &v44;
    v21 = v48;
    v22 = 8LL;
    do
    {
      *(_OWORD *)v20 = *v21;
      *((_OWORD *)v20 + 1) = v21[1];
      *((_OWORD *)v20 + 2) = v21[2];
      *((_OWORD *)v20 + 3) = v21[3];
      *((_OWORD *)v20 + 4) = v21[4];
      *((_OWORD *)v20 + 5) = v21[5];
      *((_OWORD *)v20 + 6) = v21[6];
      v20 += 128;
      *((_OWORD *)v20 - 1) = v21[7];
      v21 += 8;
      --v22;
    }
    while ( v22 );
    *(_OWORD *)v20 = *v21;
    *((_OWORD *)v20 + 1) = v21[1];
    *((_OWORD *)v20 + 2) = v21[2];
    *((_OWORD *)v20 + 3) = v21[3];
    *((_QWORD *)v20 + 8) = *((_QWORD *)v21 + 8);
    if ( (_DWORD)v7 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
      v32 = 1;
      if ( !CurrentProcessWow64Process )
        v32 = 4;
      ProbeForRead(a2, 8 * v7, v32);
    }
    v23 = (_QWORD *)Win32AllocPoolWithQuotaZInit(8LL * (unsigned int)(v7 + 1), 2037609301LL);
    v24 = v23;
    if ( v23 )
    {
      memmove(v23, (const void *)a2, 8 * v7);
      v26 = 0LL;
      LODWORD(v40) = 0;
      v27 = v47;
      v28 = v46;
      v29 = v45;
      while ( (unsigned int)v26 < (unsigned int)v7 )
      {
        v25 = (int *)&v24[v26];
        v30 = *v25;
        if ( *v25 == -11 )
        {
          *(_QWORD *)v25 = v28;
        }
        else if ( v30 == -12 )
        {
          *(_QWORD *)v25 = v27;
        }
        else if ( v30 == -10 )
        {
          *(_QWORD *)v25 = v29;
        }
        v26 = (unsigned int)(v26 + 1);
        LODWORD(v40) = v26;
      }
      if ( (a5 & 8) != 0 )
        SetWaitForQueueAttach(1LL, v25, v27, v28);
      if ( (a5 & 1) != 0 )
        v14 = InputEvent;
      v24[v7] = v14;
      Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
        v43,
        v24,
        Win32FreePool,
        v28);
      v8 = xxxMsgWaitForMultipleObjectsEx(v7, (_DWORD)v24, a3, HIDWORD(v40), a5);
      v35 = (__int64 *)PsGetCurrentThreadWin32Thread(v34);
      if ( v35 )
        v36 = *v35;
      else
        v36 = 0LL;
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(v36 + 480) + 20LL),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      if ( !*(_DWORD *)(v36 + 1304) )
        xxxUpdateInputHangInfo(0LL, 1LL);
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v36 + 480) + 16LL), 0);
      *(_QWORD *)(v36 + 1360) &= ~0x400uLL;
      Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>(v43);
      if ( (a5 & 1) != 0 )
      {
        v37 = (_QWORD *)PsGetCurrentThreadWin32Thread(v13);
        if ( v37 )
          v38 = (_QWORD *)*v37;
        else
          v38 = 0LL;
        ZwAssociateWaitCompletionPacket(v38[205], v38[202], v38[204], 0LL, 0xFFFFFFFF80000000uLL, 0, 0LL, 0LL, v40);
      }
    }
    else
    {
      UserSetLastError(8LL);
    }
  }
LABEL_30:
  UserSessionSwitchLeaveCrit(v13);
  return v8;
}
