/*
 * XREFs of ACPIBuildProcessDevicePhaseCls @ 0x1C000B5A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000BB30 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCls(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  unsigned int v4; // ebx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = AMLIGetNamedChild(*(_QWORD *)(v1 + 704), 1397506911LL);
  v4 = 0;
  *(_DWORD *)(a1 + 32) = 13;
  if ( v3 && (*(_BYTE *)(v1 + 904) & 4) == 0 )
  {
    AMLIDereferenceHandleEx(v3);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 904), 4uLL);
    v4 = ACPIGet((_QWORD *)v1, 1397506911, 537165824, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 584, 0LL);
    *(_DWORD *)(a1 + 32) = 12;
  }
  if ( *(_DWORD *)(a1 + 32) == 13 )
    v4 = ACPIGet(
           (_QWORD *)v1,
           1096045407,
           -1610348542,
           0LL,
           0,
           (__int64)ACPIBuildCompleteMustSucceed,
           a1,
           a1 + 128,
           0LL);
  if ( v4 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return v4;
}
