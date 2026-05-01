/*
 * XREFs of ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAJW4Enum@ExternalResourceNotificationType@2@W43ResourceType@2@K@Z @ 0x180044E48
 * Callers:
 *     ?OnAccessLost@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x180044B50 (-OnAccessLost@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?OnAcquired@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x180044BB0 (-OnAcquired@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?OnRelease@ExternalResourceSet@ExecutionModel@@UEAAJW4_RM_REVOKE_REASON@@@Z @ 0x180044CD0 (-OnRelease@ExternalResourceSet@ExecutionModel@@UEAAJW4_RM_REVOKE_REASON@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::QueueMessage(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  __int64 *v8; // rax
  __int64 *v9; // rcx
  __int64 **v10; // rax
  void *v11; // rcx
  signed int LastError; // eax
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  unsigned int v17; // [rsp+30h] [rbp-59h] BYREF
  int v18; // [rsp+34h] [rbp-55h] BYREF
  int v19; // [rsp+38h] [rbp-51h] BYREF
  unsigned int v20; // [rsp+3Ch] [rbp-4Dh] BYREF
  __int64 v21; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  unsigned int *v23; // [rsp+70h] [rbp-19h]
  int v24; // [rsp+78h] [rbp-11h]
  int v25; // [rsp+7Ch] [rbp-Dh]
  int *v26; // [rsp+80h] [rbp-9h]
  int v27; // [rsp+88h] [rbp-1h]
  int v28; // [rsp+8Ch] [rbp+3h]
  __int64 *v29; // [rsp+90h] [rbp+7h]
  int v30; // [rsp+98h] [rbp+Fh]
  int v31; // [rsp+9Ch] [rbp+13h]
  int *v32; // [rsp+A0h] [rbp+17h]
  int v33; // [rsp+A8h] [rbp+1Fh]
  int v34; // [rsp+ACh] [rbp+23h]
  int *v35; // [rsp+B0h] [rbp+27h]
  int v36; // [rsp+B8h] [rbp+2Fh]
  int v37; // [rsp+BCh] [rbp+33h]

  v17 = 0;
  v4 = a1 + 1400;
  v21 = a2 | 0x3000000000LL;
  v8 = (__int64 *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = v21;
    *((_DWORD *)v8 + 6) = a4;
    v10 = *(__int64 ***)(v4 + 8);
    v9[1] = (__int64)v10;
    *v9 = v4;
    *v10 = v9;
    *(_QWORD *)(v4 + 8) = v9;
    ++*(_QWORD *)(v4 + 16);
  }
  v11 = *(void **)(a1 + 1384);
  if ( v11 && !SetEvent(v11) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v17 = LastError;
  }
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v23 = &v17;
    v26 = (int *)&v20;
    v29 = &v21;
    v32 = &v18;
    v35 = &v19;
    v24 = (int)v13;
    v20 = a2;
    v27 = (int)v13;
    v21 = a1;
    v30 = 8;
    v18 = 48;
    v33 = (int)v13;
    v19 = a4;
    v36 = (int)v13;
    TlgWrite(v13, &unk_180063F8E, v14, v15, 7u, &pData);
  }
  return v17;
}
