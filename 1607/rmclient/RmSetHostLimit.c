/*
 * XREFs of RmSetHostLimit @ 0x1800099D0
 * Callers:
 *     <none>
 * Callees:
 *     RmpClientSetHostLimits @ 0x180009CE4 (RmpClientSetHostLimits.c)
 *     RmpResourceLimitsAreLegal @ 0x18000CF54 (RmpResourceLimitsAreLegal.c)
 */

__int64 __fastcall RmSetHostLimit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v7[0] = 132LL;
  v8 = 4LL;
  if ( (unsigned int)RmpResourceLimitsAreLegal(a3, v7, &v8) )
    return RmpClientSetHostLimits(v4, a2, v5);
  else
    return 3221225713LL;
}
