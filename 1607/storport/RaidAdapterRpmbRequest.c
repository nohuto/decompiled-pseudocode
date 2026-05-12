/*
 * XREFs of RaidAdapterRpmbRequest @ 0x1C0027F7C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C00020D8 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     memset @ 0x1C001AD80 (memset.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0028520 (RaidAdapterSendRPMBCommandSynchronously.c)
 */

__int64 __fastcall RaidAdapterRpmbRequest(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v3; // edi
  int v5; // ebp
  unsigned __int64 Options; // r8
  unsigned __int64 Length; // r9
  _IRP *MasterIrp; // rsi
  signed int v9; // r8d
  unsigned __int8 QuadPart_high; // al
  unsigned int v12; // edx
  char v13; // al
  int v14; // r8d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v5 = a1;
  if ( !*(_DWORD *)(a1 + 5640) || !*(_DWORD *)(a1 + 5644) )
  {
    v9 = -1073741808;
    goto LABEL_26;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( (Options & 0x1FF) != 0 )
  {
LABEL_4:
    v9 = -1073741811;
    goto LABEL_5;
  }
  QuadPart_high = HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart);
  if ( !QuadPart_high )
    goto LABEL_24;
  if ( QuadPart_high <= 2u )
  {
    v12 = 1;
    v3 = 1;
    goto LABEL_16;
  }
  if ( QuadPart_high == 3 )
  {
LABEL_14:
    v3 = 1;
    v12 = (unsigned int)Options >> 9;
    goto LABEL_16;
  }
  if ( QuadPart_high != 4 )
  {
    if ( QuadPart_high != 6 )
    {
      if ( QuadPart_high == 7 )
        goto LABEL_13;
LABEL_24:
      v9 = -1073741808;
      goto LABEL_5;
    }
    goto LABEL_14;
  }
LABEL_13:
  v12 = 1;
  v3 = (unsigned int)Options >> 9;
LABEL_16:
  if ( Options < (unsigned __int64)v12 << 9 )
    goto LABEL_4;
  if ( Length < (unsigned __int64)v3 << 9 )
  {
    v9 = -2147483643;
    goto LABEL_5;
  }
  LOBYTE(Options) = -75;
  v9 = RaidAdapterSendRPMBCommandSynchronously(a1, (_DWORD)a2, Options, (_DWORD)MasterIrp, v12);
  if ( v9 < 0 )
    goto LABEL_5;
  v13 = HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart);
  if ( v13 == 3 || v13 == 6 )
  {
    memset(MasterIrp, 0, 0x200uLL);
    HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart) = 5;
    LOBYTE(v14) = -75;
    v9 = RaidAdapterSendRPMBCommandSynchronously(v5, (_DWORD)a2, v14, (_DWORD)MasterIrp, 1);
    if ( v9 < 0 )
      goto LABEL_5;
  }
  LOBYTE(v9) = -94;
  v9 = RaidAdapterSendRPMBCommandSynchronously(v5, (_DWORD)a2, v9, (_DWORD)MasterIrp, v3);
LABEL_26:
  if ( v9 >= 0 )
  {
    a2->IoStatus.Information = (unsigned __int64)v3 << 9;
    return RaidCompleteRequestEx(a2, 0, v9);
  }
LABEL_5:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v9);
}
