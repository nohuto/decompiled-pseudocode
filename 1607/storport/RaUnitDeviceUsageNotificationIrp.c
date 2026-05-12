/*
 * XREFs of RaUnitDeviceUsageNotificationIrp @ 0x1C0011168
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0001A28 (RaUnitPnpIrp.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0002064 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000207C (RaUnitAcquireRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     RaSendIrpSynchronous @ 0x1C00098AC (RaSendIrpSynchronous.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C000F37C (StorUpdateCrashDumpPowerReady.c)
 *     RaidIsUnitControlSupported @ 0x1C00110A8 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0011128 (RaCallMiniportUnitControl.c)
 *     _TlgKeywordOn @ 0x1C0014C64 (_TlgKeywordOn.c)
 *     RaidSecondaryDumpRegister @ 0x1C0018940 (RaidSecondaryDumpRegister.c)
 *     _TlgWrite @ 0x1C0018D00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     RaidSecondaryDumpDeregister @ 0x1C0042ABC (RaidSecondaryDumpDeregister.c)
 */

__int64 __fastcall RaUnitDeviceUsageNotificationIrp(__int64 a1, IRP *a2)
{
  __int64 v2; // rsi
  PIRP v4; // r15
  volatile signed __int32 *v5; // r14
  char v6; // r12
  int v7; // eax
  unsigned int Options; // r13d
  unsigned __int8 Lock; // dl
  const struct _TlgProvider_t *v10; // rcx
  signed int Status; // edi
  _IO_STACK_LOCATION *v12; // rcx
  _IO_STACK_LOCATION *v13; // rax
  __int64 v14; // rcx
  int v16; // eax
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  unsigned __int8 v20; // [rsp+30h] [rbp-A9h]
  char v21; // [rsp+31h] [rbp-A8h] BYREF
  char v22; // [rsp+32h] [rbp-A7h] BYREF
  char v23; // [rsp+33h] [rbp-A6h] BYREF
  int v24; // [rsp+34h] [rbp-A5h] BYREF
  PIRP Irp; // [rsp+38h] [rbp-A1h]
  __int128 v26; // [rsp+40h] [rbp-99h]
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+50h] [rbp-89h]
  __int16 v28; // [rsp+58h] [rbp-81h] BYREF
  __int64 v29; // [rsp+5Ah] [rbp-7Fh]
  int v30; // [rsp+62h] [rbp-77h]
  __int16 v31; // [rsp+66h] [rbp-73h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-69h] BYREF
  __int64 v33; // [rsp+90h] [rbp-49h]
  __int64 v34; // [rsp+98h] [rbp-41h]
  __int64 v35; // [rsp+A0h] [rbp-39h]
  __int64 v36; // [rsp+A8h] [rbp-31h]
  int *v37; // [rsp+B0h] [rbp-29h]
  __int64 v38; // [rsp+B8h] [rbp-21h]
  char *v39; // [rsp+C0h] [rbp-19h]
  __int64 v40; // [rsp+C8h] [rbp-11h]
  char *v41; // [rsp+D0h] [rbp-9h]
  __int64 v42; // [rsp+D8h] [rbp-1h]
  char *v43; // [rsp+E0h] [rbp+7h]
  __int64 v44; // [rsp+E8h] [rbp+Fh]

  v2 = *(_QWORD *)(a1 + 24);
  Irp = a2;
  v28 = 0;
  v29 = 0LL;
  v30 = 0;
  v4 = 0LL;
  v31 = 0;
  v5 = 0LL;
  v6 = 0;
  v26 = 0LL;
  if ( v2 )
  {
    v7 = *(_DWORD *)(a1 + 40);
    if ( v7 )
    {
      if ( (unsigned int)(v7 - 5) > 1 )
      {
        CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
        Options = CurrentStackLocation->Parameters.Create.Options;
        Lock = CurrentStackLocation->Parameters.SetLock.Lock;
        v20 = Lock;
        if ( Options == 1 )
        {
          v5 = (volatile signed __int32 *)(a1 + 652);
        }
        else if ( CurrentStackLocation->Parameters.Create.Options == 2 )
        {
          v5 = (volatile signed __int32 *)(a1 + 660);
        }
        else
        {
          v10 = (const struct _TlgProvider_t *)(CurrentStackLocation->Parameters.Create.Options - 3);
          if ( CurrentStackLocation->Parameters.Create.Options != 3 )
          {
            if ( CurrentStackLocation->Parameters.Create.Options == 4 )
            {
              if ( Lock )
              {
                *(_BYTE *)(a1 + 154) |= 1u;
                *(_BYTE *)(v2 + 104) |= 0x80u;
                if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 5060LL) )
                  RaidSecondaryDumpRegister(a1);
              }
              else
              {
                *(_BYTE *)(a1 + 154) &= ~1u;
                *(_BYTE *)(v2 + 104) &= ~0x80u;
                RaidSecondaryDumpDeregister();
              }
              v6 = 1;
              if ( (unsigned int)dword_1C004F010 > 5 && TlgKeywordOn(v10, 0x400000000000uLL) )
              {
                v24 = *(_DWORD *)(v2 + 56);
                v21 = *(_BYTE *)(a1 + 88);
                v22 = *(_BYTE *)(a1 + 89);
                v23 = *(_BYTE *)(a1 + 90);
                v33 = v2 + 5192;
                v35 = a1 + 1688;
                v37 = &v24;
                v39 = &v21;
                v41 = &v22;
                v43 = &v23;
                v34 = 16LL;
                v36 = 16LL;
                v38 = 4LL;
                v40 = 1LL;
                v42 = 1LL;
                v44 = 1LL;
                TlgWrite(v17, &unk_1C00464C2, v18, v19, 8u, &pData);
              }
            }
            goto LABEL_11;
          }
          v5 = (volatile signed __int32 *)(a1 + 656);
        }
        v6 = 1;
        if ( v5 && !*v5 && !Lock )
        {
          Status = -1073741823;
          goto LABEL_26;
        }
LABEL_11:
        v4 = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v2 + 8) + 76LL) + 3, 0);
        if ( !v4 )
        {
          Status = -1073741801;
          goto LABEL_26;
        }
        Status = RaUnitAcquireRemoveLock(a1);
        if ( Status < 0 )
          goto LABEL_24;
        v12 = CurrentStackLocation;
        v4->Tail.Overlay.Thread = Irp->Tail.Overlay.Thread;
        v13 = v4->Tail.Overlay.CurrentStackLocation;
        v4->IoStatus.Status = -1073741637;
        *(_OWORD *)&v13[-1].MajorFunction = *(_OWORD *)&v12->MajorFunction;
        *(_OWORD *)&v13[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v12->Parameters.QueryFile.FileInformationClass;
        *(_OWORD *)(&v13[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v12->Parameters.QueryDeviceRelations + 6);
        *(_OWORD *)&v13[-1].FileObject = *(_OWORD *)&v12->FileObject;
        v13[-1].Context = v12->Context;
        Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(v2 + 8), v4);
        if ( Status < 0 || (Status = v4->IoStatus.Status, Status < 0) )
        {
          if ( Status != -1073741637 || Options != 4 )
          {
LABEL_23:
            RaUnitReleaseRemoveLock((struct _KEVENT *)a1);
            goto LABEL_24;
          }
          Status = 0;
        }
        if ( v5 )
        {
          if ( v20 )
            _InterlockedIncrement(v5);
          else
            _InterlockedDecrement(v5);
          IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 8));
        }
        if ( v6 && RaidIsUnitControlSupported(a1, 1) )
        {
          v14 = *(_QWORD *)(a1 + 24);
          v28 = 1;
          LOWORD(v29) = *(_WORD *)(v14 + 56);
          HIWORD(v29) = *(_WORD *)(a1 + 88);
          LOBYTE(v30) = *(_BYTE *)(a1 + 90);
          *(_QWORD *)&v26 = &v28;
          BYTE12(v26) = v20;
          *(_DWORD *)((char *)&v29 + 2) = 4;
          DWORD2(v26) = Options;
          RaCallMiniportUnitControl(v14 + 296);
        }
        if ( Options == 3 )
        {
          v16 = *(_DWORD *)(a1 + 656);
          if ( v16 != 1 || *(_QWORD *)(v2 + 5144) )
          {
            if ( !v16 && a1 == *(_QWORD *)(v2 + 5144) )
              *(_QWORD *)(v2 + 5144) = 0LL;
          }
          else
          {
            *(_QWORD *)(v2 + 5144) = a1;
            StorUpdateCrashDumpPowerReady(v2);
          }
        }
        goto LABEL_23;
      }
    }
  }
  Status = -1073741810;
LABEL_24:
  if ( v4 )
    IoFreeIrp(v4);
LABEL_26:
  RaidCompleteRequestEx(Irp, 0, Status);
  return (unsigned int)Status;
}
