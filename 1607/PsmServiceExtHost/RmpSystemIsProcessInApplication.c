/*
 * XREFs of RmpSystemIsProcessInApplication @ 0x180007440
 * Callers:
 *     RmpActivityHostActOnProcesses @ 0x1800077F4 (RmpActivityHostActOnProcesses.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RmpSystemIsProcessInApplication(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  int v2; // r8d
  unsigned __int8 (__fastcall *v5)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, void *); // rax
  ModernResourceEnforcer *v7; // rcx

  v2 = *((_DWORD *)a1 + 12);
  if ( v2 )
    return v2 == 1 && NtIsProcessInJob(a2, *((HANDLE *)a1 + 92)) == 292;
  v5 = *(unsigned __int8 (__fastcall **)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, void *))(**(_QWORD **)(*((_QWORD *)a1 + 5) + 72LL) + 80LL);
  v7 = *(ModernResourceEnforcer **)(*((_QWORD *)a1 + 5) + 72LL);
  if ( v5 == ModernResourceEnforcer::IsProcessInApplication )
    return ModernResourceEnforcer::IsProcessInApplication(v7, a1, a2);
  else
    return ((__int64 (__fastcall *)(ModernResourceEnforcer *, struct _RM_ACTIVITY_HOST *, void *, void *))v5)(
             v7,
             a1,
             a2,
             a2);
}
