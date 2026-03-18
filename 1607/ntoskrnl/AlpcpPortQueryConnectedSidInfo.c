/*
 * XREFs of AlpcpPortQueryConnectedSidInfo @ 0x140476FE8
 * Callers:
 *     NtAlpcQueryInformation @ 0x140476D70 (NtAlpcQueryInformation.c)
 * Callees:
 *     RtlEqualSid @ 0x14000F570 (RtlEqualSid.c)
 *     ObFastDereferenceObject @ 0x14000F690 (ObFastDereferenceObject.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     SeQueryUserSidToken @ 0x1403FFC40 (SeQueryUserSidToken.c)
 *     PsReferencePrimaryToken @ 0x140418C20 (PsReferencePrimaryToken.c)
 *     SeCaptureSid @ 0x1404791AC (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140479554 (SeReleaseSid.c)
 *     AlpcpReferenceConnectedPort @ 0x14050C900 (AlpcpReferenceConnectedPort.c)
 */

__int64 __fastcall AlpcpPortQueryConnectedSidInfo(__int64 a1, PSID a2, __int64 a3, _DWORD *a4, char a5)
{
  unsigned int v7; // edi
  __int64 result; // rax
  struct _KPROCESS *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // r13
  unsigned __int64 *v14; // rbx
  __int64 v15; // rsi
  PACCESS_TOKEN v16; // rbx
  int v17; // [rsp+20h] [rbp-D8h]
  PSID Sid1; // [rsp+40h] [rbp-B8h] BYREF
  int v19; // [rsp+48h] [rbp-B0h]
  PSID v20; // [rsp+50h] [rbp-A8h]
  __int64 v21; // [rsp+58h] [rbp-A0h]
  _BYTE Sid2[80]; // [rsp+60h] [rbp-98h] BYREF

  v21 = a1;
  v20 = a2;
  v7 = 0;
  Sid1 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !a5 )
  {
    if ( a4 )
      *a4 = 0;
    Sid1 = a2;
    goto LABEL_6;
  }
  if ( a4 )
    *a4 = 0;
  result = SeCaptureSid(a2, v17, 1, (__int64)&Sid1);
  v19 = result;
  if ( (int)result >= 0 )
  {
LABEL_6:
    v9 = 0LL;
    v10 = AlpcpReferenceConnectedPort(a1);
    v13 = (_QWORD *)v10;
    if ( v10 )
    {
      v14 = (unsigned __int64 *)(v10 + 352);
      v15 = KeAbPreAcquire(v10 + 352, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v14, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v14, v15, (ULONG_PTR)v14);
      if ( v15 )
        *(_BYTE *)(v15 + 26) |= 1u;
      v9 = (struct _KPROCESS *)v13[3];
      if ( ((unsigned __int8)v9 & 1) != 0 )
        v9 = 0LL;
      if ( v9 )
        ObfReferenceObjectWithTag(v9, 0x63706C41u);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v14);
      KeAbPostRelease((ULONG_PTR)v14);
      ObfDereferenceObject(v13);
    }
    if ( v9 )
    {
      v16 = PsReferencePrimaryToken(v9);
      SeQueryUserSidToken((__int64)v16, Sid2, 0x44u, 0LL);
      ObFastDereferenceObject((signed __int64 *)&v9[1].Affinity.Bitmap[5], (unsigned __int64)v16);
      if ( !RtlEqualSid(Sid1, Sid2) )
        v7 = -1073741152;
      ObfDereferenceObjectWithTag(v9, 0x63706C41u);
    }
    else
    {
      v7 = -1073741769;
    }
    if ( Sid1 != a2 )
    {
      LOBYTE(v12) = 1;
      LOBYTE(v11) = a5;
      SeReleaseSid(Sid1, v11, v12);
    }
    return v7;
  }
  return result;
}
