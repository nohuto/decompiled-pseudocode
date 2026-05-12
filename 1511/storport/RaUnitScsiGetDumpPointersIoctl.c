/*
 * XREFs of RaUnitScsiGetDumpPointersIoctl @ 0x1C000D8A8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C00044D0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C00049EC (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C0009ED0 (StorPortGetAdditionalCrashDumpArea.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C000AFF4 (RaidGetTelemetryLogPageIds.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C000B1BC (RaidQueryCrashdumpFunctions.c)
 *     RaidDriverGetName @ 0x1C000B288 (RaidDriverGetName.c)
 *     RtlStringCbPrintfW @ 0x1C000FC48 (RtlStringCbPrintfW.c)
 *     RaidXrbDeallocateResources @ 0x1C0010F80 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00110F8 (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0011310 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0011358 (RaidAdapterExecuteXrb.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0011408 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaSrbSetMiniportContext @ 0x1C0011424 (RaSrbSetMiniportContext.c)
 *     RaidZeroXrb @ 0x1C0011444 (RaidZeroXrb.c)
 *     memmove @ 0x1C0015B80 (memmove.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     WPP_SF_ @ 0x1C00277A8 (WPP_SF_.c)
 *     WPP_SF_DD @ 0x1C00277D0 (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C002796C (WPP_SF_qq.c)
 *     WPP_SF_D @ 0x1C0027BA0 (WPP_SF_D.c)
 *     WPP_SF_qD @ 0x1C0027BDC (WPP_SF_qD.c)
 *     WPP_SF_S @ 0x1C0036190 (WPP_SF_S.c)
 */

