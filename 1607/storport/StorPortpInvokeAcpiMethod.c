/*
 * XREFs of StorPortpInvokeAcpiMethod @ 0x1C0019940
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0007ED0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0002BC8 (RaidAdapterFindUnit.c)
 *     RaidNtStatusToStorStatus @ 0x1C00199C4 (RaidNtStatusToStorStatus.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C0019A10 (RaidSyncAcpiEvalMethod.c)
 */

__int64 __fastcall StorPortpInvokeAcpiMethod(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        ULONG InputBufferLength,
        union _LARGE_INTEGER *Timeout,
        ULONG a7,
        _DWORD *a8)
{
  __int64 v9; // rcx
  struct _DEVICE_OBJECT *v10; // rcx
  unsigned int v11; // eax
  __int64 Unit; // rax
  unsigned int v14; // [rsp+50h] [rbp+18h]

  HIBYTE(v14) = BYTE3(a3);
  if ( KeGetCurrentIrql() )
    return 3238002696LL;
  if ( a8 )
    *a8 = 0;
  v9 = **(_QWORD **)(a1 - 16);
  if ( v9 )
  {
    if ( !a2 )
    {
      v10 = *(struct _DEVICE_OBJECT **)(v9 + 8);
      goto LABEL_7;
    }
    if ( *(_WORD *)a2 == 1 && *(_DWORD *)(a2 + 4) >= 4u )
    {
      LOWORD(v14) = *(_WORD *)(a2 + 8);
      BYTE2(v14) = *(_BYTE *)(a2 + 10);
      Unit = RaidAdapterFindUnit(v9, v14, a3, (__int64)a4);
      if ( Unit )
      {
        v10 = *(struct _DEVICE_OBJECT **)(Unit + 8);
LABEL_7:
        if ( v10 )
        {
          v11 = RaidSyncAcpiEvalMethod(v10, a4, InputBufferLength, Timeout, a7, (__int64)a8);
          return RaidNtStatusToStorStatus(v11);
        }
      }
    }
  }
  return 3238002694LL;
}
