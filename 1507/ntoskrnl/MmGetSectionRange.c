/*
 * XREFs of MmGetSectionRange @ 0x1406A1240
 * Callers:
 *     PoSetHiberRange @ 0x14014D3AC (PoSetHiberRange.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     MiLookupDataTableEntry @ 0x140010760 (MiLookupDataTableEntry.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall MmGetSectionRange(unsigned __int64 a1, _QWORD *a2, unsigned int *a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v7; // edi
  PVOID *v8; // rax
  PVOID *v9; // rbp
  PVOID v10; // rcx
  unsigned __int64 v11; // rsi
  PIMAGE_NT_HEADERS v12; // rax
  int v13; // r9d
  unsigned int NumberOfSections; // r10d
  _DWORD *v15; // rdx
  unsigned int v16; // r8d
  unsigned __int64 v17; // rax
  __int16 v18; // ax

  CurrentThread = KeGetCurrentThread();
  v7 = -1073741275;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v8 = MiLookupDataTableEntry(a1, 1);
  v9 = v8;
  if ( v8 )
  {
    v10 = v8[6];
    v11 = a1 - (_QWORD)v10;
    v12 = RtlImageNtHeader(v10);
    v13 = 0;
    NumberOfSections = v12->FileHeader.NumberOfSections;
    v15 = (_DWORD *)((char *)&v12->OptionalHeader.Magic + v12->FileHeader.SizeOfOptionalHeader);
    if ( v12->FileHeader.NumberOfSections )
    {
      while ( 1 )
      {
        v16 = v15[2];
        v17 = (unsigned int)v15[3];
        if ( v15[4] >= v16 )
          v16 = v15[4];
        if ( v11 >= v17 && v11 < v16 + (unsigned int)v17 )
          break;
        v15 += 10;
        if ( ++v13 >= NumberOfSections )
          goto LABEL_10;
      }
      v7 = 0;
      *a2 = (char *)v9[6] + (unsigned int)v15[3];
      *a3 = v16;
    }
  }
LABEL_10:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  v18 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v7;
}
