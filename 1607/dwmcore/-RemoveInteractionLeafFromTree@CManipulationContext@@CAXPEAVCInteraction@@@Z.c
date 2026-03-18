/*
 * XREFs of ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x1800063B8
 * Callers:
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x180008B0C (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z.c)
 *     ?CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z @ 0x180170C38 (-CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 */

void __fastcall CManipulationContext::RemoveInteractionLeafFromTree(
        struct CInteraction *a1,
        __int64 a2,
        const GUID *a3,
        const GUID *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct CInteraction *v8; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  struct CInteraction **v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v12 = 0;
    v10 = &v8;
    v8 = a1;
    v11 = 8;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C64A3, a3, a4, 3u, &pData);
  }
  (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)a1 + 48LL))(a1);
  v5 = *((_QWORD *)a1 + 35);
  if ( v5 )
  {
    if ( *(struct CInteraction **)(v5 + 304) == a1 )
      *(_QWORD *)(v5 + 304) = *((_QWORD *)a1 + 36);
    *((_QWORD *)a1 + 35) = 0LL;
  }
  v6 = *((_QWORD *)a1 + 37);
  if ( v6 )
  {
    *(_QWORD *)(v6 + 288) = *((_QWORD *)a1 + 36);
    *((_QWORD *)a1 + 37) = 0LL;
  }
  v7 = *((_QWORD *)a1 + 36);
  if ( v7 )
  {
    *(_QWORD *)(v7 + 296) = *((_QWORD *)a1 + 37);
    *((_QWORD *)a1 + 36) = 0LL;
  }
  *((_QWORD *)a1 + 34) = 0LL;
}
