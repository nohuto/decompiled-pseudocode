/*
 * XREFs of FilterCreateFilterPropertySets @ 0x1C0013D04
 * Callers:
 *     FilterCreateFilterFactory @ 0x1C0013E60 (FilterCreateFilterFactory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00070A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FilterCreateFilterPropertySets(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  int v6; // r9d
  __int64 v7; // rdi
  PVOID PoolWithTag; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax

  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(pExtBusDeviceDispatchTable + 72))(a1, a2, 0LL);
  if ( v6 >= 0 )
  {
    v7 = (unsigned int)(*a2 + 3);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPool, 40 * v7, 0x41627845u);
    *a3 = PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), PoolWithTag, ExFreePool);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(pExtBusDeviceDispatchTable + 72))(
               a1,
               a2,
               *a3,
               (unsigned int)v9);
        if ( v6 >= 0 )
        {
          v10 = 5LL * (unsigned int)*a2;
          v11 = *a3;
          *(_OWORD *)(v11 + 8 * v10) = *(_OWORD *)&FilterPinPropertySet;
          *(_OWORD *)(v11 + 8 * v10 + 16) = *(_OWORD *)&off_1C000A218;
          *(_QWORD *)(v11 + 8 * v10 + 32) = 0LL;
          v12 = 5LL * (unsigned int)(*a2 + 1);
          v13 = *a3;
          *(_OWORD *)(v13 + 8 * v12) = *(_OWORD *)&FilterAudioPropertySet;
          *(_OWORD *)(v13 + 8 * v12 + 16) = *(_OWORD *)&off_1C000A1C8;
          *(_QWORD *)(v13 + 8 * v12 + 32) = 0LL;
          v14 = 5LL * (unsigned int)(*a2 + 2);
          v15 = *a3;
          *(_OWORD *)(v15 + 8 * v14) = *(_OWORD *)&FilterAudioSignalProcessingPropertySet;
          *(_OWORD *)(v15 + 8 * v14 + 16) = *(_OWORD *)&off_1C000A1F0;
          *(_QWORD *)(v15 + 8 * v14 + 32) = 0LL;
          *a2 = v7;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v6;
}
