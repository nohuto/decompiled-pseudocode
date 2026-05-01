/*
 * XREFs of ?RmpHandleMemoryWarning@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180032F18
 * Callers:
 *     ?RmpEnforcerJobCompletionThread@@YAKPEAX@Z @ 0x180020820 (-RmpEnforcerJobCompletionThread@@YAKPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     _TlgCreateSz @ 0x180033048 (_TlgCreateSz.c)
 */

NTSTATUS __fastcall RmpHandleMemoryWarning(struct _RM_ACTIVITY_HOST *a1)
{
  void *v1; // rdi
  NTSTATUS result; // eax
  const struct _TlgProvider_t *v4; // rcx
  int v5; // r9d
  TraceLoggingHProvider v6; // rcx
  LPCGUID v7; // r8
  LPCGUID cData; // r9
  NTSTATUS v9; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v10[56]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE JobInformation[80]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE ProcessInformation[96]; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  NTSTATUS *v14; // [rsp+140h] [rbp+40h]
  int v15; // [rsp+148h] [rbp+48h]
  int v16; // [rsp+14Ch] [rbp+4Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+150h] [rbp+50h] BYREF

  v1 = (void *)*((_QWORD *)a1 + 92);
  result = NtQueryInformationJobObject(
             v1,
             MaxJobObjectInfoClass|JobObjectBasicAccountingInformation,
             JobInformation,
             0x50u,
             0LL);
  v9 = result;
  if ( result >= 0 )
  {
    result = NtQueryInformationProcess(*((HANDLE *)a1 + 91), ProcessVmCounters, ProcessInformation, 0x60u, 0LL);
    v9 = result;
    if ( result >= 0 )
    {
      memset_0(v10, 0, 0x30uLL);
      v9 = NtSetInformationJobObject(v1, MaxJobObjectInfoClass, v10, 0x30u);
      if ( v9 < 0 && (unsigned int)dword_18004D030 > 4 )
      {
        if ( TlgKeywordOn(v4, 1uLL) )
        {
          v16 = 0;
          v14 = &v9;
          v15 = v5;
          TlgCreateSz(&pDesc, "SetJobNotificationLimit");
          TlgWrite(v6, &unk_1800428BE, v7, cData, (UINT32)cData, &pData);
        }
      }
      return 0;
    }
  }
  return result;
}
