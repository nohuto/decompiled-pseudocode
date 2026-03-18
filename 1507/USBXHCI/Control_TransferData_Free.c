/*
 * XREFs of Control_TransferData_Free @ 0x1C0021ECC
 * Callers:
 *     Control_Transfer_Complete @ 0x1C0021F9C (Control_Transfer_Complete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     TR_ReleaseDoubleBuffer @ 0x1C0020958 (TR_ReleaseDoubleBuffer.c)
 */

void __fastcall Control_TransferData_Free(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v5; // edx
  __int64 v6; // rbx
  KIRQL v7; // di
  struct _MDL *v8; // rcx

  v2 = *(_QWORD *)(a2 + 32);
  v5 = *(_DWORD *)(a2 + 48) - 2;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      if ( *(_QWORD *)(a2 + 80) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 88LL) + 80LL);
        v7 = KfRaiseIrql(2u);
        (*(void (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)(v6 + 8) + 96LL))(
          v6,
          *(_QWORD *)(a2 + 80),
          (*(_BYTE *)(v2 + 32) & 1) == 0);
        KeLowerIrql(v7);
        *(_QWORD *)(a2 + 80) = 0LL;
      }
      v8 = *(struct _MDL **)(a2 + 56);
      if ( v8 && v8 != *(struct _MDL **)(v2 + 48) && v8 != *(struct _MDL **)(a1 + 112) )
      {
        IoFreeMdl(v8);
        *(_QWORD *)(a2 + 56) = 0LL;
      }
    }
  }
  else
  {
    TR_ReleaseDoubleBuffer(a1, *(_QWORD **)(a2 + 72));
    *(_QWORD *)(a2 + 72) = 0LL;
  }
  *(_BYTE *)(a2 + 16) = 0;
}
