/*
 * XREFs of MiInitializeSessionPool @ 0x140579B44
 * Callers:
 *     MiSessionCreate @ 0x140579240 (MiSessionCreate.c)
 * Callees:
 *     MiInitializeDynamicBitmap @ 0x140579BF4 (MiInitializeDynamicBitmap.c)
 *     ExInitializePoolDescriptor @ 0x140579E5C (ExInitializePoolDescriptor.c)
 */

__int64 MiInitializeSessionPool()
{
  unsigned __int64 v0; // rbx

  v0 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  *(_QWORD *)(v0 + 2912) = 0LL;
  ExInitializePoolDescriptor(v0 + 3264, 33LL);
  *(_QWORD *)(v0 + 2936) = ((*(_QWORD *)(v0 + 56) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiInitializeDynamicBitmap(v0 + 2920, qword_14034EAA8, 0x2000000LL, 0LL) )
    return 3221225626LL;
  *(_QWORD *)(v0 + 2920) = 0LL;
  *(_QWORD *)(v0 + 2944) = 0x2000000LL;
  *(_DWORD *)(v0 + 4) |= 4u;
  return 0LL;
}
