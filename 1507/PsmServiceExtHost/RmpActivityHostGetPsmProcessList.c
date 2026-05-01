/*
 * XREFs of RmpActivityHostGetPsmProcessList @ 0x1800072C0
 * Callers:
 *     RmpActivityHostQueryMemUtilMetrics @ 0x18000A188 (RmpActivityHostQueryMemUtilMetrics.c)
 * Callees:
 *     RmpAllocateHeap @ 0x180009DF8 (RmpAllocateHeap.c)
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 *     ?QueryProcessList@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEA_KPEAK@Z @ 0x18000C010 (-QueryProcessList@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEA_KPEAK@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmpActivityHostGetPsmProcessList(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 **a2,
        unsigned int *a3)
{
  ModernResourceEnforcer *v6; // rsi
  unsigned __int64 *Heap; // rdi
  __int64 (__fastcall *v8)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, unsigned __int64 *, unsigned int *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 1;
  v6 = (ModernResourceEnforcer *)*((_QWORD *)RmSvcGlobals + 10);
  Heap = (unsigned __int64 *)RmpAllocateHeap(8uLL);
  if ( Heap )
  {
    while ( 1 )
    {
      v8 = *(__int64 (__fastcall **)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, unsigned __int64 *, unsigned int *))(*(_QWORD *)v6 + 72LL);
      if ( v8 == ModernResourceEnforcer::QueryProcessList )
        v9 = ModernResourceEnforcer::QueryProcessList(v6, a1, Heap, &v12);
      else
        v9 = v8(v6, a1, Heap, &v12);
      v10 = v9;
      if ( v9 >= 0 )
      {
        *a3 = v12;
        *a2 = Heap;
        return v10;
      }
      if ( v9 != -2147483643 )
        break;
      RmpFreeHeap(Heap);
      Heap = (unsigned __int64 *)RmpAllocateHeap(8LL * v12);
      if ( !Heap )
      {
        v10 = -1073741801;
        break;
      }
    }
    if ( Heap )
      RmpFreeHeap(Heap);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v10;
}
