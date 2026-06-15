/*
 * XREFs of ?GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ @ 0x1800093A4
 * Callers:
 *     ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x1800059DC (--0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z.c)
 *     ??1CPdcTimerActivation@@QEAA@XZ @ 0x180005C28 (--1CPdcTimerActivation@@QEAA@XZ.c)
 *     ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x180079990 (-Renew@CPdcTimerActivation@@QEAAXXZ.c)
 * Callees:
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x180018560 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 */

__int64 __fastcall CVADServer::GetUniqueStreamIdentifier(CVADServer *this)
{
  __int64 v1; // rcx
  __int64 result; // rax
  CAudioStream *v3; // rcx
  __int64 (*v4)(void); // rax

  v1 = *((_QWORD *)this + 26);
  result = 0LL;
  if ( v1 )
  {
    v3 = (CAudioStream *)(v1 + 8);
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 72LL);
    if ( (char *)v4 == (char *)CAudioStream::GetUniqueStreamIdentifier )
      return CAudioStream::GetUniqueStreamIdentifier(v3);
    else
      return v4();
  }
  return result;
}
