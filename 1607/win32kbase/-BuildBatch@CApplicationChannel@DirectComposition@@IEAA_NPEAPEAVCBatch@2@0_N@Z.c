/*
 * XREFs of ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0041A44
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z @ 0x1C003DB48 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1A0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C003EA44 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C003F5F4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C003F888 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0041314 (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0041388 (-EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0041408 (-EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBindingAddCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00414A4 (-EmitBindingAddCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004158C (-EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0041664 (-EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00416E8 (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0041844 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007553C (-EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00755C8 (-EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0075664 (-EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00756F8 (-EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     EtwTraceDCompCommitBatchEvent @ 0x1C0079690 (EtwTraceDCompCommitBatchEvent.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C007A42C (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00E45D8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

char __fastcall DirectComposition::CApplicationChannel::BuildBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2,
        struct DirectComposition::CBatch **a3,
        char a4)
{
  char v8; // di
  struct DirectComposition::CBatch *BatchFragment; // r14
  struct DirectComposition::CBatch *v10; // rsi
  __int64 i; // rsi
  char v12; // al
  char *v14; // rdx
  unsigned int v15; // edx
  DirectComposition::CEvent *v16; // rcx
  char *v17; // rax
  struct DirectComposition::CBatch *v18; // [rsp+60h] [rbp+40h] BYREF
  void *v19; // [rsp+68h] [rbp+48h] BYREF
  void *v20; // [rsp+70h] [rbp+50h] BYREF

  v8 = 1;
  if ( *((int *)this + 6) > 2 )
    DirectComposition::CApplicationChannel::ClearAnimationTimeList(this);
  DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
  if ( (*((_BYTE *)this + 248) & 2) != 0 )
  {
    DirectComposition::CApplicationChannel::RemoveExpiredAnimations(this);
    *((_BYTE *)this + 248) &= ~2u;
  }
  BatchFragment = 0LL;
  v10 = 0LL;
  if ( (*((_BYTE *)this + 48) & 2) == 0
    || *((_QWORD *)this + 23)
    || (*((_BYTE *)this + 248) & 0x60) != 0
    || *((_QWORD *)this + 54)
    || *((_QWORD *)this + 57)
    || *((_QWORD *)this + 51)
    || *((_QWORD *)this + 56)
    || *((_QWORD *)this + 52)
    || *((_QWORD *)this + 53)
    || *((DirectComposition::CApplicationChannel **)this + 68) != (DirectComposition::CApplicationChannel *)((char *)this + 544)
    || *((DirectComposition::CApplicationChannel **)this + 70) != (DirectComposition::CApplicationChannel *)((char *)this + 560)
    || *((DirectComposition::CApplicationChannel **)this + 72) != (DirectComposition::CApplicationChannel *)((char *)this + 576)
    || *((DirectComposition::CApplicationChannel **)this + 74) != (DirectComposition::CApplicationChannel *)((char *)this + 592)
    || *((_QWORD *)this + 94)
    || ((*((_DWORD *)this + 152) - 1) & 0xFFFFFFFD) == 0 )
  {
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, 1, 1);
    *((_BYTE *)BatchFragment + 32) ^= (((*((_BYTE *)this + 48) & 2) == 0) ^ *((_BYTE *)BatchFragment + 32)) & 1;
    *((_BYTE *)this + 48) |= 2u;
    EtwTraceDCompCommitBatchEvent(*((unsigned int *)this + 7), BatchFragment, *((unsigned int *)BatchFragment + 4));
    for ( i = *((_QWORD *)this + 55); i; i = *(_QWORD *)(i + 8) )
    {
      DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)(*(_QWORD *)i + 16LL));
      *(_DWORD *)(i + 24) |= 2u;
    }
    *((_QWORD *)BatchFragment + 10) = *((_QWORD *)this + 55);
    *((_QWORD *)this + 55) = 0LL;
    v18 = BatchFragment;
    if ( !DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, &v18)
      || !DirectComposition::CTelemetryInfo::EmitAnimationCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 544),
            &v18)
      || !DirectComposition::CTelemetryInfo::EmitBeginInteractionCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 544),
            &v18)
      || !DirectComposition::CTelemetryInfo::EmitUpdateInteractionCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 544),
            &v18)
      || !DirectComposition::CTelemetryInfo::EmitEndInteractionCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 544),
            &v18)
      || !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v18)
      || !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v18)
      || !DirectComposition::CApplicationChannel::EmitCreationCommands(this, &v18)
      || !DirectComposition::CApplicationChannel::EmitSharedSectionUpdateCommands(this, &v18)
      || !DirectComposition::CApplicationChannel::EmitUpdateCommands(this, &v18) )
    {
      goto LABEL_60;
    }
    if ( *((_QWORD *)this + 94) )
    {
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v18, 0x30uLL, &v19) )
      {
        v14 = (char *)v19;
        *(_DWORD *)v19 = 48;
        *((_DWORD *)v14 + 1) = 28;
        *((_DWORD *)v14 + 11) = *(_DWORD *)(*((_QWORD *)this + 94) + 24LL);
        *((_DWORD *)v14 + 2) = *((_DWORD *)this + 190);
        *((_DWORD *)v14 + 3) = *((_DWORD *)this + 191);
        *((_DWORD *)v14 + 4) = *((_DWORD *)this + 192);
        *((_DWORD *)v14 + 5) = *((_DWORD *)this + 193);
        *((_DWORD *)v14 + 6) = *((_DWORD *)this + 194);
        *(_QWORD *)(v14 + 28) = *((_QWORD *)this + 98);
        *(_QWORD *)(v14 + 36) = *((_QWORD *)this + 99);
        DirectComposition::CApplicationChannel::ReleaseResource(
          this,
          *((struct DirectComposition::CResourceMarshaler **)this + 94));
        v16 = (DirectComposition::CEvent *)*((_QWORD *)this + 93);
        *((_QWORD *)this + 94) = 0LL;
        if ( v16 )
          DirectComposition::CEvent::`scalar deleting destructor'(v16, v15);
        *((_QWORD *)this + 93) = 0LL;
      }
      if ( *((_QWORD *)this + 94) )
        goto LABEL_60;
    }
    if ( !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v18)
      || !DirectComposition::CApplicationChannel::EmitBindingAddCommands(this, &v18)
      || !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v18) )
    {
      goto LABEL_60;
    }
    if ( ((*((_DWORD *)this + 152) - 1) & 0xFFFFFFFD) == 0
      && DirectComposition::CBatch::EnsureBatchBuffer(&v18, 0xCuLL, &v20) )
    {
      v17 = (char *)v20;
      *(_DWORD *)v20 = 12;
      *(_QWORD *)(v17 + 4) = 0LL;
      *((_DWORD *)v17 + 1) = 26;
      if ( *((_DWORD *)this + 152) == 1 )
      {
        *((_DWORD *)v17 + 2) = 1;
        *((_DWORD *)this + 152) = 2;
      }
      else
      {
        *((_DWORD *)v17 + 2) = 0;
        *((_DWORD *)this + 152) = 0;
      }
    }
    if ( (*((_DWORD *)this + 152) & 0xFFFFFFFD) != 0 )
LABEL_60:
      v8 = 0;
    v10 = v18;
  }
  else
  {
    if ( !a4 )
    {
      if ( *((_QWORD *)this + 46) )
      {
        DirectComposition::CCriticalSection::AcquireExclusive(*((struct _ERESOURCE **)this + 47));
        if ( !*((_DWORD *)this + 58) )
          KeSetEvent(**((PRKEVENT **)this + 46), 1, 0);
        ExReleaseResourceLite(*((PERESOURCE *)this + 47));
        KeLeaveCriticalRegion();
      }
      goto LABEL_45;
    }
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, 1, 1);
    EtwTraceDCompCommitBatchEvent(*((unsigned int *)this + 7), BatchFragment, *((unsigned int *)BatchFragment + 4));
    v10 = BatchFragment;
  }
  if ( v10 )
    *(_BYTE *)(*((_QWORD *)v10 + 12) + 64LL) = 0;
LABEL_45:
  *a2 = BatchFragment;
  *a3 = v10;
  if ( v8 )
  {
    if ( v10 )
    {
      v12 = *((_BYTE *)this + 248);
      if ( (v12 & 0x10) != 0 )
      {
        *((_BYTE *)this + 248) = v12 & 0xEF;
        *((_BYTE *)v10 + 32) |= 8u;
      }
    }
    *((_BYTE *)this + 248) &= ~1u;
  }
  return v8;
}
