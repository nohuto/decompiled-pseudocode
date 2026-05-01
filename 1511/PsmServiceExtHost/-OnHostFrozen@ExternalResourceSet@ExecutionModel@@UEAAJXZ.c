/*
 * XREFs of ?OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x180044C10
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::OnHostFrozen(ExecutionModel::ExternalResourceSet *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r14
  unsigned int v3; // ebx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 1424);
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 1424));
  if ( *((_QWORD *)this + 183) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 128LL) + 32LL))(
      *(_QWORD *)(*((_QWORD *)this + 3) + 128LL),
      *((_QWORD *)this + 183));
    *((_QWORD *)this + 183) = 0LL;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 128LL) + 40LL))(
         *(_QWORD *)(*((_QWORD *)this + 3) + 128LL),
         (char *)this + 1368,
         4660LL);
  RtlLeaveCriticalSection(v1);
  return v3;
}
