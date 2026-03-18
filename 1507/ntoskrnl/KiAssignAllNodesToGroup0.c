/*
 * XREFs of KiAssignAllNodesToGroup0 @ 0x1407E3608
 * Callers:
 *     KiPerformGroupConfiguration @ 0x1407E3360 (KiPerformGroupConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 KiAssignAllNodesToGroup0()
{
  char v0; // dl
  __int64 *v1; // rcx
  __int64 v2; // r8
  __int64 result; // rax

  v0 = KeNumberNodes;
  KiMaximumGroups = 1;
  if ( KeNumberNodes )
  {
    v1 = KeNodeBlock;
    v2 = (unsigned __int16)KeNumberNodes;
    do
    {
      result = *v1++;
      *(_BYTE *)(result + 173) |= 2u;
      *(_WORD *)(result + 144) = 0;
      *(_DWORD *)(result + 128) = (1 << v0) - 1;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
