/*
 * XREFs of PiDqIrpPropertySet @ 0x14050DD30
 * Callers:
 *     PiDqDispatch @ 0x14045DCD4 (PiDqDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiPnpRtlBeginOperation @ 0x140440904 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140440BC0 (PiPnpRtlEndOperation.c)
 *     PiDqGetPnpObjectType @ 0x14044161C (PiDqGetPnpObjectType.c)
 *     PiPnpRtlObjectEventWorker @ 0x14045A4D8 (PiPnpRtlObjectEventWorker.c)
 *     _PnpSetGenericStoreProperty @ 0x14045CC44 (_PnpSetGenericStoreProperty.c)
 *     PiAuDoesClientHaveAccess @ 0x14045D728 (PiAuDoesClientHaveAccess.c)
 *     PiPnpRtlSetObjectProperty @ 0x1404E5D38 (PiPnpRtlSetObjectProperty.c)
 *     PiDqOpenObjectRegKey @ 0x140507EBC (PiDqOpenObjectRegKey.c)
 */

__int64 __fastcall PiDqIrpPropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v3; // r15
  char v4; // si
  struct _IRP *MasterIrp; // rcx
  NTSTATUS v6; // edi
  __int64 v7; // r10
  unsigned int PnpObjectType; // r12d
  unsigned int v9; // ecx
  _DWORD *v10; // rdx
  __int64 v11; // r8
  __int64 i; // r15
  __int64 v13; // rsi
  HANDLE Handle; // [rsp+50h] [rbp-78h] BYREF
  HANDLE v16; // [rsp+58h] [rbp-70h] BYREF
  __int64 v17; // [rsp+60h] [rbp-68h] BYREF
  PVOID v18; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v19[11]; // [rsp+70h] [rbp-58h] BYREF
  PVOID P; // [rsp+E8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v17 = 0LL;
  Handle = 0LL;
  v16 = 0LL;
  P = 0LL;
  v3 = 0;
  v4 = 0;
  v18 = 0LL;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_44;
  v6 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v17);
  if ( v6 < 0 )
    goto LABEL_27;
  NdrMesTypeDecode3(v17, "TP 3\a", &off_14023CE10, &off_1402CF8A0, 2, &P);
  if ( !P
    || !*((_QWORD *)P + 1)
    || !*((_QWORD *)P + 3)
    || !*((_DWORD *)P + 4)
    || (PnpObjectType = PiDqGetPnpObjectType(*(_DWORD *)P)) == 0 )
  {
LABEL_44:
    v6 = -1073741811;
    goto LABEL_27;
  }
  v6 = PiDqOpenObjectRegKey(0, v7, PnpObjectType, 7u, 0, 0LL, &Handle);
  if ( v6 < 0 )
    goto LABEL_27;
  v9 = *((_DWORD *)P + 4);
  if ( v9 )
  {
    v10 = (_DWORD *)(*((_QWORD *)P + 3) + 20LL);
    v11 = v9;
    do
    {
      if ( !*v10 )
        v3 = 1;
      if ( *v10 == 1 )
        v4 = 1;
      v10 += 12;
      --v11;
    }
    while ( v11 );
  }
  if ( v3 && !PiAuDoesClientHaveAccess(2u) )
    goto LABEL_38;
  if ( v4 )
  {
    if ( PiAuDoesClientHaveAccess(0x100u) )
    {
      v6 = PiDqOpenObjectRegKey(1, *((_QWORD *)P + 1), PnpObjectType, 7u, 1, 0LL, &v16);
      if ( v6 < 0 )
        goto LABEL_27;
      goto LABEL_19;
    }
LABEL_38:
    v6 = -1073741790;
    goto LABEL_27;
  }
LABEL_19:
  v6 = PiPnpRtlBeginOperation((__int64 **)&v18);
  if ( v6 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 4); i = (unsigned int)(i + 1) )
    {
      v13 = *((_QWORD *)P + 3) + 48 * i;
      if ( *(_DWORD *)(v13 + 20) )
      {
        v6 = PnpSetGenericStoreProperty(
               *(__int64 *)&PiPnpRtlCtx,
               (__int64)v16,
               *(_QWORD *)(v13 + 24),
               v13,
               *(_DWORD *)(v13 + 32));
        if ( v6 >= 0 )
        {
          v19[0] = 0LL;
          v19[1] = *(_QWORD *)(v13 + 24);
          v19[2] = v13;
          PiPnpRtlObjectEventWorker(*((wchar_t **)P + 1), PnpObjectType, 4, (__int64)v19, 1u);
        }
      }
      else
      {
        v6 = PiPnpRtlSetObjectProperty(
               (__int64)P,
               *((const WCHAR **)P + 1),
               PnpObjectType,
               (__int64)Handle,
               *(_QWORD *)(v13 + 24),
               v13,
               *(_DWORD *)(v13 + 32),
               *(unsigned int **)(v13 + 40),
               *(_DWORD *)(v13 + 36));
      }
      if ( v6 == -1073741275 )
        v6 = *(_DWORD *)(v13 + 32) != 0 ? 0xC0000225 : 0;
      if ( v6 < 0 )
        break;
    }
  }
LABEL_27:
  if ( Handle )
    ZwClose(Handle);
  if ( v16 )
    ZwClose(v16);
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v17 )
    MesHandleFree();
  if ( v18 )
    PiPnpRtlEndOperation((char *)v18);
  Irp->IoStatus.Status = v6;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v6;
}
