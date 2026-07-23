/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x1406000D4
 * Callers:
 *     NtSetValueKey @ 0x140401F58 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x1404F2CE0 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x1405F9EA4 (NtRenameKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1401B4AC0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpGetMappingHiveForString @ 0x1403E1798 (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationIDFromFullVirtualPath @ 0x1403E18A0 (CmpGetVirtualizationIDFromFullVirtualPath.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpIsSystemEntity @ 0x14040E004 (CmpIsSystemEntity.c)
 *     CmpLockKcbExclusive @ 0x140420F10 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     CmpCleanupParseContext @ 0x14046353C (CmpCleanupParseContext.c)
 *     CmpIsMasterHive @ 0x1404BCA00 (CmpIsMasterHive.c)
 *     CmpCheckAdminAccess @ 0x140600A48 (CmpCheckAdminAccess.c)
 *     CmpReparseToVirtualPath @ 0x14060180C (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x14060184C (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x140602674 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140602934 (CmpReportAuditVirtualizationEvent.c)
 *     CmObReferenceObjectByName @ 0x140606D64 (CmObReferenceObjectByName.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(__int64 *a1, char a2, ACCESS_MASK a3, int *a4)
{
  int VirtualizationIDFromFullVirtualPath; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  _QWORD *v13; // rsi
  int v14; // edx
  int v15; // r9d
  int v16; // eax
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v18; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 v19[8]; // [rsp+60h] [rbp-A0h] BYREF
  int v20; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+78h] [rbp-88h]
  UNICODE_STRING *p_UnicodeString; // [rsp+80h] [rbp-80h]
  int v23; // [rsp+88h] [rbp-78h]
  __int128 v24; // [rsp+90h] [rbp-70h]
  _QWORD v25[30]; // [rsp+A0h] [rbp-60h] BYREF

  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  VirtualizationIDFromFullVirtualPath = 0;
  if ( *(_WORD *)(*(_QWORD *)(*a1 + 8) + 58LL) )
    return 0LL;
  if ( CmpVEEnabled )
  {
    v9 = *(_QWORD *)(*a1 + 8);
    if ( (*(_WORD *)(v9 + 178) & 0x200) == 0 && !CmpIsMasterHive(v9) && !CmpIsSystemEntity(a4) )
    {
      CmpLockRegistry();
      CmpLockKcbExclusive(*(_QWORD *)(*a1 + 8));
      if ( CmpIsKeyDeletedForKeyBody(*a1, 0LL) )
      {
        VirtualizationIDFromFullVirtualPath = -1073741444;
      }
      else
      {
        if ( (unsigned __int8)CmpReparseToVirtualPath(*(_QWORD *)(*a1 + 8), v10, &UnicodeString) )
        {
LABEL_13:
          CmpUnlockKcb(*(char **)(*a1 + 8));
          if ( VirtualizationIDFromFullVirtualPath >= 0 )
          {
            VirtualizationIDFromFullVirtualPath = CmpGetVirtualizationIDFromFullVirtualPath(&UnicodeString, v19);
            if ( VirtualizationIDFromFullVirtualPath >= 0 )
            {
              VirtualizationIDFromFullVirtualPath = CmpGetMappingHiveForString(v19, &v18);
              if ( VirtualizationIDFromFullVirtualPath >= 0 )
                CmpSearchKeyControlBlockTreeEx(
                  (__int64 (__fastcall *)(_QWORD *, ULONG_PTR, __int64))CmpSyncKcbCacheForHive,
                  v18,
                  0LL,
                  1);
            }
          }
          CmpUnlockRegistry();
          if ( VirtualizationIDFromFullVirtualPath >= 0 )
          {
            v13 = (_QWORD *)*a1;
            memset(v25, 0, 0xE8uLL);
            LODWORD(v25[0]) = 8;
            v25[10] = v13[7];
            v16 = 576;
            if ( a2 == 1 )
              v16 = 1600;
            v20 = 48;
            v23 = v16;
            v21 = 0LL;
            p_UnicodeString = &UnicodeString;
            v24 = 0LL;
            VirtualizationIDFromFullVirtualPath = CmObReferenceObjectByName(
                                                    (unsigned int)&v20,
                                                    v14,
                                                    a3,
                                                    v15,
                                                    0,
                                                    (__int64)v25,
                                                    (__int64)a1);
            if ( VirtualizationIDFromFullVirtualPath < 0 )
              *a1 = (__int64)v13;
            else
              ObfDereferenceObject(v13);
            CmpCleanupParseContext((__int64)v25, 0);
          }
          RtlFreeAnsiString(&UnicodeString);
          return (unsigned int)VirtualizationIDFromFullVirtualPath;
        }
        v11 = *(_QWORD *)(*a1 + 8);
        if ( (*(_DWORD *)(v11 + 176) & 0x20) == 0 )
        {
          VirtualizationIDFromFullVirtualPath = CmpCheckAdminAccess(
                                                  a3,
                                                  (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v11 + 80) + 32LL));
          if ( VirtualizationIDFromFullVirtualPath >= 0 )
            VirtualizationIDFromFullVirtualPath = -1073741790;
          goto LABEL_13;
        }
        RtlFreeAnsiString(&UnicodeString);
        VirtualizationIDFromFullVirtualPath = -1073741790;
      }
      CmpUnlockKcb(*(char **)(*a1 + 8));
      CmpUnlockRegistry();
    }
  }
  return (unsigned int)VirtualizationIDFromFullVirtualPath;
}
