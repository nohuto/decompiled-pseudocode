/*
 * XREFs of ?DCompositionSendDwmLpcMessage@@YAJPEAX_K@Z @ 0x1C00E31F4
 * Callers:
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C00E3750 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 * Callees:
 *     CheckOrAcquireDwmStateLock @ 0x1C001D798 (CheckOrAcquireDwmStateLock.c)
 *     UserReferenceDwmApiPort @ 0x1C001F5C0 (UserReferenceDwmApiPort.c)
 *     GreUnlockDwmState @ 0x1C0071C10 (GreUnlockDwmState.c)
 *     UserDereferenceDwmProcess @ 0x1C0076790 (UserDereferenceDwmProcess.c)
 *     UserReferenceDwmProcess @ 0x1C0081200 (UserReferenceDwmProcess.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall DCompositionSendDwmLpcMessage(char *a1, size_t Size)
{
  int v4; // r12d
  PVOID v5; // r14
  struct _KPROCESS *v6; // rdi
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rdi
  __int64 CurrentProcess; // rax
  int v11; // eax
  __int64 i; // rcx
  int v14; // [rsp+38h] [rbp-110h]
  char v15; // [rsp+40h] [rbp-108h]
  struct _KPROCESS *PROCESS; // [rsp+48h] [rbp-100h]
  __int64 v17; // [rsp+60h] [rbp-E8h]
  __int64 *v18; // [rsp+68h] [rbp-E0h]
  _QWORD v19[4]; // [rsp+70h] [rbp-D8h]
  _DWORD v20[20]; // [rsp+90h] [rbp-B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-68h] BYREF

  v19[0] = 0LL;
  v19[1] = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  PROCESS = 0LL;
  v15 = 0;
  memset(v20, 0, 0x48uLL);
  v8 = 0;
  if ( Size > 0x20 )
    v8 = -1073741811;
  if ( v8 >= 0 )
  {
    if ( &a1[Size] < a1 || (unsigned __int64)&a1[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(&v20[10], a1, Size);
    if ( v20[10] == 1073741899 )
    {
      if ( Size != 32 )
      {
        v8 = -1073741811;
        goto LABEL_21;
      }
      v19[0] = &v20[11];
      v4 = 1;
    }
    else
    {
      v8 = -1073741811;
    }
    if ( v8 >= 0 )
    {
      v5 = UserReferenceDwmApiPort();
      if ( !v5 )
        v8 = -1073741823;
    }
  }
  if ( v8 >= 0 )
  {
    v15 = CheckOrAcquireDwmStateLock();
    if ( !v15 )
      v8 = -1073741823;
    if ( v8 >= 0 )
    {
      v6 = (struct _KPROCESS *)UserReferenceDwmProcess();
      PROCESS = v6;
      if ( !v6 )
        v8 = -1073741823;
    }
  }
LABEL_21:
  if ( v8 >= 0 )
  {
    v9 = 0LL;
    if ( v4 > 0LL )
    {
      while ( 1 )
      {
        v18 = (__int64 *)v19[v9];
        v17 = *v18;
        if ( *v18 )
        {
          CurrentProcess = PsGetCurrentProcess(v7);
          LOBYTE(v14) = 1;
          v8 = ObDuplicateObject(CurrentProcess, v17, PROCESS, v18, 0, 0, 6, v14);
          if ( v8 < 0 )
            break;
        }
        if ( ++v9 >= v4 )
          goto LABEL_31;
      }
      KeStackAttachProcess(PROCESS, &ApcState);
      while ( v9 > 0 )
        ObCloseHandle(*(HANDLE *)v19[--v9], 1);
      KeUnstackDetachProcess(&ApcState);
    }
LABEL_31:
    v6 = PROCESS;
  }
  if ( v6 )
    UserDereferenceDwmProcess(v6);
  if ( v15 )
    GreUnlockDwmState();
  if ( v8 >= 0 )
  {
    LOWORD(v20[0]) = Size;
    HIWORD(v20[0]) = Size + 40;
    LOWORD(v20[1]) = 0x8000;
    v11 = LpcRequestWaitReplyPortEx(v5, v20, v20);
    v8 = v11;
    if ( v11 == 192 || v11 == 258 )
      v8 = -1073741823;
    if ( v8 >= 0 )
    {
      for ( i = 0LL; i < v4; ++i )
        *(_QWORD *)v19[i] = 0LL;
      if ( (unsigned __int64)&a1[Size] > MmUserProbeAddress || &a1[Size] <= a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a1, &v20[10], Size);
    }
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  return (unsigned int)v8;
}
