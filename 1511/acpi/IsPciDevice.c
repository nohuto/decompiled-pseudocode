/*
 * XREFs of IsPciDevice @ 0x1C0008884
 * Callers:
 *     GetOpRegionScopeWorker @ 0x1C000A0D0 (GetOpRegionScopeWorker.c)
 *     ACPIInternalIsPci @ 0x1C00730E0 (ACPIInternalIsPci.c)
 *     AcpiDeletePciBusInterface @ 0x1C007C16C (AcpiDeletePciBusInterface.c)
 * Callees:
 *     IsPciDeviceWorker @ 0x1C00097D0 (IsPciDeviceWorker.c)
 *     AMLIReferenceHandleEx @ 0x1C0016AC0 (AMLIReferenceHandleEx.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall IsPciDevice(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  _QWORD *v8; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rbx
  __int64 v12; // rcx

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
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x80uLL);
      *(_QWORD *)v11 = a1;
      AMLIReferenceHandleEx(a1);
      v11[9] = -1;
      *((_QWORD *)v11 + 5) = a2;
      *((_QWORD *)v11 + 6) = a3;
      *((_QWORD *)v11 + 7) = a4;
      return IsPciDeviceWorker(v12, 0LL, 0LL, v11);
    }
    else
    {
      return 3221225626LL;
    }
  }
}
