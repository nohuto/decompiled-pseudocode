/*
 * XREFs of KeExpandKernelStackAndCalloutInternal @ 0x140021700
 * Callers:
 *     KeExpandKernelStackAndCalloutEx @ 0x1400216E0 (KeExpandKernelStackAndCalloutEx.c)
 *     MiSwapStackPage @ 0x14011F8A0 (MiSwapStackPage.c)
 *     KeExpandKernelStackAndCallout @ 0x14012F378 (KeExpandKernelStackAndCallout.c)
 *     MiDoStackCopy @ 0x1401346F8 (MiDoStackCopy.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x1401400E0 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1400217C0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KeBugCheck @ 0x140182740 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiFatalFilter @ 0x14020022C (KiFatalFilter.c)
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
