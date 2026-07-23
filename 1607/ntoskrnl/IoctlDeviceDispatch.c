/*
 * XREFs of IoctlDeviceDispatch @ 0x140612B08
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     EtwActivityIdControl @ 0x14009F51C (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     VRegEnabledInJob @ 0x1404CB334 (VRegEnabledInJob.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14061318C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140613440 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetComRootKey @ 0x140613638 (VrpHandleIoctlGetComRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140613808 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140613AAC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140613D24 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlModifyFlags @ 0x140613F34 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140614030 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140614240 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 */

__int64 __fastcall IoctlDeviceDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int v4; // edi
  ULONG LowPart; // eax
  __int64 v6; // r8
  unsigned int LevelPlus1; // ecx
  ULONG v8; // eax
  ULONG v9; // edx
  unsigned int DifferencingHive; // eax
  unsigned __int64 v12; // [rsp+30h] [rbp-19h] BYREF
  GUID pActivityId; // [rsp+38h] [rbp-11h] BYREF
  GUID ActivityId; // [rsp+48h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+Fh] BYREF
  unsigned __int64 *v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+80h] [rbp+37h]
  int v18; // [rsp+84h] [rbp+3Bh]

  pActivityId.Data1 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  ActivityId.Data1 = 0;
  a2->IoStatus.Information = 0LL;
  *(_QWORD *)&pActivityId.Data2 = 0LL;
  *(_DWORD *)&pActivityId.Data4[4] = 0;
  *(_QWORD *)&ActivityId.Data2 = 0LL;
  *(_DWORD *)&ActivityId.Data4[4] = 0;
  if ( (unsigned int)VRegEnabledInJob(&v12) )
  {
    v4 = -1073741808;
    if ( stru_1402F3520.LevelPlus1 > 2 )
    {
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      v18 = 0;
      LODWORD(v12) = LowPart;
      v16 = &v12;
      v17 = 4;
      TlgWrite(&stru_1402F3520, &unk_14027B508, &pActivityId, 0LL, 3u, &pData);
    }
    goto LABEL_28;
  }
  EtwActivityIdControl(1u, &ActivityId);
  LevelPlus1 = stru_1402F3520.LevelPlus1;
  if ( stru_1402F3520.LevelPlus1 > 4 )
  {
    v8 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    v18 = 0;
    LODWORD(v12) = v8;
    v16 = &v12;
    v17 = 4;
    TlgWrite(&stru_1402F3520, &unk_14027B58E, &pActivityId, &ActivityId, 3u, &pData);
    LevelPlus1 = stru_1402F3520.LevelPlus1;
  }
  v9 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( v9 == 2228228 )
  {
    LOBYTE(v6) = a2->RequestorMode;
    DifferencingHive = VrpHandleIoctlInitializeJobForVreg(
                         a2->AssociatedIrp.MasterIrp,
                         CurrentStackLocation->Parameters.Create.Options,
                         v6);
    goto LABEL_27;
  }
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x220008u:
      LOBYTE(v6) = a2->RequestorMode;
      DifferencingHive = VrpHandleIoctlLoadDifferencingHive(
                           a2->AssociatedIrp.MasterIrp,
                           CurrentStackLocation->Parameters.Create.Options,
                           v6);
      goto LABEL_27;
    case 0x22000Cu:
      LOBYTE(v6) = a2->RequestorMode;
      DifferencingHive = VrpHandleIoctlCreateNamespaceNode(
                           a2->AssociatedIrp.MasterIrp,
                           CurrentStackLocation->Parameters.Create.Options,
                           v6);
      goto LABEL_27;
    case 0x220010u:
      LOBYTE(v6) = a2->RequestorMode;
      DifferencingHive = VrpHandleIoctlModifyFlags(
                           a2->AssociatedIrp.MasterIrp,
                           CurrentStackLocation->Parameters.Create.Options,
                           v6);
      goto LABEL_27;
    case 0x220014u:
      LOBYTE(v6) = a2->RequestorMode;
      DifferencingHive = VrpHandleIoctlCreateMultipleNamespaceNodes(
                           a2->AssociatedIrp.MasterIrp,
                           CurrentStackLocation->Parameters.Create.Options,
                           v6);
      goto LABEL_27;
    case 0x220018u:
      LOBYTE(v6) = a2->RequestorMode;
      DifferencingHive = VrpHandleIoctlUnloadDynamicallyLoadedHives(
                           a2->AssociatedIrp.MasterIrp,
                           CurrentStackLocation->Parameters.Create.Options,
                           v6);
      goto LABEL_27;
    case 0x22001Cu:
      LOBYTE(v6) = a2->RequestorMode;
      DifferencingHive = VrpHandleIoctlGetComRootKey(
                           a2->AssociatedIrp.MasterIrp,
                           CurrentStackLocation->Parameters.Create.Options,
                           v6);
      goto LABEL_27;
    case 0x220020u:
      LOBYTE(v6) = a2->RequestorMode;
      DifferencingHive = VrpHandleIoctlLoadDifferencingHiveForHost(
                           a2->AssociatedIrp.MasterIrp,
                           CurrentStackLocation->Parameters.Create.Options,
                           v6);
      goto LABEL_27;
    case 0x220024u:
      LOBYTE(v6) = a2->RequestorMode;
      DifferencingHive = VrpHandleIoctlUnloadDifferencingHiveForHost(
                           a2->AssociatedIrp.MasterIrp,
                           CurrentStackLocation->Parameters.Create.Options,
                           v6);
LABEL_27:
      v4 = DifferencingHive;
      goto LABEL_28;
  }
  if ( LevelPlus1 > 2 )
  {
    v18 = 0;
    v16 = &v12;
    LODWORD(v12) = v9;
    v17 = 4;
    TlgWrite(&stru_1402F3520, &unk_14027B5B3, &pActivityId, 0LL, 3u, &pData);
  }
  v4 = -1073741808;
LABEL_28:
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 0);
  if ( stru_1402F3520.LevelPlus1 > 4 )
  {
    v18 = 0;
    v16 = &v12;
    LODWORD(v12) = v4;
    v17 = 4;
    TlgWrite(&stru_1402F3520, &unk_14027B54A, &pActivityId, 0LL, 3u, &pData);
  }
  return v4;
}
