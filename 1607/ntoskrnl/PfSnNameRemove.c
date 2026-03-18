/*
 * XREFs of PfSnNameRemove @ 0x140034A90
 * Callers:
 *     PfSnNameRemoveAll @ 0x1405117D4 (PfSnNameRemoveAll.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x140031320 (RtlRbRemoveNode.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnNameRemove(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // rbp
  unsigned int v4; // edi
  KIRQL v6; // r15
  unsigned __int64 *i; // rbx
  unsigned __int64 v8; // rcx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8

  v2 = (volatile LONG *)(a1 + 576);
  v4 = 0;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
  for ( i = *(unsigned __int64 **)(a1 + 520); ; i = (unsigned __int64 *)i[1] )
  {
    while ( 1 )
    {
      if ( !i )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        __writecr8(v6);
        return v4;
      }
      v8 = i[3];
      if ( v8 <= a2 )
        break;
      i = (unsigned __int64 *)*i;
    }
    if ( v8 >= a2 )
      break;
  }
  RtlRbRemoveNode((unsigned __int64 *)(a1 + 520), i);
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
