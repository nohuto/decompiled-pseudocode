/*
 * XREFs of PpmPerfProcCapFloorSettingCallback @ 0x14063AB14
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PpmReapplyPerfPolicy @ 0x140537218 (PpmReapplyPerfPolicy.c)
 */

__int64 __fastcall PpmPerfProcCapFloorSettingCallback(
        LPCGUID SettingGuid,
        unsigned int *Value,
        ULONG ValueLength,
        PVOID Context)
{
  ULONG v4; // r14d
  unsigned int v5; // ebx
  __int64 v8; // r9
  BOOL v9; // esi
  unsigned __int64 v10; // rdx
  unsigned int v11; // edi
  __int64 Prcb; // rax
  __int64 v13; // rax
  int v15; // [rsp+20h] [rbp-38h] BYREF
  GUID v16; // [rsp+28h] [rbp-30h]

  v4 = SettingGuid->Data4[7];
  v5 = 0;
  LOWORD(v15) = 0;
  v16 = GUID_PROC_CAP_BASE;
  v16.Data4[7] = v4;
  v8 = *(_QWORD *)&GUID_PROC_CAP_BASE.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( !v8 )
    v8 = *(_QWORD *)v16.Data4 - *(_QWORD *)SettingGuid->Data4;
  v9 = v8 == 0;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( ValueLength != 4 || !Value )
    goto LABEL_12;
  v11 = *Value;
  if ( v11 > 0x64 )
    v11 = 100;
  Prcb = KeGetPrcb(v4);
  if ( Prcb )
  {
    v13 = *(_QWORD *)(Prcb + 24184);
    if ( v13 )
    {
      if ( v9 )
        *(_DWORD *)(v13 + 16) = v11;
      else
        *(_DWORD *)(v13 + 20) = v11;
    }
  }
  else
  {
LABEL_12:
    v5 = -1073741811;
  }
  v15 |= 0xEu;
  PpmReapplyPerfPolicy(&v15, v10);
  return v5;
}
