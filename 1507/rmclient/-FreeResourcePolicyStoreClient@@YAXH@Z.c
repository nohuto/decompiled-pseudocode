/*
 * XREFs of ?FreeResourcePolicyStoreClient@@YAXH@Z @ 0x180002A80
 * Callers:
 *     DllMain @ 0x18000BD98 (DllMain.c)
 * Callees:
 *     ?Release@ResourcePolicyStoreProxy@ExecutionModel@@UEAAKXZ @ 0x180005C30 (-Release@ResourcePolicyStoreProxy@ExecutionModel@@UEAAKXZ.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

void __fastcall FreeResourcePolicyStoreClient(int a1)
{
  char v2; // di
  unsigned int (__fastcall *v3)(ExecutionModel::ResourcePolicyStoreProxy *__hidden); // rbp

  if ( a1 )
  {
    v2 = 1;
  }
  else
  {
    v2 = 0;
    EnterCriticalSection(&ExecutionModel::s_csProxy);
  }
  if ( qword_180022798 )
  {
    v3 = *(unsigned int (__fastcall **)(ExecutionModel::ResourcePolicyStoreProxy *__hidden))(*(_QWORD *)qword_180022798
                                                                                           + 16LL);
    if ( v3 == ExecutionModel::ResourcePolicyStoreProxy::Release )
      ExecutionModel::ResourcePolicyStoreProxy::Release(qword_180022798);
    else
      v3(qword_180022798);
  }
  qword_180022798 = 0LL;
  if ( !v2 )
    LeaveCriticalSection(&ExecutionModel::s_csProxy);
  if ( a1 )
    RtlDeleteCriticalSection(&ExecutionModel::s_csProxy);
}
