/*
 * XREFs of GetInputTransformList @ 0x1401D11D0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z @ 0x1401D12CC (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z.c)
 */

InputTransform *__fastcall GetInputTransformList(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        unsigned __int64 *a5)
{
  InputTransform *result; // rax
  volatile struct tagINPUT_TRANSFORM *v9; // [rsp+20h] [rbp-18h]
  char v10; // [rsp+28h] [rbp-10h]

  result = (InputTransform *)HMValidateHandleNoSecure(a1, 1);
  if ( result )
  {
    LOBYTE(v9) = a4;
    return (InputTransform *)InputTransform::GetTransformList(result, (struct tagWND *)a2, a3, a5, v9, v10);
  }
  return result;
}
