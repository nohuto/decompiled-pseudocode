/*
 * XREFs of IovpCompleteRequest1 @ 0x14074031C
 * Callers:
 *     IovCompleteRequest @ 0x1407350CC (IovCompleteRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     IovpAdvanceStackDownwards @ 0x14073F52C (IovpAdvanceStackDownwards.c)
 *     VfPendingFinishLogging @ 0x1407426CC (VfPendingFinishLogging.c)
 *     VfPendingStartLogging @ 0x14074292C (VfPendingStartLogging.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14074AAB0 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14074AC7C (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall IovpCompleteRequest1(__int64 a1, char a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r14
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 started; // rbp
  __int64 v12; // r14
  __int64 v13; // r13
  const void *v14; // r12
  int v15; // r10d
  __int64 v16; // [rsp+40h] [rbp-98h] BYREF
  char pszDest[64]; // [rsp+50h] [rbp-88h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  result = VfIrpDatabaseEntryFindAndLock(a1);
  v10 = result;
  if ( result )
  {
    *(_BYTE *)(result + 61) = CurrentIrql;
    started = 0LL;
    *(_BYTE *)(result + 60) = CurrentIrql;
    v12 = *(_QWORD *)(result + 240);
    *(_QWORD *)a3 = v12;
    *(_QWORD *)(a3 + 8) = result;
    v13 = *(_QWORD *)(a1 + 184);
    if ( v12 )
    {
      if ( (*(_DWORD *)(result + 56) & 0x10) != 0 )
      {
        v14 = *(const void **)(a3 + 32);
        ViErrorDisplayDescription(521LL, v8, v9);
        if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", v14, (const void *)a1) >= 0 )
          VfUtilDbgPrint(pszDest);
        ViErrorFinishReport(521LL, v14, a1, 0LL);
      }
      *(_BYTE *)(v10 + 185) = a2;
      if ( *(_QWORD *)(v10 + 216) && *(int *)(v10 + 56) >= 0 )
      {
        started = VfPendingStartLogging(a1);
        *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
      }
      *(_QWORD *)(v12 + 48) = 0LL;
      v15 = *(unsigned __int8 *)(v10 + 186) - *(char *)(a1 + 67);
      *(_DWORD *)(a3 + 20) = v15;
      IovpAdvanceStackDownwards(v12 + 80, *(_BYTE *)(a1 + 67), v13, v13 + 72LL * v15, v15, 0, 0, &v16);
      result = VfIrpDatabaseEntryReleaseLock(v10);
      if ( started )
        return VfPendingFinishLogging(started);
    }
    else
    {
      return VfIrpDatabaseEntryReleaseLock(result);
    }
  }
  else
  {
    *(_QWORD *)a3 = 0LL;
  }
  return result;
}
