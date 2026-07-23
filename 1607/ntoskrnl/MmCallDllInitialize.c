/*
 * XREFs of MmCallDllInitialize @ 0x1405447E0
 * Callers:
 *     MiLoadImportDll @ 0x140544744 (MiLoadImportDll.c)
 *     PipInitializeDriverDependentDLLs @ 0x14079ACD0 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlFindExportedRoutineByName @ 0x1403F4DC8 (RtlFindExportedRoutineByName.c)
 *     VfDriverInitStarting @ 0x1406FE168 (VfDriverInitStarting.c)
 *     VfDriverInitSuccess @ 0x1406FE22C (VfDriverInitSuccess.c)
 */

__int64 __fastcall MmCallDllInitialize(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 (__fastcall *v5)(UNICODE_STRING *); // r15
  unsigned __int16 v6; // ax
  wchar_t *PoolWithTag; // rax
  wchar_t *v8; // rdi
  unsigned __int16 Length; // bx
  const void *v10; // rdx
  unsigned __int64 v11; // r14
  unsigned __int16 v12; // cx
  wchar_t *v13; // rax
  __int64 v14; // rcx
  unsigned int inited; // edi
  int v16; // ebx
  UNICODE_STRING Destination; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-10h] BYREF

  result = (__int64)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "DllInitialize");
  v5 = (__int64 (__fastcall *)(UNICODE_STRING *))result;
  if ( result )
  {
    v6 = *(_WORD *)(a1 + 88);
    if ( (unsigned __int16)(v6 + 2) < v6 )
      return 3221225734LL;
    Source.MaximumLength = v6 + 2;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v6 + 2), 0x54446D4Du);
    Source.Buffer = PoolWithTag;
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      v10 = *(const void **)(a1 + 96);
      Source.Length = *(_WORD *)(a1 + 88);
      Length = Source.Length;
      v11 = Source.Length;
      memmove(PoolWithTag, v10, Source.Length);
      v12 = Source.Length + CmRegistryMachineSystemCurrentControlSetServices.Length;
      if ( (unsigned __int16)(Source.Length + CmRegistryMachineSystemCurrentControlSetServices.Length) > CmRegistryMachineSystemCurrentControlSetServices.Length )
      {
        if ( (unsigned __int16)(v12 + 4) < v12 )
        {
          v16 = -1073741562;
        }
        else
        {
          Destination.MaximumLength = v12 + 4;
          Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                            NonPagedPoolNx,
                                            (unsigned __int16)(v12 + 4),
                                            0x54446D4Du);
          if ( Destination.Buffer )
          {
            Destination.Length = CmRegistryMachineSystemCurrentControlSetServices.Length;
            memmove(
              Destination.Buffer,
              CmRegistryMachineSystemCurrentControlSetServices.Buffer,
              CmRegistryMachineSystemCurrentControlSetServices.Length);
            RtlAppendUnicodeToString(&Destination, L"\\");
            v8[v11 >> 1] = 0;
            v13 = wcschr(v8, 0x2Eu);
            if ( v13 )
            {
              Length = 2 * (v13 - v8);
              Source.Length = Length;
            }
            v8[(unsigned __int64)Length >> 1] = 0;
            RtlAppendUnicodeStringToString(&Destination, &Source);
            ExFreePoolWithTag(v8, 0);
            inited = VfDriverInitStarting(v14);
            v16 = v5(&Destination);
            ExFreePoolWithTag(Destination.Buffer, 0);
            if ( v16 >= 0 && !byte_140326850 )
              VfDriverInitSuccess(inited, a2);
            return (unsigned int)v16;
          }
          v16 = -1073741670;
        }
        ExFreePoolWithTag(v8, 0);
        return (unsigned int)v16;
      }
      ExFreePoolWithTag(v8, 0);
      return 3221225734LL;
    }
    return 3221225626LL;
  }
  return result;
}
