/*
 * XREFs of ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002A63C
 * Callers:
 *     RmpEnforcementOptimizeHost @ 0x1800198C4 (RmpEnforcementOptimizeHost.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEmptyWorkerWaitForCompleteOrAbort(HANDLE *a1)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  HANDLE v6; // rax
  NTSTATUS v7; // ebx
  const struct _TlgProvider_t *v8; // rcx
  unsigned int v9; // ebx
  HANDLE v10; // rcx
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  HANDLE v14; // rax
  HANDLE v16; // [rsp+38h] [rbp-19h] BYREF
  HANDLE v17; // [rsp+40h] [rbp-11h] BYREF
  HANDLE Object[2]; // [rsp+48h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+7h] BYREF
  HANDLE *v20; // [rsp+78h] [rbp+27h]
  int v21; // [rsp+80h] [rbp+2Fh]
  int v22; // [rsp+84h] [rbp+33h]
  HANDLE *v23; // [rsp+88h] [rbp+37h]
  int v24; // [rsp+90h] [rbp+3Fh]
  int v25; // [rsp+94h] [rbp+43h]

  RtlLeaveCriticalSection(&RmpGlobalLock);
  Object[0] = a1[112];
  Object[1] = a1[111];
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v2, 1uLL) )
  {
    v6 = a1[3];
    v22 = 0;
    v16 = v6;
    v20 = &v16;
    v21 = 8;
    TlgWrite(v3, &unk_18003F5F1, v4, v5, 3u, &pData);
  }
  v7 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL);
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( v7 )
  {
    v9 = 0;
  }
  else
  {
    v10 = a1[112];
    *((_BYTE *)a1 + 904) = 0;
    NtClearEvent(v10);
    v9 = 1;
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v8, 1uLL) )
  {
    v14 = a1[3];
    v22 = 0;
    v25 = 0;
    v17 = v14;
    v20 = &v17;
    v23 = &v16;
    v21 = 8;
    LODWORD(v16) = v9;
    v24 = 4;
    TlgWrite(v11, &unk_18003F2AD, v12, v13, 4u, &pData);
  }
  return v9;
}
