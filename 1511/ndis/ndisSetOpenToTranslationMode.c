/*
 * XREFs of ndisSetOpenToTranslationMode @ 0x1C00ED890
 * Callers:
 *     ndisMOpenAdapter @ 0x1C00E340C (ndisMOpenAdapter.c)
 * Callees:
 *     NdisInitializeEvent @ 0x1C001FEF0 (NdisInitializeEvent.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall ndisSetOpenToTranslationMode(__int64 a1)
{
  __int64 v1; // rdi
  void *v3; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(0x86u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
  *(_DWORD *)(a1 + 224) |= 0x10000000u;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 720));
  *(_DWORD *)(a1 + 736) = 2;
  NdisInitializeEvent((PNDIS_EVENT)(a1 + 744));
  *(_DWORD *)(a1 + 740) = 0;
  if ( *(_DWORD *)(v1 + 464) != 3 || (v3 = ndisMWanSend, (*(_DWORD *)(v1 + 120) & 0x20000) != 0) )
    v3 = ndisSendWithPause;
  *(_QWORD *)(a1 + 96) = v3;
  *(_QWORD *)(a1 + 168) = ndisSendPacketsWithPause;
  *(_QWORD *)(a1 + 112) = ndisSendCompleteWithPause;
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(0x87u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
}
