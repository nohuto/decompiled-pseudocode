/*
 * XREFs of CmpVEExecuteCreateLogic @ 0x1404BC7F8
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmRealKCBToVirtualPath @ 0x1403E1950 (CmRealKCBToVirtualPath.c)
 *     CmpIsSystemEntity @ 0x14040E004 (CmpIsSystemEntity.c)
 *     CmpLockKcbExclusive @ 0x140420F10 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpIsMasterHive @ 0x1404BCA00 (CmpIsMasterHive.c)
 *     CmpCheckAdminAccess @ 0x140600A48 (CmpCheckAdminAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x140600B7C (CmpDoAccessCheckOnKCB.c)
 *     CmpReparseToVirtualPath @ 0x14060180C (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x14060184C (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x140602674 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140602934 (CmpReportAuditVirtualizationEvent.c)
 */

__int64 __fastcall CmpVEExecuteCreateLogic(
        _WORD *P,
        char *a2,
        __m128i *a3,
        char a4,
        int a5,
        __int64 a6,
        __int64 a7,
        UNICODE_STRING *a8)
{
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // ebx
  wchar_t *Buffer; // rcx
  __int64 v16; // r9
  __int64 v18; // [rsp+20h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  char v20; // [rsp+70h] [rbp+30h]

  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( P[29]
    || !CmpVEEnabled
    || (P[89] & 0x200) != 0
    || (unsigned __int8)CmpIsMasterHive(P)
    || CmpIsSystemEntity((int *)(a7 + 16)) )
  {
    goto LABEL_23;
  }
  if ( (unsigned __int8)CmpReparseToVirtualPath(P, v12, &DestinationString) )
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_8;
  }
  if ( (*((_DWORD *)P + 44) & 0x20) != 0
    || (LOBYTE(v13) = a4, (unsigned __int8)CmpDoAccessCheckOnKCB(P, a6, a5 | 4u, v13)) )
  {
LABEL_23:
    v14 = -1073741199;
    goto LABEL_24;
  }
  LOBYTE(v16) = a4;
  if ( !(unsigned __int8)CmpDoAccessCheckOnKCB(P, a6, 131097LL, v16) )
    goto LABEL_15;
  v14 = CmpCheckAdminAccess(a5 | 4u, (PSECURITY_DESCRIPTOR)(*((_QWORD *)P + 10) + 32LL));
  if ( v14 < 0 )
    goto LABEL_24;
  if ( !v20 )
  {
LABEL_15:
    v14 = -1073741790;
    goto LABEL_24;
  }
  CmpUnlockKcb(a2);
  v14 = CmpReplicateKeyToVirtual(P);
  CmpLockKcbExclusive((__int64)a2);
  if ( v14 >= 0 )
  {
    v14 = CmpExamineSaclForAuditEvent((PSECURITY_DESCRIPTOR)(*((_QWORD *)P + 10) + 32LL));
    if ( v14 >= 0 )
    {
      if ( !v20 || (v14 = CmpReportAuditVirtualizationEvent(P), v14 >= 0) )
      {
        *(_DWORD *)(a7 + 104) |= 2u;
        *(_QWORD *)(a7 + 120) = v18;
LABEL_8:
        v14 = CmRealKCBToVirtualPath((__int64)P, a3, &DestinationString);
        if ( v14 >= 0 )
        {
          Buffer = a8->Buffer;
          if ( Buffer )
            ExFreePoolWithTag(Buffer, 0);
          *a8 = DestinationString;
          RtlInitUnicodeString(&DestinationString, 0LL);
          *(_DWORD *)a7 |= 8u;
          v14 = 260;
        }
      }
    }
  }
LABEL_24:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v14;
}
