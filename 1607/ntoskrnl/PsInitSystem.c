/*
 * XREFs of PsInitSystem @ 0x140793634
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExRegisterHost @ 0x140553960 (ExRegisterHost.c)
 */

char __fastcall PsInitSystem(int a1, void *a2)
{
  int v2; // ecx
  int v3; // ecx
  char v5; // bl
  int v6; // [rsp+30h] [rbp-38h] BYREF
  __int16 v7; // [rsp+34h] [rbp-34h]
  int v8; // [rsp+38h] [rbp-30h]
  __int64 v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+48h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-18h]

  if ( !a1 )
    return PspInitPhase0(a2);
  v2 = a1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        KeBugCheckEx(0x33u, 1uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
      return PspInitPhase3();
    }
    else
    {
      return PspInitPhase2();
    }
  }
  else
  {
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v5 = 1;
    v7 = 1;
    v8 = 1;
    v6 = 65540;
    if ( (int)ExRegisterHost(&PspNetRateControlExtensionHost, (__int64)a2, (unsigned __int16 *)&v6) < 0 )
    {
      PspNetRateControlExtensionHost = 0LL;
      return 0;
    }
    return v5;
  }
}
