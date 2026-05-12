/*
 * XREFs of RaidUnitResetUnit @ 0x1C0038320
 * Callers:
 *     RaidUnitHierarchicalReset @ 0x1C0037640 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0002320 (RaidAllocateSrb.c)
 *     RaSendIrpSynchronous @ 0x1C00098AC (RaSendIrpSynchronous.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C001738C (StorBuildSynchronousScsiRequest.c)
 *     _TlgWrite @ 0x1C0018D00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     Template_qccc @ 0x1C0032C48 (Template_qccc.c)
 *     StorpAggregateHierarchicalResetLun @ 0x1C003C060 (StorpAggregateHierarchicalResetLun.c)
 */

__int64 __fastcall RaidUnitResetUnit(__int64 a1)
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
  __int64 v16; // rcx
  const GUID *v17; // r8
  const GUID *v18; // r9
  __int64 v19; // r11
  char v20; // di
  char v21; // r12
  __int64 v22; // rax
  char v24; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v25; // [rsp+49h] [rbp-BFh] BYREF
  char v26; // [rsp+4Bh] [rbp-BDh] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh]
  __int64 v28; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  _IO_STATUS_BLOCK v30; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  __int64 v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  __int64 v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  __int64 *v36; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  char *v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-38h]
  __int16 *v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  char *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  char *v44; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h]
  __int64 *v46; // [rsp+108h] [rbp+0h]
  __int64 v47; // [rsp+110h] [rbp+8h]

  v2 = MEMORY[0xFFFFF78000000014];
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 88);
  v5 = *(_QWORD *)(a1 + 8);
  v27 = v4;
  Srb = RaidAllocateSrb(v5, 0x20u, *(_BYTE *)(v3 + 402), 0);
  v8 = (unsigned __int64)Srb;
  if ( Srb )
  {
    if ( *(_BYTE *)(v3 + 402) == 1 )
    {
      v10 = *((unsigned int *)Srb + 13);
      *((_DWORD *)Srb + 5) = 32;
      Srb[v10 + 8] = *(_BYTE *)(a1 + 88);
      Srb[v10 + 9] = *(_BYTE *)(a1 + 89);
      Srb[v10 + 10] = *(_BYTE *)(a1 + 90);
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
      Srb[2] = 32;
      *(_WORD *)Srb = 88;
      Srb[5] = *(_BYTE *)(a1 + 88);
      Srb[6] = *(_BYTE *)(a1 + 89);
      Srb[7] = *(_BYTE *)(a1 + 90);
      *(_QWORD *)(Srb + 12) = 524560LL;
      Srb[8] = -1;
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
      StorpAggregateHierarchicalResetLun(*(_QWORD *)(a1 + 24), v15, MEMORY[0xFFFFF78000000014] - v2);
      v20 = BYTE2(v27);
      v21 = BYTE1(v27);
      if ( (unsigned int)dword_1C004F010 > 5 )
      {
        v22 = *(_QWORD *)(a1 + 24);
        LODWORD(v28) = *(_DWORD *)(v22 + 56);
        v26 = *(_BYTE *)(v8 + 3);
        v36 = &v28;
        v38 = &v24;
        v40 = &v25;
        v42 = (char *)&v25 + 1;
        v44 = &v26;
        v46 = &v29;
        v24 = v4;
        v25 = *(_WORD *)((char *)&v27 + 1);
        v29 = v19;
        v32 = v22 + 5192;
        v33 = 16LL;
        v34 = a1 + 1688;
        v35 = 16LL;
        v37 = 4LL;
        v39 = 1LL;
        v41 = 1LL;
        v43 = 1LL;
        v45 = 1LL;
        v47 = 8LL;
        TlgWrite((TraceLoggingHProvider)(v22 + 5192), &unk_1C0046442, v17, v18, 0xAu, &pData);
      }
      if ( (Microsoft_Windows_StorPortEnableBits & 1) != 0 )
        Template_qccc(v16, &EventLUReset, (__int64)v17, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL), v4, v21, v20);
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
