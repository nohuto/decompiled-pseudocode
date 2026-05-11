/*
 * XREFs of PropertySetDbLevel @ 0x1C0019800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007440 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C0014720 (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C001BA00 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertySetDbLevel(PIRP Irp, __int64 a2, int *a3)
{
  __int64 v3; // r15
  int v5; // ebp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  PKSFILTER FilterFromIrp; // rax
  int v10; // r9d
  __int64 v11; // r8
  __int64 v12; // rdx
  PIRP *Context; // rcx
  _DWORD *v15; // rdi
  int v16; // ebx
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(unsigned int *)(a2 + 32);
  v5 = *a3;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  v10 = -1073741811;
  if ( !FilterFromIrp )
    return (unsigned int)v10;
  v11 = *(unsigned int *)(a2 + 24);
  v12 = (__int64)FilterFromIrp->Descriptor->NodeDescriptors + 152 * v11;
  Context = (PIRP *)FilterFromIrp->Context;
  if ( *((_DWORD *)&Context[2][2].Overlay.AllocationSize + 2) == 1 )
  {
    if ( (unsigned int)v3 < *(_DWORD *)(v12 + 92) )
    {
      v15 = (_DWORD *)(32 * v3 + *(_QWORD *)(v12 + 128));
      v16 = v15[7];
      if ( v5 <= v16 )
      {
        v16 = v5;
        if ( v5 < v15[6] )
          v16 = v15[6];
      }
      *a3 = v16;
      v10 = (*(__int64 (__fastcall **)(PIRP *, __int64, _QWORD, int *, _DWORD, int, unsigned int *))(v12 + 136))(
              Context,
              v12,
              CurrentStackLocation->Parameters.Read.Length,
              a3,
              v3,
              1,
              &v17);
      if ( v10 >= 0 )
      {
        v15[3] = v16;
        Irp->IoStatus.Information = v17;
      }
    }
    return (unsigned int)v10;
  }
  if ( DeviceRequestPowerUp(Context, v12, v11, 3221225485LL) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}
