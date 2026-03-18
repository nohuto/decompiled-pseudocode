/*
 * XREFs of KiOpComputeLinearAddress @ 0x14020A61C
 * Callers:
 *     KiOpRetrieveRegMemAddress @ 0x14016F9C0 (KiOpRetrieveRegMemAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiOpComputeLinearAddress(__int64 a1, ULONG64 *a2)
{
  char v2; // r10
  __int64 v3; // r11
  __int16 v4; // r9
  KPCR *Teb; // r8

  v2 = *(_BYTE *)(a1 + 73);
  v3 = a1;
  _BitScanForward((unsigned int *)&a1, *(_DWORD *)(a1 + 40));
  v4 = *(_WORD *)(*(unsigned int *)&KiOpSegmentOffsetTable[2 * a1] + *(_QWORD *)(v3 + 16));
  Teb = 0LL;
  if ( 1 << a1 == 32 )
  {
    if ( v2 )
    {
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 && KeGetCurrentThread()->ApcStateIndex != 1 )
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
    if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 && KeGetCurrentThread()->ApcStateIndex != 1 )
      Teb = (KPCR *)KeGetCurrentThread()->Teb;
    if ( Teb )
      Teb = (KPCR *)((char *)Teb + 0x2000);
    goto LABEL_4;
  }
  if ( v2 != 1 || !*(_BYTE *)(v3 + 50) || ((v4 - 35) & 0xFFE7) == 0 && v4 != 59 )
  {
LABEL_4:
    *a2 += (ULONG64)Teb;
    return 0LL;
  }
  *a2 = MmUserProbeAddress;
  return 3221225477LL;
}
