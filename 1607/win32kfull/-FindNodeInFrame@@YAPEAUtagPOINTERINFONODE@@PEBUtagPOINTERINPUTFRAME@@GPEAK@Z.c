/*
 * XREFs of ?FindNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01C0AC0
 * Callers:
 *     ?CanCoalesceIgnoreNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C01BF77C (-CanCoalesceIgnoreNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAW4tagPOINTERCOAL.c)
 *     ?FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01C0B7C (-FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     _DelegateCapturePointers @ 0x1C01D7AF4 (_DelegateCapturePointers.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01F1E50 (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

struct tagPOINTERINFONODE *__fastcall FindNodeInFrame(
        const struct tagPOINTERINPUTFRAME *a1,
        __int16 a2,
        unsigned int *a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // eax
  __int64 i; // r9

  v3 = *((_DWORD *)a1 + 10);
  v4 = 0;
  for ( i = *((_QWORD *)a1 + 11); v4 < v3; ++v4 )
  {
    if ( *(_WORD *)(i + 60) == a2 )
      break;
    i += 216LL;
  }
  if ( v4 == v3 )
    return 0LL;
  if ( a3 )
    *a3 = v4;
  return (struct tagPOINTERINFONODE *)i;
}
