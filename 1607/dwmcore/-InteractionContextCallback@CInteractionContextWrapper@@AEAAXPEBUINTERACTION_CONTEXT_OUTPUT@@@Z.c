/*
 * XREFs of ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x180110170
 * Callers:
 *     ?s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1800BCFA0 (-s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18016FB44 (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x1801706A4 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 */

void __fastcall CInteractionContextWrapper::InteractionContextCallback(
        CInteractionContextWrapper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  __int64 v6; // rcx
  int v7; // eax
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  CInteractionContextWrapper *v10; // [rsp+38h] [rbp-C8h] BYREF
  CInteractionContextWrapper *v11; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  CInteractionContextWrapper **v13; // [rsp+70h] [rbp-90h]
  __int64 v14; // [rsp+78h] [rbp-88h]
  char *v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+88h] [rbp-78h]
  char *v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-68h]
  CInteractionContextWrapper **v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  char *v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  char *v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  char *v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  int *v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  int *v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]

  *((_BYTE *)this + 88) |= 1u;
  CInteractionContextWrapper::_UpdateInteractionOutput(this, a2, (CInteractionContextWrapper *)((char *)this + 32));
  if ( (*(unsigned __int8 (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 80LL))(this) )
    CInteractionContextWrapper::AddBufferedOutput(
      this,
      *((_DWORD *)this + 55),
      *((_DWORD *)this + 56),
      *((_QWORD *)this + 29),
      a2);
  if ( *(_DWORD *)a2 != 1 )
    goto LABEL_8;
  *((_BYTE *)this + 92) = 1;
  *((_BYTE *)this + 156) = 1;
  if ( (unsigned int)pRelatedActivityId <= 4 )
    return;
  v6 = qword_1801EAA98;
  if ( (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v10 = this;
    v13 = &v10;
    v15 = (char *)a2 + 20;
    v17 = (char *)a2 + 24;
    v19 = (CInteractionContextWrapper **)((char *)a2 + 28);
    v21 = (char *)a2 + 40;
    v23 = (char *)a2 + 44;
    v25 = (char *)a2 + 48;
    v8 = *((_DWORD *)a2 + 19);
    v27 = &v8;
    v9 = *((_DWORD *)this + 13);
    v29 = &v9;
    v14 = 8LL;
    v16 = 4LL;
    v18 = 4LL;
    v20 = 4LL;
    v22 = 4LL;
    v24 = 4LL;
    v26 = 4LL;
    v28 = 4LL;
    v30 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C5E4F, v4, v5, 0xBu, &pData);
LABEL_8:
    v6 = qword_1801EAA98;
  }
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (v6 & 2) == v6 )
  {
    v11 = this;
    v13 = &v11;
    v9 = *(_DWORD *)a2;
    v15 = (char *)&v9;
    v8 = *((_DWORD *)a2 + 1);
    v17 = (char *)&v8;
    v7 = *((_BYTE *)this + 88) & 1;
    v14 = 8LL;
    LODWORD(v10) = v7;
    v19 = &v10;
    v16 = 4LL;
    v18 = 4LL;
    v20 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C5DC9, v4, v5, 6u, &pData);
  }
}
