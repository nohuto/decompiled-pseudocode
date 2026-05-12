/*
 * XREFs of RaidAdapterSurpriseRemovalIrp @ 0x1C005E6F0
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C000F7B0 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000EE90 (RaCallMiniportAdapterControl.c)
 *     RaForwardIrp @ 0x1C000F9EC (RaForwardIrp.c)
 *     RaidIsAdapterControlSupported @ 0x1C000FF08 (RaidIsAdapterControlSupported.c)
 *     _TlgKeywordOn @ 0x1C0014C64 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0018D00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     RaidAdapterDisableDeviceInterface @ 0x1C0026EA0 (RaidAdapterDisableDeviceInterface.c)
 *     RaidAdapterDisableRpmbInterface @ 0x1C0026F94 (RaidAdapterDisableRpmbInterface.c)
 *     RaidAdapterMarkChildrenMissing @ 0x1C0027580 (RaidAdapterMarkChildrenMissing.c)
 *     RaidReleaseAdapterRemoveLockAndWait @ 0x1C002A2A4 (RaidReleaseAdapterRemoveLockAndWait.c)
 *     Template_pq @ 0x1C002A68C (Template_pq.c)
 *     RaidAdapterReleaseResources @ 0x1C005E2C4 (RaidAdapterReleaseResources.c)
 */

NTSTATUS __fastcall RaidAdapterSurpriseRemovalIrp(__int64 a1, IRP *a2)
{
  int v2; // r15d
  char v3; // si
  int v4; // r12d
  int v5; // r14d
  __int64 v8; // r8
  const GUID *v9; // r8
  const GUID *v10; // r9
  UINT32 cData; // [rsp+20h] [rbp-79h]
  char v13; // [rsp+30h] [rbp-69h] BYREF
  char v14; // [rsp+31h] [rbp-68h] BYREF
  int v15; // [rsp+34h] [rbp-65h] BYREF
  int v16; // [rsp+38h] [rbp-61h] BYREF
  GUID v17; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  __int64 v19; // [rsp+70h] [rbp-29h]
  int v20; // [rsp+78h] [rbp-21h]
  int v21; // [rsp+7Ch] [rbp-1Dh]
  int *v22; // [rsp+80h] [rbp-19h]
  int v23; // [rsp+88h] [rbp-11h]
  int v24; // [rsp+8Ch] [rbp-Dh]
  char *v25; // [rsp+90h] [rbp-9h]
  int v26; // [rsp+98h] [rbp-1h]
  int v27; // [rsp+9Ch] [rbp+3h]
  char *v28; // [rsp+A0h] [rbp+7h]
  int v29; // [rsp+A8h] [rbp+Fh]
  int v30; // [rsp+ACh] [rbp+13h]
  int *v31; // [rsp+B0h] [rbp+17h]
  int v32; // [rsp+B8h] [rbp+1Fh]
  int v33; // [rsp+BCh] [rbp+23h]

  v2 = *(_DWORD *)(a1 + 88);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 56);
  v5 = 0;
  *(_DWORD *)(a1 + 88) = 5;
  if ( (unsigned int)(v2 - 5) > 1 )
  {
    RaidAdapterDisableDeviceInterface(a1);
    RaidAdapterDisableRpmbInterface(a1);
    if ( (unsigned int)RaidIsAdapterControlSupported(a1, 16) )
    {
      v5 = RaCallMiniportAdapterControl(a1 + 296);
      v3 = 1;
    }
    RaidReleaseAdapterRemoveLockAndWait(a1);
    RaidAdapterMarkChildrenMissing(a1);
    RaidAdapterReleaseResources(a1, (__int64)a2, v8);
  }
  if ( StorEtwLoggingEnabled )
  {
    v17.Data1 = 0;
    *(_QWORD *)&v17.Data2 = 0LL;
    *(_DWORD *)&v17.Data4[4] = 0;
    IoGetActivityIdIrp(a2, &v17);
    if ( (Microsoft_Windows_StorPortEnableBits & 0x200000) != 0 )
    {
      cData = a2->IoStatus.Status;
      Template_pq(a1, &EventPnpRequestComplete, &v17, a2, cData);
    }
  }
  if ( (unsigned int)dword_1C004F010 > 5 && TlgKeywordOn((TraceLoggingHProvider)a1, 0x400000000000uLL) )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v19 = a1 + 5192;
    v15 = v4;
    v22 = &v15;
    v25 = &v13;
    v28 = &v14;
    v31 = &v16;
    v13 = v2;
    v14 = v3;
    v16 = v5;
    v20 = 16;
    v23 = 4;
    v26 = 1;
    v29 = 1;
    v32 = 4;
    TlgWrite((TraceLoggingHProvider)4, &unk_1C0045F4F, v9, v10, 7u, &pData);
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
