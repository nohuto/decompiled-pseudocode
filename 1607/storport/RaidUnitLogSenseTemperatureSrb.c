/*
 * XREFs of RaidUnitLogSenseTemperatureSrb @ 0x1C0037874
 * Callers:
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C00366A4 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0002320 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     RaSendIrpSynchronous @ 0x1C00098AC (RaSendIrpSynchronous.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C001738C (StorBuildSynchronousScsiRequest.c)
 *     memset @ 0x1C001AD80 (memset.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C0038F1C (StorFreeSynchronousScsiRequest.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C00436B8 (PortSrbTranslateSrbToNtStatus.c)
 */

__int64 __fastcall RaidUnitLogSenseTemperatureSrb(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  _BYTE *v5; // r14
  _BYTE *v6; // r12
  _BYTE *Srb; // rbx
  int Status; // edi
  _WORD *PoolWithTag; // rax
  _WORD *v10; // r15
  PVOID Pool; // rax
  void *v12; // r13
  __int64 v13; // rcx
  char v14; // al
  char v15; // r10
  int v16; // r9d
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // ecx
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  char v24; // r11
  unsigned int v25; // edi
  int v26; // r10d
  __int64 v27; // rcx
  unsigned __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // ecx
  int v31; // ecx
  unsigned __int64 v32; // rcx
  IRP *v33; // rax
  IRP *v34; // rsi
  __int64 v35; // rcx
  _IO_STATUS_BLOCK v37; // [rsp+20h] [rbp-38h] BYREF
  __int64 v38; // [rsp+60h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 24) + 304LL;
  v5 = 0LL;
  v38 = v3;
  v6 = 0LL;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(*(_QWORD *)(a1 + 24) + 402LL), 1);
  if ( !Srb )
    return (unsigned int)-1073741801;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x72536152u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x100uLL);
    Pool = RaidAllocatePool(NonPagedPoolNx, 0xFFuLL, 0x4E536152u, *(_QWORD *)(a1 + 8));
    v12 = Pool;
    if ( !Pool )
    {
      Status = -1073741801;
LABEL_60:
      ExFreePoolWithTag(v10, 0x72536152u);
      if ( v12 )
        ExFreePoolWithTag(v12, 0x4E536152u);
      goto LABEL_62;
    }
    memset(Pool, 0, 0xFFuLL);
    if ( *(_BYTE *)(v3 + 98) == 1 )
    {
      v13 = *((unsigned int *)Srb + 13);
      *((_DWORD *)Srb + 5) = 0;
      v5 = Srb;
      Srb[v13 + 8] = *(_BYTE *)(a1 + 88);
      Srb[v13 + 9] = *(_BYTE *)(a1 + 89);
      Srb[v13 + 10] = *(_BYTE *)(a1 + 90);
      *((_DWORD *)Srb + 8) = -1;
      *((_DWORD *)Srb + 6) = 524562;
      *((_QWORD *)Srb + 8) = v10;
      *((_DWORD *)Srb + 15) = 256;
      *((_QWORD *)Srb + 10) = a2;
      *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 1000);
      v6 = &Srb[*((unsigned int *)Srb + 30)];
      *(_DWORD *)v6 = 64;
      *((_DWORD *)v6 + 1) = 32;
      v6[9] = -1;
      *((_QWORD *)v6 + 2) = v12;
    }
    else
    {
      *(_WORD *)Srb = 88;
      Srb[2] = 0;
      Srb[5] = *(_BYTE *)(a1 + 88);
      Srb[6] = *(_BYTE *)(a1 + 89);
      Srb[7] = *(_BYTE *)(a1 + 90);
      *((_DWORD *)Srb + 3) = 524562;
      Srb[8] = -1;
      *((_QWORD *)Srb + 3) = v10;
      *((_DWORD *)Srb + 4) = 256;
      *((_QWORD *)Srb + 6) = a2;
      *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 1000);
      Srb[11] = -1;
      *((_QWORD *)Srb + 4) = v12;
    }
    v14 = Srb[2];
    if ( v14 == 40 )
      *((_WORD *)Srb + 19) = 32;
    else
      Srb[9] = 32;
    if ( v14 == 40 )
    {
      v15 = 0;
      if ( !*((_DWORD *)Srb + 5) )
      {
        v16 = 0;
        if ( *((_DWORD *)Srb + 14) )
        {
          while ( 1 )
          {
            v17 = *(unsigned int *)&Srb[4 * v16 + 120];
            if ( (unsigned int)v17 >= 0x80 )
            {
              v18 = *((unsigned int *)Srb + 4);
              if ( (unsigned int)v17 < (unsigned int)v18 )
                break;
            }
LABEL_28:
            if ( (unsigned int)++v16 >= *((_DWORD *)Srb + 14) )
              goto LABEL_31;
          }
          v19 = (unsigned int)v17;
          v20 = *(_DWORD *)&Srb[v17] - 64;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              if ( v21 == 1 && v19 + 40 <= v18 )
                goto LABEL_31;
              goto LABEL_27;
            }
            v22 = v19 + 56;
          }
          else
          {
            v22 = v19 + 40;
          }
          if ( v22 <= v18 )
          {
            Srb[v19 + 10] = 10;
            v15 = 1;
          }
LABEL_27:
          if ( v15 )
            goto LABEL_31;
          goto LABEL_28;
        }
      }
    }
    else
    {
      Srb[10] = 10;
    }
