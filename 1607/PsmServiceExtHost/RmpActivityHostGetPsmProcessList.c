/*
 * XREFs of RmpActivityHostGetPsmProcessList @ 0x1800079A4
 * Callers:
 *     RmpActivityHostActOnProcesses @ 0x1800077F4 (RmpActivityHostActOnProcesses.c)
 * Callees:
 *     ?QueryProcessList@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEA_KPEAK@Z @ 0x18000B3F0 (-QueryProcessList@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEA_KPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostGetPsmProcessList(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 **a2,
        unsigned int *a3)
{
  unsigned __int64 *Heap; // rdi
  ModernResourceEnforcer *v7; // rcx
  __int64 (__fastcall *v8)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, unsigned __int64 *, unsigned int *); // rax
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 1;
  Heap = (unsigned __int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( Heap )
  {
    while ( 1 )
    {
      v7 = *(ModernResourceEnforcer **)(*((_QWORD *)a1 + 5) + 72LL);
      v8 = *(__int64 (__fastcall **)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, unsigned __int64 *, unsigned int *))(*(_QWORD *)v7 + 72LL);
      if ( v8 == ModernResourceEnforcer::QueryProcessList )
        v9 = ModernResourceEnforcer::QueryProcessList(v7, a1, Heap, &v12);
      else
        v9 = v8(v7, a1, Heap, &v12);
      v10 = v9;
      if ( v9 >= 0 )
      {
        *a3 = v12;
        *a2 = Heap;
        return v10;
      }
      if ( v9 != -2147483643 )
        break;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      Heap = (unsigned __int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v12);
      if ( !Heap )
      {
        v10 = -1073741801;
        break;
      }
    }
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v10;
}
