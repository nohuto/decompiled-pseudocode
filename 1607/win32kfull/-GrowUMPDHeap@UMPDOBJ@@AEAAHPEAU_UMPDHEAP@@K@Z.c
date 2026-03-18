/*
 * XREFs of ?GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z @ 0x1C0284714
 * Callers:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0284BE0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall UMPDOBJ::GrowUMPDHeap(UMPDOBJ *this, struct _UMPDHEAP *a2, unsigned int a3)
{
  unsigned __int64 v4; // rdx
  NTSTATUS v5; // edi
  HANDLE v6; // rax
  HANDLE v7; // rdi
  BOOL v8; // eax
  void *v9; // rcx
  __int64 result; // rax
  SIZE_T Size; // [rsp+40h] [rbp+8h] BYREF
  PVOID Address; // [rsp+48h] [rbp+10h] BYREF

  Size = (SIZE_T)this;
  v4 = *((_QWORD *)a2 + 2) + a3;
  if ( v4 < *((_QWORD *)a2 + 2) )
    return 0LL;
  if ( v4 + 4095 < v4 )
    return 0LL;
  Size = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( Size > 0x400000 )
    return 0LL;
  Address = *(PVOID *)a2;
  v5 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, 0LL, &Size, 0x1000u, 4u);
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
  {
    if ( v5 >= 0 )
    {
      v6 = (HANDLE)GrepSecureVirtualMemory(Address, Size, 4LL);
LABEL_9:
      v7 = v6;
      goto LABEL_11;
    }
  }
  else if ( v5 >= 0 )
  {
    v6 = MmSecureVirtualMemory(Address, Size, 4u);
    goto LABEL_9;
  }
  v7 = 0LL;
LABEL_11:
  if ( !v7 )
    return 0LL;
  if ( *((_QWORD *)a2 + 1) )
  {
    v8 = EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails);
    v9 = (void *)*((_QWORD *)a2 + 1);
    if ( v8 )
      GrepUnsecureVirtualMemory(v9);
    else
      MmUnsecureVirtualMemory(v9);
  }
  *((_QWORD *)a2 + 2) = Size;
  result = 1LL;
  *((_QWORD *)a2 + 1) = v7;
  return result;
}
