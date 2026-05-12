/*
 * XREFs of RaUnitDeviceUsageNotificationIrp @ 0x1C000B288
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0003418 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0003980 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0003998 (RaUnitAcquireRemoveLock.c)
 *     RaSendIrpSynchronous @ 0x1C0005B88 (RaSendIrpSynchronous.c)
 *     RaidIsUnitControlSupported @ 0x1C000E04C (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C000E0CC (RaCallMiniportUnitControl.c)
 *     _TlgWrite @ 0x1C000F63C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000F6DC (_TlgKeywordOn.c)
 *     RaidSecondaryDumpRegister @ 0x1C00128E8 (RaidSecondaryDumpRegister.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     RaidSecondaryDumpDeregister @ 0x1C00398D8 (RaidSecondaryDumpDeregister.c)
 */

__int64 __fastcall RaUnitDeviceUsageNotificationIrp(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  PIRP v4; // r15
  volatile signed __int32 *v5; // r14
  char v6; // r12
  int v7; // eax
  unsigned int Options; // r13d
  const struct _TlgProvider_t *v9; // rcx
  signed int Status; // esi
  _IO_STACK_LOCATION *v11; // rcx
  _IO_STACK_LOCATION *v12; // rax
  __int64 v13; // rcx
  int v15; // eax
  const struct _TlgProvider_t *v16; // rcx
  const GUID *v17; // r8
  const GUID *v18; // r9
  unsigned __int8 Lock; // [rsp+30h] [rbp-A9h]
  char v20; // [rsp+31h] [rbp-A8h] BYREF
  char v21; // [rsp+32h] [rbp-A7h] BYREF
  char v22; // [rsp+33h] [rbp-A6h] BYREF
  int v23; // [rsp+34h] [rbp-A5h] BYREF
  PIRP Irp; // [rsp+38h] [rbp-A1h]
  __int128 v25; // [rsp+40h] [rbp-99h] BYREF
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+50h] [rbp-89h]
  __int16 v27; // [rsp+58h] [rbp-81h] BYREF
  __int64 v28; // [rsp+5Ah] [rbp-7Fh]
  int v29; // [rsp+62h] [rbp-77h]
  __int16 v30; // [rsp+66h] [rbp-73h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-69h] BYREF
  __int64 v32; // [rsp+90h] [rbp-49h]
  __int64 v33; // [rsp+98h] [rbp-41h]
  __int64 v34; // [rsp+A0h] [rbp-39h]
  __int64 v35; // [rsp+A8h] [rbp-31h]
  int *v36; // [rsp+B0h] [rbp-29h]
  __int64 v37; // [rsp+B8h] [rbp-21h]
  char *v38; // [rsp+C0h] [rbp-19h]
  __int64 v39; // [rsp+C8h] [rbp-11h]
  char *v40; // [rsp+D0h] [rbp-9h]
  __int64 v41; // [rsp+D8h] [rbp-1h]
  char *v42; // [rsp+E0h] [rbp+7h]
  __int64 v43; // [rsp+E8h] [rbp+Fh]

  v2 = *(_QWORD *)(a1 + 24);
  Irp = a2;
  v27 = 0;
  v28 = 0LL;
  v29 = 0;
  v4 = 0LL;
  v30 = 0;
  v5 = 0LL;
  v6 = 0;
  v25 = 0LL;
  if ( !v2 || (v7 = *(_DWORD *)(a1 + 40)) == 0 || (unsigned int)(v7 - 5) <= 1 )
  {
    Status = -1073741810;
    goto LABEL_22;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  if ( Options == 1 )
  {
    v5 = (volatile signed __int32 *)(a1 + 628);
    goto LABEL_8;
  }
  if ( CurrentStackLocation->Parameters.Create.Options == 2 )
  {
    v5 = (volatile signed __int32 *)(a1 + 636);
    goto LABEL_8;
  }
  v9 = (const struct _TlgProvider_t *)(CurrentStackLocation->Parameters.Create.Options - 3);
  if ( CurrentStackLocation->Parameters.Create.Options == 3 )
  {
    v5 = (volatile signed __int32 *)(a1 + 632);
LABEL_8:
    v6 = 1;
    goto LABEL_9;
  }
  if ( CurrentStackLocation->Parameters.Create.Options == 4 )
  {
    if ( CurrentStackLocation->Parameters.SetLock.Lock )
    {
      *(_BYTE *)(a1 + 146) |= 1u;
      *(_BYTE *)(v2 + 104) |= 0x80u;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 5060LL) )
        RaidSecondaryDumpRegister(a1);
    }
    else
    {
      *(_BYTE *)(a1 + 146) &= ~1u;
      *(_BYTE *)(v2 + 104) &= ~0x80u;
      RaidSecondaryDumpDeregister();
    }
    v6 = 1;
    if ( (unsigned int)dword_1C0044050 > 5 && TlgKeywordOn(v9, 0x400000000000uLL) )
    {
      v23 = *(_DWORD *)(v2 + 56);
      v20 = *(_BYTE *)(a1 + 88);
      v21 = *(_BYTE *)(a1 + 89);
      v22 = *(_BYTE *)(a1 + 90);
      v32 = v2 + 5412;
      v34 = a1 + 1672;
      v36 = &v23;
      v38 = &v20;
      v40 = &v21;
      v42 = &v22;
      v33 = 16LL;
      v35 = 16LL;
      v37 = 4LL;
      v39 = 1LL;
      v41 = 1LL;
      v43 = 1LL;
      TlgWrite(v16, &unk_1C003D03D, v17, v18, 8u, &pData);
    }
  }
