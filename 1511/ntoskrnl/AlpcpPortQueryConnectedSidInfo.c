/*
 * XREFs of AlpcpPortQueryConnectedSidInfo @ 0x14048C178
 * Callers:
 *     NtAlpcQueryInformation @ 0x14048BF30 (NtAlpcQueryInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     AlpcpReferenceConnectedPort @ 0x140425270 (AlpcpReferenceConnectedPort.c)
 *     SeCaptureSid @ 0x14046B354 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x14046C40C (SeReleaseSid.c)
 *     SeQueryUserSidToken @ 0x140479360 (SeQueryUserSidToken.c)
 */

__int64 __fastcall AlpcpPortQueryConnectedSidInfo(__int64 a1, PSID a2, __int64 a3, _DWORD *a4, char a5)
{
  unsigned int v7; // edi
  __int64 result; // rax
  struct _KPROCESS *v9; // rsi
  __int64 v10; // rax
  _QWORD *v11; // r13
  unsigned __int64 *v12; // rbx
  __int64 v13; // rsi
  PACCESS_TOKEN v14; // rbx
  int v15; // [rsp+20h] [rbp-D8h]
  PSID Sid1[2]; // [rsp+40h] [rbp-B8h] BYREF
  int v17; // [rsp+50h] [rbp-A8h]
  __int64 v18; // [rsp+58h] [rbp-A0h]
  _BYTE Sid2[80]; // [rsp+60h] [rbp-98h] BYREF

  v18 = a1;
  Sid1[1] = a2;
  v7 = 0;
  Sid1[0] = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !a5 )
  {
    if ( a4 )
      *a4 = 0;
    Sid1[0] = a2;
    goto LABEL_6;
  }
  if ( a4 )
    *a4 = 0;
  result = SeCaptureSid((unsigned __int8 *)a2, a5, a3, (__int64)a4, v15, 1, Sid1);
  v17 = result;
  if ( (int)result >= 0 )
  {
LABEL_6:
    v9 = 0LL;
    v10 = AlpcpReferenceConnectedPort(a1);
    v11 = (_QWORD *)v10;
    if ( v10 )
    {
      v12 = (unsigned __int64 *)(v10 + 352);
      v13 = KeAbPreAcquire(v10 + 352, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v12, v13, (ULONG_PTR)v12);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      v9 = (struct _KPROCESS *)v11[3];
      if ( ((unsigned __int8)v9 & 1) != 0 )
        v9 = 0LL;
      if ( v9 )
        ObfReferenceObjectWithTag(v9, 0x63706C41u);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v12);
      KeAbPostRelease((ULONG_PTR)v12);
      ObfDereferenceObject(v11);
    }
    if ( v9 )
    {
      v14 = PsReferencePrimaryToken(v9);
      SeQueryUserSidToken((__int64)v14, Sid2, 0x44u, 0LL);
      ObFastDereferenceObject((signed __int64 *)&v9[1].Affinity.Bitmap[5], (unsigned __int64)v14);
      if ( !RtlEqualSid(Sid1[0], Sid2) )
        v7 = -1073741152;
      ObfDereferenceObjectWithTag(v9, 0x63706C41u);
    }
    else
    {
      v7 = -1073741769;
    }
    if ( Sid1[0] != a2 )
      SeReleaseSid(Sid1[0], a5, 1);
    return v7;
  }
  return result;
}
