/*
 * XREFs of PpmPerfProcCapFloorSettingCallback @ 0x1406BABDC
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PpmReapplyPerfPolicy @ 0x1405B09A4 (PpmReapplyPerfPolicy.c)
 */

__int64 __fastcall PpmPerfProcCapFloorSettingCallback(
        LPCGUID SettingGuid,
        int *Value,
        ULONG ValueLength,
        PVOID Context)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v8; // r9
  BOOL v9; // edi
  __int64 *v10; // rdx
  int v11; // ecx
  __int64 v12; // rax
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
    goto LABEL_15;
  v11 = *Value;
  if ( (unsigned int)*Value > 0x64 )
    v11 = 100;
  if ( (unsigned int)v4 >= (unsigned int)KeNumberProcessors_0 )
  {
    v12 = 0LL;
  }
  else
  {
    v10 = KiProcessorBlock;
    v12 = KiProcessorBlock[v4];
  }
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 24184);
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
LABEL_15:
    v5 = -1073741811;
  }
  v15 |= 0xEu;
  PpmReapplyPerfPolicy(&v15, (unsigned __int64)v10);
  return v5;
}
