/*
 * XREFs of RmSetHostLimit @ 0x18000EB10
 * Callers:
 *     <none>
 * Callees:
 *     RmpClientSetHostLimits @ 0x18000EFF8 (RmpClientSetHostLimits.c)
 *     RmpResourceLimitsAreLegal @ 0x180015278 (RmpResourceLimitsAreLegal.c)
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
