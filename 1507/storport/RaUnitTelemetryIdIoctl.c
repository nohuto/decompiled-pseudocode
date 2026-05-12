/*
 * XREFs of RaUnitTelemetryIdIoctl @ 0x1C000F8A0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C00036E0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     _TlgWrite @ 0x1C000F63C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000F6DC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitTelemetryIdIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // rdx
  const struct _TlgProvider_t *Length; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v9; // r10
  __int64 v10; // rcx
  unsigned int v11; // r8d
  unsigned __int8 v13; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int8 v14; // [rsp+31h] [rbp-48h] BYREF
  unsigned __int8 v15; // [rsp+32h] [rbp-47h] BYREF
  int v16; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  __int64 v18; // [rsp+60h] [rbp-19h]
  __int64 v19; // [rsp+68h] [rbp-11h]
  __int64 v20; // [rsp+70h] [rbp-9h]
  __int64 v21; // [rsp+78h] [rbp-1h]
  int *v22; // [rsp+80h] [rbp+7h]
  __int64 v23; // [rsp+88h] [rbp+Fh]
  unsigned __int8 *v24; // [rsp+90h] [rbp+17h]
  __int64 v25; // [rsp+98h] [rbp+1Fh]
  unsigned __int8 *v26; // [rsp+A0h] [rbp+27h]
  __int64 v27; // [rsp+A8h] [rbp+2Fh]
  unsigned __int8 *v28; // [rsp+B0h] [rbp+37h]
  __int64 v29; // [rsp+B8h] [rbp+3Fh]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = (const struct _TlgProvider_t *)CurrentStackLocation->Parameters.Read.Length;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x28 )
  {
    v11 = -1073741820;
LABEL_13:
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
  if ( (unsigned int)Length < 0x28 )
  {
    v11 = -1073741789;
    goto LABEL_13;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 40 || *(_DWORD *)(&MasterIrp->Size + 1) != 40 )
  {
    v11 = -1073741811;
    goto LABEL_13;
  }
  *(_OWORD *)(a1 + 1672) = *(_OWORD *)&MasterIrp->MdlAddress;
  *(_DWORD *)&MasterIrp->Type = 40;
  *(_DWORD *)(&MasterIrp->Size + 1) = 40;
  *(_OWORD *)&MasterIrp->AssociatedIrp.MasterIrp = *(_OWORD *)(*(_QWORD *)(a1 + 24) + 5412LL);
  a2->IoStatus.Information = 40LL;
  if ( (unsigned int)dword_1C0044050 > 5 && TlgKeywordOn(Length, 0x400000000000uLL) )
  {
    v10 = *(_QWORD *)v8[1].Data4;
    v16 = *(_DWORD *)(v10 + 56);
    v14 = v8[5].Data4[0];
    v15 = v8[5].Data4[1];
    v13 = v8[5].Data4[2];
    v18 = v10 + 5412;
    v22 = &v16;
    v24 = &v14;
    v26 = &v15;
    v28 = &v13;
    v19 = 16LL;
    v20 = v9;
    v21 = 16LL;
    v23 = 4LL;
    v25 = 1LL;
    v27 = 1LL;
    v29 = 1LL;
    TlgWrite((TraceLoggingHProvider)v10, &unk_1C003D197, v7, v8, 8u, &pData);
  }
  v11 = 0;
  return RaidCompleteRequestEx(a2, 0, v11);
}
