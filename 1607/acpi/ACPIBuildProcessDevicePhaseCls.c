/*
 * XREFs of ACPIBuildProcessDevicePhaseCls @ 0x1C000EAE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C001DE30 (ACPIBuildCompleteMustSucceed.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCls(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // ebx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 1397506911LL);
  v5 = 0;
  *(_DWORD *)(a1 + 32) = 13;
  if ( v3 && (*(_BYTE *)(v1 + 912) & 4) == 0 )
  {
    AMLIDereferenceHandleEx(v3, v4);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 912), 4uLL);
    v5 = ACPIGet((__int64 *)v1, 1397506911, 537165824, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 592, 0LL);
    *(_DWORD *)(a1 + 32) = 12;
  }
  if ( *(_DWORD *)(a1 + 32) == 13 )
    v5 = ACPIGet(
           (__int64 *)v1,
           1096045407,
           -1610348542,
           0LL,
           0,
           (__int64)ACPIBuildCompleteMustSucceed,
           a1,
           a1 + 128,
           0LL);
  if ( v5 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return v5;
}
