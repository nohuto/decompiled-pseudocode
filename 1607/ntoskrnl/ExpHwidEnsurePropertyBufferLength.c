/*
 * XREFs of ExpHwidEnsurePropertyBufferLength @ 0x1404CFD80
 * Callers:
 *     ExpHwidGetDevicePropertyData @ 0x1404DA114 (ExpHwidGetDevicePropertyData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpHwidEnsurePropertyBufferLength(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  _WORD *PoolWithTag; // r14
  void *v6; // rcx

  v3 = a2;
  if ( a2 < *(unsigned __int16 *)(a1 + 2) )
    return 0;
  if ( a2 >= 0xFF7F )
  {
    if ( a2 > 0xFFFF )
      return (unsigned int)-1073741670;
  }
  else
  {
    v3 = (a2 + 127) & 0xFFFFFF80;
  }
  v4 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x20534C53u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v6 = *(void **)(a1 + 8);
  if ( v6 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    *(_WORD *)a1 = 0;
    ExFreePoolWithTag(v6, 0);
  }
  *(_QWORD *)(a1 + 8) = PoolWithTag;
  *PoolWithTag = 0;
  *(_WORD *)(a1 + 2) = v3;
  return v4;
}
