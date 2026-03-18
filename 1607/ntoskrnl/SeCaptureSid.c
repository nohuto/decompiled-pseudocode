/*
 * XREFs of SeCaptureSid @ 0x1404791AC
 * Callers:
 *     SeAccessCheckByType @ 0x14005FEF0 (SeAccessCheckByType.c)
 *     AlpcpConnectPort @ 0x1404080D0 (AlpcpConnectPort.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140462DF0 (ExpWnfCaptureScopeInstanceId.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140476FE8 (AlpcpPortQueryConnectedSidInfo.c)
 *     NtCreateTokenEx @ 0x140477BDC (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1404797D0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14047BBD8 (NtCreateLowBoxToken.c)
 *     NtSecureConnectPort @ 0x1404B204C (NtSecureConnectPort.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlValidSid @ 0x1404217D0 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x1404792F0 (RtlLengthRequiredSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureSid(_BYTE *Src, char a2, __int64 a3, __int64 a4, int a5, char a6, PSID *a7)
{
  __int64 v8; // rax
  ULONG v9; // eax
  unsigned __int8 v10; // si
  ULONG v11; // eax
  ULONG v12; // ecx
  ULONG v13; // r14d
  PVOID PoolWithTag; // rax
  PSID v15; // rbx

  if ( a2 )
  {
    v8 = (__int64)(Src + 1);
    if ( (unsigned __int64)(Src + 1) >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v9 = *(unsigned __int8 *)v8;
    v10 = v9;
    v11 = RtlLengthRequiredSid(v9);
    v12 = v11;
    if ( v11 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v11] > 0x7FFFFFFF0000LL || &Src[v11] < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    if ( !a6 )
    {
      *a7 = Src;
      return 0LL;
    }
    v10 = Src[1];
    v12 = RtlLengthRequiredSid(v10);
  }
  v13 = v12;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x69536553u);
  *a7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src, v13);
  *((_BYTE *)*a7 + 1) = v10;
  v15 = *a7;
  if ( RtlValidSid(*a7) )
    return 0LL;
  ExFreePoolWithTag(v15, 0);
  *a7 = 0LL;
  return 3221225592LL;
}
