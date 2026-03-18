/*
 * XREFs of DpiFdoDispatchInternalIoctl @ 0x1C00F5AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiFdoDispatchInternalIoctl(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v6; // rsi
  int v7; // ebx
  __int64 LowPart; // r15
  __int64 Options; // rcx
  _QWORD *p_NamedPipeType; // rdi
  int v11; // eax
  __int64 v12; // r15
  __int64 v13; // r12
  int *i; // rdi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // r12
  unsigned int j; // edi
  __int64 (__fastcall *v20)(__int64, __int64 *); // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+60h] [rbp+30h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = *(_QWORD *)(a1 + 64);
  v7 = -1073741637;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Options = CurrentStackLocation->Parameters.Create.Options;
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  v11 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2302031;
  if ( v11 )
  {
    if ( v11 != 4 )
    {
      v22 = WdLogNewEntry5_WdWarning(Options, a2, a3, a4);
      *(_QWORD *)(v22 + 24) = LowPart;
      WdLogEvent5_WdWarning(v22);
      goto LABEL_23;
    }
    if ( (unsigned int)Options >= 0x10 && p_NamedPipeType )
    {
      v12 = p_NamedPipeType[1];
      v7 = 0;
      v13 = *p_NamedPipeType;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v6 + 3120), 1u);
      for ( i = *(int **)(v6 + 3112); i; i += 30 )
      {
        v15 = *i;
        if ( !*i )
          break;
        v25 = 0LL;
        if ( v15 == 1 )
        {
          v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))v12)(v13, &v25);
          if ( v7 < 0 )
            break;
          v16 = (unsigned int)i[4];
          if ( (_DWORD)v16 == 1 || (int)v16 > 2 && (int)v16 <= 4 )
          {
            *(_DWORD *)(v25 + 8) = v16;
          }
          else
          {
            v23 = WdLogNewEntry5_WdError(v16);
            *(_QWORD *)(v23 + 24) = i[4];
            *(_QWORD *)(v23 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v23);
          }
          *(_DWORD *)v25 = i[6];
          *(_DWORD *)(v25 + 4) = i[1];
          *(_DWORD *)(v25 + 12) = i[2];
          *(_BYTE *)(v25 + 16) = *((_BYTE *)i + 12);
          v7 = (*(__int64 (__fastcall **)(__int64, __int64))(v12 + 8))(v13, v25);
          if ( v7 < 0 )
          {
            (*(void (__fastcall **)(__int64, __int64))(v12 + 16))(v13, v25);
            break;
          }
        }
      }
      ExReleaseResourceLite((PERESOURCE)(v6 + 3120));
      KeLeaveCriticalRegion();
      goto LABEL_23;
    }
LABEL_28:
    v7 = -1073741789;
    v24 = WdLogNewEntry5_WdError(Options);
    *(_QWORD *)(v24 + 24) = -1073741789LL;
    WdLogEvent5_WdError(v24);
    goto LABEL_23;
  }
  if ( (unsigned int)Options < 0x10 || !p_NamedPipeType )
    goto LABEL_28;
  KeWaitForSingleObject((PVOID)(v6 + 3376), Executive, 0, 0, 0LL);
  v17 = p_NamedPipeType[1];
  v7 = 0;
  v18 = *p_NamedPipeType;
  for ( j = 0; j < *(_DWORD *)(v6 + 2548); ++j )
  {
    v20 = *(__int64 (__fastcall **)(__int64, __int64 *))v17;
    v25 = 0LL;
    v7 = v20(v18, &v25);
    if ( v7 < 0 )
      break;
    *(_DWORD *)v25 = j;
    *(_DWORD *)(v25 + 4) = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(v17 + 8))(v18, v25);
    if ( v7 < 0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(v17 + 16))(v18, v25);
      break;
    }
  }
  KeReleaseMutex((PRKMUTEX)(v6 + 3376), 0);
LABEL_23:
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = v7;
  IofCompleteRequest(a2, 1);
  return (unsigned int)v7;
}
