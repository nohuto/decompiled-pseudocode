/*
 * XREFs of ViCheckAdapterBuffers @ 0x140708C48
 * Callers:
 *     VfMapTransfer @ 0x140707CF0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140707E98 (VfMapTransferEx.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViCheckTag @ 0x140708EF0 (ViCheckTag.c)
 */

void __fastcall ViCheckAdapterBuffers(__int64 a1)
{
  __int16 v1; // bx
  _QWORD *v2; // rdi
  KSPIN_LOCK *v3; // rsi
  KIRQL v4; // al
  _QWORD *v5; // r9
  KIRQL v6; // bp
  unsigned __int64 v7; // r8
  size_t v8; // rdx
  _QWORD *v9; // r9
  _QWORD *v10; // r14

  v1 = 0;
  v2 = (_QWORD *)(a1 + 80);
  if ( (_QWORD *)*v2 != v2 )
  {
    v3 = (KSPIN_LOCK *)(a1 + 96);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v5 = (_QWORD *)*v2;
    v6 = v4;
    while ( 1 )
    {
      v9 = v5 - 6;
      v10 = v9 + 6;
      if ( v2 == v9 + 6 )
        break;
      v7 = v9[3] - v9[2];
      if ( v7 >= 8 )
        v1 |= 1u;
      v8 = *((unsigned int *)v9 + 2);
      if ( v8 + v7 + 8 <= *((unsigned int *)v9 + 1) )
        v1 |= 2u;
      ViCheckTag(v9[3], v8);
      v5 = (_QWORD *)*v10;
    }
    KeReleaseSpinLock(v3, v6);
  }
}
