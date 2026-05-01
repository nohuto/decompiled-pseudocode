/*
 * XREFs of ?RmpActivityHostDecommitOfferedMemoryDxgCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18002E630
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

__int64 __fastcall RmpActivityHostDecommitOfferedMemoryDxgCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        int a3,
        _DWORD *a4)
{
  int v8; // eax
  int v9; // ecx
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  int v14; // [rsp+30h] [rbp-79h] BYREF
  int v15; // [rsp+34h] [rbp-75h] BYREF
  __int64 v16; // [rsp+38h] [rbp-71h] BYREF
  int v17; // [rsp+40h] [rbp-69h] BYREF
  void *v18; // [rsp+48h] [rbp-61h]
  unsigned int v19; // [rsp+50h] [rbp-59h]
  __int64 v20; // [rsp+58h] [rbp-51h]
  __int64 v21; // [rsp+60h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-39h] BYREF
  int *v23; // [rsp+90h] [rbp-19h]
  __int64 v24; // [rsp+98h] [rbp-11h]
  __int64 *v25; // [rsp+A0h] [rbp-9h]
  __int64 v26; // [rsp+A8h] [rbp-1h]
  int *v27; // [rsp+B0h] [rbp+7h]
  __int64 v28; // [rsp+B8h] [rbp+Fh]
  __int64 *v29; // [rsp+C0h] [rbp+17h]
  __int64 v30; // [rsp+C8h] [rbp+1Fh]

  memset_0(&v17, 0, 0x28uLL);
  v20 = *(_QWORD *)a4;
  v8 = a4[4] & 2;
  v9 = (a4[4] >> 1) & 1;
  v17 = 40;
  v18 = a2;
  v19 = v19 & 0xFFFFFFFC | v8 | v9;
  v14 = D3DKMTTrimProcessCommitment(&v17);
  v10 = (const struct _TlgProvider_t *)(unsigned int)v14;
  if ( v14 >= 0 )
  {
    v10 = 0LL;
    *((_QWORD *)a4 + 1) += v21;
    v14 = 0;
  }
  if ( (unsigned int)dword_18004D030 > 5 && TlgKeywordOn(v10, 0x11uLL) )
  {
    v24 = 4LL;
    v23 = &v14;
    v16 = *((_QWORD *)a1 + 3);
    v25 = &v16;
    v27 = &v15;
    v29 = &v21;
    v26 = 8LL;
    v15 = a3;
    v28 = 4LL;
    v30 = 8LL;
    TlgWrite(v10, &unk_180041B2A, v11, v12, 6u, &pData);
    LODWORD(v10) = v14;
  }
  return (unsigned int)v10;
}
