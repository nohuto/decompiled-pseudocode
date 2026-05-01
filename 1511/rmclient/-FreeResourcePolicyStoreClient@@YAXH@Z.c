/*
 * XREFs of ?FreeResourcePolicyStoreClient@@YAXH@Z @ 0x180007000
 * Callers:
 *     DllMain @ 0x18000C8A8 (DllMain.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

void __fastcall FreeResourcePolicyStoreClient(int a1)
{
  char v2; // di

  if ( a1 )
  {
    v2 = 1;
  }
  else
  {
    v2 = 0;
    EnterCriticalSection(&ExecutionModel::s_csProxy);
  }
  if ( qword_180024800 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180024800 + 16LL))(qword_180024800);
  qword_180024800 = 0LL;
  if ( !v2 )
    LeaveCriticalSection(&ExecutionModel::s_csProxy);
  if ( a1 )
    RtlDeleteCriticalSection(&ExecutionModel::s_csProxy);
}
