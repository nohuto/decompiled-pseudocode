/*
 * XREFs of ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1401E3704
 * Callers:
 *     EditionParseDesktop @ 0x1401E3580 (EditionParseDesktop.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DesktopAlloc @ 0x14012D510 (DesktopAlloc.c)
 *     CreateDesktopHeap @ 0x1401E3B64 (CreateDesktopHeap.c)
 *     ?CalcDesktopId@@YA_KPEAUtagDESKTOP@@@Z @ 0x1401E3C98 (-CalcDesktopId@@YA_KPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall xxxCreateDesktopEx2(
        struct tagWINDOWSTATION *a1,
        struct _ACCESS_STATE *a2,
        __int64 a3,
        struct _UNICODE_STRING *a4,
        unsigned int a5,
        void **a6)
{
  unsigned int v6; // esi
  char v10; // r12
  __int64 v11; // rcx
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KPROCESS *v15; // r15
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int DesktopHeapSize; // ebx
  struct tagTHREADINFO *v20; // rax
  __int64 DesktopHeap; // rax
  __int64 v22; // rdx
  __int64 v23; // r9
  PVOID v24; // rcx
  _DWORD *v25; // rcx
  void *v26; // rsi
  struct tagTHREADINFO *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  ACCESS_MASK *p_RemainingDesiredAccess; // rbx
  ACCESS_MASK RemainingDesiredAccess; // eax
  __int64 v37; // rdx
  __int64 GenericAll; // rcx
  PVOID v39; // rbx
  struct tagTHREADINFO *v40; // rax
  HANDLE v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rdx
  PVOID v44; // rbx
  __int64 UserSessionState; // rax
  __int64 v46; // rax
  unsigned int v47; // [rsp+40h] [rbp-20h]
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  __int64 v49; // [rsp+50h] [rbp-10h] BYREF

  v6 = 0;
  Object = 0LL;
  v47 = 0;
  v10 = 0;
  if ( !(unsigned __int8)ObCheckCreateObjectAccess(a1, 8LL, a2) )
    return v47;
  CurrentProcess = PsGetCurrentProcess(v11);
  v14 = *((unsigned int *)a1 + 8);
  v15 = (struct _KPROCESS *)CurrentProcess;
  if ( (v14 & 2) != 0 )
  {
    v41 = *(HANDLE *)(W32GetUserSessionState(v14, v13) + 63536);
    if ( PsGetProcessId(v15) != v41 )
    {
      v49 = 0LL;
      GetProcessLuid(0LL, &v49);
      if ( v49 == *((_QWORD *)a1 + 18) )
        return 3221226091LL;
    }
  }
  result = CreateDesktopObObject(a4, a1, a2, &Object);
  if ( (int)result >= 0 )
  {
    if ( (*((_DWORD *)a1 + 8) & 4) != 0 )
    {
      v6 = 3;
    }
    else if ( *((_QWORD *)a1 + 2) )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v18, v17) + 62976) )
      {
        v18 = *(_QWORD *)(W32GetUserSessionState(v18, v42) + 62976);
        if ( *((_QWORD *)a1 + 2) == v18 )
          v10 = 1;
      }
      else
      {
        v6 = 2;
      }
    }
    else
    {
      v6 = 1;
    }
    if ( a5 )
      DesktopHeapSize = a5 << 10;
    else
      DesktopHeapSize = GetDesktopHeapSize(v6);
    if ( DesktopHeapSize < 0x2000 )
      DesktopHeapSize = 0x2000;
    v20 = PtiCurrent(v18);
    *((_QWORD *)v20 + 170) |= 0x40uLL;
    DesktopHeap = CreateDesktopHeap((char *)Object + 136, DesktopHeapSize);
    v24 = Object;
    *((_QWORD *)Object + 16) = DesktopHeap;
    if ( *((_QWORD *)Object + 16) )
    {
      *((_DWORD *)Object + 36) = DesktopHeapSize;
      v26 = (void *)DesktopAlloc((__int64)Object, 72LL, 2LL, v23);
      if ( v26 )
      {
        v27 = PtiCurrent((__int64)v25);
        *((_QWORD *)v27 + 170) &= ~0x40uLL;
        v28 = (_QWORD *)Win32AllocPoolZInit(240LL, 1684763477LL);
        if ( v28 )
        {
          *v28 = v26;
          *((_QWORD *)Object + 1) = v28;
          v29 = (char *)Object + 176;
          *((_QWORD *)Object + 23) = (char *)Object + 176;
          *v29 = v29;
          v30 = (char *)Object + 312;
          *((_QWORD *)Object + 40) = (char *)Object + 312;
          *v30 = v30;
          v31 = CalcDesktopId((struct tagDESKTOP *)Object);
          ***((_QWORD ***)Object + 1) = v31;
          v32 = *((_QWORD *)Object + 17);
          *((_QWORD *)Object + 2) = v32;
          *((_QWORD *)Object + 3) = v32 + DesktopHeapSize;
          LockObjectAssignment((char *)Object + 40, a1);
          if ( !*((_QWORD *)a1 + 2) )
          {
            if ( (*((_DWORD *)a1 + 8) & 4) == 0 )
            {
              v44 = Object;
              UserSessionState = W32GetUserSessionState(v34, v33);
              LockObjectAssignment(UserSessionState + 62968, v44);
            }
            LockObjectAssignment(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 24LL, Object);
          }
          LockObjectAssignment((char *)Object + 32, *((_QWORD *)a1 + 2));
          LockObjectAssignment((char *)a1 + 16, Object);
          p_RemainingDesiredAccess = &a2->RemainingDesiredAccess;
          RemainingDesiredAccess = a2->RemainingDesiredAccess;
          if ( (RemainingDesiredAccess & 0x2000000) != 0 )
            *p_RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
          RtlMapGenericMask(&a2->RemainingDesiredAccess, DesktopMapping);
          GenericAll = DesktopMapping->GenericAll;
          LODWORD(GenericAll) = GenericAll | 0x1000000;
          *p_RemainingDesiredAccess &= GenericAll;
          v39 = Object;
          *a6 = Object;
          if ( v10 )
          {
            v46 = W32GetUserSessionState(GenericAll, v37);
            LockObjectAssignment(v46 + 62832, v39);
          }
          return 0LL;
        }
        RtlFreeHeap(*((PVOID *)Object + 17), 0, v26);
      }
    }
    else
    {
      v25 = *(_DWORD **)(W32GetUserSessionState(v24, v22) + 19904);
      if ( (*v25 & 0x100) != 0 )
      {
        _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(v25, v43) + 19904), 0xFFFFFEFF);
        UserLogError(2147483892LL);
      }
    }
    v40 = PtiCurrent((__int64)v25);
    *((_QWORD *)v40 + 170) &= ~0x40uLL;
    v47 = -1073741801;
    ObfDereferenceObject(Object);
    return v47;
  }
  return result;
}
