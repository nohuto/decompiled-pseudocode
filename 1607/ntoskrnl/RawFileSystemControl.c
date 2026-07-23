/*
 * XREFs of RawFileSystemControl @ 0x1404D0F18
 * Callers:
 *     RawDispatch @ 0x1403EAF28 (RawDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     RawVerifyVolume @ 0x14021037C (RawVerifyVolume.c)
 *     RawMountVolume @ 0x1403EFCEC (RawMountVolume.c)
 *     RawUserFsCtrl @ 0x140529F94 (RawUserFsCtrl.c)
 */

__int64 __fastcall RawFileSystemControl(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  if ( *(_BYTE *)(a3 + 1) )
  {
    if ( *(_BYTE *)(a3 + 1) == 1 )
    {
      v4 = RawMountVolume((_QWORD *)a3);
    }
    else
    {
      if ( *(_BYTE *)(a3 + 1) != 2 )
      {
        v5 = -1073741808;
        goto LABEL_5;
      }
      v4 = RawVerifyVolume(a3, a1);
    }
  }
  else
  {
    v4 = RawUserFsCtrl(a2, a3, a1);
  }
  v5 = v4;
LABEL_5:
  a2->IoStatus.Status = v5;
  IofCompleteRequest(a2, 1);
  return v5;
}
