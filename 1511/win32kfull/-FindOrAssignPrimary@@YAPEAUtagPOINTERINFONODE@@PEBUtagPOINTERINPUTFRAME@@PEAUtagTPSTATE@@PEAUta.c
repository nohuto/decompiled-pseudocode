/*
 * XREFs of ?FindOrAssignPrimary@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F1414
 * Callers:
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01F0D44 (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 *     ?DoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@KPEAH@Z @ 0x1C01F1204 (-DoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INF.c)
 * Callees:
 *     <none>
 */

struct tagPOINTERINFONODE *__fastcall FindOrAssignPrimary(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagTPSTATE *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3)
{
  unsigned int v3; // r11d
  struct tagPOINTERINFONODE *result; // rax
  __int64 v5; // r9
  __int64 v7; // r8
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // edx

  v3 = *((_DWORD *)a1 + 6);
  result = 0LL;
  v5 = *((_QWORD *)a1 + 9);
  v7 = 0LL;
  v8 = 0;
  if ( v3 )
  {
    do
    {
      v9 = *(_DWORD *)(v5 + 68);
      if ( (v9 & 0x40000) == 0 && v9 )
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
      v10 = (unsigned int)*(unsigned __int16 *)(v7 + 48) % *((_DWORD *)a2 + 327);
      *((_DWORD *)a2 + 386) |= 0x400u;
      result = (struct tagPOINTERINFONODE *)v7;
      *((_DWORD *)a2 + 325) = v10;
    }
  }
  return result;
}
