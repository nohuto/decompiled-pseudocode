/*
 * XREFs of ?OnDeviceTimerNotification@InteractiveControlManager@@QEAAJK@Z @ 0x1C023B8C4
 * Callers:
 *     _lambda_22b1152649b846f91130bab36d1a9194_::_lambda_invoker_cdecl_ @ 0x1C023C820 (_lambda_22b1152649b846f91130bab36d1a9194_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1C023D1B8 (-FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_GERERIC_HAPTICS_OUTPUT@@@Z @ 0x1C023E030 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_GERERIC_HAPTICS_OUTPUT@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnDeviceTimerNotification(
        InteractiveControlManager *this,
        unsigned int a2)
{
  __int64 v2; // rbp
  __int64 *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbx
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  v3 = (__int64 *)((char *)this + 40);
  v4 = 5LL;
  do
  {
    v5 = *v3;
    if ( *v3 && v2 == *(_QWORD *)(v5 + 408) )
    {
      *(_QWORD *)(v5 + 408) = 0LL;
      *(_DWORD *)(v5 + 432) = 1;
      InteractiveControlDevice::FlushBufferedInput((InteractiveControlDevice *)v5, 0x80u);
      v7[3] = 0;
      v7[1] = 0;
      v7[2] = 0;
      v7[0] = 5;
      InteractiveControlDevice::SendHapticFeedbackOutput(
        (InteractiveControlDevice *)v5,
        (const struct _GERERIC_HAPTICS_OUTPUT *)v7);
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  return 0LL;
}
