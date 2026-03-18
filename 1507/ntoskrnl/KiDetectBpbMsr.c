/*
 * XREFs of KiDetectBpbMsr @ 0x1402086D0
 * Callers:
 *     KiInitializeKernel @ 0x1403F8DE8 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x140208760 (KiDetectHardwareSpecControlFeatures.c)
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
    *(_BYTE *)(a1 + 11570) |= 4u;
  if ( *(_DWORD *)(a1 + 36) )
  {
    result = KiSpeculationFeatures;
    if ( (_DWORD)KiSpeculationFeatures != (_DWORD)v3 )
      KeBugCheckEx(0x5Du, 0x53524249uLL, (unsigned int)KiSpeculationFeatures, v3, 0LL);
  }
  else
  {
    result = v6;
    byte_1403D1240 = v6;
    KiBhbFlushSequence = v6;
    LODWORD(KiSpeculationFeatures) = v3;
  }
  if ( v7 )
    KiMicrocodeTrackerEnabled = 1;
  if ( (v3 & 0x400000) != 0 )
    *(_WORD *)(a1 + 11568) |= 0x40u;
  return result;
}
