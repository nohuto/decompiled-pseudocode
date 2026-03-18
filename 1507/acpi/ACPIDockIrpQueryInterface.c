/*
 * XREFs of ACPIDockIrpQueryInterface @ 0x1C0078880
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0023800 (memmove.c)
 *     ACPIDockIntfReference @ 0x1C0078240 (ACPIDockIntfReference.c)
 */

__int64 __fastcall ACPIDockIrpQueryInterface(PVOID Object, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int Status; // ebx
  GUID *SecurityContext; // rcx
  unsigned __int16 Size; // bx
  _WORD Src[4]; // [rsp+20h] [rbp-38h] BYREF
  PVOID v10; // [rsp+28h] [rbp-30h]
  char (__fastcall *v11)(PVOID); // [rsp+30h] [rbp-28h]
  LONG_PTR (__fastcall *v12)(void *); // [rsp+38h] [rbp-20h]
  __int64 (__fastcall *v13)(ULONG_PTR, int); // [rsp+40h] [rbp-18h]
  __int64 (__fastcall *v14)(ULONG_PTR); // [rsp+48h] [rbp-10h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Status = Irp->IoStatus.Status;
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SecurityContext == &GUID_DOCK_INTERFACE || RtlCompareMemory(SecurityContext, &GUID_DOCK_INTERFACE, 0x10uLL) == 16 )
  {
    Size = 48;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x30u )
      Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    Src[0] = Size;
    Src[1] = 1;
    v10 = Object;
    v11 = ACPIDockIntfReference;
    v12 = ACPIDockIntfDereference;
    v13 = ACPIDockIntfSetMode;
    v14 = ACPIDockIntfUpdateDeparture;
    ACPIDockIntfReference(Object);
    memmove(CurrentStackLocation->Parameters.SetFile.FileObject, Src, Size);
    Status = 0;
    Irp->IoStatus.Status = 0;
  }
  IofCompleteRequest(Irp, 0);
  return Status;
}
