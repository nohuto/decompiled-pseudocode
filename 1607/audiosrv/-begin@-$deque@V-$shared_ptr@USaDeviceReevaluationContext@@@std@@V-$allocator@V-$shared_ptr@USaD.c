/*
 * XREFs of ?begin@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@std@@@std@@@2@XZ @ 0x180079608
 * Callers:
 *     ?ReevaluateSaDevicesForEndpoint@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180078930 (-ReevaluateSaDevicesForEndpoint@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP.c)
 *     ?Shutdown@CAudioResourceManager@@UEAAXXZ @ 0x180078D70 (-Shutdown@CAudioResourceManager@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::deque<std::shared_ptr<SaDeviceReevaluationContext>>::begin(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  _QWORD *result; // rax

  v2 = *a1;
  v3 = a1[3];
  a2[1] = 0LL;
  *a2 = v2;
  result = a2;
  a2[2] = v3;
  return result;
}