__int64 __fastcall RaUnitScsiGetDumpPointersIoctl(__int64 a1, IRP *a2)
{
  __int64 v2; // rbp
  __int64 v4; // r13
  _BYTE *Srb; // rbx
  char v6; // di
  _IRP *MasterIrp; // r14
  _MDL *Pool; // rax
  _MDL *v9; // r12
  unsigned int *p_ByteCount; // r15
  __int64 v11; // rcx
  __int16 v12; // ax
  _QWORD *v13; // rcx
  __int64 v14; // rax
  _MDL *v15; // rcx
  signed int v16; // edi
  __int64 v17; // rax
  wchar_t *v18; // rax
  wchar_t *v19; // r15
  wchar_t *v20; // rax
  __int64 v21; // rdx
  PVOID v22; // rax
  PVOID v23; // r12
  __int64 ContiguousNodeMemory; // rax
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // r9
  int v28; // eax
  bool v29; // zf
  int v30; // eax
  __int64 v31; // rcx
  PDEVICE_OBJECT v32; // rcx
  char *v33; // r15
  int v34; // eax
  __int64 v35; // r15
  int v36; // eax
  wchar_t *v37; // r12
  unsigned int v38; // ecx
  int v39; // r8d
  signed int AdditionalCrashDumpArea; // eax
  IRP *v41; // rsi
  int v43; // eax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // r9
  _DWORD *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // r9
  __int64 v50; // rcx
  int v51; // esi
  __int64 v52; // rcx
  int v53; // eax
  _BYTE *v54; // rax
  _BYTE *v55; // [rsp+30h] [rbp-78h]
  _MDL *v56; // [rsp+38h] [rbp-70h]
  PVOID P; // [rsp+40h] [rbp-68h]
  wchar_t *v58; // [rsp+48h] [rbp-60h]
  _QWORD v59[11]; // [rsp+50h] [rbp-58h] BYREF
  wchar_t *v60; // [rsp+B0h] [rbp+8h]
  __int64 p_Process; // [rsp+C0h] [rbp+18h]
  char *BaseAddress; // [rsp+C8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 24);
  P = 0LL;
  BaseAddress = 0LL;
  v4 = 0LL;
  Srb = 0LL;
  v6 = 0;
  v60 = 0LL;
  memset(v59, 0, 16);
  v55 = 0LL;
  a2->IoStatus.Information = 0LL;
  if ( a2->RequestorMode )
  {
    v16 = -1073741790;
LABEL_70:
    v41 = a2;
    return RaidCompleteRequestEx(v41, 0, v16);
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < 0x68 )
  {
    v16 = -1073741789;
    goto LABEL_70;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  memset(MasterIrp, 0, 0x68uLL);
  Pool = (_MDL *)RaidAllocatePool(NonPagedPoolNx, 0x160uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v56 = Pool;
  v9 = Pool;
  if ( !Pool )
  {
    v16 = -1073741670;
    goto LABEL_70;
  }
  memset(Pool, 0, 0x160uLL);
  HIDWORD(v9->Next) = 280;
  *(_DWORD *)&v9->Size = 1145917508;
  LODWORD(v9->Next) = 1;
  p_Process = (__int64)&v9->Process;
  p_ByteCount = &v9[5].ByteCount;
  *(_OWORD *)&v9->Process = *(_OWORD *)(v2 + 304);
  *(_OWORD *)&v9->StartVa = *(_OWORD *)(v2 + 320);
  *(_OWORD *)&v9[1].Next = *(_OWORD *)(v2 + 336);
  *(_OWORD *)&v9[1].Process = *(_OWORD *)(v2 + 352);
  *(_OWORD *)&v9[1].StartVa = *(_OWORD *)(v2 + 368);
  *(_OWORD *)&v9[2].Next = *(_OWORD *)(v2 + 384);
  *(_OWORD *)&v9[2].Process = *(_OWORD *)(v2 + 400);
  *(_OWORD *)&v9[2].StartVa = *(_OWORD *)(v2 + 416);
  *(_OWORD *)&v9[3].Next = *(_OWORD *)(v2 + 432);
  *(_OWORD *)&v9[3].Process = *(_OWORD *)(v2 + 448);
  *(_OWORD *)&v9[3].StartVa = *(_OWORD *)(v2 + 464);
  *(_OWORD *)&v9[4].Next = *(_OWORD *)(v2 + 480);
  *(_OWORD *)&v9[4].Process = *(_OWORD *)(v2 + 496);
  *(_OWORD *)&v9[4].StartVa = *(_OWORD *)(v2 + 512);
  RaidGetTelemetryLogPageIds(*(_DWORD *)(v2 + 4356), (__int64)&v9[5], &v9[5].StartVa);
  v11 = *(_QWORD *)(v2 + 528);
  if ( (*(_DWORD *)(v11 + 184) & 0x80u) != 0 && (*(_DWORD *)(v11 + 188) & 2) != 0 )
    v12 = HiberFileHybridPriority;
  else
    v12 = -1;
  WORD1(v9[5].StartVa) = v12;
  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1456)) >= 0 )
    {
      *(_BYTE *)p_ByteCount = 1;
      v6 = 1;
      v9[6].Next = **(_MDL ***)(a1 + 1456);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  }
  v13 = *(_QWORD **)(*(_QWORD *)(a1 + 24) + 5088LL);
  if ( v13 && (int)PoFxRegisterCrashdumpDevice(*v13) >= 0 )
  {
    v6 = 1;
    LOBYTE(v9[6].MappedSystemVa) = 1;
    v9[6].StartVa = **(void ***)(*(_QWORD *)(a1 + 24) + 5088LL);
  }
  *(_WORD *)(*(_QWORD *)(a1 + 24) + 5154LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 24) + 5152LL) = 40;
  if ( RaidQueryCrashdumpFunctions(
         *(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 24LL),
         (void *)(*(_QWORD *)(a1 + 24) + 5152LL)) >= 0 )
  {
    v14 = *(_QWORD *)(a1 + 24);
    v15 = *(_MDL **)(v14 + 5184);
    if ( v15 )
    {
      if ( *(_QWORD *)(v14 + 5176) )
      {
        v9[7].Next = v15;
        *(_QWORD *)&v9[7].Size = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5160LL);
LABEL_12:
        MasterIrp->Overlay.AsynchronousParameters.UserApcContext = p_ByteCount;
        MasterIrp->Overlay.AllocationSize.QuadPart = (__int64)StorDumpDevicePowerOn;
        goto LABEL_13;
      }
    }
  }
  *(_WORD *)(*(_QWORD *)(a1 + 24) + 5154LL) = 0;
  if ( v6 )
    goto LABEL_12;
