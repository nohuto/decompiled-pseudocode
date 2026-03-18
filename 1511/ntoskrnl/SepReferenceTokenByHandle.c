/*
 * XREFs of SepReferenceTokenByHandle @ 0x14008A010
 * Callers:
 *     NtQueryInformationToken @ 0x140431390 (NtQueryInformationToken.c)
 *     NtQuerySecurityAttributesToken @ 0x140433870 (NtQuerySecurityAttributesToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x14042536C (RtlIsValidProcessTrustLabelSid.c)
 *     PsReferenceImpersonationTokenEx @ 0x140433F70 (PsReferenceImpersonationTokenEx.c)
 *     PsReferenceEffectiveToken @ 0x1404340D0 (PsReferenceEffectiveToken.c)
 */

__int64 __fastcall SepReferenceTokenByHandle(
        char *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        PVOID *a4,
        _BYTE *a5,
        _QWORD *a6)
{
  _BYTE *v6; // rdi
  _QWORD *v7; // rsi
  unsigned int v8; // ebx
  bool v11; // zf
  unsigned int CurrentThread; // ecx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // r9
  __int64 v17; // r10
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  PSID v22; // r11
  __int64 v23; // r11
  __int64 v24; // r10
  int v25; // [rsp+30h] [rbp-18h] BYREF
  int v26; // [rsp+34h] [rbp-14h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF
  char v28; // [rsp+50h] [rbp+8h] BYREF

  v6 = a5;
  v7 = a6;
  v8 = 0;
  *a5 = 0;
  *v7 = 0LL;
  if ( (unsigned __int64)(a1 + 6) > 2 )
  {
    v8 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)SeTokenObjectType, a3, &Object, 0LL);
    *a4 = Object;
    return v8;
  }
  if ( (a2 & 0xFFFFFFE7) != 0 )
    return 3221225506LL;
  *a4 = 0LL;
  *v6 = 0;
  *v7 = 0LL;
  if ( a1 == (char *)-4LL )
  {
    *a4 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
    return v8;
  }
  v11 = a1 + 5 == 0LL;
  CurrentThread = (unsigned int)KeGetCurrentThread();
  if ( !v11 )
  {
    v13 = (_QWORD *)PsReferenceEffectiveToken(
                      CurrentThread,
                      (unsigned int)&v26,
                      (unsigned int)&a6,
                      (unsigned int)&v25,
                      (__int64)&a5);
    v16 = v13;
    if ( v26 != 2 || v25 )
    {
LABEL_9:
      v17 = v16[138];
      v18 = (unsigned __int8)a5;
      *v6 = 0;
      *v7 = 0LL;
      if ( v18 < 81 )
      {
LABEL_10:
        if ( !v17 )
        {
LABEL_11:
          *a4 = v16;
          return v8;
        }
        if ( (unsigned __int8)RtlIsValidProcessTrustLabelSid(v17, v14, v15, v16) )
        {
          if ( v23 )
          {
            if ( *(_DWORD *)(v23 + 8) >= *(_DWORD *)(v24 + 8) && *(_DWORD *)(v23 + 12) >= *(_DWORD *)(v24 + 12) )
              goto LABEL_11;
          }
          else if ( !*(_DWORD *)(v24 + 8) )
          {
            goto LABEL_11;
          }
        }
LABEL_32:
        *v6 = 1;
        *v7 = v23;
        goto LABEL_11;
      }
      v19 = v18 - 81;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 15;
          if ( v21 )
          {
            if ( v21 != 1 )
              goto LABEL_10;
            v22 = SeProcTrustWinTcbSid;
          }
          else
          {
            v22 = SeProcTrustLiteWinTcbSid;
          }
        }
        else
        {
          v22 = SeProcTrustWinSid;
        }
      }
      else
      {
        v22 = SeProcTrustLiteWinSid;
      }
      if ( v22 && !(unsigned __int8)RtlIsValidProcessTrustLabelSid(v22, v14, v15, v16) )
        goto LABEL_32;
      goto LABEL_10;
    }
    goto LABEL_14;
  }
  v13 = (_QWORD *)PsReferenceImpersonationTokenEx(
                    CurrentThread,
                    0,
                    (unsigned int)&v28,
                    (unsigned int)&a6,
                    (__int64)&v25,
                    (__int64)&a5);
  v16 = v13;
  if ( v13 )
  {
    if ( v25 )
      goto LABEL_9;
LABEL_14:
    ObfDereferenceObjectWithTag(v13, 0x746C6644u);
    return 3221225638LL;
  }
  return 3221225596LL;
}
