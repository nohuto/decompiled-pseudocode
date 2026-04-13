/*
 * XREFs of InitFn @ 0x18001DC20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000263C @ 0x18000263C (sub_18000263C.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

__int64 __fastcall InitFn(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  unsigned int v3; // ebx
  HRESULT v4; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  HSTRING string; // [rsp+38h] [rbp-20h] BYREF

  v3 = 0;
  string = 0LL;
  v4 = WindowsCreateStringReference(
         L"Windows.Foundation.Diagnostics.AsyncCausalityTracer",
         0x33u,
         &hstringHeader,
         &string);
  if ( v4 < 0 )
  {
    sub_18000263C(v4);
    JUMPOUT(0x18001DC94LL);
  }
  LOBYTE(v3) = (int)RoGetActivationFactory(string, &unk_18002BB88, &qword_18003AC90) >= 0;
  return v3;
}
