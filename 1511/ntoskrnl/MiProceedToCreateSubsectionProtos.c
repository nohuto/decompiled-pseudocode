/*
 * XREFs of MiProceedToCreateSubsectionProtos @ 0x1401E39B0
 * Callers:
 *     MiAllocateFileExtents @ 0x14062C488 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreWait @ 0x140020C90 (KeAbPreWait.c)
 *     KeAbPostReleaseEx @ 0x1400317E4 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
 */

__int64 __fastcall MiProceedToCreateSubsectionProtos(_QWORD *BugCheckParameter2, char a2)
{
  volatile LONG *v3; // rbp
  unsigned int v5; // edi
  KIRQL v6; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  ULONG_PTR v9; // rsi
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  __int16 v13; // [rsp+28h] [rbp-30h] BYREF
  char v14; // [rsp+2Ah] [rbp-2Eh]
  int v15; // [rsp+2Ch] [rbp-2Ch]
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = (volatile LONG *)(*BugCheckParameter2 + 72LL);
  v5 = 0;
  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(v3);
    if ( BugCheckParameter2[1] && (a2 & 1) != 0 )
    {
      v5 = -1073741302;
      goto LABEL_14;
    }
    v7 = BugCheckParameter2[3];
    if ( !v7 )
      break;
    if ( v7 == 1 )
      BugCheckParameter2[3] = 0LL;
    v8 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 2LL);
    v9 = v8;
    if ( v8 )
      KeAbPreWait(v8);
    v13 = 263;
    v16[1] = v16;
    v14 = 6;
    v16[0] = v16;
    v12 = BugCheckParameter2[3];
    BugCheckParameter2[3] = &v12;
    v15 = 0;
    ExReleaseSpinLockExclusive(v3, v6);
    KeWaitForGate((__int64)&v13, 18);
    if ( v9 )
    {
      KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, v9, 0LL);
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v9);
    }
  }
  BugCheckParameter2[3] = 1LL;
  v10 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 2LL);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
LABEL_14:
  ExReleaseSpinLockExclusive(v3, v6);
  return v5;
}
