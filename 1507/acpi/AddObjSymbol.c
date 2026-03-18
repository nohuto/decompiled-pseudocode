/*
 * XREFs of AddObjSymbol @ 0x1C0010D70
 * Callers:
 *     Method @ 0x1C0010C60 (Method.c)
 * Callees:
 *     memset @ 0x1C0023B40 (memset.c)
 */

void __fastcall AddObjSymbol(unsigned __int64 a1, __int64 a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rsi
  KIRQL v6; // al
  _QWORD *v7; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x536C6D41u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x20uLL);
    v5[2] = a1;
    v5[3] = a2;
    v6 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    v7 = qword_1C005A140;
    if ( qword_1C005A140 )
    {
      if ( a1 >= *((_QWORD *)qword_1C005A140 + 2) )
      {
        if ( qword_1C005A140 )
        {
          while ( a1 >= v7[2] )
          {
            if ( !v7[1] )
            {
              *v5 = v7;
              v7[1] = v5;
              goto LABEL_9;
            }
            v7 = (_QWORD *)v7[1];
          }
          v5[1] = v7;
          *v5 = *v7;
          *(_QWORD *)(*v7 + 8LL) = v5;
          *v7 = v5;
        }
        goto LABEL_9;
      }
      v5[1] = qword_1C005A140;
      *(_QWORD *)qword_1C005A140 = v5;
    }
    qword_1C005A140 = v5;
LABEL_9:
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v6);
  }
}
