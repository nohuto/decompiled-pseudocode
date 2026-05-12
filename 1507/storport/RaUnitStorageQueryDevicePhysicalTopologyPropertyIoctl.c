/*
 * XREFs of RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C00319A8
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C004C0D4 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     memmove @ 0x1C0012FC0 (memmove.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C002F72C (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C00339DC (RaidUnitSendSrbIoControlSynchronously.c)
 */

__int64 __fastcall RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl(__int64 a1, IRP *a2)
{
  int v3; // r15d
  _IRP *MasterIrp; // r14
  size_t Length; // rbx
  int v6; // edx
  unsigned int v7; // edi
  int v8; // eax
  char *v9; // rbp
  unsigned int v11; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  P = 0LL;
  v11 = 0;
  v3 = a1;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v6 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      v7 = -1073741637;
LABEL_17:
      a2->IoStatus.Information = 0LL;
      return RaidCompleteRequestEx(a2, 0, v7);
    }
LABEL_7:
    v7 = 0;
    return RaidCompleteRequestEx(a2, 0, v7);
  }
  if ( (unsigned int)Length < 0x38 )
  {
    if ( (unsigned int)Length < 8 )
    {
      v7 = -1073741789;
      goto LABEL_17;
    }
    *(_DWORD *)&MasterIrp->Type = 56;
    *(_DWORD *)(&MasterIrp->Size + 1) = 56;
    a2->IoStatus.Information = 8LL;
    goto LABEL_7;
  }
  v8 = RaBuildQueryPhysicalTopologyBufferForMiniport(*(_QWORD *)(a1 + 8), (__int64)a2, &P, &v11);
  v9 = (char *)P;
  v7 = v8;
  if ( v8 >= 0 )
  {
    v7 = RaidUnitSendSrbIoControlSynchronously(v3, (_DWORD)a2, (_DWORD)P, v11, 0LL);
    if ( (int)(v7 + 0x80000000) < 0 || v7 == -2147483643 )
    {
      memmove(MasterIrp, v9 + 28, Length);
      *(_DWORD *)&MasterIrp->Type = 56;
      a2->IoStatus.Information = Length;
    }
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0x72536152u);
  if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -2147483643 )
    goto LABEL_17;
  return RaidCompleteRequestEx(a2, 0, v7);
}
