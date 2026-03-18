/*
 * XREFs of IopFreeIrpExtension @ 0x1401BC504
 * Callers:
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     IopFreeIrp @ 0x140087090 (IopFreeIrp.c)
 *     IoSetActivityIdIrp @ 0x1401BB3D4 (IoSetActivityIdIrp.c)
 *     IoClearFsTrackOffsetState @ 0x1401BC398 (IoClearFsTrackOffsetState.c)
 *     IopPerfCompleteRequest @ 0x1401BC7C4 (IopPerfCompleteRequest.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x140101C04 (IopIrpHasExtensionType.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeIrpExtension(__int64 a1, int a2, char a3)
{
  char v3; // al
  __int64 v4; // r9
  char v5; // r10

  v3 = *(_BYTE *)(a1 + 71);
  v4 = *(_QWORD *)(a1 + 200);
  v5 = a3;
  if ( v3 >= 0 )
  {
    if ( v4 )
    {
      if ( a2 == -1 )
      {
        if ( IopIrpHasExtensionType(a1, 5u) )
          *(_QWORD *)(v4 + 32) = 0LL;
        *(_WORD *)(v4 + 2) = 0;
      }
      else
      {
        *(_WORD *)(v4 + 2) &= ~(1 << a2);
        if ( a2 == 5 )
          *(_QWORD *)(v4 + 32) = 0LL;
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
  else
  {
    *(_QWORD *)(a1 + 200) = 0LL;
    *(_BYTE *)(a1 + 71) = v3 & 0x7F;
  }
}
