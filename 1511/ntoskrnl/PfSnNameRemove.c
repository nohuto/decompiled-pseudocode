/*
 * XREFs of PfSnNameRemove @ 0x1400096DC
 * Callers:
 *     PfSnNameRemoveAll @ 0x1403F1D78 (PfSnNameRemoveAll.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnNameRemove(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // rbp
  unsigned int v4; // edi
  KIRQL v6; // r15
  _RTL_BALANCED_NODE *i; // rbx
  _RTL_BALANCED_NODE *v8; // rcx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8

  v2 = (volatile LONG *)(a1 + 576);
  v4 = 0;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
  for ( i = *(_RTL_BALANCED_NODE **)(a1 + 520); ; i = i->Children[1] )
  {
    while ( 1 )
    {
      if ( !i )
      {
        ExReleaseSpinLockExclusive(v2, v6);
        return v4;
      }
      v8 = i[1].Children[0];
      if ( (unsigned __int64)v8 <= a2 )
        break;
      i = i->Children[0];
    }
    if ( (unsigned __int64)v8 >= a2 )
      break;
  }
  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 520), i);
  ExReleaseSpinLockExclusive(v2, v6);
  v10 = (_QWORD *)(a1 + 488);
  v11 = 0LL;
  v12 = 4LL;
  if ( a1 + 488 > (unsigned __int64)(a1 + 520) )
    v12 = 0LL;
  if ( v12 )
  {
    do
    {
      if ( *v10 == a2 )
        *v10 = 0LL;
      ++v10;
      ++v11;
    }
    while ( v11 < v12 );
  }
  v4 = 1;
  ExFreePoolWithTag(i, 0);
  return v4;
}
