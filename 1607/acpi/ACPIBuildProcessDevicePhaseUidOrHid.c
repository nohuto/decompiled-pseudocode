/*
 * XREFs of ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0028000
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C001DE30 (ACPIBuildCompleteMustSucceed.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseUidOrHid(__int64 a1)
{
  __int64 v1; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rdx
  __int64 *v5; // rbp
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  int v10; // r8d
  int v11; // eax
  unsigned int v12; // edi
  volatile signed __int32 *v14; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1145653343);
  v5 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1145656671);
  if ( v5 )
  {
    AMLIDereferenceHandleEx((volatile signed __int32 *)v3, v4);
    v7 = *(volatile signed __int32 **)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 8;
    if ( v7 )
    {
      AMLIDereferenceHandleEx(v7, v6);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    *(_QWORD *)(a1 + 56) = v5;
    v8 = v1 + 568;
    v9 = 1145656671;
    v10 = 671613062;
  }
  else
  {
    v14 = *(volatile signed __int32 **)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 7;
    if ( v14 )
    {
      AMLIDereferenceHandleEx(v14, v4);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    *(_QWORD *)(a1 + 56) = v3;
    v8 = v1 + 560;
    v9 = 1145653343;
    v10 = 671612966;
  }
  v11 = ACPIGet((__int64 *)v1, v9, v10, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v8, 0LL);
  v12 = v11;
  if ( v11 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v11, 0LL, a1);
  return v12;
}
