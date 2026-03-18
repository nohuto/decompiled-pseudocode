/*
 * XREFs of CmpDoCreate @ 0x1403DEBC8
 * Callers:
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14001B460 (ObDereferenceObjectDeferDelete.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmRealKCBToVirtualPath @ 0x1403BCD04 (CmRealKCBToVirtualPath.c)
 *     CmpAddSubKeyEx @ 0x1403D7E1C (CmpAddSubKeyEx.c)
 *     CmpFreeKeyByCell @ 0x1403D84C4 (CmpFreeKeyByCell.c)
 *     CmpSearchKCBForTransChildByName @ 0x1403DF018 (CmpSearchKCBForTransChildByName.c)
 *     CmpOKToFollowLink @ 0x1403DF0B0 (CmpOKToFollowLink.c)
 *     CmpIsMasterHive @ 0x1403DF1A0 (CmpIsMasterHive.c)
 *     CmpCheckCreateAccess @ 0x1403DF1D8 (CmpCheckCreateAccess.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403DF288 (CmpCleanUpSubKeyInfo.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmpUnlockAndLockKcbs @ 0x1403E065C (CmpUnlockAndLockKcbs.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpIsSystemEntity @ 0x1403FBD30 (CmpIsSystemEntity.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1403FE290 (CmpFindSubKeyByNameWithStatus.c)
 *     CmGetKCBCacheSecurity @ 0x1404209D8 (CmGetKCBCacheSecurity.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     CmpCheckAdminAccess @ 0x1404974C8 (CmpCheckAdminAccess.c)
 *     CmpCheckWrpKeyAccess @ 0x1404A976C (CmpCheckWrpKeyAccess.c)
 *     CmpRemoveKeyHash @ 0x1404B48FC (CmpRemoveKeyHash.c)
 *     CmpPublishEventForPcaResolver @ 0x1404F9D2C (CmpPublishEventForPcaResolver.c)
 *     CmpDoAccessCheckOnKCB @ 0x1405E21C8 (CmpDoAccessCheckOnKCB.c)
 *     CmpReparseToVirtualPath @ 0x1405E2990 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1405E29D0 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x1405E321C (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1405E3324 (CmpReportAuditVirtualizationEvent.c)
 */

__int64 __fastcall CmpDoCreate(
        ULONG_PTR a1,
        unsigned int a2,
        __int64 a3,
        __m128i *a4,
        char a5,
        __int64 a6,
        __int64 a7,
        ULONG_PTR BugCheckParameter3,
        __int64 a9,
        PVOID *a10,
        __int64 *a11,
        UNICODE_STRING *a12)
{
  bool v14; // r15
  bool v15; // zf
  int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  unsigned int v20; // ebx
  _QWORD *v21; // r14
  __int64 v22; // rbx
  _QWORD *v23; // r14
  __int64 v24; // rax
  unsigned int v25; // edx
  unsigned int v26; // eax
  __int64 result; // rax
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rax
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v32; // r9
  wchar_t *Buffer; // rcx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rbx
  int Child; // [rsp+7Ch] [rbp-35h] BYREF
  int v38; // [rsp+80h] [rbp-31h] BYREF
  int v39; // [rsp+84h] [rbp-2Dh] BYREF
  unsigned int v40; // [rsp+88h] [rbp-29h] BYREF
  int v41; // [rsp+8Ch] [rbp-25h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-21h] BYREF
  int v43; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-9h]

  v41 = -1;
  v38 = -1;
  v14 = 0;
  if ( (*(_DWORD *)a6 & 1) != 0 )
  {
    v15 = (*(_BYTE *)(a6 + 24) & 4) == 0;
    *(_DWORD *)(a6 + 32) = 1;
    v14 = !v15;
  }
  v16 = 16 * (*(_BYTE *)(a6 + 24) & 2);
  if ( !CmpVEEnabled
    || (*(_WORD *)(BugCheckParameter3 + 186) & 0x200) != 0
    || (unsigned __int8)CmpIsMasterHive(BugCheckParameter3)
    || (unsigned __int8)CmpIsSystemEntity(a6 + 16) )
  {
    goto LABEL_6;
  }
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  if ( *(char *)(BugCheckParameter3 + 186) >= 0
    || !(unsigned __int8)CmpReparseToVirtualPath(BugCheckParameter3, v28, &UnicodeString) )
  {
    if ( (*(_DWORD *)(BugCheckParameter3 + 184) & 0x20) == 0 )
    {
      LOBYTE(v29) = a5;
      if ( !(unsigned __int8)CmpDoAccessCheckOnKCB(BugCheckParameter3, *a11, v16 | 4u, v29) )
      {
        LOBYTE(v32) = a5;
        if ( (unsigned __int8)CmpDoAccessCheckOnKCB(BugCheckParameter3, *a11, 131097LL, v32) )
        {
          result = CmpCheckAdminAccess(4u, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(BugCheckParameter3 + 88) + 32LL));
          if ( (int)result < 0 )
            return result;
        }
        return 3221225506LL;
      }
    }
