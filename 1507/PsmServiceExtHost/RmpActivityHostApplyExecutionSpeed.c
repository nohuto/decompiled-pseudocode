/*
 * XREFs of RmpActivityHostApplyExecutionSpeed @ 0x18000499C
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012140 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     RmpActivityHostComputeAndApplyExecutionSpeed @ 0x18003B8CC (RmpActivityHostComputeAndApplyExecutionSpeed.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmpActivityHostApplyExecutionSpeed(__int64 a1, int a2)
{
  unsigned int v2; // r14d
  __int64 result; // rax
  const GUID *v5; // r9
  const struct _TlgProvider_t *v6; // rcx
  BOOL v7; // [rsp+58h] [rbp-39h] BYREF
  unsigned int v8; // [rsp+5Ch] [rbp-35h] BYREF
  BOOL v9; // [rsp+60h] [rbp-31h] BYREF
  __int64 v10; // [rsp+68h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-19h] BYREF
  unsigned int *v12; // [rsp+98h] [rbp+7h]
  int v13; // [rsp+A0h] [rbp+Fh]
  int v14; // [rsp+A4h] [rbp+13h]
  __int64 *v15; // [rsp+A8h] [rbp+17h]
  int v16; // [rsp+B0h] [rbp+1Fh]
  int v17; // [rsp+B4h] [rbp+23h]
  BOOL *v18; // [rsp+B8h] [rbp+27h]
  int v19; // [rsp+C0h] [rbp+2Fh]
  int v20; // [rsp+C4h] [rbp+33h]

  v2 = *(_DWORD *)(a1 + 580);
  v7 = a2 <= 0;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, BOOL *))(*((_QWORD *)RmSvcGlobals + 10) + 80LL))(
             a1 + 512,
             v2,
             a1 + 48,
             6LL,
             -1LL,
             0LL,
             0LL,
             0LL,
             0LL,
             &v7);
  v8 = result;
  if ( (unsigned int)dword_1800690A0 > 4 && (qword_1800690B0 & 1) != 0 )
  {
    v6 = (const struct _TlgProvider_t *)(qword_1800690B8 & 1);
    if ( v6 == (const struct _TlgProvider_t *)qword_1800690B8 )
    {
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v12 = &v8;
      v10 = *(_QWORD *)(a1 + 24);
      v15 = &v10;
      v9 = v7;
      v18 = &v9;
      v13 = 4;
      v16 = 8;
      v19 = 4;
      TlgWrite(v6, &unk_18005D12C, (LPCGUID)4, v5, 5u, &pData);
      return v8;
    }
  }
  return result;
}
