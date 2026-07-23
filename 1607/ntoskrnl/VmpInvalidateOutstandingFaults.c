/*
 * XREFs of VmpInvalidateOutstandingFaults @ 0x140224248
 * Callers:
 *     VmpFlushTbVaRange @ 0x140223EEC (VmpFlushTbVaRange.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001D8E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall VmpInvalidateOutstandingFaults(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rdx
  unsigned __int64 v11; // r8
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx

  v4 = a2 + a3 - 1;
  v6 = 0LL;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v7 = *(_QWORD **)(a1 + 48);
  v8 = 0LL;
  while ( v7 )
  {
    v9 = v7[3];
    if ( a2 > v9 )
    {
      v7 = (_QWORD *)v7[1];
    }
    else
    {
      v8 = v7;
      v7 = (_QWORD *)*v7;
      if ( a2 >= v9 )
      {
        v10 = 0LL;
        if ( v7 )
        {
          do
          {
            v11 = v7[3];
            if ( a2 > v11 )
            {
              v7 = (_QWORD *)v7[1];
            }
            else
            {
              if ( a2 >= v11 )
                v10 = v7;
              v7 = (_QWORD *)*v7;
            }
          }
          while ( v7 );
          if ( v10 )
            v8 = v10;
        }
        break;
      }
    }
  }
  while ( v8 && v8[3] <= v4 )
  {
    v12 = (_QWORD *)v8[1];
    ++v6;
    v8[4] = 1LL;
    v13 = v8;
    if ( v12 )
    {
      do
      {
        v8 = v12;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 );
    }
    else
    {
      while ( 1 )
      {
        v8 = (_QWORD *)(v8[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v8 || (_QWORD *)*v8 == v13 )
          break;
        v13 = v8;
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  return v6;
}
