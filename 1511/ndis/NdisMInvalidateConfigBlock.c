/*
 * XREFs of NdisMInvalidateConfigBlock @ 0x1C0063AB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall NdisMInvalidateConfigBlock(__int64 a1, __int16 a2, _MDL *a3)
{
  _IRP *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  _IRP::<unnamed_type_AssociatedIrp> v9; // rax
  UCHAR Irql; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_q(0x79u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, a1);
  IoAcquireCancelSpinLock(&Irql);
  v7 = *(_QWORD *)(a1 + 4688);
  if ( v7 )
  {
    v6 = *(_IRP **)(a1 + 4688);
    _InterlockedExchange64((volatile __int64 *)(v7 + 104), 0LL);
    *(_QWORD *)(a1 + 4688) = 0LL;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 4680);
    if ( v8 )
    {
      *(_QWORD *)(a1 + 4680) = (unsigned __int64)a3 | v8;
      if ( *(_WORD *)(a1 + 4736) != a2 )
        *(_WORD *)(a1 + 4736) = -1;
    }
    else
    {
      *(_QWORD *)(a1 + 4680) = a3;
      *(_WORD *)(a1 + 4736) = a2;
    }
  }
  IoReleaseCancelSpinLock(Irql);
  if ( v6 )
  {
    v9.MasterIrp = (_IRP *)v6->AssociatedIrp;
    v9.MasterIrp->Type = a2;
    v9.MasterIrp->MdlAddress = a3;
    v6->IoStatus.Status = 0;
    v6->IoStatus.Information = 16LL;
    IofCompleteRequest(v6, 0);
  }
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_q(0x7Au, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, a1);
}
