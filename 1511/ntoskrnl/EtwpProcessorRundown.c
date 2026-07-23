/*
 * XREFs of EtwpProcessorRundown @ 0x140666074
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140500568 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     KeGetProcessorNumberFromIndex @ 0x140091D8C (KeGetProcessorNumberFromIndex.c)
 *     KeQueryGroupAffinity @ 0x14009B2D4 (KeQueryGroupAffinity.c)
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 *     KeQueryHighestNodeNumber @ 0x1400F69B0 (KeQueryHighestNodeNumber.c)
 *     KeQueryNodeActiveAffinity @ 0x1400F69BC (KeQueryNodeActiveAffinity.c)
 *     KeQueryActiveGroupCount @ 0x1400F9548 (KeQueryActiveGroupCount.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpProcessorRundown(unsigned int a1)
{
  _PROCESSOR_NUMBER *PoolWithTag; // rdi
  ULONG ActiveProcessorCount; // eax
  __int64 v4; // rbx
  USHORT ActiveGroupCount; // ax
  unsigned int v6; // edi
  unsigned int v7; // ebx
  KAFFINITY *v8; // rsi
  KAFFINITY GroupAffinity; // rax
  USHORT HighestNodeNumber; // ax
  unsigned int v11; // ebx
  bool v12; // zf
  int v13; // eax
  unsigned int v14; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD P[64]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int *v18; // [rsp+440h] [rbp+340h] BYREF
  int v19; // [rsp+448h] [rbp+348h]
  int v20; // [rsp+44Ch] [rbp+34Ch]
  _PROCESSOR_NUMBER *v21; // [rsp+450h] [rbp+350h]
  int v22; // [rsp+458h] [rbp+358h]
  int v23; // [rsp+45Ch] [rbp+35Ch]

  PoolWithTag = (_PROCESSOR_NUMBER *)P;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v14 = ActiveProcessorCount;
  if ( ActiveProcessorCount > 0x20 )
  {
    PoolWithTag = (_PROCESSOR_NUMBER *)ExAllocatePoolWithTag(PagedPool, 4LL * ActiveProcessorCount, 0x74777445u);
    if ( !PoolWithTag )
      goto LABEL_8;
    ActiveProcessorCount = v14;
  }
  v4 = 0LL;
  if ( ActiveProcessorCount )
  {
    do
    {
      KeGetProcessorNumberFromIndex(v4, &PoolWithTag[v4]);
      ActiveProcessorCount = v14;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v14 );
  }
  v20 = 0;
  v23 = 0;
  v18 = &v14;
  v19 = 4;
  v21 = PoolWithTag;
  v22 = 4 * ActiveProcessorCount;
  EtwpLogKernelEvent((__int64)&v18, a1, 2LL, 0xB1Bu, 0x401802u);
  if ( PoolWithTag != (_PROCESSOR_NUMBER *)P )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_8:
  ActiveGroupCount = KeQueryActiveGroupCount();
  v6 = ActiveGroupCount;
  v7 = 0;
  v16 = ActiveGroupCount;
  if ( ActiveGroupCount )
  {
    v8 = (KAFFINITY *)P;
    do
    {
      GroupAffinity = KeQueryGroupAffinity(v7++);
      *v8++ = GroupAffinity;
    }
    while ( v7 < v6 );
  }
  v20 = 0;
  v23 = 0;
  v18 = (unsigned int *)&v16;
  v19 = 4;
  v21 = (_PROCESSOR_NUMBER *)P;
  v22 = 8 * v6;
  EtwpLogKernelEvent((__int64)&v18, a1, 2LL, 0xB1Au, 0x401802u);
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v11 = 0;
  v12 = HighestNodeNumber == -1;
  v13 = HighestNodeNumber + 1;
  v15 = v13;
  if ( !v12 )
  {
    do
    {
      KeQueryNodeActiveAffinity(v11, (PGROUP_AFFINITY)&P[v11], 0LL);
      v13 = v15;
      ++v11;
    }
    while ( v11 < v15 );
  }
  v20 = 0;
  v23 = 0;
  v18 = &v15;
  v21 = (_PROCESSOR_NUMBER *)P;
  v19 = 4;
  v22 = 16 * v13;
  EtwpLogKernelEvent((__int64)&v18, a1, 2LL, 0xB18u, 0x401802u);
}