LABEL_13:
  v16 = 0;
  *(_QWORD *)&v9[6].Size = a1 + 1446;
  v17 = *(_QWORD *)(a1 + 24) + 4989LL;
  v9[6].Process = (struct _EPROCESS *)(a1 + 1447);
  *(_QWORD *)&v9[6].ByteCount = v17;
  v18 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, 0x48uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v58 = v18;
  v19 = v18;
  if ( !v18 )
    goto LABEL_81;
  memset(v18, 0, 0x48uLL);
  v20 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, 0x48uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v60 = v20;
  if ( !v20 )
    goto LABEL_81;
  memset(v20, 0, 0x48uLL);
  RtlStringCbPrintfW(v19 + 4, 0x1EuLL, L"diskdump.sys");
  RtlStringCbPrintfW(v19 + 19, 0x1EuLL, L"storport.sys");
  *(_QWORD *)v19 = v60;
  *(_QWORD *)v60 = 0LL;
  *(_QWORD *)&MasterIrp->Flags = 0LL;
  MasterIrp->ThreadListEntry.Flink = 0LL;
  MasterIrp->MdlAddress = v56;
  *(_DWORD *)&MasterIrp->Type = 4;
  *(_DWORD *)(&MasterIrp->Size + 1) = 104;
  BYTE4(MasterIrp->AssociatedIrp.SystemBuffer) = 1;
  MasterIrp->ThreadListEntry.Blink = (_LIST_ENTRY *)v19;
  MasterIrp->UserEvent = (_KEVENT *)(a1 + 1447);
  if ( (unsigned __int8)(*(_BYTE *)(v2 + 448) - 2) <= 2u )
    MasterIrp->IoStatus.Status |= 1u;
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 528) + 184LL) & 0x20) != 0 )
    MasterIrp->IoStatus.Status |= 4u;
  v21 = 8LL;
  if ( *(_BYTE *)(v2 + 4450) && (*(_DWORD *)(*(_QWORD *)(v2 + 528) + 184LL) & 8) == 0 )
  {
    v32 = WPP_GLOBAL_Control;
LABEL_67:
    v35 = p_Process;
    goto LABEL_42;
  }
  v22 = RaidAllocatePool(NonPagedPoolNx, 0x70uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  P = v22;
  v23 = v22;
  if ( !v22
    || (memset(v22, 0, 0x70uLL), (Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x26u, *(_BYTE *)(v2 + 402), 0)) == 0LL)
    || (ContiguousNodeMemory = MmAllocateContiguousNodeMemory(
                                 ((*(_DWORD *)(v2 + 444) + 7) & 0xFFFFFFF8) + 1056,
                                 *(_QWORD *)(v2 + 4392),
                                 *(_QWORD *)(v2 + 4400),
                                 *(_QWORD *)(v2 + 4384),
                                 4,
                                 0x80000000),
        BaseAddress = (char *)ContiguousNodeMemory,
        (v26 = ContiguousNodeMemory) == 0) )
  {
LABEL_81:
    v41 = a2;
    v16 = -1073741670;
LABEL_138:
    ExFreePoolWithTag(v56, 0x44436152u);
    if ( v19 )
      ExFreePoolWithTag(v19, 0x44436152u);
    v33 = 0LL;
    if ( v60 )
      ExFreePoolWithTag(v60, 0x44436152u);
    goto LABEL_57;
  }
  v4 = ContiguousNodeMemory + 16;
  RaidZeroXrb(ContiguousNodeMemory + 16, v25, 0LL, 0LL);
  *(_BYTE *)(v4 + 17) |= 8u;
  *(_QWORD *)(v4 + 176) = a2;
  *(_QWORD *)(v4 + 184) = v23;
  *(_QWORD *)(v4 + 168) = Srb;
  if ( *(_BYTE *)(v2 + 402) == 1 )
  {
    *((_QWORD *)Srb + 10) = a2;
    *((_DWORD *)Srb + 6) = 256;
    v43 = *((_DWORD *)Srb + 6);
    *((_QWORD *)Srb + 12) = v4;
    *((_DWORD *)Srb + 5) = 38;
    *((_QWORD *)Srb + 8) = v23;
    *((_DWORD *)Srb + 15) = 112;
    v29 = *(_BYTE *)(v2 + 4450) == 0;
    *((_DWORD *)Srb + 10) = 10;
    if ( v29 )
      v43 = 64;
    v55 = Srb;
    v44 = *((unsigned int *)Srb + 13);
    *((_DWORD *)Srb + 6) = v43;
    Srb[v44 + 8] = *(_BYTE *)(a1 + 88);
    Srb[v44 + 9] = *(_BYTE *)(a1 + 89);
    Srb[v44 + 10] = *(_BYTE *)(a1 + 90);
  }
  else
  {
    *((_DWORD *)Srb + 3) = 256;
    *(_WORD *)Srb = 88;
    v28 = *((_DWORD *)Srb + 3);
    *((_QWORD *)Srb + 6) = v4;
    Srb[2] = 38;
    *((_QWORD *)Srb + 3) = v23;
    *((_DWORD *)Srb + 4) = 112;
    v29 = *(_BYTE *)(v2 + 4450) == 0;
    *((_DWORD *)Srb + 5) = 10;
    if ( v29 )
      v28 = 64;
    *((_DWORD *)Srb + 3) = v28;
    Srb[5] = *(_BYTE *)(a1 + 88);
    Srb[6] = *(_BYTE *)(a1 + 89);
    Srb[7] = *(_BYTE *)(a1 + 90);
  }
  RaSrbSetMiniportContext(v2, Srb, v26 + 1056, v27);
  KeInitializeEvent((PRKEVENT)(v4 + 664), NotificationEvent, 0);
  *(_QWORD *)(v4 + 656) = RaidXrbSignalCompletion;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 30LL, &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids, v4, Srb);
  }
  if ( *(_BYTE *)(v2 + 4450) )
    v30 = RaidAdapterRaiseIrqlAndExecuteXrb(v2, v4);
  else
    v30 = RaidAdapterExecuteXrb(v2, v4);
  v16 = v30;
  if ( v30 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v4 + 664), Executive, 0, 0, 0LL);
    LOBYTE(v31) = Srb[3];
    v16 = RaidSrbStatusToNtStatus(v31);
  }
  v32 = WPP_GLOBAL_Control;
  v21 = 1LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    WPP_SF_DD(
      WPP_GLOBAL_Control->AttachedDevice,
      31LL,
      &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
      (unsigned int)v16,
      (unsigned __int8)Srb[3]);
    v32 = WPP_GLOBAL_Control;
    v21 = 1LL;
  }
  v33 = 0LL;
  if ( v16 < 0 )
  {
    if ( !*(_BYTE *)(v2 + 4450) )
    {
      if ( v32 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v32->Timer) & 0x100) != 0 && BYTE1(v32->Timer) )
        WPP_SF_qD(v32->AttachedDevice, 32LL, &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids, v4, v16);
      goto LABEL_136;
    }
    v16 = 0;
    goto LABEL_67;
  }
  v34 = *((_DWORD *)v23 + 20);
  v35 = p_Process;
  if ( v34 )
  {
    *(_DWORD *)(p_Process + 24) = v34;
    v36 = *((_DWORD *)v23 + 20);
  }
  else
  {
    v36 = *(_DWORD *)(p_Process + 24);
  }
  HIDWORD(MasterIrp->IoStatus.Information) = v36;
  *(_QWORD *)(p_Process + 64) = *((_QWORD *)v23 + 8);
  if ( !*(_BYTE *)(v2 + 4450) )
  {
    *(_DWORD *)(p_Process + 4) = *((_DWORD *)v23 + 18);
    *(_DWORD *)(p_Process + 8) = *((_DWORD *)v23 + 19);
    *(_DWORD *)(p_Process + 28) = *((_DWORD *)v23 + 21);
    *(_DWORD *)(p_Process + 48) = *((_DWORD *)v23 + 22);
    *(_DWORD *)(p_Process + 52) = *((_DWORD *)v23 + 23);
    *(_QWORD *)(p_Process + 56) = *((_QWORD *)v23 + 12);
    *(_BYTE *)(p_Process + 72) = *((_BYTE *)v23 + 104);
    *(_BYTE *)(p_Process + 82) = *((_BYTE *)v23 + 105);
    *(_BYTE *)(p_Process + 89) = *((_BYTE *)v23 + 106);
    *(_BYTE *)(p_Process + 97) = *((_BYTE *)v23 + 107);
    RtlStringCbPrintfW(v60 + 4, 0x1EuLL, (NTSTRSAFE_PCWSTR)v23 + 2);
    *(_QWORD *)&MasterIrp->RequestorMode = 0LL;
    v21 = 1LL;
    MasterIrp->UserIosb = 0LL;
    MasterIrp->AssociatedIrp.IrpCount = *((_DWORD *)v23 + 14);
  }
  *(_BYTE *)(a1 + 1445) = 1;
  v32 = WPP_GLOBAL_Control;
