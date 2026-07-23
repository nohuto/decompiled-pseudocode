/*
 * XREFs of MiInitializeSessionPool @ 0x140536328
 * Callers:
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiInitializeDynamicBitmap @ 0x1405363C0 (MiInitializeDynamicBitmap.c)
 *     ExInitializePoolDescriptor @ 0x140536744 (ExInitializePoolDescriptor.c)
 */

__int64 MiInitializeSessionPool()
{
  unsigned __int64 v0; // rbx

  v0 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  *(_QWORD *)(v0 + 2912) = 0LL;
  ExInitializePoolDescriptor(v0 + 3392, 33LL);
  *(_QWORD *)(v0 + 2936) = MiGetPteAddress(*(_QWORD *)(v0 + 56));
  if ( !(unsigned int)MiInitializeDynamicBitmap(v0 + 2920, qword_1403268E8, 0x2000000LL, 0LL) )
    return 3221225626LL;
  *(_QWORD *)(v0 + 2920) = 0LL;
  *(_QWORD *)(v0 + 2944) = 0x2000000LL;
  *(_DWORD *)(v0 + 4) |= 4u;
  return 0LL;
}
