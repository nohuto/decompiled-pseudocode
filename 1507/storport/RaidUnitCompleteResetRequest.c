/*
 * XREFs of RaidUnitCompleteResetRequest @ 0x1C0032710
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaidUnitReleaseIrp @ 0x1C000EBBC (RaidUnitReleaseIrp.c)
 *     RaidXrbDeallocateResources @ 0x1C000EC64 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000EDE4 (RaidSrbStatusToNtStatus.c)
 *     _TlgWrite @ 0x1C000F63C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000F6DC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0024998 (RaidResumeAndRestartAdapterQueues.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0024A58 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqD @ 0x1C00258C8 (WPP_SF_qqD.c)
 *     RaidLogRequestComplete @ 0x1C0031F60 (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C00321AC (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitEndDeviceBusy @ 0x1C00329D0 (RaidUnitEndDeviceBusy.c)
 */

__int64 __fastcall RaidUnitCompleteResetRequest(const struct _TlgProvider_t *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 RegHandle; // rbx
  __int64 v5; // rsi
  IRP *KeywordAll; // r14
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

  RegHandle = a1[2].RegHandle;
  v5 = (__int64)a1;
  KeywordAll = (IRP *)a1[2].KeywordAll;
  v7 = a1[3].KeywordAll;
  v8 = *(_BYTE *)(RegHandle + 2);
  if ( v8 == 40 )
    v9 = *(_DWORD *)(RegHandle + 60);
  else
    v9 = *(_DWORD *)(RegHandle + 16);
  if ( v8 == 40 )
    v10 = *(_DWORD *)(RegHandle + 20);
  else
    v10 = v8;
  if ( v10 != 16 )
  {
    LOBYTE(v11) = *(_BYTE *)(RegHandle + 2);
    v11 = (_BYTE)v11 == 40 ? *(_DWORD *)(RegHandle + 20) : (unsigned __int8)v11;
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 980));
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
  LOBYTE(a1) = *(_BYTE *)(RegHandle + 2);
  if ( (_BYTE)a1 == 40 )
    v12 = *(_DWORD *)(RegHandle + 20);
  else
    v12 = (unsigned __int8)a1;
  if ( v12 == 16 && (unsigned int)dword_1C0044050 > 5 && TlgKeywordOn(a1, 0x400000000000uLL) )
  {
    v15 = *(_QWORD *)(v7 + 24);
    v16 = v15 + 5412;
    v24 = *(_DWORD *)(v15 + 56);
    v23 = *(_BYTE *)(v7 + 88);
    v22 = *(_BYTE *)(v7 + 89);
    v20 = *(_BYTE *)(v7 + 90);
    LOBYTE(v15) = *(_BYTE *)(RegHandle + 3) & 0x3F;
    v26 = v16;
    v21 = v15;
    v30 = &v24;
    v32 = &v23;
    v34 = &v22;
    v36 = &v20;
    v38 = &v21;
    v27 = 16LL;
    v28 = v7 + 1672;
    v29 = 16LL;
    v31 = 4LL;
    v33 = 1LL;
    v35 = 1LL;
    v37 = 1LL;
    v39 = 1LL;
    TlgWrite(v13, &unk_1C003D1F6, (LPCGUID)(v7 + 1672), v14, 9u, &v25);
  }
  RaidUnitEndDeviceBusy(v7, KeywordAll);
  if ( (*(_BYTE *)(v5 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v7, *(_DWORD *)(v5 + 732));
    *(_BYTE *)(v5 + 17) &= ~2u;
  }
  KeywordAll->IoStatus.Status = RaidSrbStatusToNtStatus(*(_BYTE *)(RegHandle + 3));
  KeywordAll->IoStatus.Information = v9;
  RaidUnitReleaseIrp((__int64)KeywordAll);
  if ( v10 == 16 )
  {
    RaidXrbDeallocateResources(v5, 1, v17);
    MmFreeContiguousMemory((PVOID)(v5 - 16));
  }
  else
  {
    *(_DWORD *)(v7 + 1424) = 0;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    LODWORD(pData) = KeywordAll->IoStatus.Status;
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Bu,
      (__int64)&WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids,
      v7,
      KeywordAll,
      pData);
  }
  if ( (qword_1C0044010 & 0x10) != 0 )
    RaidLogRequestComplete(*(_QWORD *)(v7 + 24), (__int64)KeywordAll, RegHandle);
  return RaidCompleteRequestEx(KeywordAll, 0, KeywordAll->IoStatus.Status);
}
