/*
 * XREFs of KiDetectBpbMsr @ 0x1401D9638
 * Callers:
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1401D96C8 (KiDetectHardwareSpecControlFeatures.c)
 */

char __fastcall KiDetectBpbMsr(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rcx
  char result; // al
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-18h] BYREF
  char v6; // [rsp+38h] [rbp-10h]
  int v7; // [rsp+50h] [rbp+8h] BYREF

  KiDetectHardwareSpecControlFeatures(a1, a2, &BugCheckParameter3, &v7);
  v3 = (unsigned int)BugCheckParameter3;
  if ( (BugCheckParameter3 & 0x20) != 0 )
    *(_BYTE *)(a1 + 11578) |= 4u;
  if ( *(_DWORD *)(a1 + 36) )
  {
    result = KiCpu0HardwareFlags;
    if ( (_DWORD)KiCpu0HardwareFlags != (_DWORD)v3 )
      KeBugCheckEx(0x5Du, 0x53524249uLL, (unsigned int)KiCpu0HardwareFlags, v3, 0LL);
  }
  else
  {
    result = v6;
    byte_1403AA270 = v6;
    LODWORD(KiCpu0HardwareFlags) = v3;
    KiSpeculationFeatures = v3;
  }
  if ( v7 )
    KiMicrocodeTrackerEnabled = 1;
  if ( (v3 & 0x400000) != 0 )
    *(_WORD *)(a1 + 11576) |= 0x40u;
  return result;
}
