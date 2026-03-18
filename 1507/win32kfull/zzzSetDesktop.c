/*
 * XREFs of zzzSetDesktop @ 0x1C008BDA0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     xxxSetThreadDesktop @ 0x1C007EA90 (xxxSetThreadDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00DBDE0 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C0138EEC (xxxCreateWindowStation.c)
 * Callees:
 *     zzzAttachToQueue @ 0x1C0043EE8 (zzzAttachToQueue.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     CheckHandleFlag @ 0x1C008C178 (CheckHandleFlag.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     GetJournallingQueue @ 0x1C008C4B0 (GetJournallingQueue.c)
 */

__int64 __fastcall zzzSetDesktop(struct tagTHREADINFO *a1, __int64 a2, void *a3)
{
  NTSTATUS v6; // eax
  PVOID *v7; // r13
  __int64 v8; // r14
  __int64 *ThreadWin32Thread; // rax
  _DWORD *v10; // r14
  char *v11; // rax
  __int64 v12; // rdx
  _QWORD *i; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // rdx
  __int64 JournallingQueue; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct tagTHREADINFO **v21; // rcx
  __int64 v22; // rax
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v24[13]; // [rsp+60h] [rbp-68h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+20h] BYREF

  if ( a2 && (*(_DWORD *)(a2 + 32) & 6) != 0 && a2 != *((_QWORD *)a1 + 52) && a1 != *(&gTermIO + 2) )
    return 3221225506LL;
  *((_DWORD *)a1 + 112) &= ~0x400000u;
  *((_QWORD *)a1 + 65) = a3;
  if ( a3 )
  {
    v6 = ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, &HandleInformation);
    v24[3] = Object;
    if ( v6 < 0 )
    {
      *((_DWORD *)a1 + 194) = 0;
    }
    else
    {
      ObfDereferenceObject(Object);
      *((_DWORD *)a1 + 194) = HandleInformation.GrantedAccess;
      if ( (unsigned int)CheckHandleFlag(0LL) )
        *((_DWORD *)a1 + 112) |= 0x400000u;
      if ( !(unsigned int)SetHandleFlag(a3, 1LL, 1LL) )
        return 3221225495LL;
    }
  }
  else
  {
    *((_DWORD *)a1 + 194) = 0;
  }
  if ( a2 && a2 == *((_QWORD *)a1 + 52) )
    return 0LL;
  v7 = (PVOID *)*((_QWORD *)a1 + 52);
  v8 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v8 = *ThreadWin32Thread;
  v24[0] = *(_QWORD *)(v8 + 16);
  *(_QWORD *)(v8 + 16) = v24;
  v24[1] = v7;
  v24[2] = UserDereferenceObject;
  if ( v7 )
    ObfReferenceObject(v7);
  v10 = (_DWORD *)*((_QWORD *)a1 + 51);
  if ( *((_QWORD *)a1 + 52) )
  {
    v20 = *((_QWORD *)a1 + 83);
    v21 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 84);
    if ( *(struct tagTHREADINFO **)(v20 + 8) != (struct tagTHREADINFO *)((char *)a1 + 664)
      || *v21 != (struct tagTHREADINFO *)((char *)a1 + 664) )
    {
      __fastfail(3u);
    }
    *v21 = (struct tagTHREADINFO *)v20;
    *(_QWORD *)(v20 + 8) = v21;
  }
  LockObjectAssignment((char *)a1 + 416, a2);
  if ( a2 )
  {
    *((_QWORD *)a1 + 53) = *(_QWORD *)(a2 + 8);
    v11 = (char *)a1 + 664;
    v12 = *(_QWORD *)(a2 + 160);
    *((_QWORD *)a1 + 83) = v12;
    *((_QWORD *)a1 + 84) = a2 + 160;
    if ( *(_QWORD *)(v12 + 8) != a2 + 160 )
      __fastfail(3u);
    *(_QWORD *)(v12 + 8) = v11;
    *(_QWORD *)(a2 + 160) = v11;
  }
  else
  {
    *((_QWORD *)a1 + 53) = &diStatic;
  }
  if ( !a2 )
    goto LABEL_41;
  for ( i = *(_QWORD **)(*((_QWORD *)a1 + 48) + 672LL); i && i[1] != a2; i = (_QWORD *)*i )
    ;
  if ( i )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 55) + 32LL) = *((_QWORD *)a1 + 53) - i[2];
    *(_QWORD *)(*((_QWORD *)a1 + 55) + 40LL) = i[2];
    *((_QWORD *)a1 + 54) = i[2];
  }
  else
  {
LABEL_41:
    *(_QWORD *)(*((_QWORD *)a1 + 55) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 55) + 40LL) = 0LL;
    *((_QWORD *)a1 + 54) = 0LL;
    v18 = ((gdwGTERMFlags & 1) != 0) - 1;
    *((_DWORD *)a1 + 170) = v18;
    v19 = *((_QWORD *)a1 + 49);
    if ( v19 )
      *(_DWORD *)(v19 + 328) = v18;
  }
  if ( a2
    && (*((_QWORD *)a1 + 51) = RtlAllocateHeap(*(PVOID *)(a2 + 120), 0, 0x14uLL), (v14 = *((_QWORD *)a1 + 51)) != 0) )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 55) + 96LL) = v14 - *(_QWORD *)(*((_QWORD *)a1 + 55) + 40LL);
  }
  else
  {
    *((_QWORD *)a1 + 51) = (char *)a1 + 920;
    *(_QWORD *)(*((_QWORD *)a1 + 55) + 96LL) = 0LL;
  }
  if ( v10 )
  {
    v15 = (_DWORD *)*((_QWORD *)a1 + 51);
    if ( v10 != v15 )
    {
      *(_OWORD *)v15 = *(_OWORD *)v10;
      v15[4] = v10[4];
    }
    if ( v10 != (_DWORD *)((char *)a1 + 920) )
      RtlFreeHeap(v7[15], 0, v10);
  }
  else
  {
    v22 = *((_QWORD *)a1 + 51);
    *(_QWORD *)v22 = 0LL;
    *(_QWORD *)(v22 + 8) = 0LL;
    *(_DWORD *)(v22 + 16) = 0;
  }
  if ( *((_QWORD *)a1 + 49) )
  {
    JournallingQueue = GetJournallingQueue(a1);
    if ( JournallingQueue )
    {
      ++*(_DWORD *)(JournallingQueue + 336);
      zzzAttachToQueue(a1, (struct tagQ *)JournallingQueue, 0LL, 0);
    }
  }
  PopAndFreeW32ThreadLock(v24);
  return 0LL;
}
