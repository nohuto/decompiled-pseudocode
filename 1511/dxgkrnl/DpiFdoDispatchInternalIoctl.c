/*
 * XREFs of DpiFdoDispatchInternalIoctl @ 0x1C00E6590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
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
  struct _ERESOURCE *v14; // r13
  int *i; // rsi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // r12
  unsigned int j; // edi
  __int64 (__fastcall *v21)(__int64, __int64 *); // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // [rsp+60h] [rbp+30h] BYREF

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
      v23 = WdLogNewEntry5_WdWarning(Options, a2, a3, a4);
      *(_QWORD *)(v23 + 24) = &DpiFdoDispatchInternalIoctl;
      *(_QWORD *)(v23 + 32) = LowPart;
      WdLogEvent5_WdWarning(v23);
      goto LABEL_23;
    }
    if ( (unsigned int)Options >= 0x10 && p_NamedPipeType )
    {
      v12 = p_NamedPipeType[1];
      v7 = 0;
      v13 = *p_NamedPipeType;
      KeEnterCriticalRegion();
      v14 = (struct _ERESOURCE *)(v6 + 1976);
      ExAcquireResourceSharedLite((PERESOURCE)(v6 + 1976), 1u);
      for ( i = *(int **)(v6 + 1968); i; i += 30 )
      {
        v16 = *i;
        if ( !*i )
          break;
        v26 = 0LL;
        if ( v16 == 1 )
        {
          v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))v12)(v13, &v26);
          if ( v7 < 0 )
            break;
          v17 = (unsigned int)i[4];
          if ( (_DWORD)v17 == 1 || (int)v17 > 2 && (int)v17 <= 4 )
          {
            *(_DWORD *)(v26 + 8) = v17;
          }
          else
          {
            v24 = (_QWORD *)WdLogNewEntry5_WdError(v17);
            v24[3] = &DpiFdoDispatchInternalIoctl;
            v24[4] = i[4];
            v24[5] = -1073741811LL;
            WdLogEvent5_WdError(v24);
          }
          *(_DWORD *)v26 = i[6];
          *(_DWORD *)(v26 + 4) = i[1];
          *(_DWORD *)(v26 + 12) = i[2];
          *(_BYTE *)(v26 + 16) = *((_BYTE *)i + 12);
          v7 = (*(__int64 (__fastcall **)(__int64, __int64))(v12 + 8))(v13, v26);
          if ( v7 < 0 )
          {
            (*(void (__fastcall **)(__int64, __int64))(v12 + 16))(v13, v26);
            break;
          }
        }
      }
      ExReleaseResourceLite(v14);
      KeLeaveCriticalRegion();
      goto LABEL_23;
    }
LABEL_28:
    v7 = -1073741789;
    v25 = (_QWORD *)WdLogNewEntry5_WdError(Options);
    v25[3] = &DpiFdoDispatchInternalIoctl;
    v25[4] = 0LL;
    v25[5] = -1073741789LL;
    WdLogEvent5_WdError(v25);
    goto LABEL_23;
  }
  if ( (unsigned int)Options < 0x10 || !p_NamedPipeType )
    goto LABEL_28;
  KeWaitForSingleObject((PVOID)(v6 + 2232), Executive, 0, 0, 0LL);
  v18 = p_NamedPipeType[1];
  v7 = 0;
  v19 = *p_NamedPipeType;
  for ( j = 0; j < *(_DWORD *)(v6 + 1468); ++j )
  {
    v21 = *(__int64 (__fastcall **)(__int64, __int64 *))v18;
    v26 = 0LL;
    v7 = v21(v19, &v26);
    if ( v7 < 0 )
      break;
    *(_DWORD *)v26 = j;
    *(_DWORD *)(v26 + 4) = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(v18 + 8))(v19, v26);
    if ( v7 < 0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(v18 + 16))(v19, v26);
      break;
    }
  }
  KeReleaseMutex((PRKMUTEX)(v6 + 2232), 0);
LABEL_23:
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = v7;
  IofCompleteRequest(a2, 1);
  return (unsigned int)v7;
}
