/*
 * XREFs of IsPciDevice @ 0x1C0008244
 * Callers:
 *     GetOpRegionScopeWorker @ 0x1C000A1B0 (GetOpRegionScopeWorker.c)
 *     ACPIInternalIsPci @ 0x1C0068A8C (ACPIInternalIsPci.c)
 *     AcpiDeletePciBusInterface @ 0x1C007BF8C (AcpiDeletePciBusInterface.c)
 * Callees:
 *     AMLIReferenceHandleEx @ 0x1C0008ED4 (AMLIReferenceHandleEx.c)
 *     IsPciDeviceWorker @ 0x1C0009AF0 (IsPciDeviceWorker.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall IsPciDevice(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  _QWORD *v8; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rbx
  __int64 v11; // rcx

  v8 = *(_QWORD **)(*(_QWORD *)a1 + 96LL);
  if ( !v8 )
    return 3221225473LL;
  if ( (*v8 & 0x102000000LL) != 0 )
  {
    *a4 = 1;
    return 0LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x46706341u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x80uLL);
      *(_QWORD *)v10 = a1;
      AMLIReferenceHandleEx(a1);
      v10[9] = -1;
      *((_QWORD *)v10 + 5) = a2;
      *((_QWORD *)v10 + 6) = a3;
      *((_QWORD *)v10 + 7) = a4;
      return IsPciDeviceWorker(v11, 0LL, 0LL, v10);
    }
    else
    {
      return 3221225626LL;
    }
  }
}
