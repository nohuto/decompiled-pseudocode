/*
 * XREFs of ?CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z @ 0x180170C38
 * Callers:
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180171BA0 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x1800063B8 (-RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x18000D954 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 */

void __fastcall CManipulationContext::CleanStaleFork(
        CManipulationContext *this,
        unsigned int a2,
        const GUID *a3,
        const GUID *a4)
{
  struct CInteraction *v4; // rbx
  struct CInteraction *v7; // rdi
  __int64 v9; // rdx
  CManipulationContext *v10; // [rsp+30h] [rbp-49h] BYREF
  struct CInteraction *v11; // [rsp+38h] [rbp-41h] BYREF
  struct CInteraction *v12; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  CManipulationContext **v14; // [rsp+70h] [rbp-9h]
  int v15; // [rsp+78h] [rbp-1h]
  int v16; // [rsp+7Ch] [rbp+3h]
  struct CInteraction **v17; // [rsp+80h] [rbp+7h]
  int v18; // [rsp+88h] [rbp+Fh]
  int v19; // [rsp+8Ch] [rbp+13h]
  struct CInteraction **v20; // [rsp+90h] [rbp+17h]
  int v21; // [rsp+98h] [rbp+1Fh]
  int v22; // [rsp+9Ch] [rbp+23h]
  char *v23; // [rsp+A0h] [rbp+27h]
  int v24; // [rsp+A8h] [rbp+2Fh]
  int v25; // [rsp+ACh] [rbp+33h]

  if ( a3 )
  {
    v4 = (struct CInteraction *)a3;
    do
    {
      if ( (*((_BYTE *)v4 + 256) & 0x40) != 0 )
        break;
      v7 = (struct CInteraction *)*((_QWORD *)v4 + 34);
      if ( (unsigned int)pRelatedActivityId > 4
        && (qword_1801EAA90 & 2) != 0
        && (qword_1801EAA98 & 2) == qword_1801EAA98 )
      {
        v16 = 0;
        v19 = 0;
        v22 = 0;
        v25 = 0;
        v14 = &v10;
        v17 = &v11;
        v20 = &v12;
        v23 = (char *)v4 + 4 * a2 + 308;
        v10 = this;
        v15 = 8;
        v11 = v4;
        v18 = 8;
        v12 = v7;
        v21 = 8;
        v24 = 4;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C6245, a3, a4, 6u, &pData);
      }
      (*(void (__fastcall **)(struct CInteraction *, _QWORD))(*(_QWORD *)v4 + 56LL))(v4, a2);
      --*((_DWORD *)v4 + a2 + 77);
      if ( !(unsigned int)CInteraction::GetTotalNumContacts(v4) )
        CManipulationContext::RemoveInteractionLeafFromTree(v4, v9, a3, a4);
      *((_BYTE *)v4 + 256) &= ~0x80u;
      v4 = v7;
    }
    while ( v7 );
  }
}
