/*
 * XREFs of ndisGetNsiClientInfo @ 0x1C000D2C0
 * Callers:
 *     ndisCreateHandler @ 0x1C000CEDC (ndisCreateHandler.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000D400 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0012590 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0021B10 (-ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0040AA0 (-ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00416E0 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0041AF0 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0041F40 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisEnumerateInterfaces @ 0x1C00EBFE0 (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C00F2580 (ndisEnumerateInterfaces32.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C000D3B0 (NdisGetSessionCompartmentId.c)
 */

void __fastcall ndisGetNsiClientInfo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  _DWORD *ThreadProperty; // rax
  __int64 v4; // rcx
  _LIST_ENTRY *v5; // rsi
  PACCESS_TOKEN v6; // rax
  void *v7; // rbp
  unsigned int CurrentProcessSessionId; // eax
  KIRQL v9; // al
  unsigned int v10; // r8d
  _LIST_ENTRY *i; // rcx
  unsigned int Flink; // edx
  NTSTATUS v13; // ebx
  BOOLEAN EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF
  PVOID TokenInformation; // [rsp+68h] [rbp+20h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  CurrentThread = KeGetCurrentThread();
  ThreadProperty = PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v5 = 0LL;
  if ( ThreadProperty )
  {
    *(_DWORD *)(a1 + 4) = *ThreadProperty;
    *(_DWORD *)a1 = ThreadProperty[1];
    ObfDereferenceObject(ThreadProperty);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
  }
  if ( !*(_DWORD *)(a1 + 4) )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4);
    }
    else
    {
      v6 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v7 = v6;
      if ( v6
        && (v13 = SeQueryInformationToken(v6, TokenSessionId, &TokenInformation),
            PsDereferenceImpersonationToken(v7),
            v13 >= 0) )
      {
        CurrentProcessSessionId = (unsigned int)TokenInformation;
      }
      else
      {
        CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
      }
    }
    *(_DWORD *)(a1 + 4) = NdisGetSessionCompartmentId(CurrentProcessSessionId);
  }
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v10 = *(_DWORD *)(a1 + 4);
  for ( i = ndisIfCompartmentList.Flink; i != &ndisIfCompartmentList; i = i->Flink )
  {
    Flink = (unsigned int)i[1].Flink;
    if ( Flink == v10 )
    {
      v5 = i;
      break;
    }
    if ( Flink > v10 )
      break;
  }
  *(_LIST_ENTRY *)(a1 + 8) = *(_LIST_ENTRY *)((char *)v5 + 1684);
  KeReleaseSpinLock(&ndisIfListLock, v9);
}