LABEL_42:
  if ( !*(_BYTE *)(v2 + 4450) )
  {
    v37 = v60;
    goto LABEL_49;
  }
  RaidDriverGetName(*(_QWORD *)(v2 + 16), (__int64)v59);
  v37 = v60;
  RtlStringCbPrintfW(v60 + 4, 0x1EuLL, L"%ws.sys", v59[1]);
  v38 = (*(_DWORD *)(v2 + 444) + 7) & 0xFFFFFFF8;
  if ( !v38 )
    v38 = 16;
  v29 = HIDWORD(MasterIrp->IoStatus.Information) == 0;
  MasterIrp->AssociatedIrp.IrpCount = (*(_DWORD *)(v2 + 744) + 4095 + 16 * v38) & 0xFFFFF000;
  if ( v29 )
    HIDWORD(MasterIrp->IoStatus.Information) = *(_DWORD *)(v35 + 24);
  *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)(v2 + 696);
  MasterIrp->UserIosb = (_IO_STATUS_BLOCK *)(v2 + 760);
  v21 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 524LL);
  if ( (v21 & 1) == 0 )
  {
    v32 = WPP_GLOBAL_Control;
LABEL_49:
    v33 = 0LL;
    goto LABEL_50;
  }
  v45 = RaidAllocatePool(NonPagedPoolNx, 0x7CuLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v33 = 0LL;
  v47 = v45;
  if ( v45 )
  {
    v45[2] = 1771264LL;
    *(_DWORD *)v45 = 28;
    *((_DWORD *)v45 + 6) = 96;
    memmove((char *)v45 + 4, "TELEMTRY", 8uLL);
    v47[3] = 1;
    *((_WORD *)v47 + 14) = 2;
    if ( Srb )
    {
      if ( *(_BYTE *)(v2 + 402) == 1 )
      {
        memset(Srb, 0, 0x90uLL);
        *((_DWORD *)Srb + 4) = 144;
        *(_WORD *)Srb = 8;
        v33 = 0LL;
        Srb[2] = 40;
        *((_DWORD *)Srb + 2) = 1397899864;
        *((_DWORD *)Srb + 3) = 1;
        *(_QWORD *)(Srb + 52) = 128LL;
        v55 = Srb;
        *((_DWORD *)Srb + 5) = 2;
        *((_WORD *)Srb + 18) = 2;
        *((_WORD *)Srb + 64) = 1;
        *((_DWORD *)Srb + 33) = 4;
      }
      else
      {
        memset(Srb, 0, 0x58uLL);
      }
    }
    else
    {
      Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v2 + 402), 0);
    }
    if ( Srb )
    {
      v33 = BaseAddress;
      if ( BaseAddress
        || (BaseAddress = (char *)MmAllocateContiguousNodeMemory(
                                    ((*(_DWORD *)(v2 + 444) + 7) & 0xFFFFFFF8) + 1056,
                                    *(_QWORD *)(v2 + 4392),
                                    *(_QWORD *)(v2 + 4400),
                                    *(_QWORD *)(v2 + 4384),
                                    4,
                                    0x80000000),
            (v33 = BaseAddress) != 0LL) )
      {
        v4 = (__int64)(v33 + 16);
        RaidZeroXrb(v33 + 16, v48, 0LL, 0LL);
        *((_QWORD *)v33 + 24) = a2;
        *((_QWORD *)v33 + 25) = v47;
        *((_QWORD *)v33 + 23) = Srb;
        if ( *(_BYTE *)(v2 + 402) == 1 )
        {
          v50 = *((unsigned int *)Srb + 13);
          *((_QWORD *)Srb + 12) = v4;
          *((_QWORD *)Srb + 10) = a2;
          *((_DWORD *)Srb + 5) = 2;
          *((_QWORD *)Srb + 8) = v47;
          *((_DWORD *)Srb + 15) = 124;
          *((_DWORD *)Srb + 6) = 256;
          *((_DWORD *)Srb + 10) = 1;
          Srb[v50 + 8] = *(_BYTE *)(a1 + 88);
          Srb[v50 + 9] = *(_BYTE *)(a1 + 89);
          Srb[v50 + 10] = *(_BYTE *)(a1 + 90);
          v55 = Srb;
        }
        else
        {
          *((_QWORD *)Srb + 6) = v4;
          *(_WORD *)Srb = 88;
          Srb[2] = 2;
          *((_QWORD *)Srb + 3) = v47;
          *((_DWORD *)Srb + 4) = 124;
          *((_DWORD *)Srb + 3) = 256;
          *((_DWORD *)Srb + 5) = 1;
          Srb[5] = *(_BYTE *)(a1 + 88);
          Srb[6] = *(_BYTE *)(a1 + 89);
          Srb[7] = *(_BYTE *)(a1 + 90);
        }
        RaSrbSetMiniportContext(v2, Srb, v33 + 1056, v49);
        KeInitializeEvent((PRKEVENT)(v33 + 680), NotificationEvent, 0);
        *((_QWORD *)v33 + 84) = RaidXrbSignalCompletion;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 33LL, &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids, v4, Srb);
        }
        v51 = RaidAdapterRaiseIrqlAndExecuteXrb(v2, v4);
        if ( v51 >= 0 )
        {
          KeWaitForSingleObject(v33 + 680, Executive, 0, 0, 0LL);
          LOBYTE(v52) = Srb[3];
          v51 = RaidSrbStatusToNtStatus(v52);
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          WPP_SF_DD(
            WPP_GLOBAL_Control->AttachedDevice,
            34LL,
            &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
            (unsigned int)v51,
            (unsigned __int8)Srb[3]);
        }
        v33 = 0LL;
        if ( v51 >= 0 && v47[7] == 1497715456 )
        {
          HIDWORD(MasterIrp->IoStatus.Pointer) = *(_DWORD *)(v2 + 4992) + 33162;
          v53 = *(unsigned __int8 *)(v2 + 4990);
          MasterIrp->IoStatus.Status |= 2u;
          LODWORD(MasterIrp->IoStatus.Information) = v53;
        }
      }
    }
    ExFreePoolWithTag(v47, 0x44436152u);
  }
  else
  {
    v32 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || !BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      goto LABEL_128;
    }
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 35LL, &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids, v46);
  }
  v32 = WPP_GLOBAL_Control;
