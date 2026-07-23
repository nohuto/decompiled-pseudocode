/*
 * XREFs of PopPepRegisterComponentPerfStates @ 0x140206A70
 * Callers:
 *     PopFxRegisterComponentPerfStates @ 0x14066D1E8 (PopFxRegisterComponentPerfStates.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

void __fastcall PopPepRegisterComponentPerfStates(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbx
  KIRQL v6; // al

  v5 = 200LL * a2;
  v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(v5 + a1 + 360) = 1;
  *(_QWORD *)(v5 + a1 + 200) = a3;
  if ( (a3 & 2) != 0 )
    *(_BYTE *)(a1 + 164) = 1;
  if ( (a3 & 4) != 0 )
    *(_BYTE *)(a1 + 165) = 1;
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 64), v6);
}
