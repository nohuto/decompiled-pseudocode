/*
 * XREFs of ?ResetOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x18012F250
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

void __fastcall CInteractionContextWrapper::ResetOutput(
        CInteractionContextWrapper *this,
        __int64 a2,
        __int64 a3,
        const GUID *a4)
{
  CInteractionContextWrapper *v4; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  CInteractionContextWrapper **v6; // [rsp+58h] [rbp-20h]
  __int64 v7; // [rsp+60h] [rbp-18h]

  *((_BYTE *)this + 56) &= ~1u;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 1065353216LL;
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_180190AC0 & 2) != 0 && (qword_180190AC8 & 2) == qword_180190AC8 )
  {
    v4 = this;
    v6 = &v4;
    v7 = 8LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016F8E3, 0LL, a4, 3u, &v5);
  }
}
