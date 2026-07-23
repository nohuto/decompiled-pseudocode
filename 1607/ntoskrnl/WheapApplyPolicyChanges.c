/*
 * XREFs of WheapApplyPolicyChanges @ 0x1406BAC58
 * Callers:
 *     WheapPfaReset @ 0x1406BB888 (WheapPfaReset.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x1401B1134 (__report_rangecheckfailure.c)
 */

int WheapApplyPolicyChanges()
{
  int result; // eax
  unsigned int v1; // r8d
  __int64 v2; // r10
  unsigned __int64 v3; // r9
  int *v4; // rdx

  result = WheaRegistryKeysPresent;
  v1 = 0;
  v2 = 0LL;
  v3 = 0LL;
  do
  {
    if ( WheaRegPolicyTableChanged[v2] )
    {
      if ( v3 >= 21 )
        _report_rangecheckfailure();
      v4 = (&off_1406EA608)[v3];
      WheaRegPolicyTableChanged[v2] = 0;
      if ( v1 )
      {
        switch ( v1 )
        {
          case 1u:
            WheapPolicyMemPersistOffline = *v4 != 0;
            result |= 2u;
            break;
          case 2u:
            WheapPolicyMemPfaDisable = *v4 != 0;
            result |= 4u;
            break;
          case 3u:
            result |= 8u;
            WheapPolicyMemPfaPageCount = *v4;
            break;
          case 4u:
            result |= 0x10u;
            WheapPolicyMemPfaThreshold = *v4;
            break;
          case 5u:
            result |= 0x20u;
            WheapPolicyMemPfaTimeout = 10000000LL * (unsigned int)*v4;
            break;
          default:
            result |= 0x100u;
            WheaRegPolicyIgnoreDummyWrite = *v4 != 0;
            break;
        }
      }
      else
      {
        WheapPolicyDisableOffline = *v4 != 0;
        result |= 1u;
      }
      WheaRegistryKeysPresent = result;
    }
    ++v1;
    ++v2;
    v3 += 3LL;
  }
  while ( v1 < 7 );
  return result;
}
