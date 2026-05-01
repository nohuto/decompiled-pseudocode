/*
 * XREFs of RmgrSrv_RmRegisterResource @ 0x18001B6E0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmgrSrv_RmRegisterResource(
        const struct _TlgProvider_t *a1,
        unsigned int a2,
        unsigned int a3,
        const GUID *a4)
{
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  int v8; // eax
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  int v13; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-35h] BYREF
  int v15; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v17; // [rsp+60h] [rbp-9h]
  __int64 v18; // [rsp+68h] [rbp-1h]
  int *v19; // [rsp+70h] [rbp+7h]
  __int64 v20; // [rsp+78h] [rbp+Fh]
  unsigned int *v21; // [rsp+80h] [rbp+17h]
  __int64 v22; // [rsp+88h] [rbp+1Fh]
  unsigned int v23; // [rsp+E8h] [rbp+7Fh] BYREF

  v23 = (unsigned int)a4;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 2uLL) )
  {
    v14 = a2;
    v17 = (int *)&v14;
    v19 = &v15;
    v21 = &v23;
    v18 = 4LL;
    v15 = (int)v7;
    v20 = 4LL;
    v22 = 4LL;
    TlgWrite(v6, &unk_18003F2F7, v7, a4, 5u, &pData);
    a4 = (const GUID *)v23;
  }
  LOBYTE(a4) = (_DWORD)a4 != 0;
  v8 = (*(__int64 (__fastcall **)(ExecutionModel::ResourceManager *, _QWORD, _QWORD, const GUID *))(*(_QWORD *)g_pResourceManager
                                                                                                  + 24LL))(
         g_pResourceManager,
         a2,
         a3,
         a4);
  v9 = (const struct _TlgProvider_t *)(unsigned int)v8;
  if ( v8 >= 0 )
    v9 = 0LL;
  v13 = (int)v9;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v9, 2uLL) )
  {
    v18 = 4LL;
    v17 = &v13;
    TlgWrite(v9, &unk_18003F107, v10, v11, 3u, &pData);
    LODWORD(v9) = v13;
  }
  return (unsigned int)v9;
}
