/*
 * XREFs of wil_details_UpdateFeatureConfiguredStates @ 0x1403E3328
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1403E3200 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x140220FE4 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

volatile signed __int32 **wil_details_UpdateFeatureConfiguredStates()
{
  int **i; // rcx
  volatile signed __int32 **result; // rax
  volatile signed __int32 **v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  __int16 v5; // dx
  __int16 v6; // dx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]

  for ( i = &wil_details_featureDescriptors_a; ; i = (int **)(v2 + 7) )
  {
    result = (volatile signed __int32 **)wil_details_FeatureDescriptors_SkipPadding(i);
    v2 = result;
    if ( !result )
      break;
    if ( !*((_BYTE *)result + 29) && !*((_BYTE *)result + 30) && !*((_BYTE *)result + 28) )
    {
      v3 = *((unsigned int *)result + 6);
      v8 = 0LL;
      v9 = 0;
      v7 = 0LL;
      v4 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64 *))RtlQueryFeatureConfiguration)(
             v3,
             1LL,
             &v7,
             &v8);
      if ( v4 == -2147483614 || v4 == -1073741275 )
      {
LABEL_12:
        v5 = 518;
      }
      else
      {
        if ( v4 )
        {
          if ( v4 != 279 )
            goto LABEL_12;
          v6 = BYTE4(v8) & 0x80;
        }
        else
        {
          v6 = BYTE4(v8) & 0xB0 | (4 * (BYTE4(v8) & 0x40));
        }
        v5 = (8 * v6) | 0x206;
      }
      _InterlockedXor(*v2, ((unsigned __int16)v5 ^ (unsigned __int16)**v2) & 0xF80);
      continue;
    }
  }
  return result;
}
