/*
 * XREFs of CmpDoCreate @ 0x1404485BC
 * Callers:
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400EF678 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmRealKCBToVirtualPath @ 0x140407BD4 (CmRealKCBToVirtualPath.c)
 *     CmpUnlockAndLockKcbs @ 0x14042A760 (CmpUnlockAndLockKcbs.c)
 *     CmGetKCBCacheSecurity @ 0x14042B39C (CmGetKCBCacheSecurity.c)
 *     CmpSearchKCBForTransChildByName @ 0x140448BF4 (CmpSearchKCBForTransChildByName.c)
 *     CmpOKToFollowLink @ 0x140448C8C (CmpOKToFollowLink.c)
 *     CmpIsMasterHive @ 0x140448D7C (CmpIsMasterHive.c)
 *     CmpCheckCreateAccess @ 0x140448DB4 (CmpCheckCreateAccess.c)
 *     CmpCleanUpSubKeyInfo @ 0x140448E64 (CmpCleanUpSubKeyInfo.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     CmpFreeKeyByCell @ 0x140449FBC (CmpFreeKeyByCell.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     CmpCheckWrpKeyAccess @ 0x140466E0C (CmpCheckWrpKeyAccess.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     CmpIsSystemEntity @ 0x140481E04 (CmpIsSystemEntity.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     CmRmIsKCBDeleted @ 0x1404C69A0 (CmRmIsKCBDeleted.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404CA940 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpRemoveKeyHash @ 0x14052B5B0 (CmpRemoveKeyHash.c)
 *     CmpAddSubKeyEx @ 0x1405335D0 (CmpAddSubKeyEx.c)
 *     CmpPublishEventForPcaResolver @ 0x14056BEA0 (CmpPublishEventForPcaResolver.c)
 *     CmpCheckAdminAccess @ 0x140658050 (CmpCheckAdminAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406583CC (CmpDoAccessCheckOnKCB.c)
 *     CmpReparseToVirtualPath @ 0x140658F0C (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x140658F4C (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x1406596D8 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406599C0 (CmpReportAuditVirtualizationEvent.c)
 *     CmpGetEffectiveCellType @ 0x140663E18 (CmpGetEffectiveCellType.c)
 */

