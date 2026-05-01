/*
 * XREFs of ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@W43ResourceType@2@K@Z @ 0x180036B04
 * Callers:
 *     ?OnAccessLost@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x180036A80 (-OnAccessLost@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?OnAcquired@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x180036AB0 (-OnAcquired@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180036C48 (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800208FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char __fastcall ExecutionModel::ExternalResourceSet::QueueMessage(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  char result; // al
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  _QWORD v15[2]; // [rsp+30h] [rbp-49h] BYREF
  int v16; // [rsp+40h] [rbp-39h] BYREF
  int v17; // [rsp+44h] [rbp-35h] BYREF
  int v18; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  int *v20; // [rsp+70h] [rbp-9h]
  int v21; // [rsp+78h] [rbp-1h]
  int v22; // [rsp+7Ch] [rbp+3h]
  _QWORD *v23; // [rsp+80h] [rbp+7h]
  int v24; // [rsp+88h] [rbp+Fh]
  int v25; // [rsp+8Ch] [rbp+13h]
  int *v26; // [rsp+90h] [rbp+17h]
  int v27; // [rsp+98h] [rbp+1Fh]
  int v28; // [rsp+9Ch] [rbp+23h]
  int *v29; // [rsp+A0h] [rbp+27h]
  int v30; // [rsp+A8h] [rbp+2Fh]
  int v31; // [rsp+ACh] [rbp+33h]

  v4 = a1 + 1384;
  LODWORD(v15[0]) = a2;
  *(_QWORD *)((char *)v15 + 4) = 48LL;
  v8 = operator new(0x20uLL, (const struct std::nothrow_t *)&unk_18003D9B1);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = v15[0];
    *((_DWORD *)v8 + 6) = a4;
    v10 = *(_QWORD **)(v4 + 8);
    v9[1] = v10;
    *v9 = v4;
    *v10 = v9;
    *(_QWORD *)(v4 + 8) = v9;
    ++*(_QWORD *)(v4 + 16);
  }
  result = SetEvent(*(HANDLE *)(a1 + 1376));
  if ( (unsigned int)dword_18004C030 > 4 )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)4, 1uLL);
    if ( result )
    {
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v20 = &v16;
      v23 = v15;
      v26 = &v17;
      v29 = &v18;
      v16 = a2;
      v21 = (int)v12;
      v15[0] = a1;
      v24 = 8;
      v17 = 48;
      v27 = (int)v12;
      v18 = a4;
      v30 = (int)v12;
      return TlgWrite(v12, &unk_180042F02, v13, v14, 6u, &pData);
    }
  }
  return result;
}
