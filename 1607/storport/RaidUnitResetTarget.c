/*
 * XREFs of RaidUnitResetTarget @ 0x1C0038074
 * Callers:
 *     RaidUnitHierarchicalReset @ 0x1C0037640 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0002320 (RaidAllocateSrb.c)
 *     RaSendIrpSynchronous @ 0x1C00098AC (RaSendIrpSynchronous.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C001738C (StorBuildSynchronousScsiRequest.c)
 *     _TlgWrite @ 0x1C0018D00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     Template_qcc @ 0x1C0039018 (Template_qcc.c)
 *     StorpAggregateHierarchicalResetTarget @ 0x1C003C0B4 (StorpAggregateHierarchicalResetTarget.c)
 */

__int64 __fastcall RaidUnitResetTarget(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r15
  int v4; // ebx
  __int64 v5; // rcx
  _BYTE *Srb; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  int Status; // r15d
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // eax
  IRP *v13; // rax
  IRP *v14; // r13
  __int64 v15; // rdx
  int v16; // edx
  int v17; // ecx
  const GUID *v18; // r8
  const GUID *v19; // r9
  __int64 v20; // r11
  char v21; // di
  __int64 v22; // rax
  char v24; // [rsp+38h] [rbp-89h] BYREF
  char v25; // [rsp+39h] [rbp-88h] BYREF
  char v26; // [rsp+3Ah] [rbp-87h] BYREF
  int v27; // [rsp+3Ch] [rbp-85h]
  int v28; // [rsp+40h] [rbp-81h] BYREF
  __int64 v29; // [rsp+48h] [rbp-79h] BYREF
  _IO_STATUS_BLOCK v30; // [rsp+50h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-59h] BYREF
  __int64 v32; // [rsp+88h] [rbp-39h]
  __int64 v33; // [rsp+90h] [rbp-31h]
  int *v34; // [rsp+98h] [rbp-29h]
  __int64 v35; // [rsp+A0h] [rbp-21h]
  char *v36; // [rsp+A8h] [rbp-19h]
  __int64 v37; // [rsp+B0h] [rbp-11h]
  char *v38; // [rsp+B8h] [rbp-9h]
  __int64 v39; // [rsp+C0h] [rbp-1h]
  char *v40; // [rsp+C8h] [rbp+7h]
  __int64 v41; // [rsp+D0h] [rbp+Fh]
  __int64 *v42; // [rsp+D8h] [rbp+17h]
  __int64 v43; // [rsp+E0h] [rbp+1Fh]

  v2 = MEMORY[0xFFFFF78000000014];
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 88);
  v5 = *(_QWORD *)(a1 + 8);
  v27 = v4;
  Srb = RaidAllocateSrb(v5, 0x13u, *(_BYTE *)(v3 + 402), 0);
  v8 = (unsigned __int64)Srb;
  if ( Srb )
  {
    if ( *(_BYTE *)(v3 + 402) == 1 )
    {
      v10 = *((unsigned int *)Srb + 13);
      *((_DWORD *)Srb + 5) = 19;
      Srb[v10 + 8] = *(_BYTE *)(a1 + 88);
      Srb[v10 + 9] = *(_BYTE *)(a1 + 89);
      Srb[v10 + 10] = 0;
      *((_DWORD *)Srb + 8) = -1;
      *((_DWORD *)Srb + 6) = 524560;
      *((_QWORD *)Srb + 8) = 0LL;
      *((_DWORD *)Srb + 15) = 0;
      *((_QWORD *)Srb + 10) = 0LL;
      if ( *(_BYTE *)(a1 + 2552) )
      {
        v11 = *(_DWORD *)(a1 + 2572);
      }
      else
      {
        v11 = *(_DWORD *)(a1 + 1000);
        if ( v11 < 0x1E )
          v11 = 30;
      }
      *(_DWORD *)(v8 + 40) = v11;
    }
    else
    {
      Srb[2] = 19;
      *(_WORD *)Srb = 88;
      Srb[5] = *(_BYTE *)(a1 + 88);
      Srb[6] = *(_BYTE *)(a1 + 89);
      *(_WORD *)(Srb + 7) = -256;
      *(_QWORD *)(Srb + 12) = 524560LL;
      *((_QWORD *)Srb + 3) = 0LL;
      *((_QWORD *)Srb + 6) = 0LL;
      if ( *(_BYTE *)(a1 + 2552) )
      {
        v12 = *(_DWORD *)(a1 + 2572);
      }
      else
      {
        v12 = *(_DWORD *)(a1 + 1000);
        if ( v12 < 0x1E )
          v12 = 30;
      }
      *(_DWORD *)(v8 + 20) = v12;
    }
    v13 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), v8, v7, &v30);
    v14 = v13;
    if ( v13 )
    {
      Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v13);
      if ( Status >= 0 )
        Status = v14->IoStatus.Status;
      IoFreeIrp(v14);
      LOBYTE(v15) = *(_BYTE *)(v8 + 3);
      StorpAggregateHierarchicalResetTarget(*(_QWORD *)(a1 + 24), v15, MEMORY[0xFFFFF78000000014] - v2);
      v21 = BYTE1(v27);
      if ( (unsigned int)dword_1C004F010 > 5 )
      {
        v22 = *(_QWORD *)(a1 + 24);
        v28 = *(_DWORD *)(v22 + 56);
        v26 = *(_BYTE *)(v8 + 3);
        v34 = &v28;
        v36 = &v24;
        v38 = &v25;
        v40 = &v26;
        v32 = v22 + 5192;
        v42 = &v29;
        v24 = v4;
        v25 = BYTE1(v27);
        v29 = v20;
        v33 = 16LL;
        v35 = 4LL;
        v37 = 1LL;
        v39 = 1LL;
        v41 = 1LL;
        v43 = 8LL;
        TlgWrite((TraceLoggingHProvider)8, &unk_1C00463D0, v18, v19, 8u, &pData);
      }
      if ( (Microsoft_Windows_StorPortEnableBits & 1) != 0 )
        Template_qcc(v17, v16, (_DWORD)v18, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL), v4, v21);
    }
    else
    {
      Status = -1073741801;
    }
    ExFreePoolWithTag((PVOID)v8, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Status;
}
