/*
 * XREFs of PiDqIrpPropertySet @ 0x1405B2FC8
 * Callers:
 *     PiDqDispatch @ 0x140441804 (PiDqDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiDqOpenObjectRegKey @ 0x140415CA0 (PiDqOpenObjectRegKey.c)
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     PiDqGetPnpObjectType @ 0x14043FA70 (PiDqGetPnpObjectType.c)
 *     PiAuDoesClientHaveAccess @ 0x14045A8FC (PiAuDoesClientHaveAccess.c)
 *     PiPnpRtlSetObjectProperty @ 0x1404D83F4 (PiPnpRtlSetObjectProperty.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DFCE4 (PiPnpRtlObjectEventWorker.c)
 *     _PnpSetGenericStoreProperty @ 0x140557FEC (_PnpSetGenericStoreProperty.c)
 */

__int64 __fastcall PiDqIrpPropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v3; // si
  char v4; // r15
  struct _IRP *MasterIrp; // rcx
  NTSTATUS v6; // edi
  int v7; // r10d
  unsigned int PnpObjectType; // r12d
  unsigned int v9; // ecx
  _DWORD *v10; // rdx
  __int64 v11; // r8
  unsigned int i; // r15d
  __int64 v13; // rsi
  unsigned int v14; // eax
  HANDLE Handle; // [rsp+50h] [rbp-78h] BYREF
  HANDLE v17; // [rsp+58h] [rbp-70h] BYREF
  __int64 v18; // [rsp+60h] [rbp-68h] BYREF
  PVOID v19; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v20[11]; // [rsp+70h] [rbp-58h] BYREF
  PVOID P; // [rsp+E8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v18 = 0LL;
  Handle = 0LL;
  v17 = 0LL;
  P = 0LL;
  v3 = 0;
  v4 = 0;
  v19 = 0LL;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_43;
  v6 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v18);
  if ( v6 < 0 )
    goto LABEL_27;
  NdrMesTypeDecode3(v18, "TP 3\a", &off_140290578, &off_14031E900, 2, &P);
  if ( P
    && *((_QWORD *)P + 1)
    && *((_QWORD *)P + 3)
    && *((_DWORD *)P + 4)
    && (PnpObjectType = PiDqGetPnpObjectType(*(_DWORD *)P)) != 0 )
  {
    v6 = PiDqOpenObjectRegKey(0, v7, PnpObjectType, 7, 0, 0LL, &Handle);
    if ( v6 >= 0 )
    {
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
      {
        v6 = -1073741790;
      }
      else if ( !v4 || (v6 = PiDqOpenObjectRegKey(1, *((_QWORD *)P + 1), PnpObjectType, 7, 1, 0LL, &v17), v6 >= 0) )
      {
        v6 = PiPnpRtlBeginOperation((__int64 **)&v19);
        if ( v6 >= 0 )
        {
          for ( i = 0; i < *((_DWORD *)P + 4); ++i )
          {
            v13 = *((_QWORD *)P + 3) + 48LL * i;
            v14 = *(_DWORD *)(v13 + 36);
            if ( *(_DWORD *)(v13 + 20) )
            {
              v6 = PnpSetGenericStoreProperty(
                     *(__int64 **)&PiPnpRtlCtx,
                     (char *)v17,
                     *(const wchar_t **)(v13 + 24),
                     v13,
                     *(_DWORD *)(v13 + 32),
                     *(_QWORD *)(v13 + 40),
                     v14);
              if ( v6 >= 0 )
              {
                v20[0] = 0LL;
                v20[1] = *(_QWORD *)(v13 + 24);
                v20[2] = v13;
                PiPnpRtlObjectEventWorker(*((wchar_t **)P + 1), PnpObjectType, 4, (__int64)v20, 1u);
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
                     *(_QWORD *)(v13 + 40),
                     v14);
            }
            if ( v6 == -1073741275 )
              v6 = *(_DWORD *)(v13 + 32) != 0 ? 0xC0000225 : 0;
            if ( v6 < 0 )
              break;
          }
        }
      }
    }
  }
  else
  {
LABEL_43:
    v6 = -1073741811;
  }
LABEL_27:
  if ( Handle )
    ZwClose(Handle);
  if ( v17 )
    ZwClose(v17);
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v18 )
    MesHandleFree();
  if ( v19 )
    PiPnpRtlEndOperation((char *)v19);
  Irp->IoStatus.Status = v6;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v6;
}
