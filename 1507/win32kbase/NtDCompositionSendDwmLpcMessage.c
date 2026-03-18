/*
 * XREFs of NtDCompositionSendDwmLpcMessage @ 0x1C00D41D0
 * Callers:
 *     <none>
 * Callees:
 *     UserReferenceDwmApiPort @ 0x1C000B010 (UserReferenceDwmApiPort.c)
 *     GreUnlockDwmState @ 0x1C000B340 (GreUnlockDwmState.c)
 *     UserDereferenceDwmProcess @ 0x1C000EFB0 (UserDereferenceDwmProcess.c)
 *     UserReferenceDwmProcess @ 0x1C00190E0 (UserReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C00456A8 (CheckOrAcquireDwmStateLock.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall NtDCompositionSendDwmLpcMessage(char *a1, size_t Size)
{
  int v4; // r12d
  PVOID v5; // r14
  struct _KPROCESS *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebx
  __int64 v11; // rdi
  __int64 CurrentProcess; // rax
  int v13; // eax
  __int64 i; // rcx
  int v16; // [rsp+38h] [rbp-110h]
  char v17; // [rsp+40h] [rbp-108h]
  struct _KPROCESS *PROCESS; // [rsp+48h] [rbp-100h]
  __int64 *v19; // [rsp+60h] [rbp-E8h]
  __int64 v20; // [rsp+68h] [rbp-E0h]
  _QWORD v21[4]; // [rsp+70h] [rbp-D8h]
  _DWORD v22[20]; // [rsp+90h] [rbp-B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-68h] BYREF

  v21[0] = 0LL;
  v21[1] = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  PROCESS = 0LL;
  v17 = 0;
  memset(v22, 0, 0x48uLL);
  v10 = 0;
  if ( Size > 0x20 )
    v10 = -1073741811;
  if ( v10 >= 0 )
  {
    if ( &a1[Size] < a1 || (unsigned __int64)&a1[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(&v22[10], a1, Size);
    if ( v22[10] == 1073741899 )
    {
      if ( Size != 32 )
      {
        v10 = -1073741811;
        goto LABEL_21;
      }
      v21[0] = &v22[11];
      v4 = 1;
    }
    else
    {
      v10 = -1073741811;
    }
    if ( v10 >= 0 )
    {
      v5 = UserReferenceDwmApiPort();
      if ( !v5 )
        v10 = -1073741823;
    }
  }
  if ( v10 >= 0 )
  {
    v17 = CheckOrAcquireDwmStateLock();
    if ( !v17 )
      v10 = -1073741823;
    if ( v10 >= 0 )
    {
      v6 = (struct _KPROCESS *)UserReferenceDwmProcess();
      PROCESS = v6;
      if ( !v6 )
        v10 = -1073741823;
    }
  }
LABEL_21:
  if ( v10 >= 0 )
  {
    v11 = 0LL;
    if ( v4 > 0LL )
    {
      while ( 1 )
      {
        v19 = (__int64 *)v21[v11];
        v20 = *v19;
        if ( *v19 )
        {
          CurrentProcess = PsGetCurrentProcess(v8, v7);
          LOBYTE(v16) = 1;
          v10 = ObDuplicateObject(CurrentProcess, v20, PROCESS, v19, 0, 0, 6, v16);
          if ( v10 < 0 )
            break;
        }
        if ( ++v11 >= v4 )
          goto LABEL_31;
      }
      KeStackAttachProcess(PROCESS, &ApcState);
      while ( v11 > 0 )
        ObCloseHandle(*(HANDLE *)v21[--v11], 1);
      KeUnstackDetachProcess(&ApcState);
    }
LABEL_31:
    v6 = PROCESS;
  }
  if ( v6 )
    UserDereferenceDwmProcess(v6);
  if ( v17 )
    GreUnlockDwmState(v8, v7, v9);
  if ( v10 >= 0 )
  {
    LOWORD(v22[0]) = Size;
    HIWORD(v22[0]) = Size + 40;
    LOWORD(v22[1]) = 0x8000;
    v13 = LpcRequestWaitReplyPortEx(v5, v22, v22);
    v10 = v13;
    if ( v13 == 192 || v13 == 258 )
      v10 = -1073741823;
    if ( v10 >= 0 )
    {
      for ( i = 0LL; i < v4; ++i )
        *(_QWORD *)v21[i] = 0LL;
      if ( (unsigned __int64)&a1[Size] > MmUserProbeAddress || &a1[Size] <= a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a1, &v22[10], Size);
    }
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  return (unsigned int)v10;
}
