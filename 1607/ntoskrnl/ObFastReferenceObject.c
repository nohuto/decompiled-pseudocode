/*
 * XREFs of ObFastReferenceObject @ 0x14000F760
 * Callers:
 *     MiReferenceInPageFile @ 0x140024E50 (MiReferenceInPageFile.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1400CFD4C (CcReferenceSharedCacheMapFileObject.c)
 *     SeCreateClientSecurityEx @ 0x14040F250 (SeCreateClientSecurityEx.c)
 *     SeCaptureSubjectContext @ 0x140412030 (SeCaptureSubjectContext.c)
 *     PsReferenceEffectiveToken @ 0x1404124C0 (PsReferenceEffectiveToken.c)
 *     PfQuerySuperfetchInformation @ 0x140418550 (PfQuerySuperfetchInformation.c)
 *     PsReferencePrimaryToken @ 0x140418C20 (PsReferencePrimaryToken.c)
 *     ObOpenObjectByNameEx @ 0x140419070 (ObOpenObjectByNameEx.c)
 *     SeCaptureSubjectContextEx @ 0x14041F830 (SeCaptureSubjectContextEx.c)
 *     NtOpenProcessTokenEx @ 0x140420240 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x1404203C0 (ObOpenObjectByPointer.c)
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     PspReferenceSystemDll @ 0x14046C06C (PspReferenceSystemDll.c)
 *     PsImpersonateClient @ 0x14050F3C0 (PsImpersonateClient.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x140096540 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1400A7FB4 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEDC0 (ObpPushStackInfo.c)
 */

ULONG_PTR __fastcall ObFastReferenceObject(signed __int64 *a1)
{
  signed __int64 v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rdi
  unsigned int v5; // r8d
  ULONG_PTR v6; // rdi
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  signed __int64 BugCheckParameter4; // rax

  _m_prefetchw(a1);
  v2 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64(a1, v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = v2;
  v5 = v2 & 0xF;
  v6 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v5 > 1 )
    return v6;
  if ( !v5 )
    return 0LL;
  ObReferenceObjectExWithTag(v6, 15LL);
  _m_prefetchw(a1);
  v8 = *a1;
  while ( (v8 & 0xF) == 0 )
  {
    if ( v6 != (v8 & 0xFFFFFFFFFFFFFFF0uLL) )
      break;
    v9 = v8;
    v8 = _InterlockedCompareExchange64(a1, v8 + 15, v8);
    if ( v9 == v8 )
      return v6;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(v6 - 48);
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 48), 0xFFFFFFFFFFFFFFF1uLL) - 15;
  if ( BugCheckParameter4 > 0 )
    return v6;
  if ( BugCheckParameter4 )
    KeBugCheckEx(0x18u, 0LL, v6, 5uLL, BugCheckParameter4);
  ObpDeferObjectDeletion(v6 - 48);
  return v6;
}
