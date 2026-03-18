/*
 * XREFs of NtUserUserHandleGrantAccess @ 0x1402C0C90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x14025C788 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?NtUserHandleGrantAccess@@YAHPEAX0_N@Z @ 0x1402ADF68 (-NtUserHandleGrantAccess@@YAHPEAX0_N@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtUserUserHandleGrantAccess(void *a1, void *a2, int a3)
{
  unsigned int v6; // edi
  NTSTATUS v7; // eax
  PVOID v8; // r14
  struct _ERESOURCE *JobLock; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *i; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rdx
  unsigned int v23; // edx
  void **v24; // r9
  struct _ERESOURCE *v25; // rax
  PVOID Object[3]; // [rsp+48h] [rbp-30h] BYREF

  v6 = 0;
  if ( !(unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    Object[0] = 0LL;
    v7 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)PsJobType, 1, Object, 0LL);
    v8 = Object[0];
    Object[1] = Object[0];
    if ( v7 < 0 )
    {
      UserSetLastError(87);
      return 0LL;
    }
    JobLock = (struct _ERESOURCE *)PsGetJobLock(Object[0]);
    ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
    EnterCrit(1LL, 0LL);
    if ( !(unsigned int)PsGetJobUIRestrictionsClass(v8) )
      goto LABEL_12;
    for ( i = *(__int64 **)(W32GetUserSessionState(v12, v11) + 69088); i && (PVOID)i[1] != v8; i = (__int64 *)*i )
      ;
    if ( !i || !HMValidateHandleWithDescriptor((__int64)a1, 0xFFu) )
    {
LABEL_12:
      UserSetLastError(87);
LABEL_36:
      UserSessionSwitchLeaveCrit(v16);
      v25 = (struct _ERESOURCE *)PsGetJobLock(v8);
      ExReleaseResourceAndLeaveCriticalRegion(v25);
      ObfDereferenceObject(v8);
      return (int)v6;
    }
    UserSessionState = W32GetUserSessionState(v15, v14);
    *(_BYTE *)(*(_QWORD *)(UserSessionState + 19920) + 32LL * (unsigned __int16)a1 + 25) |= 0x20u;
    v16 = i[8];
    if ( a3 )
    {
      v18 = *((unsigned int *)i + 15);
      v19 = *((_DWORD *)i + 14);
      if ( v19 != (_DWORD)v18 )
        goto LABEL_24;
      if ( v19 )
      {
        v21 = 8 * v18;
        Object[2] = (PVOID)(8 * v18);
        if ( (unsigned __int64)(8 * v18) > 0xFFFFFFFF || v21 + 64 < v21 )
          goto LABEL_21;
        v20 = UserReAllocPool(v16, v21, v21 + 64, 1751610197LL);
      }
      else
      {
        v20 = Win32AllocPoolZInit(64LL, 1751610197LL);
      }
      v16 = v20;
      if ( !v20 )
      {
LABEL_21:
        UserSetLastError(8);
        goto LABEL_36;
      }
      i[8] = v20;
      *((_DWORD *)i + 15) += 8;
LABEL_24:
      while ( 1 )
      {
        v22 = *((unsigned int *)i + 14);
        if ( v6 >= (unsigned int)v22 )
          break;
        if ( *(void **)(v16 + 8LL * v6) == a1 )
        {
          if ( v6 < (unsigned int)v22 )
            goto LABEL_35;
          break;
        }
        ++v6;
      }
      *(_QWORD *)(v16 + 8 * v22) = a1;
      ++*((_DWORD *)i + 14);
    }
    else
    {
      while ( 1 )
      {
        v23 = *((_DWORD *)i + 14);
        if ( v6 >= v23 )
          goto LABEL_34;
        v24 = (void **)(v16 + 8LL * v6);
        if ( *v24 == a1 )
          break;
        ++v6;
      }
      memmove((void *)(v16 + 8LL * v6), v24 + 1, 8LL * (v23 - v6 - 1));
      if ( v6 >= --*((_DWORD *)i + 14) )
LABEL_34:
        UserSetLastError(6);
    }
LABEL_35:
    v6 = 1;
    goto LABEL_36;
  }
  return (int)NtUserHandleGrantAccess(a2, (__int64)a1, a3 != 0);
}
