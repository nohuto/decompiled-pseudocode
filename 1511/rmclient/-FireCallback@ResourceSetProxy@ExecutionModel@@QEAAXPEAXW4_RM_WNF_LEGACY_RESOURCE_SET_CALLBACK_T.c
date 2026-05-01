/*
 * XREFs of ?FireCallback@ResourceSetProxy@ExecutionModel@@QEAAXPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@W4_RM_REVOKE_REASON@@@Z @ 0x1800028C0
 * Callers:
 *     ?ResourceSetCallbackHandler@ResourcePolicyEngineProxy@ExecutionModel@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x180002380 (-ResourceSetCallbackHandler@ResourcePolicyEngineProxy@ExecutionModel@@IEAAXPEAU_RM_WNF_LEGACY_RE.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSetProxy::FireCallback(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rbx
  int v8; // ebp
  int v9; // ebp

  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    if ( a3 )
    {
      v8 = a3 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, a2);
        }
        else
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 40LL))(v4, a2);
        }
      }
      else
      {
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, a2, a4);
      }
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
