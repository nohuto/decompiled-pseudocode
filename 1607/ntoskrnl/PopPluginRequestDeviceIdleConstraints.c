/*
 * XREFs of PopPluginRequestDeviceIdleConstraints @ 0x140204804
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1402063D4 (PopPepInitializeVetoMasks.c)
 * Callees:
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x1402086DC (PopDiagTraceFxDeviceIdleConstraints.c)
 */

char __fastcall PopPluginRequestDeviceIdleConstraints(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // bl
  __int64 v5; // r8
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+30h] [rbp-18h]

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 == PopFxProcessorPlugin )
  {
    v8 = *(_QWORD *)(a1 + 72);
    v10[1] = a2;
    v10[0] = v8;
    v11 = a3;
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v5 + 96))(26LL, v10);
    if ( v4 )
      PopDiagTraceFxDeviceIdleConstraints(a1, a2, a3);
  }
  return v4;
}
