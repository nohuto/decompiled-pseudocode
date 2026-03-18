/*
 * XREFs of ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C000A1B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000C030 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseUidOrHid(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // edx
  int v8; // r8d
  unsigned int v9; // edi
  __int64 v11; // rcx

  v1 = *(_QWORD **)(a1 + 40);
  v3 = AMLIGetNamedChild(v1[88], 1145653343LL);
  v4 = AMLIGetNamedChild(v1[88], 1145656671LL);
  if ( v4 )
  {
    AMLIDereferenceHandleEx(v3);
    v5 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 8;
    if ( v5 )
    {
      AMLIDereferenceHandleEx(v5);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    *(_QWORD *)(a1 + 56) = v4;
    v6 = (__int64)(v1 + 70);
    v7 = 1145656671;
    v8 = 671613062;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 7;
    if ( v11 )
    {
      AMLIDereferenceHandleEx(v11);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    *(_QWORD *)(a1 + 56) = v3;
    v6 = (__int64)(v1 + 69);
    v7 = 1145653343;
    v8 = 671612966;
  }
  v9 = ACPIGet(v1, v7, v8, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v6, 0LL);
  if ( v9 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return v9;
}
