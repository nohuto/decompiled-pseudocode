/*
 * XREFs of DpiAcquirePostDisplayInfoFromBgfx @ 0x1C00CFC00
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C00C9E50 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleSystemPower @ 0x1C00CA470 (DpiFdoHandleSystemPower.c)
 *     DpiFdoHandleDevicePower @ 0x1C00CA970 (DpiFdoHandleDevicePower.c)
 *     DpiFdoDetectPostDevice @ 0x1C00D00D0 (DpiFdoDetectPostDevice.c)
 *     DpiFdoStartAdapterThread @ 0x1C00D0EB0 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgDetermineBootImageMode @ 0x1C00CFDDC (DxgDetermineBootImageMode.c)
 */

__int64 __fastcall DpiAcquirePostDisplayInfoFromBgfx(_DWORD *a1, char a2, char a3)
{
  char v6; // r14
  NTSTATUS v7; // r13d
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  NTSTATUS v14; // eax
  __int64 v15; // rsi
  char v16; // si
  void *v17; // rdi
  bool v18; // cl
  __int64 v19; // r15
  char *PoolWithTag; // rax
  char *v21; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  char v28[8]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v29[3]; // [rsp+28h] [rbp-58h] BYREF
  int v30; // [rsp+40h] [rbp-40h]
  int v31; // [rsp+44h] [rbp-3Ch]
  int v32; // [rsp+48h] [rbp-38h]
  int v33; // [rsp+4Ch] [rbp-34h]
  __int64 SystemInformation; // [rsp+50h] [rbp-30h] BYREF
  int v35; // [rsp+58h] [rbp-28h]
  int v36; // [rsp+5Ch] [rbp-24h]
  int v37; // [rsp+60h] [rbp-20h]
  int v38; // [rsp+68h] [rbp-18h]

  v6 = 0;
  v7 = ZwQuerySystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20u, 0LL);
  if ( v7 < 0 )
    goto LABEL_8;
  v8 = v36;
  v6 = 1;
  v9 = SystemInformation;
  v10 = v35;
  a1[6] = -1;
  a1[7] = 0;
  *((_QWORD *)a1 + 2) = v9;
  LODWORD(v9) = v38;
  a1[1] = v8;
  v30 = v8;
  v11 = v37;
  *a1 = v10;
  v31 = v10;
  v32 = v11;
  v12 = v9 - 3;
  if ( !v12 )
  {
    a1[3] = 20;
    v13 = 3 * v11;
    v33 = 4;
    goto LABEL_5;
  }
  if ( v12 == 1 )
  {
    a1[3] = 22;
    v13 = 4 * v11;
    v33 = 5;
LABEL_5:
    a1[2] = v13;
    goto LABEL_6;
  }
  v6 = 0;
LABEL_6:
  v14 = ZwQuerySystemInformation(SystemTimeAdjustmentInformation|0x80, a1 + 8, 0x80u, 0LL);
  v15 = v14;
  if ( v14 < 0 )
  {
    memset(a1 + 8, 0, 0x80uLL);
    v27 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
    *(_QWORD *)(v27 + 24) = DpiAcquirePostDisplayInfoFromBgfx;
    *(_QWORD *)(v27 + 32) = v15;
    WdLogEvent5_WdWarning(v27);
  }
LABEL_8:
  if ( a2 )
  {
    v16 = 0;
    v17 = 0LL;
    v28[0] = 0;
    if ( !v6 )
      goto LABEL_19;
    v18 = RtlCheckRegistryKey(0, (PWSTR)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT") >= 0;
    v19 = (unsigned int)(a1[1] * a1[2]);
    if ( v18 )
      goto LABEL_19;
    if ( a3
      && (PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPool, (unsigned int)(a1[1] * a1[2]) + 4LL, 0x74727044u),
          (v17 = PoolWithTag) != 0LL)
      && (v21 = &PoolWithTag[v19],
          v29[0] = PoolWithTag,
          v29[2] = &PoolWithTag[v19],
          v29[1] = v19,
          (int)InbvSetVirtualFrameBuffer(v29, DpiEnterSystemDisplay) >= 0) )
    {
      DxgDetermineBootImageMode(a1, v17, v21, v28);
      v16 = v28[0];
    }
    else
    {
LABEL_19:
      DxgDetermineBootImageMode(a1, 0LL, 0LL, 0LL);
    }
    if ( !v16 )
    {
      InbvNotifyDisplayOwnershipChange(0LL, DpiEnterSystemDisplay);
      if ( v17 )
        ExFreePoolWithTag(v17, 0x74727044u);
    }
  }
  if ( !v6 )
  {
    memset(a1, 0, 0x20uLL);
    a1[6] = -1;
    memset(a1 + 8, 0, 0x80uLL);
  }
  return (unsigned int)v7;
}
