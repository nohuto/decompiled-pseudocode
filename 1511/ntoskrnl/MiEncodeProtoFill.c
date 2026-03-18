/*
 * XREFs of MiEncodeProtoFill @ 0x14000CEF0
 * Callers:
 *     MiInitializePrototypePtes @ 0x1403C8F74 (MiInitializePrototypePtes.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiEncodeProtoFill(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  KIRQL v6; // bp
  __int64 v7; // rbx

  v3 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v4 = &v3[a2 >> 12];
  v6 = ExAcquireSpinLockExclusive(&dword_1402FF980);
  if ( v3 < v4 )
  {
    v7 = a3;
    do
    {
      *v3 = v7;
      if ( (unsigned int)MiPteInShadowRange(v3) )
      {
        MiWritePteShadow(v3, v7);
        v7 = a3;
      }
      ++v3;
    }
    while ( v3 < v4 );
  }
  LOBYTE(v5) = v6;
  return MiUnlockWorkingSetExclusive(&dword_1402FF980, v5);
}