LABEL_6:
    if ( !(unsigned __int8)CmpOKToFollowLink(a9, a1) )
      return 3221225506LL;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
    if ( (*(_DWORD *)(BugCheckParameter3 + 4) & 0x80u) != 0
      || (*(_DWORD *)(a1 + 5360) & 0x20) != 0 && *(_QWORD *)(a3 + 64) )
    {
LABEL_65:
      v20 = -1073741790;
      goto LABEL_30;
    }
    if ( (unsigned __int8)CmRmIsKCBDeleted(BugCheckParameter3, *a11) == 1 )
    {
      v20 = -1073741772;
      goto LABEL_30;
    }
    v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, a2, &v38);
    if ( !v17 )
      goto LABEL_68;
    CmpFindSubKeyByNameWithStatus(a1, v17, a4, &v43);
    if ( v43 != -1 || CmpSearchKCBForTransChildByName(BugCheckParameter3, a4) )
    {
      *(_DWORD *)a6 &= ~8u;
      v20 = 260;
      (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v38);
      goto LABEL_30;
    }
    v44 = CmGetKCBCacheSecurity(BugCheckParameter3) + 32;
    if ( (a2 & 0x80000000) != 0 && (*(_DWORD *)(a6 + 24) & 1) == 0 && (!*a11 || !*(_QWORD *)(BugCheckParameter3 + 232)) )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v38);
      v20 = -1073741439;
      goto LABEL_30;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v38);
    if ( (*(_BYTE *)(BugCheckParameter3 + 186) & 0x10) != 0 )
      goto LABEL_65;
    if ( v14 )
    {
      *(_QWORD *)(a3 + 16) = 0LL;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
        *(_DWORD *)(a3 + 20) |= 0x1020019u;
      if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
        *(_DWORD *)(a3 + 20) |= 0x10F0006u;
      if ( *(_DWORD *)(a3 + 20) )
      {
LABEL_17:
        if ( !(unsigned __int8)HvpMarkCellDirty(a1, a2) )
        {
          v20 = -1073741443;
          goto LABEL_30;
        }
        Child = CmpDoCreateChild(a1, (__int64)a4, a5, a6, a7, BugCheckParameter3, 0, (__int64)&v40, (__int64)a10, *a11);
        v20 = Child;
        if ( Child < 0 || Child == 260 )
          goto LABEL_30;
        v39 = -1;
        v21 = *a10;
        if ( *a11 || CmpAddSubKeyEx(a1, a2, v40, 0) )
        {
          v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, a2, &v39);
          if ( v22 )
          {
            v23 = *a10;
            CmpCleanUpSubKeyInfo(*(_QWORD *)(*((_QWORD *)*a10 + 1) + 72LL));
            v24 = MEMORY[0xFFFFF78000000014];
            *(_QWORD *)(v22 + 4) = MEMORY[0xFFFFF78000000014];
            *(_QWORD *)(*(_QWORD *)(v23[1] + 72LL) + 168LL) = v24;
            v25 = a4->m128i_u16[0];
            if ( (unsigned __int16)*(_DWORD *)(v22 + 52) < v25 )
            {
              *(_WORD *)(v22 + 52) = v25;
              *(_WORD *)(*(_QWORD *)(v23[1] + 72LL) + 176LL) = a4->m128i_i16[0];
            }
            v26 = *(_DWORD *)(a6 + 4);
            if ( *(_DWORD *)(v22 + 56) < v26 )
              *(_DWORD *)(v22 + 56) = v26;
            if ( (*(_DWORD *)(a6 + 24) & 2) == 0 )
              goto LABEL_28;
            v30 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, v40, &v41);
            if ( v30 )
            {
              *(_WORD *)(v30 + 2) |= 0x10u;
              *(_WORD *)(v23[1] + 186LL) = *(_WORD *)(v30 + 2);
              (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v41);
LABEL_28:
              (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v39);
LABEL_29:
              v20 = Child;
LABEL_30:
              ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
              return v20;
            }
            v34 = v23[1];
            v35 = *(_QWORD *)(v34 + 32);
            *(_DWORD *)(v34 + 4) |= 0x20000u;
            CmpRemoveKeyHash(v35, v34 + 16);
            *(_QWORD *)(v34 + 24) = -1LL;
            CmpUnlockAndLockKcbs(a7, v23[1], 0LL, 0LL);
            ObDereferenceObjectDeferDelete(*a10);
            (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v39);
LABEL_68:
            v20 = -1073741670;
            goto LABEL_30;
          }
        }
        else
        {
          CmpFreeKeyByCell(a1, v40, 0);
        }
        v36 = v21[1];
        *(_DWORD *)(v36 + 4) |= 0x20000u;
        CmpRemoveKeyHash(*(_QWORD *)(v36 + 32), v36 + 16);
        *(_QWORD *)(v36 + 24) = -1LL;
        CmpUnlockAndLockKcbs(a7, v21[1], 0LL, 0LL);
        ObDereferenceObjectDeferDelete(*a10);
        goto LABEL_68;
      }
      Child = -1073741790;
    }
    else
    {
      LOBYTE(v19) = a5;
      if ( (unsigned __int8)CmpCheckCreateAccess(v18, v44, a3, v19, v16, &Child) )
        goto LABEL_17;
    }
    if ( KeGetCurrentThread()->PreviousMode == 1
      && (unsigned int)MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process)
      && (unsigned __int8)CmpCheckWrpKeyAccess(BugCheckParameter3) )
    {
      CmpPublishEventForPcaResolver(BugCheckParameter3);
    }
    goto LABEL_29;
  }
  RtlFreeAnsiString(&UnicodeString);
  result = CmRealKCBToVirtualPath(BugCheckParameter3, a4, &UnicodeString);
  if ( (int)result >= 0 )
  {
    Buffer = a12->Buffer;
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
    result = 260LL;
    *a12 = UnicodeString;
    *(_DWORD *)a6 |= 8u;
  }
  return result;
}
