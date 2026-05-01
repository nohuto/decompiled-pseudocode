/*
 * XREFs of ?RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x1800043E0
 * Callers:
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800041D4 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpSystemDereferenceHostWithPsm(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  __int64 v3; // rdi
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  __int64 v7; // rax
  __int64 v8; // [rsp+30h] [rbp-78h] BYREF
  const struct _TlgProvider_t *v9; // [rsp+38h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-48h]
  int v12; // [rsp+68h] [rbp-40h]
  int v13; // [rsp+6Ch] [rbp-3Ch]
  const struct _TlgProvider_t **v14; // [rsp+70h] [rbp-38h]
  int v15; // [rsp+78h] [rbp-30h]
  int v16; // [rsp+7Ch] [rbp-2Ch]

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
  {
    v7 = *((_QWORD *)v4 + 3);
    v13 = 0;
    v16 = 0;
    v8 = v7;
    v11 = &v8;
    v14 = &v9;
    v12 = 8;
    v9 = v4;
    v15 = 8;
    TlgWrite(v4, &unk_180044215, v5, v6, 4u, &pData);
  }
  (*(void (__fastcall **)(void *))(v3 + 224))(a2);
}
