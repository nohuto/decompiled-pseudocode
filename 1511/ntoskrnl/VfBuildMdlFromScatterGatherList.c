/*
 * XREFs of VfBuildMdlFromScatterGatherList @ 0x1406BA6D0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     VF_MARK_SCATTER_GATHER_LIST @ 0x1406BA13C (VF_MARK_SCATTER_GATHER_LIST.c)
 *     VF_UNMARK_SCATTER_GATHER_LIST @ 0x1406BA154 (VF_UNMARK_SCATTER_GATHER_LIST.c)
 *     ViGetAdapterInformationInternal @ 0x1406BD6B0 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x1406BD8CC (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfBuildMdlFromScatterGatherList(__int64 a1, __int64 a2, struct _MDL *a3, PMDL *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rdi
  __int64 AdapterInformationInternal; // rax
  _QWORD *v10; // rbx
  KSPIN_LOCK *v11; // rsi
  KIRQL v12; // al
  _QWORD *i; // rcx
  _QWORD *v14; // rcx
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, struct _MDL *, PMDL *); // rax
  int v16; // esi
  __int64 v17; // rbp
  PMDL Mdl; // rax
  PMDL v19; // rbx

  v4 = a2;
  LOBYTE(a2) = 1;
  v8 = 0LL;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, a2);
  if ( AdapterInformationInternal )
  {
    if ( *(_QWORD *)(v4 + 8) == -559026163LL )
    {
      v10 = (_QWORD *)(AdapterInformationInternal + 56);
      if ( (_QWORD *)*v10 != v10 )
      {
        v11 = (KSPIN_LOCK *)(AdapterInformationInternal + 72);
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 72));
        for ( i = (_QWORD *)*v10; ; i = (_QWORD *)v14[9] )
        {
          v14 = i - 9;
          if ( v10 == v14 + 9 )
            break;
          if ( v14[8] == v4 )
          {
            v8 = v14[12];
            break;
          }
        }
        KeReleaseSpinLock(v11, v12);
      }
    }
  }
  VF_UNMARK_SCATTER_GATHER_LIST(v4, v8);
  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, struct _MDL *, PMDL *))ViGetRealDmaOperation(a1, 120LL);
  v16 = RealDmaOperation(a1, v4, a3, a4);
  VF_MARK_SCATTER_GATHER_LIST(v4, v8);
  if ( v16 >= 0 && *a4 == a3 && v8 )
  {
    if ( *(_QWORD *)(v8 + 40) )
    {
      return (unsigned int)-1073741709;
    }
    else
    {
      v17 = *(_QWORD *)(v8 + 56);
      Mdl = IoAllocateMdl(0LL, *(_DWORD *)(v17 + 40), 0, 0, 0LL);
      v19 = Mdl;
      if ( Mdl )
      {
        *(_QWORD *)(v8 + 40) = Mdl;
        memmove(&Mdl[1], (const void *)(v17 + 48), 8 * ((unsigned __int64)*(unsigned int *)(v17 + 40) >> 12));
        v19->ByteOffset += a3->ByteOffset;
        v19->ByteCount -= v19->ByteOffset;
        v19->MdlFlags |= 2u;
        *a4 = v19;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return (unsigned int)v16;
}
