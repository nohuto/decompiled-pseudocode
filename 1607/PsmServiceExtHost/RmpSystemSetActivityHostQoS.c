/*
 * XREFs of RmpSystemSetActivityHostQoS @ 0x18000166C
 * Callers:
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180001554 (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall RmpSystemSetActivityHostQoS(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  bool v4; // zf
  NTSTATUS result; // eax
  _BYTE JobInformation[36]; // [rsp+40h] [rbp-68h] BYREF
  int v7; // [rsp+64h] [rbp-44h]
  __int64 v8; // [rsp+90h] [rbp-18h]

  v2 = a2;
  memset_0(JobInformation, 0, 0x60uLL);
  v4 = *(_DWORD *)(a1 + 48) == 0;
  v7 = 1;
  v8 = v2;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL)
                                                                                          + 240LL))(
               a1 + 520,
               *(unsigned int *)(a1 + 588),
               a1 + 56,
               *(unsigned int *)(a1 + 592),
               *(_QWORD *)(a1 + 24),
               JobInformation);
  else
    result = NtSetInformationJobObject(
               *(HANDLE *)(a1 + 736),
               MaxJobObjectInfoClass|JobObjectBasicProcessIdList|0x10,
               JobInformation,
               0x60u);
  if ( result >= 0 )
    return 0;
  return result;
}