LABEL_128:
  v16 = (int)v33;
LABEL_50:
  if ( v32 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v32->Timer) & 0x100) != 0 && BYTE1(v32->Timer) )
  {
    WPP_SF_S(v32->AttachedDevice, v21, 1LL, v37 + 4);
    v32 = WPP_GLOBAL_Control;
  }
  v39 = *(_DWORD *)(v2 + 496);
  if ( v39 )
  {
    AdditionalCrashDumpArea = StorPortGetAdditionalCrashDumpArea(v2, p_Process, v39);
    v32 = WPP_GLOBAL_Control;
    v16 = AdditionalCrashDumpArea;
  }
  if ( v16 >= 0 )
  {
    v41 = a2;
    a2->IoStatus.Information = 104LL;
    goto LABEL_56;
  }
  if ( v32 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v32->Timer) & 0x100) != 0 && BYTE1(v32->Timer) )
    WPP_SF_D(v32->AttachedDevice, 37LL, &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids, (unsigned int)v16);
LABEL_136:
  v41 = a2;
LABEL_56:
  if ( v16 < 0 )
  {
    v19 = v58;
    goto LABEL_138;
  }
LABEL_57:
  if ( BaseAddress )
  {
    RaidXrbDeallocateResources(v4, 0LL);
    MmFreeContiguousMemory(BaseAddress);
  }
  if ( Srb )
  {
    if ( Srb[2] == 40 )
    {
      v54 = v55;
      if ( !v55 )
        v54 = Srb;
      *((_QWORD *)v54 + 10) = v33;
      *((_QWORD *)v54 + 13) = v33;
    }
    else
    {
      *((_QWORD *)Srb + 6) = v33;
      *((_QWORD *)Srb + 7) = v33;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x44436152u);
  return RaidCompleteRequestEx(v41, 0, v16);
}
