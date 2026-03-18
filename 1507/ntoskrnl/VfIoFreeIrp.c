/*
 * XREFs of VfIoFreeIrp @ 0x140741298
 * Callers:
 *     IovFreeIrpPrivate @ 0x1407352D0 (IovFreeIrpPrivate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14008B8B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x14025B248 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x14025B370 (ViIrpDatabaseReleaseLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140737754 (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14074AAB0 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14074AC7C (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfIoFreeIrp(_BYTE *P, const void *a2)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // r8
  unsigned int v8; // esi
  int v9; // eax
  bool v10; // zf
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  unsigned __int8 v13; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int8 v14[15]; // [rsp+31h] [rbp-B7h] BYREF
  char pszDest[64]; // [rsp+40h] [rbp-A8h] BYREF
  CHAR Format[64]; // [rsp+80h] [rbp-68h] BYREF

  if ( (P[71] & 0x21) == 0x21 )
    return 0LL;
  v6 = VfIrpDatabaseEntryFindAndLock(P);
  if ( !v6 )
    return 0LL;
  if ( *((_BYTE **)P + 4) == P + 32 )
  {
    if ( *(_QWORD *)(v6 + 240) )
    {
      if ( (*(_DWORD *)(v6 + 56) & 0x400000) == 0 )
      {
        ViErrorDisplayDescription(523LL, v5, v7);
        if ( RtlStringCbPrintfA(Format, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, P) >= 0 )
          VfUtilDbgPrint(Format);
        ViErrorFinishReport(523LL, a2, P, 0LL);
      }
      v8 = 1;
    }
    else
    {
      v9 = *(_DWORD *)(v6 + 56);
      if ( (v9 & 0x200000) != 0 )
      {
        if ( (v9 & 8) != 0 )
        {
          v8 = 1;
          *(_WORD *)P = 0;
          if ( (P[71] & 1) != 0 )
          {
            PsReturnProcessNonPagedPoolQuota(*(_QWORD *)(v6 + 88), *(unsigned int *)(v6 + 84));
            ObfDereferenceObjectWithTag(*(PVOID *)(v6 + 88), 0x49667256u);
          }
          v10 = (*(_DWORD *)(v6 + 24))-- == 1;
          if ( v10 )
          {
            ViIrpDatabaseAcquireLockExclusive(&v13);
            v12 = *(_QWORD *)v6;
            (*(void (__fastcall **)(__int64, _QWORD, __int64))(v6 + 48))(v6, *(_QWORD *)v6, 1LL);
            *(_QWORD *)v6 = 0LL;
            VfUtilAddressRangeRemoveCheckEmpty(
              (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v12 >> 12))),
              v12);
            ViIrpDatabaseReleaseLockExclusive(v13);
          }
          _InterlockedDecrement((volatile signed __int32 *)(v6 + 20));
          VfIrpDatabaseEntryReleaseLock(v6);
          ExFreePoolWithTag(P, 0);
          return v8;
        }
        v10 = (*(_DWORD *)(v6 + 24))-- == 1;
        if ( v10 )
        {
          ViIrpDatabaseAcquireLockExclusive(v14);
          v11 = *(_QWORD *)v6;
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(v6 + 48))(v6, *(_QWORD *)v6, 1LL);
          *(_QWORD *)v6 = 0LL;
          VfUtilAddressRangeRemoveCheckEmpty(
            (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v11 >> 12))),
            v11);
          ViIrpDatabaseReleaseLockExclusive(v14[0]);
        }
        _InterlockedDecrement((volatile signed __int32 *)(v6 + 20));
      }
      v8 = 0;
    }
    VfIrpDatabaseEntryReleaseLock(v6);
    return v8;
  }
  ViErrorDisplayDescription(524LL, v5, v7);
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, P) >= 0 )
    VfUtilDbgPrint(pszDest);
  ViErrorFinishReport(524LL, a2, P, 0LL);
  VfIrpDatabaseEntryReleaseLock(v6);
  return 1LL;
}
