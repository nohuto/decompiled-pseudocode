/*
 * XREFs of ?Confirm@CFlipToken@@UEAAXXZ @ 0x1C0047E10
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0047B34 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     GreDxgkConfirmToken @ 0x1C00B6030 (GreDxgkConfirmToken.c)
 */

void __fastcall CFlipToken::Confirm(CFlipToken *this)
{
  _QWORD *v2; // rax
  int v3; // r8d
  int v4; // edx
  __int64 v5; // rax
  __int64 v6; // [rsp+28h] [rbp-10h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 6) = 4;
  CFlipToken::TraceStateChanged(this);
  if ( !*((_BYTE *)this + 220) && *((_BYTE *)this + 221) )
  {
    v2 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v2[3] = *((_QWORD *)this + 14);
    v7 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL);
    v2[4] = v7;
    v2[5] = *((_QWORD *)this + 5);
    v2[6] = *((unsigned int *)this + 63);
    v2[7] = *((_QWORD *)this + 29);
    WdLogEvent5_WdPresentTokenEvent(v2);
    v3 = *((_DWORD *)this + 63);
    v4 = *((_DWORD *)this + 60);
    v6 = *((_QWORD *)this + 29);
    v5 = *((_QWORD *)this + 5);
    v7 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL);
    GreDxgkConfirmToken(*((_QWORD *)this + 28), v4, v3, (unsigned int)&v7, v5, v6);
    *((_BYTE *)this + 221) = 0;
  }
  *((_QWORD *)this + 14) = 0LL;
}