LABEL_31:
    if ( Srb[2] != 40 )
    {
      v23 = (__int64)(Srb + 72);
      goto LABEL_51;
    }
    v23 = 0LL;
    v24 = 0;
    if ( *((_DWORD *)Srb + 5) || (v25 = *((_DWORD *)Srb + 14), v26 = 0, !v25) )
    {
LABEL_51:
      *(_BYTE *)v23 = 77;
      *(_BYTE *)(v23 + 2) = 13;
      *(_DWORD *)(v23 + 5) = 0x10000;
      v33 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), (unsigned __int64)Srb, v23, &v37);
      v34 = v33;
      if ( v33 )
      {
        Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v33);
        if ( Status >= 0
          && (Status = v34->IoStatus.Status, Status >= 0)
          && (LOBYTE(v35) = Srb[3], Status = PortSrbTranslateSrbToNtStatus(v35), Status >= 0)
          || Status == -2147483643 )
        {
          v10[1] = 0;
          Status = -1073741668;
        }
        StorFreeSynchronousScsiRequest(v34);
      }
      else
      {
        Status = -1073741801;
      }
      v3 = v38;
      goto LABEL_60;
    }
    while ( 1 )
    {
      v27 = *(unsigned int *)&Srb[4 * v26 + 120];
      if ( (unsigned int)v27 >= 0x80 )
      {
        v28 = *((unsigned int *)Srb + 4);
        if ( (unsigned int)v27 < (unsigned int)v28 )
          break;
      }
LABEL_48:
      if ( ++v26 >= v25 )
        goto LABEL_51;
    }
    v29 = (unsigned int)v27;
    v30 = *(_DWORD *)&Srb[v27] - 64;
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( v31 )
      {
        if ( v31 == 1 && v29 + 40 <= v28 )
        {
          if ( *(_DWORD *)&Srb[v29 + 12] )
            v23 = (__int64)&Srb[v29 + 32];
          goto LABEL_51;
        }
        goto LABEL_47;
      }
      v32 = v29 + 56;
    }
    else
    {
      v32 = v29 + 40;
    }
    if ( v32 <= v28 )
    {
      v24 = 1;
      if ( !Srb[v29 + 10] )
        goto LABEL_51;
      v23 = (__int64)&Srb[v29 + 24];
    }
LABEL_47:
    if ( v24 )
      goto LABEL_51;
    goto LABEL_48;
  }
  Status = -1073741801;
LABEL_62:
  if ( *(_BYTE *)(v3 + 98) == 1 )
  {
    if ( !v5 )
      v5 = Srb;
    *((_QWORD *)v5 + 10) = 0LL;
    *((_QWORD *)v5 + 13) = 0LL;
    if ( v6 )
      *((_QWORD *)v6 + 2) = 0LL;
  }
  else
  {
    *((_QWORD *)Srb + 6) = 0LL;
    *((_QWORD *)Srb + 7) = 0LL;
    *((_QWORD *)Srb + 4) = 0LL;
  }
  ExFreePoolWithTag(Srb, 0x72536152u);
  return (unsigned int)Status;
}
