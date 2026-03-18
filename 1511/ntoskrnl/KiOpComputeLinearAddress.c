/*
 * XREFs of KiOpComputeLinearAddress @ 0x1401CB62C
 * Callers:
 *     KiOpRetrieveRegMemAddress @ 0x1401419E4 (KiOpRetrieveRegMemAddress.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 */

__int64 __fastcall KiOpComputeLinearAddress(__int64 a1, ULONG64 *a2)
{
  ULONG64 v2; // rdi
  __int64 v3; // r10
  char v5; // dl
  __int16 v6; // r9
  KPCR *Teb; // r8

  v2 = *a2;
  v3 = a1;
  v5 = *(_BYTE *)(a1 + 73);
  _BitScanForward((unsigned int *)&a1, *(_DWORD *)(a1 + 40));
  v6 = *(_WORD *)(*(unsigned int *)&KiOpSegmentOffsetTable[2 * a1] + *(_QWORD *)(v3 + 16));
  Teb = 0LL;
  if ( 1 << a1 == 32 )
  {
    if ( v5 )
    {
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess() )
        Teb = 0LL;
      else
        Teb = (KPCR *)KeGetCurrentThread()->Teb;
    }
    else
    {
      Teb = KeGetPcr();
    }
    goto LABEL_4;
  }
  if ( 1 << a1 == 16 )
  {
    if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess() )
      Teb = 0LL;
    else
      Teb = (KPCR *)KeGetCurrentThread()->Teb;
    if ( Teb )
      Teb = (KPCR *)((char *)Teb + 0x2000);
    goto LABEL_4;
  }
  if ( v5 != 1 || !*(_BYTE *)(v3 + 50) || ((v6 - 35) & 0xFFE7) == 0 && v6 != 59 )
  {
LABEL_4:
    *a2 = (ULONG64)Teb + v2;
    return 0LL;
  }
  *a2 = MmUserProbeAddress;
  return 3221225477LL;
}
