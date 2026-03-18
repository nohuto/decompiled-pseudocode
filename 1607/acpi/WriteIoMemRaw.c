/*
 * XREFs of WriteIoMemRaw @ 0x1C0052AD8
 * Callers:
 *     AcpiPccRingDoorbell @ 0x1C0052850 (AcpiPccRingDoorbell.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 */

char __fastcall WriteIoMemRaw(_BYTE *a1, int a2, int a3, __int64 a4)
{
  char result; // al
  int v5; // r9d
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF

  result = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    switch ( a3 )
    {
      case 8:
        result = a4;
        __outbyte((unsigned __int16)a1, a4);
        return result;
      case 16:
        result = a4;
        __outword((unsigned __int16)a1, a4);
        return result;
      case 32:
        result = a4;
        __outdword((unsigned __int16)a1, a4);
        return result;
    }
    v5 = 14;
    goto LABEL_15;
  }
  switch ( a3 )
  {
    case 8:
      *a1 = a4;
      break;
    case 16:
      *(_WORD *)a1 = a4;
      break;
    case 32:
      *(_DWORD *)a1 = a4;
      break;
    case 64:
      *(_QWORD *)a1 = a4;
      break;
    default:
      v5 = 15;
LABEL_15:
      LOBYTE(a2) = 2;
      return WPP_RECORDER_SF_D(
               WPP_GLOBAL_Control->DeviceExtension,
               a2,
               21,
               v5,
               (__int64)&WPP_9793c6fb28af356342f42366d28ad702_Traceguids,
               a3);
  }
  _InterlockedOr(v6, 0);
  return result;
}
