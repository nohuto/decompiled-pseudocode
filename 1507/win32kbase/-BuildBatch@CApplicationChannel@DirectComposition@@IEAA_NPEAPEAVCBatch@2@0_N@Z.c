/*
 * XREFs of ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C002F754
 * Callers:
 *     NtDCompositionCommitChannel @ 0x1C002D0E0 (NtDCompositionCommitChannel.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z @ 0x1C0030914 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z.c)
 * Callees:
 *     EtwTraceDCompCommitBatchEvent @ 0x1C0012B60 (EtwTraceDCompCommitBatchEvent.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C34 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C002D868 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAAX_N@Z @ 0x1C002DCE4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAAX_N@Z.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C002DFB0 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002EE20 (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002EE80 (-EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002EF00 (-EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBindingAddCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002EF9C (-EmitBindingAddCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002F084 (-EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002F15C (-EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002F1E0 (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C002F340 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0030D5C (-EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0030DE8 (-EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0030E88 (-EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0030F1C (-EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00D4FD0 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
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
  char v11; // dl
  char v13; // al
  __int64 i; // rsi
  char *v15; // rax
  char *v16; // rcx
  struct DirectComposition::CBatch *v17; // [rsp+60h] [rbp+40h] BYREF
  void *v18; // [rsp+68h] [rbp+48h] BYREF
  void *v19; // [rsp+70h] [rbp+50h] BYREF

  v8 = 1;
  if ( *((int *)this + 6) > 2 )
    DirectComposition::CApplicationChannel::ClearAnimationTimeList(this);
  DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this, 0);
  if ( (*((_BYTE *)this + 184) & 2) != 0 )
  {
    DirectComposition::CApplicationChannel::RemoveExpiredAnimations(this);
    *((_BYTE *)this + 184) &= ~2u;
  }
  BatchFragment = 0LL;
  v10 = 0LL;
  if ( (*((_BYTE *)this + 48) & 2) == 0
    || *((_QWORD *)this + 15)
    || (v11 = *((_BYTE *)this + 184), (v11 & 0x60) != 0)
    || *((_QWORD *)this + 53)
    || *((_QWORD *)this + 56)
    || *((_QWORD *)this + 50)
    || *((_QWORD *)this + 55)
    || *((_QWORD *)this + 51)
    || *((_QWORD *)this + 52)
    || *((DirectComposition::CApplicationChannel **)this + 67) != (DirectComposition::CApplicationChannel *)((char *)this + 536)
    || *((DirectComposition::CApplicationChannel **)this + 69) != (DirectComposition::CApplicationChannel *)((char *)this + 552)
    || *((DirectComposition::CApplicationChannel **)this + 71) != (DirectComposition::CApplicationChannel *)((char *)this + 568)
    || *((DirectComposition::CApplicationChannel **)this + 73) != (DirectComposition::CApplicationChannel *)((char *)this + 584)
    || v11 < 0
    || ((*((_DWORD *)this + 150) - 1) & 0xFFFFFFFD) == 0 )
  {
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, 1, 1);
    *((_BYTE *)BatchFragment + 32) ^= (*((_BYTE *)BatchFragment + 32) ^ ((*((_BYTE *)this + 48) & 2) == 0)) & 1;
    *((_BYTE *)this + 48) |= 2u;
    EtwTraceDCompCommitBatchEvent(*((_DWORD *)this + 7), (int)BatchFragment, *((_DWORD *)BatchFragment + 4));
    for ( i = *((_QWORD *)this + 54); i; i = *(_QWORD *)(i + 8) )
    {
      DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)(*(_QWORD *)i + 16LL));
      *(_DWORD *)(i + 24) |= 2u;
    }
    *((_QWORD *)BatchFragment + 10) = *((_QWORD *)this + 54);
    *((_QWORD *)this + 54) = 0LL;
    v17 = BatchFragment;
    if ( !DirectComposition::CApplicationChannel::EmitCallbackIDCommand(
            this,
            (struct DirectComposition::CBatch ***)&v17)
      || !DirectComposition::CTelemetryInfo::EmitAnimationCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 536),
            &v17)
      || !DirectComposition::CTelemetryInfo::EmitBeginInteractionCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 536),
            &v17)
      || !DirectComposition::CTelemetryInfo::EmitUpdateInteractionCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 536),
            &v17)
      || !DirectComposition::CTelemetryInfo::EmitEndInteractionCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 536),
            &v17)
      || !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(
            this,
            (struct DirectComposition::CBatch ***)&v17)
      || !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v17)
      || !DirectComposition::CApplicationChannel::EmitCreationCommands(this, &v17)
      || !DirectComposition::CApplicationChannel::EmitSharedSectionUpdateCommands(this, &v17)
      || !DirectComposition::CApplicationChannel::EmitUpdateCommands(this, &v17)
      || !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(
            this,
            (struct DirectComposition::CBatch ***)&v17)
      || !DirectComposition::CApplicationChannel::EmitBindingAddCommands(
            this,
            (struct DirectComposition::CBatch ***)&v17)
      || !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v17) )
    {
      goto LABEL_61;
    }
    if ( ((*((_DWORD *)this + 150) - 1) & 0xFFFFFFFD) == 0
      && DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)&v17, 0xCuLL, &v18) )
    {
      v15 = (char *)v18;
      *(_DWORD *)v18 = 12;
      *(_QWORD *)(v15 + 4) = 0LL;
      *((_DWORD *)v15 + 1) = 22;
      if ( *((_DWORD *)this + 150) == 1 )
      {
        *((_DWORD *)v15 + 2) = 1;
        *((_DWORD *)this + 150) = 2;
      }
      else
      {
        *((_DWORD *)v15 + 2) = 0;
        *((_DWORD *)this + 150) = 0;
      }
    }
    if ( (*((_DWORD *)this + 150) & 0xFFFFFFFD) != 0 )
      goto LABEL_61;
    if ( *((char *)this + 184) < 0
      && DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)&v17, 0x30uLL, &v19) )
    {
      v16 = (char *)v19;
      *(_DWORD *)v19 = 48;
      *((_DWORD *)v16 + 1) = 24;
      *((_DWORD *)v16 + 2) = *((_DWORD *)this + 173);
      *((_DWORD *)v16 + 3) = *((_DWORD *)this + 174);
      *((_DWORD *)v16 + 4) = *((_DWORD *)this + 175);
      *((_DWORD *)v16 + 5) = *((_DWORD *)this + 176);
      *((_DWORD *)v16 + 6) = *((_DWORD *)this + 177);
      *(_QWORD *)(v16 + 28) = *((_QWORD *)this + 89);
      *(_QWORD *)(v16 + 36) = *((_QWORD *)this + 90);
      *((_DWORD *)v16 + 11) = *((_DWORD *)this + 182);
      *((_BYTE *)this + 184) &= ~0x80u;
    }
    if ( *((char *)this + 184) < 0 )
LABEL_61:
      v8 = 0;
    v10 = v17;
  }
  else
  {
    if ( !a4 )
    {
      if ( *((_QWORD *)this + 45) )
      {
        DirectComposition::CCriticalSection::AcquireExclusive(*((struct _ERESOURCE **)this + 46));
        if ( !*((_DWORD *)this + 42) )
          KeSetEvent(**((PRKEVENT **)this + 45), 1, 0);
        ExReleaseResourceLite(*((PERESOURCE *)this + 46));
        KeLeaveCriticalRegion();
      }
      goto LABEL_22;
    }
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, 1, 1);
    EtwTraceDCompCommitBatchEvent(*((_DWORD *)this + 7), (int)BatchFragment, *((_DWORD *)BatchFragment + 4));
    v10 = BatchFragment;
  }
  if ( v10 )
    *(_BYTE *)(*((_QWORD *)v10 + 12) + 64LL) = 0;
LABEL_22:
  *a2 = BatchFragment;
  *a3 = v10;
  if ( v8 )
  {
    if ( v10 )
    {
      v13 = *((_BYTE *)this + 184);
      if ( (v13 & 0x10) != 0 )
      {
        *((_BYTE *)this + 184) = v13 & 0xEF;
        *((_BYTE *)v10 + 32) |= 8u;
      }
    }
    *((_BYTE *)this + 184) &= ~1u;
  }
  return v8;
}
