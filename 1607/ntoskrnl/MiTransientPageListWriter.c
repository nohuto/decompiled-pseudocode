/*
 * XREFs of MiTransientPageListWriter @ 0x1401FC43C
 * Callers:
 *     MiSystemFault @ 0x14001BFF0 (MiSystemFault.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1400EA240 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400EB1D0 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiTransientPageListWriter(unsigned __int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // al
  _QWORD *v5; // rbx
  unsigned int v6; // edi
  unsigned __int64 v7; // r8

  v4 = ExAcquireSpinLockShared(&dword_140326FA0);
  v5 = (_QWORD *)qword_140326FA8;
  v6 = 0;
  while ( v5 )
  {
    v7 = v5[7];
    if ( a1 > v7 )
    {
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      if ( a1 >= v7 )
        break;
      v5 = (_QWORD *)*v5;
    }
  }
  if ( v5 && (!v5[4] || a2 < v5[5] || a2 > v5[6]) )
    v5 = 0LL;
  ExReleaseSpinLockShared(&dword_140326FA0, v4);
  LOBYTE(v6) = v5 != 0LL;
  return v6;
}