__int64 __fastcall CmpDoCreate(
        ULONG_PTR a1,
        unsigned int a2,
        __int64 a3,
        __m128i *a4,
        char a5,
        __int64 a6,
        __int64 *a7,
        ULONG_PTR BugCheckParameter3,
        __int64 a9,
        PVOID *a10,
        __int64 *a11,
        UNICODE_STRING *a12)
{
  bool v14; // r15
  bool v15; // zf
  int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 result; // rax
  wchar_t *Buffer; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rax
  __int64 KCBCacheSecurity; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r9
  KPROCESSOR_MODE PreviousMode; // r15
  PVOID v29; // r14
  __int64 v30; // rbx
  __int64 v31; // rbx
  PVOID v32; // r14
  __int64 v33; // rax
  unsigned int v34; // edx
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rcx
  int Child; // [rsp+7Ch] [rbp-35h] BYREF
  int v40; // [rsp+80h] [rbp-31h] BYREF
  int v41; // [rsp+84h] [rbp-2Dh] BYREF
  unsigned int v42; // [rsp+88h] [rbp-29h] BYREF
  int v43; // [rsp+8Ch] [rbp-25h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-21h] BYREF
  int v45; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-9h]

  v43 = -1;
  v40 = -1;
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
LABEL_19:
    if ( !(unsigned __int8)CmpOKToFollowLink(a9, a1) )
      return 3221225506LL;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
    if ( (*(_DWORD *)(BugCheckParameter3 + 4) & 0x80u) != 0
      || (*(_DWORD *)(a1 + 5360) & 0x20) != 0 && *(_QWORD *)(a3 + 64) )
    {
      goto LABEL_22;
    }
    if ( (unsigned __int8)CmRmIsKCBDeleted(BugCheckParameter3, *a11) == 1 )
    {
      v22 = -1073741772;
      goto LABEL_67;
    }
    v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, a2, &v40);
    if ( !v23 )
    {
LABEL_28:
      v22 = -1073741670;
      goto LABEL_67;
    }
    CmpFindSubKeyByNameWithStatus(a1, v23, a4, &v45);
    if ( v45 != -1 || CmpSearchKCBForTransChildByName(BugCheckParameter3, a4) )
    {
      *(_DWORD *)a6 &= ~8u;
      v22 = 260;
      (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v40);
      goto LABEL_67;
    }
    KCBCacheSecurity = CmGetKCBCacheSecurity(BugCheckParameter3, *a11);
    v25 = *a11;
    v46 = KCBCacheSecurity + 32;
    if ( (unsigned int)CmpGetEffectiveCellType(BugCheckParameter3, v25) == 1 && (*(_DWORD *)(a6 + 24) & 1) == 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v40);
      v22 = -1073741439;
      goto LABEL_67;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v40);
    if ( (*(_BYTE *)(BugCheckParameter3 + 186) & 0x10) != 0 )
    {
LABEL_22:
      v22 = -1073741790;
LABEL_67:
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
      return v22;
    }
    if ( v14 )
    {
      *(_QWORD *)(a3 + 16) = 0LL;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
        *(_DWORD *)(a3 + 20) |= 0x1020019u;
      if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
        *(_DWORD *)(a3 + 20) |= 0x10F0006u;
      if ( !*(_DWORD *)(a3 + 20) )
      {
        Child = -1073741790;
LABEL_42:
        if ( KeGetCurrentThread()->PreviousMode == 1
          && (unsigned int)MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process)
          && (unsigned __int8)CmpCheckWrpKeyAccess(BugCheckParameter3) )
        {
          CmpPublishEventForPcaResolver(BugCheckParameter3);
        }
        goto LABEL_65;
      }
    }
    else
    {
      LOBYTE(v27) = a5;
      if ( !(unsigned __int8)CmpCheckCreateAccess(v26, v46, a3, v27, v16, &Child) )
        goto LABEL_42;
    }
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, a2) )
    {
      v22 = -1073741443;
      goto LABEL_67;
    }
    Child = CmpDoCreateChild(
              a1,
              (__int64)a4,
              a5,
              a6,
              (__int64)a7,
              BugCheckParameter3,
              0,
              (__int64)&v42,
              (__int64)a10,
              *a11);
    v22 = Child;
    if ( Child < 0 || Child == 260 )
      goto LABEL_67;
    v41 = -1;
    v29 = *a10;
    if ( *a11 || (unsigned __int8)CmpAddSubKeyEx(a1) )
    {
      v31 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, a2, &v41);
      if ( v31 )
      {
        v32 = *a10;
        CmpCleanUpSubKeyInfo(*(_QWORD *)(*((_QWORD *)*a10 + 1) + 72LL));
        v33 = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(v31 + 4) = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v32 + 1) + 72LL) + 168LL) = v33;
        v34 = a4->m128i_u16[0];
        if ( (unsigned __int16)*(_DWORD *)(v31 + 52) < v34 )
        {
          *(_WORD *)(v31 + 52) = v34;
          *(_WORD *)(*(_QWORD *)(*((_QWORD *)v32 + 1) + 72LL) + 176LL) = a4->m128i_i16[0];
        }
        v35 = *(_DWORD *)(a6 + 4);
        if ( *(_DWORD *)(v31 + 56) < v35 )
          *(_DWORD *)(v31 + 56) = v35;
        if ( (*(_DWORD *)(a6 + 24) & 2) != 0 )
        {
          v36 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, v42, &v43);
          if ( !v36 )
          {
            v37 = *((_QWORD *)v32 + 1);
            v38 = *(_QWORD *)(v37 + 32);
            *(_DWORD *)(v37 + 4) |= 0x20000u;
            CmpRemoveKeyHash(v38, v37 + 16);
            *(_QWORD *)(v37 + 24) = -1LL;
            CmpUnlockAndLockKcbs(a7, *((void **)v32 + 1), 0LL, 0LL);
            ObDereferenceObjectDeferDelete(*a10);
            (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v41);
            goto LABEL_28;
          }
          *(_WORD *)(v36 + 2) |= 0x10u;
          *(_WORD *)(*((_QWORD *)v32 + 1) + 186LL) = *(_WORD *)(v36 + 2);
          (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v43);
        }
        (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v41);
LABEL_65:
        v22 = Child;
        goto LABEL_67;
      }
    }
    else
    {
      CmpFreeKeyByCell(a1);
    }
    v30 = *((_QWORD *)v29 + 1);
    *(_DWORD *)(v30 + 4) |= 0x20000u;
    CmpRemoveKeyHash(*(_QWORD *)(v30 + 32), v30 + 16);
    *(_QWORD *)(v30 + 24) = -1LL;
    CmpUnlockAndLockKcbs(a7, *((void **)v29 + 1), 0LL, 0LL);
    ObDereferenceObjectDeferDelete(*a10);
    goto LABEL_28;
  }
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  if ( *(char *)(BugCheckParameter3 + 186) >= 0
    || !(unsigned __int8)CmpReparseToVirtualPath(BugCheckParameter3, v17, &UnicodeString) )
  {
    if ( (*(_DWORD *)(BugCheckParameter3 + 184) & 0x20) == 0 )
    {
      LOBYTE(v18) = a5;
      if ( !(unsigned __int8)CmpDoAccessCheckOnKCB(BugCheckParameter3, *a11, v16 | 4u, v18) )
      {
        LOBYTE(v19) = a5;
        if ( (unsigned __int8)CmpDoAccessCheckOnKCB(BugCheckParameter3, *a11, 131097LL, v19) )
        {
          result = CmpCheckAdminAccess(4u, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(BugCheckParameter3 + 88) + 32LL));
          if ( (int)result < 0 )
            return result;
        }
        return 3221225506LL;
      }
    }
    goto LABEL_19;
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
