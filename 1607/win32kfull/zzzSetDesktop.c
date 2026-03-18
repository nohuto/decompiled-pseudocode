/*
 * XREFs of zzzSetDesktop @ 0x1C0057510
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     xxxSetThreadDesktop @ 0x1C0099B20 (xxxSetThreadDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00D9F40 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C00EA280 (xxxCreateWindowStation.c)
 * Callees:
 *     CheckHandleFlag @ 0x1C00578E0 (CheckHandleFlag.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     GetJournallingQueue @ 0x1C0057C20 (GetJournallingQueue.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     zzzAttachToQueue @ 0x1C00DBFA0 (zzzAttachToQueue.c)
 *     DesktopFree @ 0x1C01DF350 (DesktopFree.c)
 */

__int64 __fastcall zzzSetDesktop(struct tagTHREADINFO *a1, __int64 a2, void *a3, __int64 a4)
{
  NTSTATUS v7; // eax
  void *v8; // r12
  __int64 v9; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // r14
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *i; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 JournallingQueue; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  struct tagTHREADINFO **v23; // rcx
  __int64 v24; // rax
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-70h] BYREF
  _QWORD v26[13]; // [rsp+60h] [rbp-68h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+20h] BYREF

  if ( a2 && (*(_DWORD *)(a2 + 32) & 6) != 0 && a2 != *((_QWORD *)a1 + 51) && a1 != *(&gTermIO + 2) )
    return 3221225506LL;
  *((_DWORD *)a1 + 110) &= ~0x400000u;
  *((_QWORD *)a1 + 64) = a3;
  if ( a3 )
  {
    v7 = ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, &HandleInformation);
    v26[3] = Object;
    if ( v7 < 0 )
    {
      *((_DWORD *)a1 + 194) = 0;
    }
    else
    {
      ObfDereferenceObject(Object);
      *((_DWORD *)a1 + 194) = HandleInformation.GrantedAccess;
      if ( (unsigned int)CheckHandleFlag(0LL) )
        *((_DWORD *)a1 + 110) |= 0x400000u;
      if ( !(unsigned int)SetHandleFlag(a3, 1LL, 1LL) )
        return 3221225495LL;
    }
  }
  else
  {
    *((_DWORD *)a1 + 194) = 0;
  }
  if ( a2 && a2 == *((_QWORD *)a1 + 51) )
    return 0LL;
  v8 = (void *)*((_QWORD *)a1 + 51);
  v9 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( ThreadWin32Thread )
    v9 = *ThreadWin32Thread;
  v26[0] = *(_QWORD *)(v9 + 16);
  *(_QWORD *)(v9 + 16) = v26;
  v26[1] = v8;
  v26[2] = UserDereferenceObject;
  if ( v8 )
    ObfReferenceObject(v8);
  v11 = *((_QWORD *)a1 + 50);
  if ( *((_QWORD *)a1 + 51) )
  {
    v22 = *((_QWORD *)a1 + 82);
    v23 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 83);
    if ( *(struct tagTHREADINFO **)(v22 + 8) != (struct tagTHREADINFO *)((char *)a1 + 656)
      || *v23 != (struct tagTHREADINFO *)((char *)a1 + 656) )
    {
      __fastfail(3u);
    }
    *v23 = (struct tagTHREADINFO *)v22;
    *(_QWORD *)(v22 + 8) = v23;
  }
  LockObjectAssignment((char *)a1 + 408, a2);
  if ( a2 )
  {
    *((_QWORD *)a1 + 52) = *(_QWORD *)(a2 + 8);
    v12 = (_QWORD *)((char *)a1 + 656);
    v13 = (_QWORD *)(a2 + 160);
    v14 = *(_QWORD *)(a2 + 160);
    if ( *(_QWORD *)(v14 + 8) != a2 + 160 )
      __fastfail(3u);
    *v12 = v14;
    *((_QWORD *)a1 + 83) = v13;
    *(_QWORD *)(v14 + 8) = v12;
    *v13 = v12;
  }
  else
  {
    *((_QWORD *)a1 + 52) = &diStatic;
  }
  if ( !a2 )
    goto LABEL_41;
  for ( i = *(_QWORD **)(*((_QWORD *)a1 + 47) + 664LL); i && i[1] != a2; i = (_QWORD *)*i )
    ;
  if ( i )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 54) + 32LL) = *((_QWORD *)a1 + 52) - i[2];
    *(_QWORD *)(*((_QWORD *)a1 + 54) + 40LL) = i[2];
    *((_QWORD *)a1 + 53) = i[2];
  }
  else
  {
LABEL_41:
    *(_QWORD *)(*((_QWORD *)a1 + 54) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 54) + 40LL) = 0LL;
    *((_QWORD *)a1 + 53) = 0LL;
    v20 = ((gdwGTERMFlags & 1) != 0) - 1;
    *((_DWORD *)a1 + 168) = v20;
    v21 = *((_QWORD *)a1 + 48);
    if ( v21 )
      *(_DWORD *)(v21 + 336) = v20;
  }
  if ( a2
    && (*((_QWORD *)a1 + 50) = RtlAllocateHeap(*(PVOID *)(a2 + 120), 0, 0x14uLL), (v16 = *((_QWORD *)a1 + 50)) != 0) )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 54) + 96LL) = v16 - *(_QWORD *)(*((_QWORD *)a1 + 54) + 40LL);
  }
  else
  {
    *((_QWORD *)a1 + 50) = (char *)a1 + 920;
    *(_QWORD *)(*((_QWORD *)a1 + 54) + 96LL) = 0LL;
  }
  if ( v11 )
  {
    v17 = *((_QWORD *)a1 + 50);
    if ( v11 != v17 )
    {
      *(_OWORD *)v17 = *(_OWORD *)v11;
      *(_DWORD *)(v17 + 16) = *(_DWORD *)(v11 + 16);
    }
    if ( (struct tagTHREADINFO *)v11 != (struct tagTHREADINFO *)((char *)a1 + 920) )
      DesktopFree(v8);
  }
  else
  {
    v24 = *((_QWORD *)a1 + 50);
    *(_QWORD *)v24 = 0LL;
    *(_QWORD *)(v24 + 8) = 0LL;
    *(_DWORD *)(v24 + 16) = 0;
  }
  if ( *((_QWORD *)a1 + 48) )
  {
    JournallingQueue = GetJournallingQueue(a1);
    if ( JournallingQueue )
    {
      ++*(_DWORD *)(JournallingQueue + 344);
      zzzAttachToQueue(a1, (struct tagQ *)JournallingQueue);
    }
  }
  PopAndFreeW32ThreadLock(v26);
  return 0LL;
}
