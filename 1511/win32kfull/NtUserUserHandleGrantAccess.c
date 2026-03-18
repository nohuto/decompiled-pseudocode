/*
 * XREFs of NtUserUserHandleGrantAccess @ 0x1C0221BB0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     UIntAdd @ 0x1C00A93FC (UIntAdd.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtUserUserHandleGrantAccess(__int64 a1, void *a2, int a3)
{
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  PVOID v7; // rsi
  struct _ERESOURCE *JobLock; // rax
  __int64 *i; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r10
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // r9d
  __int64 v17; // r10
  __int64 v18; // rax
  struct _ERESOURCE *v19; // rax
  PVOID Object[2]; // [rsp+58h] [rbp-40h] BYREF
  _QWORD *v21; // [rsp+68h] [rbp-30h]
  __int64 v22; // [rsp+70h] [rbp-28h]
  UINT puResult; // [rsp+B8h] [rbp+20h] BYREF

  v5 = 0;
  v6 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)PsJobType, 1, Object, 0LL);
  v7 = Object[0];
  Object[1] = Object[0];
  if ( v6 < 0 )
  {
    UserSetLastError(87);
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
    if ( !HMValidateHandle(a1, 255) )
      goto LABEL_10;
    v11 = 3LL * (unsigned __int16)a1;
    v12 = gSharedInfo[1];
    v21 = (_QWORD *)(v12 + 24LL * (unsigned __int16)a1);
    *((_BYTE *)v21 + 17) |= 0x20u;
    v13 = i[7];
    if ( a3 )
    {
      v14 = *((_DWORD *)i + 12);
      v12 = *((unsigned int *)i + 13);
      if ( v14 == (_DWORD)v12 )
      {
        if ( v14 )
        {
          v22 = 8 * v12;
          if ( 8 * v12 > 0xFFFFFFFF || UIntAdd(8 * v12, 0x40u, &puResult) < 0 )
            goto LABEL_19;
          v15 = UserReAllocPool(v17, v16, puResult, 1751610197LL);
        }
        else
        {
          v15 = Win32AllocPool(64LL);
        }
        v13 = v15;
        if ( !v15 )
        {
LABEL_19:
          UserSetLastError(8);
          goto LABEL_34;
        }
        i[7] = v15;
        *((_DWORD *)i + 13) += 8;
      }
      while ( v5 < *((_DWORD *)i + 12) && *(_QWORD *)(v13 + 8LL * v5) != a1 )
        ++v5;
      v18 = *((unsigned int *)i + 12);
      if ( v5 >= (unsigned int)v18 )
      {
        *(_QWORD *)(v13 + 8 * v18) = a1;
        ++*((_DWORD *)i + 12);
      }
    }
    else
    {
      while ( 1 )
      {
        v11 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v11 )
          break;
        v12 = v13 + 8LL * v5;
        if ( *(_QWORD *)v12 == a1 )
        {
          memmove((void *)v12, (const void *)(v12 + 8), 8LL * ((unsigned int)v11 - v5 - 1));
          --*((_DWORD *)i + 12);
          break;
        }
        ++v5;
      }
      if ( v5 >= *((_DWORD *)i + 12) )
        UserSetLastError(6);
    }
    v5 = 1;
    goto LABEL_34;
  }
LABEL_10:
  UserSetLastError(87);
LABEL_34:
  UserSessionSwitchLeaveCrit(v12, v11);
  v19 = (struct _ERESOURCE *)PsGetJobLock(v7);
  ExReleaseResourceAndLeaveCriticalRegion(v19);
  ObfDereferenceObject(v7);
  return v5;
}
