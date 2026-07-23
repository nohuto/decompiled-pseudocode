/*
 * XREFs of FsRtlpAttachOplockKey @ 0x14007BA34
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1404696E8 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlOplockBreakH @ 0x1404C47E0 (FsRtlOplockBreakH.c)
 * Callees:
 *     IoGetOplockKeyContextEx @ 0x14007B518 (IoGetOplockKeyContextEx.c)
 *     IoSetOplockKeyContext @ 0x1401336D0 (IoSetOplockKeyContext.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140413F90 (FsRtlFreeExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x14046A400 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlFindExtraCreateParameter @ 0x14046A420 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x14046A4A0 (FsRtlRemoveExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x14046A594 (FsRtlAcknowledgeEcp.c)
 */

__int64 __fastcall FsRtlpAttachOplockKey(PIRP Irp, __int64 a2, __int64 a3, __int64 a4)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int v6; // ebx
  struct _ECP_LIST *v7; // rdi
  struct _ECP_LIST *v8; // rcx
  unsigned __int16 v10; // di
  PVOID EcpContext; // [rsp+20h] [rbp-38h] BYREF
  struct _ECP_LIST *ExtraCreateParameter[2]; // [rsp+28h] [rbp-30h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = 0;
  if ( !CurrentStackLocation->MajorFunction
    && !IoGetOplockKeyContextEx((__int64)CurrentStackLocation->FileObject, a2, a3, a4) )
  {
    EcpContext = 0LL;
    ExtraCreateParameter[0] = 0LL;
    IoGetIrpExtraCreateParameter(Irp, ExtraCreateParameter);
    v7 = ExtraCreateParameter[0];
    if ( ExtraCreateParameter[0] )
    {
      v8 = ExtraCreateParameter[0];
      *(GUID *)ExtraCreateParameter = GUID_ECP_DUAL_OPLOCK_KEY;
      if ( FsRtlFindExtraCreateParameter(v8, (LPCGUID)ExtraCreateParameter, &EcpContext, 0LL) )
      {
        *(GUID *)ExtraCreateParameter = GUID_ECP_OPLOCK_KEY;
        if ( FsRtlRemoveExtraCreateParameter(v7, (LPCGUID)ExtraCreateParameter, &EcpContext, 0LL) )
          return v6;
        v10 = 1;
      }
      else
      {
        v10 = 2;
      }
      v6 = IoSetOplockKeyContext(CurrentStackLocation->FileObject, EcpContext, v10);
      if ( v10 == 1 )
        FsRtlFreeExtraCreateParameter(EcpContext);
      else
        FsRtlAcknowledgeEcp(EcpContext);
      if ( v6 == -1073741823 )
        return 0;
    }
  }
  return v6;
}
