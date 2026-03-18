/*
 * XREFs of AlpcpPortQueryConnectedSidInfo @ 0x14051FAF8
 * Callers:
 *     NtAlpcQueryInformation @ 0x14051F860 (NtAlpcQueryInformation.c)
 * Callees:
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     SeQueryUserSidToken @ 0x140438B84 (SeQueryUserSidToken.c)
 *     SeCaptureSid @ 0x140470AC8 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140470E00 (SeReleaseSid.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     AlpcpReferenceConnectedPort @ 0x14051FCC0 (AlpcpReferenceConnectedPort.c)
 */

__int64 __fastcall AlpcpPortQueryConnectedSidInfo(__int64 a1, PSID a2, __int64 a3, _DWORD *a4, char a5)
{
  unsigned int v7; // edi
  __int64 result; // rax
  struct _KPROCESS *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // r13
  unsigned __int64 *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r9
  PACCESS_TOKEN v16; // rbx
  int v17; // [rsp+20h] [rbp-D8h]
  PSID Sid1[2]; // [rsp+40h] [rbp-B8h] BYREF
  int v19; // [rsp+50h] [rbp-A8h]
  __int64 v20; // [rsp+58h] [rbp-A0h]
  _BYTE Sid2[80]; // [rsp+60h] [rbp-98h] BYREF

  v20 = a1;
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
  result = SeCaptureSid((unsigned __int8 *)a2, a5, a3, (__int64)a4, v17, 1, Sid1);
  v19 = result;
  if ( (int)result >= 0 )
  {
LABEL_6:
    v9 = 0LL;
    v10 = AlpcpReferenceConnectedPort(a1);
    v12 = (_QWORD *)v10;
    if ( v10 )
    {
      v13 = (unsigned __int64 *)(v10 + 352);
      v14 = KeAbPreAcquire(v10 + 352, 0LL, 0LL, v11);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v13, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v13, v14, (ULONG_PTR)v13, v15);
      if ( v14 )
        *(_BYTE *)(v14 + 26) |= 1u;
      v9 = (struct _KPROCESS *)v12[3];
      if ( ((unsigned __int8)v9 & 1) != 0 )
        v9 = 0LL;
      if ( v9 )
        ObfReferenceObjectWithTag(v9, 0x63706C41u);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v13, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v13);
      KeAbPostRelease((ULONG_PTR)v13);
      ObfDereferenceObject(v12);
    }
    if ( v9 )
    {
      v16 = PsReferencePrimaryToken(v9);
      SeQueryUserSidToken((__int64)v16, Sid2, 0x44u, 0LL);
      ObFastDereferenceObject((signed __int64 *)&v9[1].Affinity.Bitmap[5], (unsigned __int64)v16);
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
