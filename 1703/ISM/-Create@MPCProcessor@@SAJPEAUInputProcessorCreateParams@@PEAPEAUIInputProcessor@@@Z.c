/*
 * XREFs of ?Create@MPCProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180047240
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VMPCProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180048950 (--$MakeAndInitialize@VMPCProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Detail.c)
 */

__int64 __fastcall MPCProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  struct InputProcessorCreateParams *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  *a2 = 0LL;
  return Microsoft::WRL::Details::MakeAndInitialize<MPCProcessor,IInputProcessor,InputProcessorCreateParams * &>(
           a2,
           &v3);
}
