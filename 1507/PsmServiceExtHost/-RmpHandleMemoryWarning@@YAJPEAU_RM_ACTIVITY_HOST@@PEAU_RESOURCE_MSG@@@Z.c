/*
 * XREFs of ?RmpHandleMemoryWarning@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RESOURCE_MSG@@@Z @ 0x18003A4C4
 * Callers:
 *     ?RmpEnforcerJobCompletionThread@@YAKPEAX@Z @ 0x180023C90 (-RmpEnforcerJobCompletionThread@@YAKPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     _TlgCreateSz @ 0x18003B2E0 (_TlgCreateSz.c)
 */

__int64 __fastcall RmpHandleMemoryWarning(struct _RM_ACTIVITY_HOST *a1, struct _RESOURCE_MSG *a2)
{
  void *v2; // rsi
  NTSTATUS InformationProcess; // ecx
  const struct _TlgProvider_t *v6; // rcx
  int v7; // r9d
  TraceLoggingHProvider v8; // rcx
  LPCGUID v9; // r8
  LPCGUID cData; // r9
  __int64 v11; // rax
  NTSTATUS InformationJobObject; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v14[56]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE ProcessInformation[72]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16; // [rsp+B8h] [rbp-48h]
  _BYTE JobInformation[80]; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  NTSTATUS *p_InformationJobObject; // [rsp+140h] [rbp+40h]
  int v20; // [rsp+148h] [rbp+48h]
  int v21; // [rsp+14Ch] [rbp+4Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+150h] [rbp+50h] BYREF

  v2 = (void *)*((_QWORD *)a1 + 88);
  InformationJobObject = NtQueryInformationJobObject(
                           v2,
                           MaxJobObjectInfoClass|JobObjectBasicAccountingInformation,
                           JobInformation,
                           0x50u,
                           0LL);
  InformationProcess = InformationJobObject;
  if ( InformationJobObject >= 0 )
  {
    InformationProcess = NtQueryInformationProcess(
                           *((HANDLE *)a1 + 87),
                           ProcessVmCounters,
                           ProcessInformation,
                           0x60u,
                           0LL);
    if ( InformationProcess >= 0 )
    {
      memset_0(v14, 0, 0x30uLL);
      InformationJobObject = NtSetInformationJobObject(v2, MaxJobObjectInfoClass, v14, 0x30u);
      if ( InformationJobObject < 0 && (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v6, 1uLL) )
      {
        v21 = 0;
        p_InformationJobObject = &InformationJobObject;
        v20 = v7;
        TlgCreateSz(&pDesc, "SetJobNotificationLimit");
        TlgWrite(v8, &unk_18005B35A, v9, cData, (UINT32)cData, &pData);
      }
      v11 = v16;
      InformationProcess = 0;
      *((_DWORD *)a2 + 2) |= 1u;
      *(_QWORD *)a2 = v11;
    }
  }
  return (unsigned int)InformationProcess;
}
