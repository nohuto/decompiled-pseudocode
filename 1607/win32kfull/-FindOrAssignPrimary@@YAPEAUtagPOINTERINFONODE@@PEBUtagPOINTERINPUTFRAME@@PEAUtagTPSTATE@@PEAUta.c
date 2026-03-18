/*
 * XREFs of ?FindOrAssignPrimary@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01E7838
 * Callers:
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01E6C7C (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 *     ?CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01E7000 (-CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXKPEAH@Z @ 0x1C01EBC40 (-xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_.c)
 * Callees:
 *     <none>
 */

struct tagPOINTERINFONODE *__fastcall FindOrAssignPrimary(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagTPSTATE *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3)
{
  unsigned int v3; // esi
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v7; // r9
  unsigned int v8; // edi
  int v9; // ebx
  unsigned int v10; // edx

  v3 = *((_DWORD *)a1 + 10);
  v4 = 0LL;
  v5 = *((_QWORD *)a1 + 11);
  v7 = 0LL;
  v8 = 0;
  if ( v3 )
  {
    do
    {
      v9 = *(_DWORD *)(v5 + 68);
      if ( (v9 & 0x40000) == 0
        && v9
        && (*((_DWORD *)a2 + 68 * ((unsigned int)*(unsigned __int16 *)(v5 + 48) % *((_DWORD *)a2 + 411)) + 66) & 0x400) == 0 )
      {
        if ( (v9 & 0x2000) != 0 )
          return (struct tagPOINTERINFONODE *)v5;
        if ( !v7 )
          v7 = v5;
      }
      v5 += 216LL;
      ++v8;
    }
    while ( v8 < v3 );
    if ( v7 )
    {
      v10 = (unsigned int)*(unsigned __int16 *)(v7 + 48) % *((_DWORD *)a2 + 411);
      *((_DWORD *)a2 + 480) |= 0x400u;
      v4 = v7;
      *((_DWORD *)a2 + 409) = v10;
    }
  }
  return (struct tagPOINTERINFONODE *)v4;
}
