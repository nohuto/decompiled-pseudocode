/*
 * XREFs of IopFreeIrpExtension @ 0x1400B38E4
 * Callers:
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     IopFreeIrp @ 0x140055DE0 (IopFreeIrp.c)
 *     IoSetActivityIdIrp @ 0x140111FD8 (IoSetActivityIdIrp.c)
 *     IoCleanupIrp @ 0x1401C8A3C (IoCleanupIrp.c)
 *     IoClearFsTrackOffsetState @ 0x1401CA458 (IoClearFsTrackOffsetState.c)
 *     IopPerfCompleteRequest @ 0x1401CA7DC (IopPerfCompleteRequest.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x1400D13D8 (IopIrpHasExtensionType.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeIrpExtension(__int64 a1, int a2, char a3)
{
  char v3; // al
  __int64 v4; // r9
  char v5; // r10

  v3 = *(_BYTE *)(a1 + 71);
  v4 = *(_QWORD *)(a1 + 200);
  v5 = a3;
  if ( v3 < 0 )
  {
    *(_QWORD *)(a1 + 200) = 0LL;
    *(_BYTE *)(a1 + 71) = v3 & 0x7F;
  }
  else if ( v4 )
  {
    if ( a2 == -1 )
    {
      if ( (unsigned __int8)IopIrpHasExtensionType(a1, 5LL) )
        *(_QWORD *)(v4 + 40) = 0LL;
      *(_WORD *)(v4 + 2) = 0;
    }
    else
    {
      *(_WORD *)(v4 + 2) &= ~(1 << a2);
      if ( a2 == 5 )
        *(_QWORD *)(v4 + 40) = 0LL;
    }
    if ( !*(_WORD *)(v4 + 2) && (*(_BYTE *)(a1 + 71) & 0x40) != 0 )
    {
      if ( v5 )
      {
        ExFreePoolWithTag((PVOID)v4, 0x58707249u);
        *(_BYTE *)(a1 + 71) &= ~0x40u;
        *(_QWORD *)(a1 + 200) = 0LL;
      }
    }
  }
}
