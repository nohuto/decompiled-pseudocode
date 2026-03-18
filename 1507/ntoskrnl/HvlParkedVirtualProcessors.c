/*
 * XREFs of HvlParkedVirtualProcessors @ 0x1401ECE54
 * Callers:
 *     PpmParkReportMask @ 0x1400E86CC (PpmParkReportMask.c)
 * Callees:
 *     <none>
 */

__int64 HvlParkedVirtualProcessors()
{
  __int64 result; // rax
  __int64 v1; // rdx
  unsigned __int16 v2; // cx
  unsigned __int64 v3; // rcx
  char *i; // r8
  unsigned __int64 v5; // rcx

  result = (unsigned int)HvlpEnlightenments;
  if ( (HvlpEnlightenments & 8) != 0 && ((HvlpFlags & 0x100) == 0 || (unsigned __int16)KiActiveGroups <= 1u) )
  {
    v1 = 0LL;
    v2 = 0;
    if ( PpmPerfCoreParkingMask[0] )
    {
      while ( !qword_140320A48[v2] )
      {
        if ( ++v2 >= (unsigned int)PpmPerfCoreParkingMask[0] )
          return HvlpHypercallCodeVa(65545LL, v1, 0LL);
      }
      v3 = qword_140320A48[0];
      if ( HvlpVirtualProcessorsIdentityMapped )
      {
        v1 = qword_140320A48[0];
      }
      else
      {
        for ( i = byte_1403D3CC1; ; i += 4 )
        {
          if ( (v3 & 1) != 0 )
            v1 |= 1LL << *i;
          v5 = v3 >> 1;
          if ( !v5 )
            break;
          if ( (v5 & 1) != 0 )
            v1 |= 1LL << i[2];
          v3 = v5 >> 1;
          if ( !v3 )
            break;
        }
      }
    }
    return HvlpHypercallCodeVa(65545LL, v1, 0LL);
  }
  return result;
}
