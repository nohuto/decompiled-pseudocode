/*
 * XREFs of FsRtlUpperOplockFsctrl @ 0x14061E5B8
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404696E8 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140469CE8 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlUpperOplockFsctrl(__int64 *Oplock, PIRP Irp, unsigned int a3, char a4, int a5)
{
  int v5; // esi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int v9; // r8d
  int v11; // r11d
  UCHAR MajorFunction; // r10
  ULONG Options; // r8d
  unsigned int v14; // ebx
  struct _IRP *MasterIrp; // rcx

  v5 = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v9 = 0;
  v11 = ((a4 & 1) << 12) | ((a4 & 4) << 12) | ((a4 & 2) << 12);
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction )
  {
    switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
    {
      case 0x90000u:
        v9 = 2;
        break;
      case 0x90004u:
        v9 = 16;
        break;
      case 0x90008u:
        v9 = 4;
        break;
      case 0x9005Cu:
        v9 = 8;
        break;
      case 0x90240u:
        MasterIrp = Irp->AssociatedIrp.MasterIrp;
        if ( CurrentStackLocation->Parameters.Create.Options >= 0xC )
        {
          if ( MasterIrp->Type <= 1u )
          {
            if ( ((__int64)MasterIrp->MdlAddress & 2) != 0 )
              return (unsigned int)FsRtlpOplockFsctrlInternal(Oplock, Irp, a3, a5, v11);
            v9 = ((*(_DWORD *)(&MasterIrp->Size + 1) & 1) << 12) | ((*(_DWORD *)(&MasterIrp->Size + 1) & 4) << 12) | ((*(_DWORD *)(&MasterIrp->Size + 1) & 2) << 12);
          }
          else
          {
            v5 = -1073741811;
          }
        }
        else
        {
          v5 = -1073741789;
        }
        break;
      default:
        return (unsigned int)FsRtlpOplockFsctrlInternal(Oplock, Irp, a3, a5, v11);
    }
    if ( !FsRtlpOplockUpperLowerCompatible(v9, v11) )
      v5 = -1073741598;
    v14 = v5;
    if ( v5 )
      goto LABEL_4;
    return (unsigned int)FsRtlpOplockFsctrlInternal(Oplock, Irp, a3, a5, v11);
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( ((Options & 0x100000) == 0 || (v11 & 0x4000) != 0) && ((Options & 0x10000) == 0 || (v11 & 0x2000) != 0) )
    return (unsigned int)FsRtlpOplockFsctrlInternal(Oplock, Irp, a3, a5, v11);
  v14 = -1073741598;
LABEL_4:
  if ( MajorFunction == 13 )
  {
    Irp->IoStatus.Status = v14;
    IofCompleteRequest(Irp, 1);
  }
  return v14;
}
