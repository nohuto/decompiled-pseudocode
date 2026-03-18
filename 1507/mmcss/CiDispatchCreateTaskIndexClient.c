/*
 * XREFs of CiDispatchCreateTaskIndexClient @ 0x1C000A190
 * Callers:
 *     <none>
 * Callees:
 *     CiTaskIndexReference @ 0x1C0001350 (CiTaskIndexReference.c)
 *     CiTaskIndexDereference @ 0x1C0002570 (CiTaskIndexDereference.c)
 *     WPP_SF_ @ 0x1C0003D20 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x1C0003FAC (WPP_SF_dd.c)
 *     CiTaskIndexCreate @ 0x1C000A410 (CiTaskIndexCreate.c)
 *     CiLookupTask @ 0x1C000ACB0 (CiLookupTask.c)
 */

__int64 __fastcall CiDispatchCreateTaskIndexClient(PIRP Irp, __int64 a2)
{
  int v2; // r9d
  unsigned int v3; // esi
  struct _IRP *MasterIrp; // rax
  NTSTATUS v7; // ebx
  volatile signed __int64 *v8; // rdi
  __int64 v9; // rbx
  signed __int64 v10; // rcx
  _DWORD *v11; // rax
  PVOID P; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 32);
  v3 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v7 = -1073741811;
  if ( v2 == 280 )
  {
    v8 = *(volatile signed __int64 **)&MasterIrp->Flags;
    if ( !v8 || !Irp->RequestorMode )
    {
      P = *(PVOID *)&MasterIrp->Flags;
      v9 = 0LL;
      v14 = 0LL;
      if ( !v8 )
      {
        v7 = CiLookupTask(
               &MasterIrp->AssociatedIrp,
               &MasterIrp->Tail.CompletionKey + 4,
               &v14,
               BYTE3(MasterIrp->MdlAddress),
               &v14);
        if ( v7 < 0 )
          goto LABEL_10;
        v9 = v14;
      }
      KeEnterCriticalRegion();
      if ( v8 )
      {
        CiTaskIndexReference((__int64)v8);
      }
      else
      {
        v7 = CiTaskIndexCreate(v9, &P);
        if ( v7 < 0 )
          goto LABEL_22;
        v8 = (volatile signed __int64 *)P;
      }
      v10 = *(_QWORD *)(a2 + 48);
      if ( !_InterlockedCompareExchange64(v8 + 1, v10, 0LL) )
      {
        v11 = P;
        v7 = 0;
        *(_QWORD *)(v10 + 24) = P;
        v3 = v11[26];
LABEL_9:
        KeLeaveCriticalRegion();
        goto LABEL_10;
      }
      v7 = -1073740008;
LABEL_22:
      if ( P )
        CiTaskIndexDereference((volatile signed __int64 *)P);
      goto LABEL_9;
    }
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x10u,
        (__int64)&WPP_3ae21bf15ad5db9e83e4442bc8a22929_Traceguids);
  }
  else if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xFu,
      (__int64)&WPP_3ae21bf15ad5db9e83e4442bc8a22929_Traceguids,
      v2,
      280);
  }
LABEL_10:
  Irp->IoStatus.Information = v3;
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v7;
}
