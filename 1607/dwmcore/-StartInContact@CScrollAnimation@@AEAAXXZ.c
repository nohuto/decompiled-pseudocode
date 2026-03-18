/*
 * XREFs of ?StartInContact@CScrollAnimation@@AEAAXXZ @ 0x18015E3E4
 * Callers:
 *     ?GetInContactDelta@CScrollAnimation@@AEAAMXZ @ 0x18015DEB0 (-GetInContactDelta@CScrollAnimation@@AEAAMXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180117900 (_TlgCreateWsz.c)
 *     ?Reset@CScrollAnimation@@AEAAXM@Z @ 0x18015E310 (-Reset@CScrollAnimation@@AEAAXM@Z.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x18015E3B0 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 */

void __fastcall CScrollAnimation::StartInContact(CScrollAnimation *this, float a2)
{
  __int64 v3; // rax
  int v4; // ecx
  const WCHAR *v5; // rax
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  CScrollAnimation *v8; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  CScrollAnimation **v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  CScrollAnimation::Reset(this, a2);
  v3 = *(_QWORD *)this;
  *((_DWORD *)this + 106) = 1;
  (*(void (__fastcall **)(CScrollAnimation *))(v3 + 248))(this);
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v4 = *((_DWORD *)this + 72);
    v12 = 0;
    v10 = &v8;
    v8 = this;
    v11 = 8;
    v5 = ScrollAxisToString(v4);
    TlgCreateWsz(&pDesc, v5);
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4D12, v6, v7, 4u, &pData);
  }
}
