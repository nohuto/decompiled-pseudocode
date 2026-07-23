/*
 * XREFs of RtlMapSecurityErrorToNtStatus @ 0x1400B0CE4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlMapSecurityErrorToNtStatus(ULONG SecurityError)
{
  NTSTATUS v1; // edx

  v1 = SecurityError;
  if ( (int)SecurityError <= -2146893034 )
  {
    if ( SecurityError == -2146893034 )
    {
      return -1073741570;
    }
    else
    {
      switch ( SecurityError )
      {
        case 0x80090300:
          v1 = -1073741670;
          break;
        case 0x80090301:
          v1 = -1073741816;
          break;
        case 0x80090302:
        case 0x8009030A:
          return -1073741637;
        case 0x80090303:
          v1 = -1073741634;
          break;
        case 0x80090304:
          v1 = -1073741595;
          break;
        case 0x80090305:
        case 0x80090307:
          return -1073741570;
        case 0x80090306:
          v1 = -1073741727;
          break;
        case 0x80090308:
        case 0x80090309:
          return -1073741811;
        case 0x8009030B:
          v1 = -1073741555;
          break;
        case 0x8009030C:
          v1 = -1073741715;
          break;
        case 0x8009030D:
        case 0x8009030E:
          v1 = -1073741729;
          break;
        case 0x8009030F:
        case 0x80090310:
          v1 = -1073741790;
          break;
        case 0x80090311:
          v1 = -1073741730;
          break;
        default:
          return v1;
      }
    }
  }
  else
  {
    switch ( SecurityError )
    {
      case 0x80090324:
        return -1073741517;
      case 0x80090331:
        return -1073741637;
      case 0x8009035D:
        return -1073741811;
    }
  }
  return v1;
}
