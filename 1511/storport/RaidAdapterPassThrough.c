/*
 * XREFs of RaidAdapterPassThrough @ 0x1C0056D68
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0004898 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     RaidAdapterFindUnit @ 0x1C0006838 (RaidAdapterFindUnit.c)
 *     RaidSqmRecordPassthroughData @ 0x1C0026EB0 (RaidSqmRecordPassthroughData.c)
 *     PortPassThroughExSendAsync @ 0x1C0058C50 (PortPassThroughExSendAsync.c)
 *     PortPassThroughGetAddress @ 0x1C0059104 (PortPassThroughGetAddress.c)
 */

__int64 __fastcall RaidAdapterPassThrough(__int64 a1, IRP *a2, char a3)
{
  __int64 Unit; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v8; // r8d
  int v9; // r8d
  int v10; // r10d
  int v11; // r11d
  __int64 v13; // [rsp+30h] [rbp-18h]
  unsigned int v14; // [rsp+68h] [rbp+20h] BYREF

  if ( (int)PortPassThroughGetAddress(a2, &v14, (char *)&v14 + 1, (char *)&v14 + 2) >= 0
    && (Unit = RaidAdapterFindUnit(a1, v14)) != 0 )
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MinorFunction || (*(_BYTE *)(Unit + 144) & 1) == 0 )
    {
      CurrentStackLocation->Control |= 1u;
      RaidSqmRecordPassthroughData((__int64)a2);
      LOBYTE(v9) = a3;
      PortPassThroughExSendAsync(*(_QWORD *)(Unit + 8), (int)a2, v9, v11, v10, v13, Unit);
      return 259LL;
    }
    v8 = -1073741808;
  }
  else
  {
    v8 = -1073741810;
  }
  return RaidCompleteRequestEx(a2, 0, v8);
}
