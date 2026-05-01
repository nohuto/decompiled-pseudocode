/*
 * XREFs of RmpSystemDereferenceHostWithPsm @ 0x180018598
 * Callers:
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018668 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpSystemDereferenceHostWithPsm(const struct _TlgProvider_t *a1, __int64 a2)
{
  __int64 v3; // rdi
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  __int64 v7; // rax
  __int64 v9; // [rsp+30h] [rbp-68h] BYREF
  const struct _TlgProvider_t *v10; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v12; // [rsp+60h] [rbp-38h]
  int v13; // [rsp+68h] [rbp-30h]
  int v14; // [rsp+6Ch] [rbp-2Ch]
  const struct _TlgProvider_t **v15; // [rsp+70h] [rbp-28h]
  int v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+7Ch] [rbp-1Ch]

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL);
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(a1, 1uLL) )
  {
    v7 = *((_QWORD *)v4 + 3);
    v14 = 0;
    v17 = 0;
    v9 = v7;
    v12 = &v9;
    v15 = &v10;
    v13 = 8;
    v10 = v4;
    v16 = 8;
    TlgWrite(v4, &unk_18004313C, v5, v6, 4u, &pData);
  }
  return (*(__int64 (__fastcall **)(__int64))(v3 + 232))(a2);
}
