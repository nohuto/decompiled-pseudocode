/*
 * XREFs of MiTransientCombineAddress @ 0x1401FB36C
 * Callers:
 *     MiRaisedIrqlFault @ 0x1401EF8EC (MiRaisedIrqlFault.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiTransientCombineAddress(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  KIRQL v6; // al
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rcx

  v2 = 0;
  if ( !dword_140326E44 )
    return 0LL;
  v6 = ExAcquireSpinLockShared(&dword_140326E40);
  v7 = (_QWORD *)qword_140326E48;
  while ( v7 )
  {
    v8 = v7[3];
    if ( a1 > v8 )
    {
      v7 = (_QWORD *)v7[1];
    }
    else
    {
      if ( a1 >= v8 )
        break;
      v7 = (_QWORD *)*v7;
    }
  }
  if ( v7 )
  {
    if ( v7[5] != ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      v7 = 0LL;
  }
  ExReleaseSpinLockShared(&dword_140326E40, v6);
  LOBYTE(v2) = v7 != 0LL;
  return v2;
}
