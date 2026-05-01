/*
 * XREFs of ?TriggerOnOutOfMemoryCallback@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180041110
 * Callers:
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180036734 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::TriggerOnOutOfMemoryCallback(ExecutionModel::ResourceSet *this)
{
  __int64 v1; // rsi
  const GUID *v2; // r9
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v5; // r8
  int v7; // [rsp+38h] [rbp-9h] BYREF
  ExecutionModel::ResourceSet *v8; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  int *v10; // [rsp+68h] [rbp+27h]
  int v11; // [rsp+70h] [rbp+2Fh]
  int v12; // [rsp+74h] [rbp+33h]
  ExecutionModel::ResourceSet **v13; // [rsp+78h] [rbp+37h]
  int v14; // [rsp+80h] [rbp+3Fh]
  int v15; // [rsp+84h] [rbp+43h]

  v1 = *((_QWORD *)this + 220);
  LODWORD(v2) = -2147467259;
  v7 = -2147467259;
  if ( v1 )
  {
    LODWORD(v2) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 48LL))(v1, *((_QWORD *)this + 221));
    v7 = (int)v2;
  }
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 9uLL) )
  {
    v12 = 0;
    v15 = 0;
    v10 = &v7;
    v13 = &v8;
    v11 = (int)cData;
    v8 = this;
    v14 = 8;
    TlgWrite(cData, &unk_18005C982, v5, v2, (UINT32)cData, &pData);
    LODWORD(v2) = v7;
  }
  return (unsigned int)v2;
}
