/*
 * XREFs of ?GetVpoContext@CBaseStreamGroupProxy@@UEAAJPEAPEAUIVpoContext@@@Z @ 0x180075260
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::GetVpoContext(CBaseStreamGroupProxy *this, struct IVpoContext **a2)
{
  HRESULT v4; // eax
  int v5; // ebx
  struct IVpoContext *v6; // rax
  LPVOID v7; // rcx
  LPVOID ppv; // [rsp+60h] [rbp+30h] BYREF
  __int64 v10; // [rsp+68h] [rbp+38h] BYREF

  ppv = 0LL;
  v4 = CoCreateInstance(
         &GUID_d9aaaf82_03b1_4f9f_9fd5_07d2a42c8531,
         0LL,
         0x17u,
         &GUID_b0729dd3_bbc2_4fe5_86a6_290835baf80c,
         &ppv);
  v10 = 0LL;
  v5 = v4;
  if ( v4 < 0 )
    goto LABEL_8;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 9) + 56LL))(*((_QWORD *)this + 9), &v10);
  if ( v5 < 0
    || (v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)ppv + 24LL))(
               ppv,
               *((_QWORD *)this + 8),
               v10),
        v5 < 0) )
  {
    v7 = ppv;
  }
  else
  {
    v6 = (struct IVpoContext *)ppv;
    v7 = 0LL;
    ppv = 0LL;
    *a2 = v6;
  }
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_8:
    v7 = ppv;
  }
  if ( v7 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v5;
}
