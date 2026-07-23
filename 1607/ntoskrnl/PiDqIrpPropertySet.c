/*
 * XREFs of PiDqIrpPropertySet @ 0x140631994
 * Callers:
 *     PiDqDispatch @ 0x14048B6C4 (PiDqDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiAuDoesClientHaveAccess @ 0x1404D908C (PiAuDoesClientHaveAccess.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     PiDqGetPnpObjectType @ 0x1404E557C (PiDqGetPnpObjectType.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404E769C (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlSetObjectProperty @ 0x140510FE4 (PiPnpRtlSetObjectProperty.c)
 *     _PnpSetGenericStoreProperty @ 0x140512430 (_PnpSetGenericStoreProperty.c)
 *     PiDqOpenObjectRegKey @ 0x140631DB0 (PiDqOpenObjectRegKey.c)
 */

__int64 __fastcall PiDqIrpPropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v3; // r15
  char v4; // si
  struct _IRP *MasterIrp; // rcx
  NTSTATUS v6; // edi
  int v7; // r10d
  int PnpObjectType; // r12d
  unsigned int v9; // ecx
  _DWORD *v10; // rdx
  __int64 v11; // r8
  unsigned int i; // r15d
  __int64 v13; // rsi
  int v14; // eax
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
    goto LABEL_33;
  v6 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v18);
  if ( v6 < 0 )
    goto LABEL_34;
  NdrMesTypeDecode3(v18, "TP 3\a", &off_140257550, &off_1402F32A0, 2, &P);
  if ( P
    && *((_QWORD *)P + 1)
    && *((_QWORD *)P + 3)
    && *((_DWORD *)P + 4)
    && (PnpObjectType = PiDqGetPnpObjectType(*(_DWORD *)P)) != 0 )
  {
    v6 = PiDqOpenObjectRegKey(0, v7, PnpObjectType, 7, 0, 0LL, (__int64)&Handle);
    if ( v6 < 0 )
      goto LABEL_34;
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
      goto LABEL_18;
    if ( !v4 )
      goto LABEL_22;
    if ( !PiAuDoesClientHaveAccess(0x100u) )
    {
LABEL_18:
      v6 = -1073741790;
      goto LABEL_34;
    }
    v6 = PiDqOpenObjectRegKey(1, *((_QWORD *)P + 1), PnpObjectType, 7, 1, 0LL, (__int64)&v17);
    if ( v6 >= 0 )
    {
LABEL_22:
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
                   *(__int64 *)&PiPnpRtlCtx,
                   (__int64)v17,
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
                   *(__int64 *)&PiPnpRtlCtx,
                   *((const WCHAR **)P + 1),
                   PnpObjectType,
                   (__int64)Handle,
                   *(_QWORD *)(v13 + 24),
                   v13,
                   *(_DWORD *)(v13 + 32),
                   *(unsigned int **)(v13 + 40),
                   v14,
                   0);
          }
          if ( v6 == -1073741275 )
            v6 = *(_DWORD *)(v13 + 32) != 0 ? 0xC0000225 : 0;
          if ( v6 < 0 )
            break;
        }
      }
    }
  }
  else
  {
LABEL_33:
    v6 = -1073741811;
  }
LABEL_34:
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
