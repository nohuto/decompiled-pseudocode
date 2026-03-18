/*
 * XREFs of RawFileSystemControl @ 0x14040C3BC
 * Callers:
 *     RawDispatch @ 0x14040B7FC (RawDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     RawVerifyVolume @ 0x140244EE8 (RawVerifyVolume.c)
 *     RawMountVolume @ 0x14040E7F4 (RawMountVolume.c)
 *     RawUserFsCtrl @ 0x14055F784 (RawUserFsCtrl.c)
 */

__int64 __fastcall RawFileSystemControl(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  if ( *(_BYTE *)(a3 + 1) )
  {
    if ( *(_BYTE *)(a3 + 1) == 1 )
    {
      v4 = RawMountVolume(a3);
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
