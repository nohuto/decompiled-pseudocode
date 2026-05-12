/*
 * XREFs of RaUnitScsiGetDumpPointersIoctl @ 0x1C001162C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0001D30 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0002320 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     RaidZeroXrb @ 0x1C00024B0 (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0002F38 (RaSrbSetMiniportContext.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0003544 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidXrbDeallocateResources @ 0x1C000356C (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00036EC (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00038DC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0003924 (RaidAdapterExecuteXrb.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C000EECC (StorPortGetAdditionalCrashDumpArea.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C000F4E4 (RaidQueryCrashdumpFunctions.c)
 *     RaidDriverGetName @ 0x1C000F5AC (RaidDriverGetName.c)
 *     RtlStringCbPrintfW @ 0x1C0013C10 (RtlStringCbPrintfW.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C001508C (RaidGetTelemetryLogPageIds.c)
 *     memmove @ 0x1C001AA40 (memmove.c)
 *     memset @ 0x1C001AD80 (memset.c)
 *     WPP_SF_ @ 0x1C002AE28 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1C002AE50 (WPP_SF_D.c)
 *     WPP_SF_DD @ 0x1C002AE8C (WPP_SF_DD.c)
 *     WPP_SF_qD @ 0x1C002AF64 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C002B074 (WPP_SF_qq.c)
 *     WPP_SF_S @ 0x1C0039260 (WPP_SF_S.c)
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
  int v27; // eax
  bool v28; // zf
  int v29; // eax
  PDEVICE_OBJECT v30; // rcx
  __int64 v31; // r8
  char *v32; // r15
  int v33; // eax
  __int64 v34; // r15
  int v35; // eax
  wchar_t *v36; // r12
  unsigned int v37; // ecx
  signed int AdditionalCrashDumpArea; // eax
  IRP *v39; // rsi
  int v41; // eax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // r9
  _DWORD *v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // esi
  int v49; // eax
  _BYTE *v50; // rax
  _BYTE *v51; // [rsp+30h] [rbp-78h]
  _MDL *v52; // [rsp+38h] [rbp-70h]
  PVOID P; // [rsp+40h] [rbp-68h]
  wchar_t *v54; // [rsp+48h] [rbp-60h]
  _QWORD v55[11]; // [rsp+50h] [rbp-58h] BYREF
  wchar_t *v56; // [rsp+B0h] [rbp+8h]
  __int64 p_Process; // [rsp+C0h] [rbp+18h]
  char *BaseAddress; // [rsp+C8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 24);
  P = 0LL;
  BaseAddress = 0LL;
  v4 = 0LL;
  Srb = 0LL;
  v6 = 0;
  v56 = 0LL;
  memset(v55, 0, 16);
  v51 = 0LL;
  a2->IoStatus.Information = 0LL;
  if ( a2->RequestorMode )
  {
    v16 = -1073741790;
LABEL_73:
    v39 = a2;
    return RaidCompleteRequestEx(v39, 0, v16);
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < 0x68 )
  {
    v16 = -1073741789;
    goto LABEL_73;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  memset(MasterIrp, 0, 0x68uLL);
  Pool = (_MDL *)RaidAllocatePool(NonPagedPoolNx, 0x160uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v52 = Pool;
  v9 = Pool;
  if ( !Pool )
  {
    v16 = -1073741670;
    goto LABEL_73;
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
  RaidGetTelemetryLogPageIds(*(unsigned int *)(v2 + 4356), &v9[5], &v9[5].StartVa);
  v11 = *(_QWORD *)(v2 + 528);
  if ( (*(_DWORD *)(v11 + 184) & 0x80u) != 0 && (*(_DWORD *)(v11 + 188) & 2) != 0 )
    v12 = HiberFileHybridPriority;
  else
    v12 = -1;
  WORD1(v9[5].StartVa) = v12;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
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
LABEL_15:
        MasterIrp->Overlay.AsynchronousParameters.UserApcContext = p_ByteCount;
        MasterIrp->Overlay.AllocationSize.QuadPart = (__int64)StorDumpDevicePowerOn;
        goto LABEL_16;
      }
    }
  }
  *(_WORD *)(*(_QWORD *)(a1 + 24) + 5154LL) = 0;
  if ( v6 )
    goto LABEL_15;
LABEL_16:
  v16 = 0;
  *(_QWORD *)&v9[6].Size = a1 + 1446;
  v17 = *(_QWORD *)(a1 + 24) + 4989LL;
  v9[6].Process = (struct _EPROCESS *)(a1 + 1447);
  *(_QWORD *)&v9[6].ByteCount = v17;
  v18 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, 0x48uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v54 = v18;
  v19 = v18;
  if ( !v18 )
    goto LABEL_81;
  memset(v18, 0, 0x48uLL);
  v20 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, 0x48uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v56 = v20;
  if ( !v20 )
    goto LABEL_81;
  memset(v20, 0, 0x48uLL);
  RtlStringCbPrintfW(v19 + 4, 0x1EuLL, L"diskdump.sys");
  RtlStringCbPrintfW(v19 + 19, 0x1EuLL, L"storport.sys");
  *(_QWORD *)v19 = v56;
  *(_QWORD *)v56 = 0LL;
  *(_QWORD *)&MasterIrp->Flags = 0LL;
  MasterIrp->ThreadListEntry.Flink = 0LL;
  MasterIrp->MdlAddress = v52;
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
    v30 = WPP_GLOBAL_Control;
LABEL_70:
    v34 = p_Process;
    goto LABEL_45;
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
                                 0x80000000,
                                 0),
        BaseAddress = (char *)ContiguousNodeMemory,
        (v26 = ContiguousNodeMemory) == 0) )
  {
LABEL_81:
    v39 = a2;
    v16 = -1073741670;
LABEL_138:
    ExFreePoolWithTag(v52, 0x44436152u);
    if ( v19 )
      ExFreePoolWithTag(v19, 0x44436152u);
    v32 = 0LL;
    if ( v56 )
      ExFreePoolWithTag(v56, 0x44436152u);
    goto LABEL_60;
  }
  v4 = ContiguousNodeMemory + 16;
  RaidZeroXrb(ContiguousNodeMemory + 16, v25, 0, 0LL);
  *(_BYTE *)(v4 + 17) |= 8u;
  *(_QWORD *)(v4 + 176) = a2;
  *(_QWORD *)(v4 + 184) = v23;
  *(_QWORD *)(v4 + 168) = Srb;
  if ( *(_BYTE *)(v2 + 402) == 1 )
  {
    *((_QWORD *)Srb + 10) = a2;
    *((_DWORD *)Srb + 6) = 256;
    v41 = *((_DWORD *)Srb + 6);
    *((_QWORD *)Srb + 12) = v4;
    *((_DWORD *)Srb + 5) = 38;
    *((_QWORD *)Srb + 8) = v23;
    *((_DWORD *)Srb + 15) = 112;
    v28 = *(_BYTE *)(v2 + 4450) == 0;
    *((_DWORD *)Srb + 10) = 10;
    if ( v28 )
      v41 = 64;
    v51 = Srb;
    v42 = *((unsigned int *)Srb + 13);
    *((_DWORD *)Srb + 6) = v41;
    Srb[v42 + 8] = *(_BYTE *)(a1 + 88);
    Srb[v42 + 9] = *(_BYTE *)(a1 + 89);
    Srb[v42 + 10] = *(_BYTE *)(a1 + 90);
  }
  else
  {
    *((_DWORD *)Srb + 3) = 256;
    *(_WORD *)Srb = 88;
    v27 = *((_DWORD *)Srb + 3);
    *((_QWORD *)Srb + 6) = v4;
    Srb[2] = 38;
    *((_QWORD *)Srb + 3) = v23;
    *((_DWORD *)Srb + 4) = 112;
    v28 = *(_BYTE *)(v2 + 4450) == 0;
    *((_DWORD *)Srb + 5) = 10;
    if ( v28 )
      v27 = 64;
    *((_DWORD *)Srb + 3) = v27;
    Srb[5] = *(_BYTE *)(a1 + 88);
    Srb[6] = *(_BYTE *)(a1 + 89);
    Srb[7] = *(_BYTE *)(a1 + 90);
  }
  RaSrbSetMiniportContext(v2, (__int64)Srb, v26 + 1056);
  KeInitializeEvent((PRKEVENT)(v4 + 664), NotificationEvent, 0);
  *(_QWORD *)(v4 + 656) = RaidXrbSignalCompletion;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 30LL, &WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids, v4, Srb);
  }
  if ( *(_BYTE *)(v2 + 4450) )
    v29 = RaidAdapterRaiseIrqlAndExecuteXrb(v2, v4);
  else
    v29 = RaidAdapterExecuteXrb(v2, v4);
  v16 = v29;
  if ( v29 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v4 + 664), Executive, 0, 0, 0LL);
    v16 = RaidSrbStatusToNtStatus(Srb[3]);
  }
  v30 = WPP_GLOBAL_Control;
  v31 = (__int64)&WPP_GLOBAL_Control;
  v21 = 1LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    WPP_SF_DD(
      WPP_GLOBAL_Control->AttachedDevice,
      31LL,
      &WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
      (unsigned int)v16,
      (unsigned __int8)Srb[3]);
    v30 = WPP_GLOBAL_Control;
    v31 = (__int64)&WPP_GLOBAL_Control;
    v21 = 1LL;
  }
  v32 = 0LL;
  if ( v16 < 0 )
  {
    if ( !*(_BYTE *)(v2 + 4450) )
    {
      if ( v30 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v30->Timer) & 0x100) != 0 && BYTE1(v30->Timer) )
        WPP_SF_qD(v30->AttachedDevice, 32LL, &WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids, v4, v16);
      goto LABEL_136;
    }
    v16 = 0;
    goto LABEL_70;
  }
  v33 = *((_DWORD *)v23 + 20);
  v34 = p_Process;
  if ( v33 )
  {
    *(_DWORD *)(p_Process + 24) = v33;
    v35 = *((_DWORD *)v23 + 20);
  }
  else
  {
    v35 = *(_DWORD *)(p_Process + 24);
  }
  HIDWORD(MasterIrp->IoStatus.Information) = v35;
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
    RtlStringCbPrintfW(v56 + 4, 0x1EuLL, (NTSTRSAFE_PCWSTR)v23 + 2);
    *(_QWORD *)&MasterIrp->RequestorMode = 0LL;
    v21 = 1LL;
    MasterIrp->UserIosb = 0LL;
    MasterIrp->AssociatedIrp.IrpCount = *((_DWORD *)v23 + 14);
  }
  *(_BYTE *)(a1 + 1445) = 1;
  v30 = WPP_GLOBAL_Control;
LABEL_45:
  if ( !*(_BYTE *)(v2 + 4450) )
  {
    v36 = v56;
    goto LABEL_52;
  }
  RaidDriverGetName(*(_QWORD *)(v2 + 16), (__int64)v55);
  v36 = v56;
  RtlStringCbPrintfW(v56 + 4, 0x1EuLL, L"%ws.sys", v55[1]);
  v37 = (*(_DWORD *)(v2 + 444) + 7) & 0xFFFFFFF8;
  if ( !v37 )
    v37 = 16;
  v28 = HIDWORD(MasterIrp->IoStatus.Information) == 0;
  MasterIrp->AssociatedIrp.IrpCount = (*(_DWORD *)(v2 + 744) + 4095 + 16 * v37) & 0xFFFFF000;
  if ( v28 )
    HIDWORD(MasterIrp->IoStatus.Information) = *(_DWORD *)(v34 + 24);
  *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)(v2 + 696);
  MasterIrp->UserIosb = (_IO_STATUS_BLOCK *)(v2 + 760);
  v21 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 524LL);
  if ( (v21 & 1) == 0 )
  {
    v30 = WPP_GLOBAL_Control;
LABEL_52:
    v32 = 0LL;
    goto LABEL_53;
  }
  v43 = RaidAllocatePool(NonPagedPoolNx, 0x7CuLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v32 = 0LL;
  v45 = v43;
  if ( v43 )
  {
    v43[2] = 1771264LL;
    *(_DWORD *)v43 = 28;
    *((_DWORD *)v43 + 6) = 96;
    memmove((char *)v43 + 4, "TELEMTRY", 8uLL);
    v45[3] = 1;
    *((_WORD *)v45 + 14) = 2;
    if ( Srb )
    {
      if ( *(_BYTE *)(v2 + 402) == 1 )
      {
        memset(Srb, 0, 0x90uLL);
        *((_DWORD *)Srb + 4) = 144;
        *(_WORD *)Srb = 8;
        v32 = 0LL;
        Srb[2] = 40;
        *((_DWORD *)Srb + 2) = 1397899864;
        *((_DWORD *)Srb + 3) = 1;
        *(_QWORD *)(Srb + 52) = 128LL;
        v51 = Srb;
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
      v32 = BaseAddress;
      if ( BaseAddress
        || (BaseAddress = (char *)MmAllocateContiguousNodeMemory(
                                    ((*(_DWORD *)(v2 + 444) + 7) & 0xFFFFFFF8) + 1056,
                                    *(_QWORD *)(v2 + 4392),
                                    *(_QWORD *)(v2 + 4400),
                                    *(_QWORD *)(v2 + 4384),
                                    4,
                                    0x80000000,
                                    (_DWORD)v51),
            (v32 = BaseAddress) != 0LL) )
      {
        v4 = (__int64)(v32 + 16);
        RaidZeroXrb((__int64)(v32 + 16), v46, 0, 0LL);
        *((_QWORD *)v32 + 24) = a2;
        *((_QWORD *)v32 + 25) = v45;
        *((_QWORD *)v32 + 23) = Srb;
        if ( *(_BYTE *)(v2 + 402) == 1 )
        {
          v47 = *((unsigned int *)Srb + 13);
          *((_QWORD *)Srb + 12) = v4;
          *((_QWORD *)Srb + 10) = a2;
          *((_DWORD *)Srb + 5) = 2;
          *((_QWORD *)Srb + 8) = v45;
          *((_DWORD *)Srb + 15) = 124;
          *((_DWORD *)Srb + 6) = 256;
          *((_DWORD *)Srb + 10) = 1;
          Srb[v47 + 8] = *(_BYTE *)(a1 + 88);
          Srb[v47 + 9] = *(_BYTE *)(a1 + 89);
          Srb[v47 + 10] = *(_BYTE *)(a1 + 90);
          v51 = Srb;
        }
        else
        {
          *((_QWORD *)Srb + 6) = v4;
          *(_WORD *)Srb = 88;
          Srb[2] = 2;
          *((_QWORD *)Srb + 3) = v45;
          *((_DWORD *)Srb + 4) = 124;
          *((_DWORD *)Srb + 3) = 256;
          *((_DWORD *)Srb + 5) = 1;
          Srb[5] = *(_BYTE *)(a1 + 88);
          Srb[6] = *(_BYTE *)(a1 + 89);
          Srb[7] = *(_BYTE *)(a1 + 90);
        }
        RaSrbSetMiniportContext(v2, (__int64)Srb, (__int64)(v32 + 1056));
        KeInitializeEvent((PRKEVENT)(v32 + 680), NotificationEvent, 0);
        *((_QWORD *)v32 + 84) = RaidXrbSignalCompletion;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 33LL, &WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids, v4, Srb);
        }
        v48 = RaidAdapterRaiseIrqlAndExecuteXrb(v2, v4);
        if ( v48 >= 0 )
        {
          KeWaitForSingleObject(v32 + 680, Executive, 0, 0, 0LL);
          v48 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          WPP_SF_DD(
            WPP_GLOBAL_Control->AttachedDevice,
            34LL,
            &WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
            (unsigned int)v48,
            (unsigned __int8)Srb[3]);
        }
        v32 = 0LL;
        if ( v48 >= 0 && v45[7] == 1497715456 )
        {
          HIDWORD(MasterIrp->IoStatus.Pointer) = *(_DWORD *)(v2 + 4992) + 33162;
          v49 = *(unsigned __int8 *)(v2 + 4990);
          MasterIrp->IoStatus.Status |= 2u;
          LODWORD(MasterIrp->IoStatus.Information) = v49;
        }
      }
    }
    ExFreePoolWithTag(v45, 0x44436152u);
  }
  else
  {
    v30 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || !BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      goto LABEL_128;
    }
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 35LL, &WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids, v44);
  }
  v30 = WPP_GLOBAL_Control;
LABEL_128:
  v16 = (int)v32;
LABEL_53:
  if ( v30 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v30->Timer) & 0x100) != 0 && BYTE1(v30->Timer) )
  {
    WPP_SF_S(v30->AttachedDevice, v21, 1LL, v36 + 4);
    v30 = WPP_GLOBAL_Control;
  }
  v31 = *(unsigned int *)(v2 + 496);
  if ( (_DWORD)v31 )
  {
    AdditionalCrashDumpArea = StorPortGetAdditionalCrashDumpArea(v2, p_Process, v31);
    v30 = WPP_GLOBAL_Control;
    v16 = AdditionalCrashDumpArea;
  }
  if ( v16 >= 0 )
  {
    v39 = a2;
    a2->IoStatus.Information = 104LL;
    goto LABEL_59;
  }
  if ( v30 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v30->Timer) & 0x100) != 0 && BYTE1(v30->Timer) )
    WPP_SF_D(v30->AttachedDevice, 37LL, &WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids, (unsigned int)v16);
LABEL_136:
  v39 = a2;
LABEL_59:
  if ( v16 < 0 )
  {
    v19 = v54;
    goto LABEL_138;
  }
LABEL_60:
  if ( BaseAddress )
  {
    RaidXrbDeallocateResources(v4, 0, v31);
    MmFreeContiguousMemory(BaseAddress);
  }
  if ( Srb )
  {
    if ( Srb[2] == 40 )
    {
      v50 = v51;
      if ( !v51 )
        v50 = Srb;
      *((_QWORD *)v50 + 10) = v32;
      *((_QWORD *)v50 + 13) = v32;
    }
    else
    {
      *((_QWORD *)Srb + 6) = v32;
      *((_QWORD *)Srb + 7) = v32;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x44436152u);
  return RaidCompleteRequestEx(v39, 0, v16);
}
