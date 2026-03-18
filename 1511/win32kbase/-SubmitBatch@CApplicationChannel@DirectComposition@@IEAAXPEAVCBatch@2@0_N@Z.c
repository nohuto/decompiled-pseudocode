/*
 * XREFs of ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_N@Z @ 0x1C001B040
 * Callers:
 *     NtDCompositionSubmitDWMBatch @ 0x1C001A040 (NtDCompositionSubmitDWMBatch.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z @ 0x1C001DADC (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z.c)
 * Callees:
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C001A4F8 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::SubmitBatch(
        DirectComposition::CApplicationChannel *this,
        LARGE_INTEGER *a2,
        struct DirectComposition::CBatch *a3,
        char a4)
{
  LARGE_INTEGER *v5; // r14
  struct _ERESOURCE *v7; // rbx
  __int64 v8; // rdi
  struct _ERESOURCE *v9; // rbx
  LONGLONG QuadPart; // rax
  __int64 v11; // rbx
  LARGE_INTEGER *v12; // rbx

  v5 = a2;
  if ( a4 )
    a2[8] = KeQueryPerformanceCounter(0LL);
  else
    a2[8].QuadPart = 0LL;
  v7 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v7, 1u);
  if ( *((_QWORD *)this + 45) )
    DirectComposition::CCriticalSection::AcquireExclusive(*((DirectComposition::CCriticalSection **)this + 46));
  if ( *((int *)this + 6) <= 0
    && (v8 = *((_QWORD *)this + 5),
        v9 = *(struct _ERESOURCE **)(v8 + 8),
        KeEnterCriticalRegion(),
        ExAcquireResourceSharedLite(v9, 1u),
        LOBYTE(v9) = *(_DWORD *)(v8 + 148) != 0,
        ExReleaseResourceLite(*(PERESOURCE *)(v8 + 8)),
        KeLeaveCriticalRegion(),
        (_BYTE)v9) )
  {
    QuadPart = v5->QuadPart;
    v11 = *((_QWORD *)this + 5);
    v5[3] = *v5;
    if ( QuadPart )
      *(_QWORD *)(QuadPart + 24) = a3;
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(v11 + 96), (PSLIST_ENTRY)v5);
    KeSetEvent(**(PRKEVENT **)(v11 + 88), 1, 0);
  }
  else
  {
    if ( (v5[4].LowPart & 1) != 0 )
      *((_BYTE *)this + 48) &= ~2u;
    do
    {
      v12 = (LARGE_INTEGER *)v5->QuadPart;
      v5->QuadPart = 0LL;
      DirectComposition::CBatch::ReturnToApplication((DirectComposition::CBatch *)v5, 0);
      v5 = v12;
    }
    while ( v12 );
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 16LL))(this);
  }
  if ( *((_QWORD *)this + 45) )
  {
    ExReleaseResourceLite(*((PERESOURCE *)this + 46));
    KeLeaveCriticalRegion();
  }
  ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
  KeLeaveCriticalRegion();
}
