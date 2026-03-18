/*
 * XREFs of ViSpecialFreeCommonBuffer @ 0x14073F328
 * Callers:
 *     VfFreeCommonBuffer @ 0x14073BB9C (VfFreeCommonBuffer.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x14073A1E8 (DECREMENT_COMMON_BUFFERS.c)
 *     VF_FIND_BUFFER @ 0x14073A618 (VF_FIND_BUFFER.c)
 *     ViCheckPadding @ 0x14073D8A0 (ViCheckPadding.c)
 */

unsigned __int16 *__fastcall ViSpecialFreeCommonBuffer(
        void (__fastcall *a1)(_QWORD, _QWORD, _QWORD, _QWORD, char),
        __int64 a2,
        void *a3,
        char a4)
{
  unsigned __int16 *result; // rax
  unsigned __int16 *v9; // rdi
  volatile signed __int32 *v10; // rbx
  unsigned __int8 CurrentIrql; // r12
  __int64 v12; // rdx
  unsigned __int16 **v13; // rcx
  char v14; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  result = VF_FIND_BUFFER((volatile signed __int32 *)(a2 + 80), (__int64)a3);
  v9 = result;
  if ( result )
  {
    ViCheckPadding(*((_QWORD *)result + 2), *((_DWORD *)result + 1), *((_QWORD *)result + 3), *((_DWORD *)result + 2));
    v10 = (volatile signed __int32 *)(a2 + 96);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a2 + 96));
    }
    else if ( _interlockedbittestandset64(v10, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a2 + 96));
    }
    v12 = *((_QWORD *)v9 + 6);
    v13 = (unsigned __int16 **)*((_QWORD *)v9 + 7);
    if ( *(unsigned __int16 **)(v12 + 8) != v9 + 24 || *v13 != v9 + 24 )
      __fastfail(3u);
    *v13 = (unsigned __int16 *)v12;
    *(_QWORD *)(v12 + 8) = v13;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)(a2 + 96), retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    __writecr8(CurrentIrql);
    memset(a3, 0, *((unsigned int *)v9 + 2));
    v14 = a4;
    a1(*(_QWORD *)(a2 + 16), *((unsigned int *)v9 + 1), *((_QWORD *)v9 + 4), *((_QWORD *)v9 + 2), v14);
    DECREMENT_COMMON_BUFFERS(a2);
    ExFreePoolWithTag(v9, 0);
    return (unsigned __int16 *)1;
  }
  return result;
}
