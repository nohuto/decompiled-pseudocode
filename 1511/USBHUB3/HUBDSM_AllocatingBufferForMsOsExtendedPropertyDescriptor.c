/*
 * XREFs of HUBDSM_AllocatingBufferForMsOsExtendedPropertyDescriptor @ 0x1C001B4A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBDSM_AllocatingBufferForMsOsExtendedPropertyDescriptor(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  PVOID PoolWithTag; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned int *)(v1 + 1716), 0x64334855u);
  *(_QWORD *)(v1 + 2096) = PoolWithTag;
  if ( !PoolWithTag )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x3Bu,
      (__int64)&WPP_4365074be9fe45a9236a5dea2660cd62_Traceguids);
    v2 = -1073741823;
  }
  result = 4065LL;
  if ( v2 >= 0 )
    return 4077LL;
  return result;
}
