/*
 * XREFs of SeCaptureSid @ 0x14046B354
 * Callers:
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     NtCreateLowBoxToken @ 0x1403C0A6C (NtCreateLowBoxToken.c)
 *     NtCreateTokenEx @ 0x1403C35AC (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1403C45C8 (NtSetInformationToken.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1403E5B1C (ExpWnfCaptureScopeInstanceId.c)
 *     AlpcpConnectPort @ 0x14046D59C (AlpcpConnectPort.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 *     NtSecureConnectPort @ 0x140481DB0 (NtSecureConnectPort.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14048C178 (AlpcpPortQueryConnectedSidInfo.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlValidSid @ 0x14046C1EC (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x14046C3B0 (RtlLengthRequiredSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
