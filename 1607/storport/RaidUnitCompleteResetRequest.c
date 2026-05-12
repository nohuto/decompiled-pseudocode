/*
 * XREFs of RaidUnitCompleteResetRequest @ 0x1C0037150
 * Callers:
 *     <none>
 * Callees:
 *     RaidXrbDeallocateResources @ 0x1C000356C (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00036EC (RaidSrbStatusToNtStatus.c)
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     RaidUnitReleaseIrp @ 0x1C000C880 (RaidUnitReleaseIrp.c)
 *     _TlgKeywordOn @ 0x1C0014C64 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0018D00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C002A2DC (RaidResumeAndRestartAdapterQueues.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002A39C (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqD @ 0x1C002B0BC (WPP_SF_qqD.c)
 *     RaidLogRequestComplete @ 0x1C0036A20 (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0036C6C (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitEndDeviceBusy @ 0x1C0037434 (RaidUnitEndDeviceBusy.c)
 */

__int64 __fastcall RaidUnitCompleteResetRequest(const struct _TlgProvider_t *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 EnableCallback; // rbx
  __int64 v5; // rsi
  IRP *RegHandle; // r14
  __int64 v7; // rdi
  unsigned __int8 v8; // al
  unsigned int v9; // r12d
  int v10; // r15d
  unsigned int v11; // eax
  int v12; // eax
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-81h]
  char v20; // [rsp+30h] [rbp-79h] BYREF
  char v21; // [rsp+31h] [rbp-78h] BYREF
  char v22; // [rsp+32h] [rbp-77h] BYREF
  char v23; // [rsp+33h] [rbp-76h] BYREF
  int v24; // [rsp+34h] [rbp-75h] BYREF
  EVENT_DATA_DESCRIPTOR v25; // [rsp+40h] [rbp-69h] BYREF
  __int64 v26; // [rsp+60h] [rbp-49h]
  __int64 v27; // [rsp+68h] [rbp-41h]
  __int64 v28; // [rsp+70h] [rbp-39h]
  __int64 v29; // [rsp+78h] [rbp-31h]
  int *v30; // [rsp+80h] [rbp-29h]
  __int64 v31; // [rsp+88h] [rbp-21h]
  char *v32; // [rsp+90h] [rbp-19h]
  __int64 v33; // [rsp+98h] [rbp-11h]
  char *v34; // [rsp+A0h] [rbp-9h]
  __int64 v35; // [rsp+A8h] [rbp-1h]
  char *v36; // [rsp+B0h] [rbp+7h]
  __int64 v37; // [rsp+B8h] [rbp+Fh]
  char *v38; // [rsp+C0h] [rbp+17h]
  __int64 v39; // [rsp+C8h] [rbp+1Fh]

  EnableCallback = (__int64)a1[2].EnableCallback;
  v5 = (__int64)a1;
  RegHandle = (IRP *)a1[2].RegHandle;
  v7 = a1[3].RegHandle;
  v8 = *(_BYTE *)(EnableCallback + 2);
  if ( v8 == 40 )
    v9 = *(_DWORD *)(EnableCallback + 60);
  else
    v9 = *(_DWORD *)(EnableCallback + 16);
  if ( v8 == 40 )
    v10 = *(_DWORD *)(EnableCallback + 20);
  else
    v10 = v8;
  if ( v10 != 16 )
  {
    LOBYTE(v11) = *(_BYTE *)(EnableCallback + 2);
    v11 = (_BYTE)v11 == 40 ? *(_DWORD *)(EnableCallback + 20) : (unsigned __int8)v11;
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 1004));
    if ( v11 >= 0x12 )
    {
      if ( v11 <= 0x13 )
      {
        RaidResumeAndRestartAdapterQueues(*(_QWORD *)(v7 + 24));
      }
      else if ( v11 == 32 )
      {
        RaidResumeAndRestartUnitQueue(v7, a2, a3, a4);
      }
    }
  }
  LOBYTE(a1) = *(_BYTE *)(EnableCallback + 2);
  if ( (_BYTE)a1 == 40 )
    v12 = *(_DWORD *)(EnableCallback + 20);
  else
    v12 = (unsigned __int8)a1;
  if ( v12 == 16 && (unsigned int)dword_1C004F010 > 5 && TlgKeywordOn(a1, 0x400000000000uLL) )
  {
    v15 = *(_QWORD *)(v7 + 24);
    v16 = v15 + 5192;
    v24 = *(_DWORD *)(v15 + 56);
    v20 = *(_BYTE *)(v7 + 88);
    v21 = *(_BYTE *)(v7 + 89);
    v22 = *(_BYTE *)(v7 + 90);
    LOBYTE(v15) = *(_BYTE *)(EnableCallback + 3) & 0x3F;
    v26 = v16;
    v23 = v15;
    v30 = &v24;
    v32 = &v20;
    v34 = &v21;
    v36 = &v22;
    v38 = &v23;
    v27 = 16LL;
    v28 = v7 + 1688;
    v29 = 16LL;
    v31 = 4LL;
    v33 = 1LL;
    v35 = 1LL;
    v37 = 1LL;
    v39 = 1LL;
    TlgWrite(v13, &unk_1C004652A, (LPCGUID)(v7 + 1688), v14, 9u, &v25);
  }
  RaidUnitEndDeviceBusy(v7, RegHandle);
  if ( (*(_BYTE *)(v5 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v7, *(_DWORD *)(v5 + 748));
    *(_BYTE *)(v5 + 17) &= ~2u;
  }
  RegHandle->IoStatus.Status = RaidSrbStatusToNtStatus(*(_BYTE *)(EnableCallback + 3));
  RegHandle->IoStatus.Information = v9;
  RaidUnitReleaseIrp((__int64)RegHandle);
  if ( v10 == 16 )
  {
    RaidXrbDeallocateResources(v5, 1, v17);
    MmFreeContiguousMemory((PVOID)(v5 - 16));
  }
  else
  {
    *(_DWORD *)(v7 + 1440) = 0;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    LODWORD(pData) = RegHandle->IoStatus.Status;
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Bu,
      (__int64)&WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
      v7,
      RegHandle,
      pData);
  }
  if ( (qword_1C004F2A0 & 0x10) != 0 )
    RaidLogRequestComplete(*(_QWORD *)(v7 + 24), (__int64)RegHandle, EnableCallback);
  return RaidCompleteRequestEx(RegHandle, 0, RegHandle->IoStatus.Status);
}
