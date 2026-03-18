/*
 * XREFs of EtwpProcessorRundown @ 0x1406E9204
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14054A6C8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeQueryActiveGroupCount @ 0x140013C28 (KeQueryActiveGroupCount.c)
 *     KeQueryGroupAffinity @ 0x14002B0B4 (KeQueryGroupAffinity.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     KeQueryHighestNodeNumber @ 0x1400DBBB8 (KeQueryHighestNodeNumber.c)
 *     KeQueryNodeActiveAffinity @ 0x1400DBBC4 (KeQueryNodeActiveAffinity.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 __fastcall EtwpProcessorRundown(unsigned int a1)
{
  unsigned int v1; // eax
  _DWORD *PoolWithTag; // rbx
  unsigned int i; // edx
  unsigned int v5; // r8d
  USHORT ActiveGroupCount; // ax
  unsigned int v7; // edi
  unsigned int v8; // ebx
  KAFFINITY *v9; // rsi
  KAFFINITY GroupAffinity; // rax
  USHORT HighestNodeNumber; // ax
  unsigned int v12; // ebx
  bool v13; // zf
  int v14; // eax
  unsigned int v16; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD P[64]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int *v20; // [rsp+448h] [rbp+340h] BYREF
  __int64 v21; // [rsp+450h] [rbp+348h]
  _OWORD *v22; // [rsp+458h] [rbp+350h]
  int v23; // [rsp+460h] [rbp+358h]
  int v24; // [rsp+464h] [rbp+35Ch]

  v1 = KeNumberProcessors_0;
  PoolWithTag = P;
  v16 = KeNumberProcessors_0;
  if ( (unsigned int)KeNumberProcessors_0 > 0x20 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * (unsigned int)KeNumberProcessors_0, 0x74777445u);
    if ( !PoolWithTag )
      goto LABEL_14;
    v1 = v16;
  }
  for ( i = 0; i < v1; ++i )
  {
    if ( i )
    {
      if ( i >= 0x280 )
        continue;
      v5 = KiProcessorIndexToNumberMappingTable[i];
      if ( !v5 )
        continue;
      HIBYTE(PoolWithTag[i]) = 0;
      LOWORD(PoolWithTag[i]) = v5 >> 6;
      BYTE2(PoolWithTag[i]) = v5 & 0x3F;
    }
    else
    {
      *PoolWithTag = 0;
    }
    v1 = v16;
  }
  v20 = &v16;
  v21 = 4LL;
  v22 = PoolWithTag;
  v23 = 4 * v1;
  v24 = 0;
  EtwpLogKernelEvent((__int64)&v20, a1, 2u, 0xB1Bu, 4200450);
  if ( PoolWithTag != (_DWORD *)P )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_14:
  ActiveGroupCount = KeQueryActiveGroupCount();
  v7 = ActiveGroupCount;
  v8 = 0;
  v18 = ActiveGroupCount;
  if ( ActiveGroupCount )
  {
    v9 = (KAFFINITY *)P;
    do
    {
      GroupAffinity = KeQueryGroupAffinity(v8++);
      *v9++ = GroupAffinity;
    }
    while ( v8 < v7 );
  }
  v21 = 4LL;
  v20 = (unsigned int *)&v18;
  v24 = 0;
  v22 = P;
  v23 = 8 * v7;
  EtwpLogKernelEvent((__int64)&v20, a1, 2u, 0xB1Au, 4200450);
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v12 = 0;
  v13 = HighestNodeNumber == -1;
  v14 = HighestNodeNumber + 1;
  v17 = v14;
  if ( !v13 )
  {
    do
    {
      KeQueryNodeActiveAffinity(v12, (PGROUP_AFFINITY)&P[v12], 0LL);
      v14 = v17;
      ++v12;
    }
    while ( v12 < v17 );
  }
  v20 = &v17;
  v21 = 4LL;
  v22 = P;
  v23 = 16 * v14;
  v24 = 0;
  return EtwpLogKernelEvent((__int64)&v20, a1, 2u, 0xB18u, 4200450);
}
