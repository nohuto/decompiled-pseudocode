/*
 * XREFs of NdisBuildScatterGatherList @ 0x1C00471A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011DA0 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0011DDC (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0063588 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

NDIS_STATUS __stdcall NdisBuildScatterGatherList(
        NDIS_HANDLE NdisHandle,
        PNDIS_SCATTER_GATHER_LIST_PARAMETERS SGListParameters)
{
  NDIS_STATUS v3; // ebx
  NDIS_HANDLE v4; // r11
  _NDIS_PCW_DATA_BLOCK *v5; // rax
  unsigned int v6; // esi
  __int64 v7; // r14
  _MDL *Mdl; // r8
  char *v9; // rbp
  _SCATTER_GATHER_LIST *ScatterGatherListBuffer; // r9
  struct NDIS_PCW_CONTEXT v12; // [rsp+60h] [rbp-38h] BYREF

  v3 = -1073741670;
  v4 = NdisHandle;
  if ( !NdisHandle )
    return -1073741811;
  if ( *(_BYTE *)NdisHandle != 18 )
  {
    if ( *(_BYTE *)NdisHandle == 17 )
      goto LABEL_5;
    return -1073741811;
  }
  v4 = (NDIS_HANDLE)*((_QWORD *)NdisHandle + 2);
LABEL_5:
  v5 = (_NDIS_PCW_DATA_BLOCK *)*((_QWORD *)v4 + 5);
  v12.CurrentCpu = -1;
  v6 = *((_DWORD *)v4 + 20);
  v12.PcwBlock = v5;
  v12.DatapathEventsMask = *((_DWORD *)v4 + 12);
  v12.DatapathCyclesMask = v6;
  if ( (v12.DatapathEventsMask & 0x400) != 0 )
  {
    ndisPcwAddEvent(&v12, 0xAuLL, 1uLL);
    LOWORD(v6) = v12.DatapathCyclesMask;
  }
  if ( (v6 & 0x400) != 0 )
  {
    ndisPcwStartCycleCounter(&v12);
    LOWORD(v6) = v12.DatapathCyclesMask;
  }
  v7 = *((_QWORD *)v4 + 63);
  if ( v7 )
  {
    Mdl = SGListParameters->Mdl;
    if ( Mdl )
    {
      v9 = (char *)Mdl->StartVa + Mdl->ByteOffset;
      ScatterGatherListBuffer = SGListParameters->ScatterGatherListBuffer;
      if ( ScatterGatherListBuffer )
      {
        v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, void *, _SCATTER_GATHER_LIST *, void *), void *, _BYTE, _SCATTER_GATHER_LIST *, unsigned int))(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 112LL))(
               *(_QWORD *)(v7 + 24),
               *((_QWORD *)v4 + 485),
               Mdl,
               v9,
               SGListParameters->Length,
               SGListParameters->ProcessSGListHandler,
               SGListParameters->Context,
               SGListParameters->Flags & 1,
               ScatterGatherListBuffer,
               SGListParameters->ScatterGatherListBufferSize);
        if ( v3 == -1073741789 )
        {
          v3 = -1073676266;
          if ( (*(int (__fastcall **)(_QWORD, _MDL *, char *, _QWORD, unsigned int *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL)
                                                                                             + 104LL))(
                 *(_QWORD *)(v7 + 24),
                 SGListParameters->Mdl,
                 v9,
                 SGListParameters->Length,
                 &SGListParameters->ScatterGatherListBufferSizeNeeded,
                 0LL) < 0 )
            v3 = -1073741670;
        }
      }
    }
    else
    {
      v3 = -1073741811;
    }
  }
  else
  {
    SGListParameters->ProcessSGListHandler(
      (_DEVICE_OBJECT *)*((_QWORD *)v4 + 485),
      0LL,
      SGListParameters->ScatterGatherListBuffer,
      SGListParameters->Context);
    v3 = 0;
  }
  if ( (v6 & 0x400) != 0 )
    ndisPcwEndCycleCounter(&v12);
  return v3;
}
