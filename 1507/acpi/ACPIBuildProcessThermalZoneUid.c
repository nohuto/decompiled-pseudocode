/*
 * XREFs of ACPIBuildProcessThermalZoneUid @ 0x1C0035600
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000BB30 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneUid(__int64 a1)
{
  ULONG_PTR v1; // rbx
  volatile signed __int32 *v3; // rax
  int v4; // eax
  unsigned int v5; // ebx

  v1 = *(_QWORD *)(a1 + 40);
  _InterlockedOr64((volatile signed __int64 *)v1, 0x400000000000uLL);
  v3 = (volatile signed __int32 *)AMLIGetNamedChild(*(_QWORD *)(v1 + 704), 1145653343);
  if ( !v3 )
    KeBugCheckEx(0xA5u, 0xDuLL, v1, 0x4449485FuLL, 0LL);
  AMLIDereferenceHandleEx(v3);
  *(_DWORD *)(a1 + 32) = 7;
  v4 = ACPIGet((_QWORD *)v1, 1145653343, 671612966, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 552, 0LL);
  v5 = v4;
  if ( v4 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
  return v5;
}