LABEL_9:
  v4 = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v2 + 8) + 76LL) + 3, 0);
  if ( !v4 )
  {
    Status = -1073741801;
    goto LABEL_24;
  }
  Status = RaUnitAcquireRemoveLock(a1);
  if ( Status >= 0 )
  {
    v11 = CurrentStackLocation;
    v4->Tail.Overlay.Thread = Irp->Tail.Overlay.Thread;
    v12 = v4->Tail.Overlay.CurrentStackLocation;
    v4->IoStatus.Status = -1073741637;
    *(_OWORD *)&v12[-1].MajorFunction = *(_OWORD *)&v11->MajorFunction;
    *(_OWORD *)&v12[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v11->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&v12[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v11->Parameters.QueryDeviceRelations + 6);
    *(_OWORD *)&v12[-1].FileObject = *(_OWORD *)&v11->FileObject;
    v12[-1].Context = v11->Context;
    Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(v2 + 8), v4);
    if ( Status < 0 || (Status = v4->IoStatus.Status, Status < 0) )
    {
      if ( Status != -1073741637 || Options != 4 )
      {
LABEL_21:
        RaUnitReleaseRemoveLock(a1);
        goto LABEL_22;
      }
      Status = 0;
    }
    if ( v5 )
    {
      if ( Lock )
        _InterlockedIncrement(v5);
      else
        _InterlockedDecrement(v5);
      IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 8));
    }
    if ( v6 && (unsigned __int8)RaidIsUnitControlSupported(a1, 1LL) )
    {
      v13 = *(_QWORD *)(a1 + 24);
      v27 = 1;
      LOWORD(v28) = *(_WORD *)(v13 + 56);
      HIWORD(v28) = *(_WORD *)(a1 + 88);
      LOBYTE(v29) = *(_BYTE *)(a1 + 90);
      *(_QWORD *)&v25 = &v27;
      BYTE12(v25) = Lock;
      *(_DWORD *)((char *)&v28 + 2) = 4;
      DWORD2(v25) = Options;
      RaCallMiniportUnitControl(v13 + 296, 1LL, &v25);
    }
    if ( Options == 3 )
    {
      v15 = *(_DWORD *)(a1 + 632);
      if ( v15 != 1 || *(_QWORD *)(v2 + 5144) )
      {
        if ( !v15 && a1 == *(_QWORD *)(v2 + 5144) )
          *(_QWORD *)(v2 + 5144) = 0LL;
      }
      else
      {
        *(_QWORD *)(v2 + 5144) = a1;
      }
    }
    goto LABEL_21;
  }
LABEL_22:
  if ( v4 )
    IoFreeIrp(v4);
LABEL_24:
  RaidCompleteRequestEx(Irp, 0, Status);
  return (unsigned int)Status;
}
