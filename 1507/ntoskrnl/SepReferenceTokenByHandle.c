/*
 * XREFs of SepReferenceTokenByHandle @ 0x140045160
 * Callers:
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     NtQuerySecurityAttributesToken @ 0x140482AD0 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x140482E10 (NtQueryInformationToken.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x140042D28 (RtlIsValidProcessTrustLabelSid.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceEffectiveToken @ 0x140481AE0 (PsReferenceEffectiveToken.c)
 *     PsReferenceImpersonationTokenEx @ 0x140486000 (PsReferenceImpersonationTokenEx.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
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
  _QWORD *v14; // r9
  void *v15; // r10
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  PSID v20; // r11
  __int64 v21; // r11
  __int64 v22; // r10
  int v23; // [rsp+30h] [rbp-18h] BYREF
  int v24; // [rsp+34h] [rbp-14h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF
  char v26; // [rsp+50h] [rbp+8h] BYREF

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
  if ( v11 )
  {
    v13 = (_QWORD *)PsReferenceImpersonationTokenEx(
                      CurrentThread,
                      0,
                      (unsigned int)&v26,
                      (unsigned int)&a6,
                      (__int64)&v23,
                      (__int64)&a5);
    v14 = v13;
    if ( !v13 )
      return 3221225596LL;
    if ( v23 )
      goto LABEL_9;
  }
  else
  {
    v13 = (_QWORD *)PsReferenceEffectiveToken(
                      CurrentThread,
                      (unsigned int)&v24,
                      (unsigned int)&a6,
                      (unsigned int)&v23,
                      (__int64)&a5);
    v14 = v13;
    if ( v24 != 2 || v23 )
    {
LABEL_9:
      v15 = (void *)v14[138];
      v16 = (unsigned __int8)a5;
      *v6 = 0;
      *v7 = 0LL;
      if ( v16 < 81 )
      {
LABEL_10:
        if ( !v15 )
        {
LABEL_11:
          *a4 = v14;
          return v8;
        }
        if ( RtlIsValidProcessTrustLabelSid(v15) )
        {
          if ( v21 )
          {
            if ( *(_DWORD *)(v21 + 8) >= *(_DWORD *)(v22 + 8) && *(_DWORD *)(v21 + 12) >= *(_DWORD *)(v22 + 12) )
              goto LABEL_11;
          }
          else if ( !*(_DWORD *)(v22 + 8) )
          {
            goto LABEL_11;
          }
        }
LABEL_31:
        *v6 = 1;
        *v7 = v21;
        goto LABEL_11;
      }
      v17 = v16 - 81;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 15;
          if ( v19 )
          {
            if ( v19 != 1 )
              goto LABEL_10;
            v20 = SeProcTrustWinTcbSid;
          }
          else
          {
            v20 = SeProcTrustLiteWinTcbSid;
          }
        }
        else
        {
          v20 = SeProcTrustWinSid;
        }
      }
      else
      {
        v20 = SeProcTrustLiteWinSid;
      }
      if ( v20 && !RtlIsValidProcessTrustLabelSid(v20) )
        goto LABEL_31;
      goto LABEL_10;
    }
  }
  ObfDereferenceObjectWithTag(v13, 0x746C6644u);
  return 3221225638LL;
}
