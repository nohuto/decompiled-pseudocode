/*
 * XREFs of NtUserUserHandleGrantAccess @ 0x1C021BCF0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     UIntAdd @ 0x1C0070A70 (UIntAdd.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall NtUserUserHandleGrantAccess(__int64 a1, void *a2, int a3)
{
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  PVOID v7; // rsi
  struct _ERESOURCE *JobLock; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *i; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r10
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // r9d
  __int64 v20; // r10
  __int64 v21; // rax
  struct _ERESOURCE *v22; // rax
  PVOID Object[2]; // [rsp+60h] [rbp-48h] BYREF
  _QWORD *v24; // [rsp+70h] [rbp-38h]
  __int64 v25; // [rsp+78h] [rbp-30h]
  UINT puResult; // [rsp+C8h] [rbp+20h] BYREF

  v5 = 0;
  v6 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)PsJobType, 1, Object, 0LL);
  v7 = Object[0];
  Object[1] = Object[0];
  if ( v6 < 0 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  JobLock = (struct _ERESOURCE *)PsGetJobLock(Object[0]);
  ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
  EnterCrit(0LL, 1LL);
  if ( (unsigned int)PsGetJobUIRestrictionsClass(v7) )
  {
    for ( i = (__int64 *)gpJobsList; ; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_10;
      if ( (PVOID)i[1] == v7 )
        break;
    }
    LOBYTE(v10) = -1;
    if ( !HMValidateHandle(a1, v10, v11, v12) )
      goto LABEL_10;
    v14 = 3LL * (unsigned __int16)a1;
    v15 = gSharedInfo[1];
    v24 = (_QWORD *)(v15 + 24LL * (unsigned __int16)a1);
    *((_BYTE *)v24 + 17) |= 0x20u;
    v16 = i[7];
    if ( a3 )
    {
      v17 = *((_DWORD *)i + 12);
      v15 = *((unsigned int *)i + 13);
      if ( v17 == (_DWORD)v15 )
      {
        if ( v17 )
        {
          v25 = 8 * v15;
          if ( 8 * v15 > 0xFFFFFFFF || UIntAdd(8 * v15, 0x40u, &puResult) < 0 )
            goto LABEL_19;
          v18 = UserReAllocPool(v20, v19, puResult, 1751610197LL);
        }
        else
        {
          v18 = Win32AllocPool(64LL, 1751610197LL);
        }
        v16 = v18;
        if ( !v18 )
        {
LABEL_19:
          UserSetLastError(8LL);
          goto LABEL_34;
        }
        i[7] = v18;
        *((_DWORD *)i + 13) += 8;
      }
      while ( v5 < *((_DWORD *)i + 12) && *(_QWORD *)(v16 + 8LL * v5) != a1 )
        ++v5;
      v21 = *((unsigned int *)i + 12);
      if ( v5 >= (unsigned int)v21 )
      {
        *(_QWORD *)(v16 + 8 * v21) = a1;
        ++*((_DWORD *)i + 12);
      }
    }
    else
    {
      while ( 1 )
      {
        v14 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v14 )
          break;
        v15 = v16 + 8LL * v5;
        if ( *(_QWORD *)v15 == a1 )
        {
          memmove((void *)v15, (const void *)(v15 + 8), 8LL * ((unsigned int)v14 - v5 - 1));
          --*((_DWORD *)i + 12);
          break;
        }
        ++v5;
      }
      if ( v5 >= *((_DWORD *)i + 12) )
        UserSetLastError(6LL);
    }
    v5 = 1;
    goto LABEL_34;
  }
LABEL_10:
  UserSetLastError(87LL);
LABEL_34:
  UserSessionSwitchLeaveCrit(v15, v14);
  v22 = (struct _ERESOURCE *)PsGetJobLock(v7);
  ExReleaseResourceAndLeaveCriticalRegion(v22);
  ObfDereferenceObject(v7);
  return (int)v5;
}
