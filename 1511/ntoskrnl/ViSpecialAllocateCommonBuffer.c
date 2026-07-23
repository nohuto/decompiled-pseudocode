/*
 * XREFs of ViSpecialAllocateCommonBuffer @ 0x1406BE384
 * Callers:
 *     VfAllocateCommonBuffer @ 0x1406BA514 (VfAllocateCommonBuffer.c)
 * Callees:
 *     ExInterlockedInsertHeadList @ 0x1400E237C (ExInterlockedInsertHeadList.c)
 *     VfUtilDbgPrint @ 0x14020AB90 (VfUtilDbgPrint.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ViCommonBufferCalculatePadding @ 0x1406BCF94 (ViCommonBufferCalculatePadding.c)
 *     ViInitializePadding @ 0x1406BDD84 (ViInitializePadding.c)
 */

char *__fastcall ViSpecialAllocateCommonBuffer(
        __int64 (__fastcall *a1)(_QWORD, _QWORD, struct _LIST_ENTRY **, __int64),
        __int64 a2,
        struct _LIST_ENTRY *a3,
        unsigned int a4,
        _QWORD *a5,
        char a6)
{
  _LIST_ENTRY *PoolWithTag; // rsi
  __int64 v12; // rbx
  __int16 v13; // r12
  __int64 v14; // r9
  unsigned int v15; // r15d
  struct _LIST_ENTRY *v16; // rax
  char *v17; // rdi
  int v18; // [rsp+20h] [rbp-38h] BYREF
  struct _LIST_ENTRY *v19; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v20; // [rsp+68h] [rbp+10h] BYREF

  if ( (unsigned int)(*(_DWORD *)(a2 + 172) - *(_DWORD *)(a2 + 176)) >= 0x20 || a4 > 0xFFFFDFFF )
    return 0LL;
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x566C6148u);
  if ( !PoolWithTag )
  {
    VfUtilDbgPrint("Couldn't track common buffer allocation\n");
    return 0LL;
  }
  ViCommonBufferCalculatePadding(a4, &v20, &v18);
  v12 = v20;
  v13 = v18;
  LOBYTE(v14) = a6;
  v15 = a4 + v20 + v18;
  v16 = (struct _LIST_ENTRY *)a1(*(_QWORD *)(a2 + 16), v15, &v19, v14);
  if ( !v16 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 0LL;
  }
  v17 = (char *)v16 + v12;
  LOWORD(PoolWithTag->Flink) = v12;
  PoolWithTag[1].Blink = (struct _LIST_ENTRY *)((char *)v16 + v12);
  WORD1(PoolWithTag->Flink) = v13;
  LODWORD(PoolWithTag->Blink) = a4;
  HIDWORD(PoolWithTag->Flink) = v15;
  PoolWithTag[1].Flink = v16;
  PoolWithTag[2].Flink = v19;
  PoolWithTag[2].Blink = a3;
  ViInitializePadding(v16, v15, (unsigned __int64)v16 + v12, a4);
  *a5 = (char *)v19 + v12;
  ExInterlockedInsertHeadList((PLIST_ENTRY)(a2 + 80), PoolWithTag + 3, (PKSPIN_LOCK)(a2 + 96));
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 172));
  return v17;
}
