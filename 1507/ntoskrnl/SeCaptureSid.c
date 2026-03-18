/*
 * XREFs of SeCaptureSid @ 0x140470AC8
 * Callers:
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     NtCreateLowBoxToken @ 0x140412A24 (NtCreateLowBoxToken.c)
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 *     NtCreateTokenEx @ 0x14046EF1C (NtCreateTokenEx.c)
 *     AlpcpConnectPort @ 0x140472880 (AlpcpConnectPort.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140502CE8 (ExpWnfCaptureScopeInstanceId.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14051FAF8 (AlpcpPortQueryConnectedSidInfo.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 *     NtSecureConnectPort @ 0x140529588 (NtSecureConnectPort.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlLengthRequiredSid @ 0x140470D24 (RtlLengthRequiredSid.c)
 *     RtlValidSid @ 0x1404CA0C0 (RtlValidSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureSid(unsigned __int8 *Src, char a2, __int64 a3, __int64 a4, int a5, char a6, PSID *a7)
{
  unsigned __int8 *v8; // rcx
  unsigned __int8 v9; // si
  ULONG v10; // eax
  ULONG v11; // ecx
  ULONG v12; // r14d
  PVOID PoolWithTag; // rax
  PSID v14; // rbx

  if ( a2 )
  {
    v8 = Src + 1;
    if ( (unsigned __int64)v8 >= MmUserProbeAddress )
      v8 = (unsigned __int8 *)MmUserProbeAddress;
    v9 = *v8;
    v10 = RtlLengthRequiredSid(*v8);
    v11 = v10;
    if ( v10 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v10] > MmUserProbeAddress || &Src[v10] < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  else
  {
    if ( !a6 )
    {
      *a7 = Src;
      return 0LL;
    }
    v9 = Src[1];
    v11 = RtlLengthRequiredSid(v9);
  }
  v12 = v11;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x69536553u);
  *a7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src, v12);
  *((_BYTE *)*a7 + 1) = v9;
  v14 = *a7;
  if ( RtlValidSid(*a7) )
    return 0LL;
  ExFreePoolWithTag(v14, 0);
  *a7 = 0LL;
  return 3221225592LL;
}
