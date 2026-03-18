/*
 * XREFs of KeExpandKernelStackAndCalloutInternal @ 0x1400F0FE0
 * Callers:
 *     KeExpandKernelStackAndCallout @ 0x1400B4CC4 (KeExpandKernelStackAndCallout.c)
 *     KeExpandKernelStackAndCalloutEx @ 0x1400F0FC0 (KeExpandKernelStackAndCalloutEx.c)
 *     MiSwapStackPage @ 0x14010BCFC (MiSwapStackPage.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140117210 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     MiDoStackCopy @ 0x1401E6304 (MiDoStackCopy.c)
 *     KeInitSystem @ 0x140791AC4 (KeInitSystem.c)
 * Callees:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1400F10A0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KeBugCheck @ 0x14015D4F0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     KiFatalFilter @ 0x1401D2BB8 (KiFatalFilter.c)
 */

__int64 __fastcall KeExpandKernelStackAndCalloutInternal(
        void (__fastcall *a1)(__int64),
        __int64 a2,
        int a3,
        int a4,
        __int64 a5)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // r15
  struct _KTHREAD *CurrentThread; // rbx
  int MiscFlags; // eax
  char v11; // r14
  unsigned __int8 v12; // al

  result = KiExpandKernelStackAndCalloutSwitchStack((_DWORD)a1, a2, a3, a4, a5);
  if ( (_DWORD)result == -1073740661 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    MiscFlags = CurrentThread->MiscFlags;
    if ( (MiscFlags & 0x1000) != 0 )
    {
      v11 = 1;
    }
    else
    {
      CurrentThread->MiscFlags = MiscFlags | 0x1000;
      v11 = 0;
    }
    a1(a2);
    if ( !v11 )
      CurrentThread->MiscFlags &= ~0x1000u;
    v12 = KeGetCurrentIrql();
    if ( v12 != CurrentIrql )
      KeBugCheckEx(0xC8u, CurrentIrql, v12, 0LL, 0LL);
    return 0LL;
  }
  return result;
}
