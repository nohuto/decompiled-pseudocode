/*
 * XREFs of Control_MapTransfer @ 0x1C00214A8
 * Callers:
 *     Control_EP_StartMapping @ 0x1C00211F0 (Control_EP_StartMapping.c)
 *     Control_WdfEvtIoDefault @ 0x1C00232E0 (Control_WdfEvtIoDefault.c)
 * Callees:
 *     TR_AcquireDoubleBuffer @ 0x1C001FED8 (TR_AcquireDoubleBuffer.c)
 *     TR_IsUrbUsingChainedMdl @ 0x1C00208A0 (TR_IsUrbUsingChainedMdl.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C0022180 (Control_Transfer_CompleteCancelable.c)
 *     Control_Transfer_ConfigureBuffer @ 0x1C00222C0 (Control_Transfer_ConfigureBuffer.c)
 *     Control_Transfer_Map @ 0x1C00224CC (Control_Transfer_Map.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C0022CE4 (Control_Transfer_ValidateBuffer.c)
 *     ESM_AddEvent @ 0x1C00383C8 (ESM_AddEvent.c)
 */

void __fastcall Control_MapTransfer(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // edx
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edx
  __int64 *v7; // rax
  bool v8; // zf
  int v9; // edi
  char v10; // di
  __int64 v11; // rdx
  __int64 v12; // rcx

  v1 = *(_QWORD *)(a1 + 296);
  v3 = *(_DWORD *)(v1 + 88);
  v4 = *(_QWORD *)(v1 + 32);
  if ( v3 )
  {
    if ( !*(_BYTE *)(a1 + 272) || v3 > 8 || (*(_DWORD *)(v4 + 32) & 1) != 0 )
    {
      if ( TR_IsUrbUsingChainedMdl(v4)
        || v6 > *(_DWORD *)(a1 + 24)
        || (v7 = TR_AcquireDoubleBuffer(a1), *(_QWORD *)(v1 + 72) = v7, v8 = v7 == 0LL, v5 = 2, v8) )
      {
        v5 = 3;
      }
    }
    else
    {
      v5 = 1;
    }
  }
  else
  {
    v5 = 0;
  }
  *(_DWORD *)(v1 + 48) = v5;
  v9 = Control_Transfer_ConfigureBuffer(a1);
  if ( v9 < 0 || (v9 = Control_Transfer_ValidateBuffer(a1), v9 < 0) || (v9 = Control_Transfer_Map(a1), v9 < 0) )
  {
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    *(_DWORD *)(*(_QWORD *)(a1 + 296) + 104LL) = v9;
    if ( *(_DWORD *)(a1 + 100) == 3 )
    {
      v10 = 0;
      *(_DWORD *)(a1 + 100) = 2;
      Control_Transfer_CompleteCancelable(a1);
    }
    else
    {
      *(_DWORD *)(a1 + 100) = 0;
      v10 = 1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    if ( v10 )
    {
      v11 = *(_QWORD *)(a1 + 56);
      if ( !*(_BYTE *)(v11 + 37)
        || (v12 = *(_QWORD *)(v11 + 136),
            _InterlockedIncrement((volatile signed __int32 *)(v12 + 20)) == *(_DWORD *)(v12 + 8)) )
      {
        ESM_AddEvent((PVOID)(v11 + 272));
      }
    }
  }
}
