/*
 * XREFs of IopCancelIrpsInCurrentThreadList @ 0x1400A0894
 * Callers:
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1404B22A8 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     IopCancelIrpsInThreadList @ 0x1404B22E8 (IopCancelIrpsInThreadList.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     IoCancelIrp @ 0x1400A097C (IoCancelIrp.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall IopCancelIrpsInCurrentThreadList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  KSPIN_LOCK *v4; // rbp
  unsigned int v7; // r14d
  _QWORD *v8; // r15
  KIRQL v9; // r12
  _QWORD *v10; // rdi
  int v12; // eax
  KIRQL v14; // [rsp+68h] [rbp+10h]

  v4 = (KSPIN_LOCK *)(a2 + 1840);
  v7 = 0;
  v8 = (_QWORD *)(a2 + 1640);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 1840));
  v9 = v14;
  v10 = (_QWORD *)*v8;
  if ( v8 != (_QWORD *)*v8 )
  {
    while ( 1 )
    {
      if ( *((char *)v10 + 35) < *((char *)v10 + 34) + 2 )
      {
        if ( a4 )
        {
          if ( a3 && v10[5] != a3 )
            goto LABEL_6;
          v12 = *((_DWORD *)v10 - 4);
          if ( (v12 & 0x402) != 0 || (v12 & 0x84) == 0 && (*((_BYTE *)v10 + 39) & 2) == 0 )
            goto LABEL_6;
        }
        else if ( (*(_DWORD *)(v10 - 2) & 2) != 0 || v10[20] != a1 || a3 && v10[5] != a3 )
        {
          goto LABEL_6;
        }
        v7 = 1;
        KeReleaseSpinLock(v4, 1u);
        IoCancelIrp((PIRP)(v10 - 4));
        __writecr8(2uLL);
        KxAcquireSpinLock(v4);
      }
LABEL_6:
      v10 = (_QWORD *)*v10;
      if ( v8 == v10 )
      {
        v9 = v14;
        break;
      }
    }
  }
  KeReleaseSpinLock(v4, v9);
  return v7;
}
