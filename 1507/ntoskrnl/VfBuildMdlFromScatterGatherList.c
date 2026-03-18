/*
 * XREFs of VfBuildMdlFromScatterGatherList @ 0x14073AF7C
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     VF_MARK_SCATTER_GATHER_LIST @ 0x14073A944 (VF_MARK_SCATTER_GATHER_LIST.c)
 *     VF_UNMARK_SCATTER_GATHER_LIST @ 0x14073A95C (VF_UNMARK_SCATTER_GATHER_LIST.c)
 *     ViGetAdapterInformationInternal @ 0x14073E33C (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14073E5E4 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfBuildMdlFromScatterGatherList(__int64 a1, __int64 a2, struct _MDL *a3, PMDL *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rsi
  __int64 AdapterInformationInternal; // rax
  _QWORD *v10; // rdi
  volatile signed __int32 *v11; // rbx
  unsigned __int8 CurrentIrql; // r12
  _QWORD *i; // rax
  _QWORD *v14; // rax
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, struct _MDL *, PMDL *); // rax
  int v16; // edi
  __int64 v17; // rbp
  PMDL Mdl; // rax
  PMDL v19; // rbx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

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
        v11 = (volatile signed __int32 *)(AdapterInformationInternal + 72);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented((volatile signed __int32 *)(AdapterInformationInternal + 72));
        }
        else if ( _interlockedbittestandset64(v11, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(AdapterInformationInternal + 72));
        }
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
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented((volatile signed __int64 *)v11, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
        __writecr8(CurrentIrql);
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
