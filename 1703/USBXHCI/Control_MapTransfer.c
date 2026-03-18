/*
 * XREFs of Control_MapTransfer @ 0x1C000358C
 * Callers:
 *     Control_WdfEvtIoDefault @ 0x1C000EB00 (Control_WdfEvtIoDefault.c)
 *     Control_EP_StartMapping @ 0x1C0025C70 (Control_EP_StartMapping.c)
 * Callees:
 *     TR_AcquireDoubleBuffer @ 0x1C0001A58 (TR_AcquireDoubleBuffer.c)
 *     TR_IsUrbUsingChainedMdl @ 0x1C0001BA0 (TR_IsUrbUsingChainedMdl.c)
 *     Control_Transfer_Map @ 0x1C0003648 (Control_Transfer_Map.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C0003794 (Control_Transfer_CompleteCancelable.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C00038F0 (Control_Transfer_ValidateBuffer.c)
 *     Control_Transfer_ConfigureBuffer @ 0x1C00264A8 (Control_Transfer_ConfigureBuffer.c)
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

void __fastcall Control_MapTransfer(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // edx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // edi
  char v7; // di
  unsigned int v8; // edx
  __int64 *v9; // rax
  bool v10; // zf
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
        || v8 > *(_DWORD *)(a1 + 24)
        || (v9 = TR_AcquireDoubleBuffer(a1), *(_QWORD *)(v1 + 72) = v9, v10 = v9 == 0LL, v5 = 2, v10) )
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
  v6 = Control_Transfer_ConfigureBuffer(a1);
  if ( v6 < 0 || (v6 = Control_Transfer_ValidateBuffer(a1), v6 < 0) || (v6 = Control_Transfer_Map(a1), v6 < 0) )
  {
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    *(_DWORD *)(*(_QWORD *)(a1 + 296) + 104LL) = v6;
    if ( *(_DWORD *)(a1 + 100) == 3 )
    {
      v7 = 0;
      *(_DWORD *)(a1 + 100) = 2;
      Control_Transfer_CompleteCancelable(a1);
    }
    else
    {
      *(_DWORD *)(a1 + 100) = 0;
      v7 = 1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    if ( v7 )
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
