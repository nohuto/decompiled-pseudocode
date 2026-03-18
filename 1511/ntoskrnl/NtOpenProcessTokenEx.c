/*
 * XREFs of NtOpenProcessTokenEx @ 0x140476F10
 * Callers:
 *     NtOpenProcessToken @ 0x140477294 (NtOpenProcessToken.c)
 *     RtlpSysVolTakeOwnership @ 0x1406497D0 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x1400432D0 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140043450 (SepCreateAccessStateFromSubjectContext.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14009E120 (ObReferenceObjectByPointerWithTag.c)
 *     PspUnlockThreadSecurityShared @ 0x1400D1980 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x1400D19C0 (PspLockThreadSecurityShared.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 */

NTSTATUS __stdcall NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  PHANDLE v4; // r13
  char PreviousMode; // r14
  ULONG v6; // r15d
  _QWORD *v7; // rdx
  NTSTATUS result; // eax
  PVOID v9; // rsi
  _QWORD *v10; // r12
  char *v11; // rdi
  POBJECT_TYPE *v12; // rsi
  void *v13; // r12
  NTSTATUS Handle; // ebx
  _KPROCESS *Process; // r13
  struct _KTHREAD *v16; // rbx
  ULONG_PTR v17; // r12
  struct _KTHREAD *v18; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  void *v21; // [rsp+58h] [rbp-210h] BYREF
  PHANDLE v22; // [rsp+60h] [rbp-208h]
  PVOID Object; // [rsp+68h] [rbp-200h] BYREF
  struct _KTHREAD *v24; // [rsp+70h] [rbp-1F8h]
  __int128 v25; // [rsp+78h] [rbp-1F0h] BYREF
  ULONG_PTR v26; // [rsp+88h] [rbp-1E0h]
  struct _LIST_ENTRY *Blink; // [rsp+90h] [rbp-1D8h]
  _QWORD v28[4]; // [rsp+A0h] [rbp-1C8h] BYREF
  PVOID v29; // [rsp+C0h] [rbp-1A8h]
  unsigned __int64 v30; // [rsp+D0h] [rbp-198h]
  _QWORD v31[28]; // [rsp+140h] [rbp-128h] BYREF

  v4 = TokenHandle;
  v22 = TokenHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    v6 = HandleAttributes & 0x1DF2;
  else
    v6 = HandleAttributes & 0x11FF2;
  if ( PreviousMode )
  {
    v7 = TokenHandle;
    if ( (unsigned __int64)TokenHandle >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
  }
  result = ObReferenceObjectByHandleWithTag(
             ProcessHandle,
             0x1000u,
             (POBJECT_TYPE)PsProcessType,
             KeGetCurrentThread()->PreviousMode,
             0x65537350u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v9 = Object;
    v10 = (char *)Object + 856;
    v11 = (char *)ObFastReferenceObject((signed __int64 *)Object + 107);
    if ( !v11 )
    {
      CurrentThread = KeGetCurrentThread();
      v9 = Object;
      PspLockProcessShared((__int64)Object, (__int64)CurrentThread);
      v11 = (char *)ObFastReferenceObjectLocked(v10);
      PspUnlockProcessShared((__int64)v9, (__int64)CurrentThread);
    }
    ObfDereferenceObjectWithTag(v9, 0x65537350u);
    v12 = SeTokenObjectType;
    v13 = 0LL;
    v21 = 0LL;
    Handle = ObReferenceObjectByPointerWithTag(v11, 0, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, 0x6E48624Fu);
    if ( Handle >= 0 )
    {
      if ( !v12 )
        v12 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v11 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v11 - 48) >> 8)];
      if ( (v6 & (_DWORD)v12[9]) != 0 || (*(v11 - 21) & 1) != 0 && *((_QWORD *)v11 - 2) )
      {
        ++ObpInvalidOpenByPointer;
        ObfDereferenceObjectWithTag(v11, 0x6E48624Fu);
        Handle = -1073741811;
      }
      else
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        v16 = KeGetCurrentThread();
        Blink = Process[1].Header.WaitListHead.Blink;
        if ( v16 && (*((_DWORD *)&v16[1].SwapListEntry + 3) & 8) != 0 )
        {
          v24 = KeGetCurrentThread();
          PspLockThreadSecurityShared((__int64)v16, (__int64)v24);
          if ( (*((_DWORD *)&v16[1].SwapListEntry + 3) & 8) != 0 )
          {
            v13 = (void *)(*(_QWORD *)&v16[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObject(v13);
            DWORD2(v25) = v16[1].SystemCallNumber & 3;
          }
          PspUnlockThreadSecurityShared((__int64)v16, (__int64)v24);
        }
        *(_QWORD *)&v25 = v13;
        v17 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
        if ( !v17 )
        {
          v18 = KeGetCurrentThread();
          PspLockProcessShared((__int64)Process, (__int64)v18);
          v17 = ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
          PspUnlockProcessShared((__int64)Process, (__int64)v18);
        }
        v26 = v17;
        Handle = SepCreateAccessStateFromSubjectContext(
                   &v25,
                   v28,
                   v31,
                   DesiredAccess,
                   (PGENERIC_MAPPING)((char *)v12 + 76));
        if ( Handle < 0 )
        {
          ObfDereferenceObjectWithTag(v11, 0x6E48624Fu);
          v4 = v22;
        }
        else
        {
          Handle = ObpCreateHandle(1u, v11, 0, (__int64)v28, 0, v6, PreviousMode, 0LL, 0LL, (__int64 *)&v21);
          if ( Handle < 0 )
            ObfDereferenceObjectWithTag(v11, 0x6E48624Fu);
          SepDeleteAccessState((__int64)v28);
          ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v30);
          v30 = 0LL;
          if ( v29 )
            ObfDereferenceObject(v29);
          v4 = v22;
        }
      }
    }
    ObfDereferenceObject(v11);
    if ( Handle >= 0 )
      *v4 = v21;
    return Handle;
  }
  return result;
}
