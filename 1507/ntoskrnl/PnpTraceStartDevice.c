/*
 * XREFs of PnpTraceStartDevice @ 0x14012D2F0
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1400CFE20 (PnpDeviceCompletionRoutine.c)
 *     PnpStartDeviceNode @ 0x14045E860 (PnpStartDeviceNode.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall PnpTraceStartDevice(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // r8d
  int v8; // ecx
  unsigned __int16 v9; // ax
  __int64 v10; // rcx
  REGHANDLE v11; // rbx
  PIMAGE_NT_HEADERS v13; // rax
  unsigned __int16 v14; // [rsp+38h] [rbp-39h] BYREF
  __int16 v15; // [rsp+3Ch] [rbp-35h] BYREF
  int v16; // [rsp+40h] [rbp-31h] BYREF
  int v17; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-19h] BYREF
  __int64 v19; // [rsp+68h] [rbp-9h]
  int v20; // [rsp+70h] [rbp-1h]
  int v21; // [rsp+74h] [rbp+3h]
  int *v22; // [rsp+78h] [rbp+7h]
  int v23; // [rsp+80h] [rbp+Fh]
  int v24; // [rsp+84h] [rbp+13h]
  __int16 *v25; // [rsp+88h] [rbp+17h]
  int v26; // [rsp+90h] [rbp+1Fh]
  int v27; // [rsp+94h] [rbp+23h]
  __int64 v28; // [rsp+98h] [rbp+27h]
  int v29; // [rsp+A0h] [rbp+2Fh]
  int v30; // [rsp+A4h] [rbp+33h]
  int *v31; // [rsp+A8h] [rbp+37h]
  int v32; // [rsp+B0h] [rbp+3Fh]
  int v33; // [rsp+B4h] [rbp+43h]

  v4 = 0LL;
  v5 = 0;
  if ( a3 )
  {
    v4 = a3 + 56;
    v13 = RtlImageNtHeader(*(PVOID *)(a3 + 24));
    v5 = v13->OptionalHeader.MinorImageVersion | (v13->OptionalHeader.MajorImageVersion << 16);
  }
  v8 = *(unsigned __int16 *)(a1 + 40);
  UserData.Reserved = 0;
  v21 = 0;
  v24 = 0;
  v15 = (unsigned __int16)v8 >> 1;
  UserData.Ptr = (ULONGLONG)&v15;
  v19 = *(_QWORD *)(a1 + 48);
  v17 = v5;
  v22 = &v16;
  v16 = a2;
  UserData.Size = 2;
  v20 = v8;
  v23 = 4;
  if ( v4 )
    v9 = *(_WORD *)v4 >> 1;
  else
    v9 = 0;
  v27 = 0;
  v14 = v9;
  v25 = (__int16 *)&v14;
  v26 = 2;
  if ( v4 )
    v10 = *(_QWORD *)(v4 + 8);
  else
    v10 = 0LL;
  v30 = 0;
  v33 = 0;
  v11 = PnpEtwHandle;
  v28 = v10;
  v29 = 2 * v9;
  v31 = &v17;
  v32 = 4;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DeviceStart_Stop) )
    EtwWrite(v11, &KMPnPEvt_DeviceStart_Stop, 0LL, 6u, &UserData);
  return 0LL;
}
