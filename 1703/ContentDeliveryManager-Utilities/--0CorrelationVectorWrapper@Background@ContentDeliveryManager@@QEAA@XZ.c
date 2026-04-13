/*
 * XREFs of ??0CorrelationVectorWrapper@Background@ContentDeliveryManager@@QEAA@XZ @ 0x1800261E4
 * Callers:
 *     ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@XZ @ 0x180032218 (--$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@YA-AV-$shared_.c)
 * Callees:
 *     ??$Base64Encode@$0IB@@TLV@@YAXPEBE_KAEAY0IB@D@Z @ 0x180033208 (--$Base64Encode@$0IB@@TLV@@YAXPEBE_KAEAY0IB@D@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
ContentDeliveryManager::Background::CorrelationVectorWrapper *__fastcall ContentDeliveryManager::Background::CorrelationVectorWrapper::CorrelationVectorWrapper(
        ContentDeliveryManager::Background::CorrelationVectorWrapper *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  void *v4; // rbx
  void *v5; // rcx
  __int64 v6; // rbx
  _BYTE *v7; // r14
  signed __int64 v8; // rdi
  _QWORD v10[2]; // [rsp+20h] [rbp-48h] BYREF
  GUID v11; // [rsp+30h] [rbp-38h] BYREF
  GUID pguid; // [rsp+40h] [rbp-28h] BYREF

  v10[1] = -2LL;
  *(_QWORD *)this = 0LL;
  v2 = operator new(0xA0uLL);
  v3 = v2;
  v10[0] = v2;
  if ( v2 )
  {
    v2[19] = 64LL;
    *(_QWORD *)&pguid.Data1 = 0LL;
    *(_QWORD *)pguid.Data4 = 0LL;
    CoCreateGuid(&pguid);
    v11 = pguid;
    v3[17] = 17LL;
    v3[18] = 0x1300000000LL;
    memset_0(v3, 0, 0x81uLL);
    TLV::Base64Encode<129>(&v11, 12LL, v3);
    *((_WORD *)v3 + 8) = 46;
  }
  else
  {
    v3 = 0LL;
  }
  v4 = v3;
  v10[0] = v3;
  if ( this != (ContentDeliveryManager::Background::CorrelationVectorWrapper *)v10 )
  {
    v4 = 0LL;
    v10[0] = 0LL;
    v5 = *(void **)this;
    if ( v3 == *(_QWORD **)this )
      goto LABEL_11;
    if ( v5 )
      operator delete(v5);
    *(_QWORD *)this = v3;
  }
  if ( v4 )
    operator delete(v4);
LABEL_11:
  v6 = *(_QWORD *)this;
  v7 = (char *)this + 8;
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)this + 144LL), 0LL);
  if ( this != (ContentDeliveryManager::Background::CorrelationVectorWrapper *)-8LL )
  {
    *v7 = 0;
    if ( !memcpy_s((char *)this + 8, *(_QWORD *)(v6 + 152), (const void *const)v6, WORD2(v8)) )
      sprintf_s(&v7[*(_QWORD *)(v6 + 136)], *(_QWORD *)(v6 + 152) - *(_QWORD *)(v6 + 136), "%u", v8);
  }
  return this;
}
