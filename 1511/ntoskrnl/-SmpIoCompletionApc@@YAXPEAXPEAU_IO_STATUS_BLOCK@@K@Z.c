/*
 * XREFs of ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14020A6AC
 * Callers:
 *     <none>
 * Callees:
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14010BE48 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 */

void __fastcall SmpIoCompletionApc(char *a1, struct _IO_STATUS_BLOCK *a2)
{
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK *v3; // r9
  _DWORD *Pointer; // rcx

  Status = a2->Status;
  v3 = a2 - 2;
  if ( a2->Status < 0 )
  {
    HIDWORD(v3[1].Information) |= 1u;
    Pointer = v3[1].Pointer;
    if ( Pointer )
      Pointer[1] = Status;
    else
      LODWORD(v3->Information) = Status;
  }
  if ( v3[1].Pointer )
    _InterlockedDecrement((volatile signed __int32 *)a1 + 1142);
  if ( (v3[1].Information & 0x400000000LL) != 0 )
  {
    KeSetEvent((PRKEVENT)(a1 + 4640), 1, 0);
  }
  else
  {
    SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue((__int64)a1, (__int64)v3, 1);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&unk_1403027C8 + 22 * (*((_DWORD *)a1 + 1120) & 0x1F));
  }
}
