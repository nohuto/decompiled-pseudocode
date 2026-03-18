/*
 * XREFs of IopSymlinkAllocateAndAddECP @ 0x140548E7C
 * Callers:
 *     IopSymlinkUpdateECP @ 0x140548AC0 (IopSymlinkUpdateECP.c)
 *     IopSymlinkCreateECP @ 0x140548C44 (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x140548FF4 (IopGraftName.c)
 * Callees:
 *     IoClearIrpExtraCreateParameter @ 0x1401F5E2C (IoClearIrpExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140472540 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140472610 (FsRtlAllocateExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1404765E4 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140476654 (FsRtlFreeExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x1404A5730 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlInsertExtraCreateParameter @ 0x14050B1D0 (FsRtlInsertExtraCreateParameter.c)
 *     IoSetIrpExtraCreateParameter @ 0x1405496A8 (IoSetIrpExtraCreateParameter.c)
 */

__int64 __fastcall IopSymlinkAllocateAndAddECP(PIRP Irp, PVOID *EcpContext, unsigned __int16 a3)
{
  int v4; // ebx
  char v6; // r14
  NTSTATUS ParameterFromLookasideList; // edi
  struct _ECP_LIST *v8; // rbx
  PECP_LIST EcpList; // [rsp+58h] [rbp+10h] BYREF

  *EcpContext = 0LL;
  EcpList = 0LL;
  v4 = a3;
  v6 = 0;
  IoGetIrpExtraCreateParameter(Irp, &EcpList);
  ParameterFromLookasideList = FsRtlAllocateExtraCreateParameterFromLookasideList(
                                 &IopSymlinkECPGuid,
                                 v4 + 32,
                                 0,
                                 (PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK)IopSymlinkCleanupECP,
                                 &IopSymlinkInfoLookasideList,
                                 EcpContext);
  if ( ParameterFromLookasideList >= 0 )
  {
    v8 = EcpList;
    if ( EcpList )
      goto LABEL_5;
    ParameterFromLookasideList = FsRtlAllocateExtraCreateParameterList(0, &EcpList);
    if ( ParameterFromLookasideList >= 0 )
    {
      v8 = EcpList;
      IoSetIrpExtraCreateParameter(Irp, EcpList);
      v6 = 1;
LABEL_5:
      ParameterFromLookasideList = FsRtlInsertExtraCreateParameter(v8, *EcpContext);
      if ( ParameterFromLookasideList >= 0 )
        return (unsigned int)ParameterFromLookasideList;
      goto LABEL_8;
    }
  }
  v8 = EcpList;
LABEL_8:
  if ( *EcpContext )
  {
    *((_QWORD *)*EcpContext + 1) = 0LL;
    FsRtlFreeExtraCreateParameter(*EcpContext);
    *EcpContext = 0LL;
  }
  if ( v6 )
  {
    FsRtlFreeExtraCreateParameterList(v8);
    IoClearIrpExtraCreateParameter(Irp);
  }
  return (unsigned int)ParameterFromLookasideList;
}
