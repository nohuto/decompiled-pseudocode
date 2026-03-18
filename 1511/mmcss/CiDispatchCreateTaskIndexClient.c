/*
 * XREFs of CiDispatchCreateTaskIndexClient @ 0x1C000A190
 * Callers:
 *     <none>
 * Callees:
 *     CiTaskIndexReference @ 0x1C0001350 (CiTaskIndexReference.c)
 *     CiTaskIndexDereference @ 0x1C0001AF0 (CiTaskIndexDereference.c)
 *     WPP_SF_ @ 0x1C0003E00 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x1C000408C (WPP_SF_dd.c)
 *     CiTaskIndexCreate @ 0x1C000A2A0 (CiTaskIndexCreate.c)
 *     CiLookupTask @ 0x1C000AB40 (CiLookupTask.c)
 */

__int64 __fastcall CiDispatchCreateTaskIndexClient(PIRP Irp, __int64 a2, __int64 a3)
{
  int v3; // r9d
  unsigned int v4; // esi
  struct _IRP *MasterIrp; // rax
  NTSTATUS v8; // ebx
  volatile signed __int64 *v9; // rdi
  __int64 v10; // rbx
  signed __int64 v11; // rcx
  _DWORD *v12; // rax
  PVOID P; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a2 + 32);
  v4 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v8 = -1073741811;
  if ( v3 == 280 )
  {
    v9 = *(volatile signed __int64 **)&MasterIrp->Flags;
    if ( v9 && Irp->RequestorMode )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x10u,
          (__int64)&WPP_3ae21bf15ad5db9e83e4442bc8a22929_Traceguids);
    }
    else
    {
      P = *(PVOID *)&MasterIrp->Flags;
      v10 = 0LL;
      v15 = 0LL;
      if ( v9 )
        goto LABEL_7;
      v8 = CiLookupTask(
             &MasterIrp->AssociatedIrp,
             &MasterIrp->Tail.CompletionKey + 4,
             &v15,
             BYTE3(MasterIrp->MdlAddress),
             &v15);
      if ( v8 >= 0 )
      {
        v10 = v15;
LABEL_7:
        KeEnterCriticalRegion();
        if ( v9 )
        {
          CiTaskIndexReference((__int64)v9);
        }
        else
        {
          v8 = CiTaskIndexCreate(v10, &P);
          if ( v8 < 0 )
            goto LABEL_22;
          v9 = (volatile signed __int64 *)P;
        }
        v11 = *(_QWORD *)(a2 + 48);
        if ( !_InterlockedCompareExchange64(v9 + 1, v11, 0LL) )
        {
          v12 = P;
          v8 = 0;
          *(_QWORD *)(v11 + 24) = P;
          v4 = v12[26];
LABEL_11:
          KeLeaveCriticalRegion();
          goto LABEL_12;
        }
        v8 = -1073740008;
LABEL_22:
        if ( P )
          CiTaskIndexDereference((volatile signed __int64 *)P);
        goto LABEL_11;
      }
    }
  }
  else if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_dd((__int64)WPP_GLOBAL_Control->AttachedDevice, 0xFu, a3, v3, 280);
  }
LABEL_12:
  Irp->IoStatus.Information = v4;
  Irp->IoStatus.Status = v8;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v8;
}
