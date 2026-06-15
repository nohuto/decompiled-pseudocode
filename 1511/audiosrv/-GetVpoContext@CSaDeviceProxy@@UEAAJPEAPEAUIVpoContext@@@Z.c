/*
 * XREFs of ?GetVpoContext@CSaDeviceProxy@@UEAAJPEAPEAUIVpoContext@@@Z @ 0x18008CE10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CSaDeviceProxy::GetVpoContext(CSaDeviceProxy *this, struct IVpoContext **a2)
{
  HRESULT v4; // esi
  struct IVpoContext *v5; // rax
  LPVOID v6; // rbx
  LPVOID v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v4 = CoCreateInstance(
         &GUID_d9aaaf82_03b1_4f9f_9fd5_07d2a42c8531,
         0LL,
         0x17u,
         &GUID_b0729dd3_bbc2_4fe5_86a6_290835baf80c,
         &v8);
  if ( v4 < 0
    || (v4 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, 0LL, *((_QWORD *)this + 9)),
        v4 < 0) )
  {
    v6 = v8;
  }
  else
  {
    v5 = (struct IVpoContext *)v8;
    v6 = 0LL;
    v8 = 0LL;
    *a2 = v5;
  }
  if ( v6 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v4;
}
