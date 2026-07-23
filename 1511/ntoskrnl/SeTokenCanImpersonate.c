/*
 * XREFs of SeTokenCanImpersonate @ 0x140426A30
 * Callers:
 *     PsImpersonateClient @ 0x1404264E0 (PsImpersonateClient.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x1400038F0 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x140003900 (SeTokenIsWriteRestricted.c)
 *     SepAcquireOrderedReadLocks @ 0x1400040E0 (SepAcquireOrderedReadLocks.c)
 *     SepReleaseOrderedReadLocks @ 0x140004154 (SepReleaseOrderedReadLocks.c)
 *     RtlSidDominates @ 0x140004D80 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x140004E6C (SepCopyTokenIntegrity.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlSidDominatesForTrust @ 0x14007A050 (RtlSidDominatesForTrust.c)
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlIsParentOfChildAppContainer @ 0x1403B4660 (RtlIsParentOfChildAppContainer.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1403BE3F0 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenIsElevated @ 0x1404ABED0 (SeTokenIsElevated.c)
 *     RtlQueryElevationFlags @ 0x1404AD20C (RtlQueryElevationFlags.c)
 */

NTSTATUS __fastcall SeTokenCanImpersonate(__int64 Token, __int64 a2, int a3, _BYTE *a4)
{
  NTSTATUS IsElevated; // ebx
  NTSTATUS result; // eax
  unsigned __int64 v9; // r10
  unsigned __int16 v10; // ax
  _WORD *v11; // r10
  _WORD *i; // r9
  __int64 v13; // r9
  unsigned __int16 v14; // r10
  void *v15; // r14
  void *v16; // r15
  char v17; // [rsp+30h] [rbp-59h] BYREF
  BOOLEAN DominatesTrust; // [rsp+31h] [rbp-58h] BYREF
  BOOLEAN Dominates[2]; // [rsp+32h] [rbp-57h] BYREF
  _RTL_ELEVATION_FLAGS Flags; // [rsp+34h] [rbp-55h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-51h] BYREF
  PSID Sid2; // [rsp+48h] [rbp-41h]
  PSID Sid1; // [rsp+58h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-19h] BYREF
  _DWORD *v25; // [rsp+90h] [rbp+7h]
  __int64 v26; // [rsp+98h] [rbp+Fh]
  __int64 v27; // [rsp+A0h] [rbp+17h]
  _DWORD v28[2]; // [rsp+A8h] [rbp+1Fh] BYREF

  Dominates[0] = 0;
  DominatesTrust = 0;
  v17 = 0;
  *a4 = 0;
  if ( a3 >= 2 && (*(_DWORD *)(a2 + 24) != 998 || *(_DWORD *)(a2 + 28)) )
  {
    result = RtlSidDominatesForTrust(*(PSID *)(Token + 1104), *(PSID *)(a2 + 1104), &DominatesTrust);
    if ( result < 0 )
      return result;
    if ( !DominatesTrust )
      *a4 = 1;
    if ( (*(_DWORD *)(Token + 72) & 0x20000000) == 0 )
    {
      SepAcquireOrderedReadLocks(Token, a2);
      SepCopyTokenIntegrity();
      SepCopyTokenIntegrity();
      IsElevated = RtlSidDominates(Sid1, Sid2, Dominates);
      if ( IsElevated >= 0 )
      {
        if ( !Dominates[0] )
          goto LABEL_40;
        if ( SepIsImpersonationAllowedDueToCapability((char *)Token, a2)
          || *(_DWORD *)(Token + 24) == *(_DWORD *)(a2 + 224) && *(_DWORD *)(Token + 28) == *(_DWORD *)(a2 + 228) )
        {
          IsElevated = 0;
          goto LABEL_41;
        }
        if ( !RtlEqualSid(**(PSID **)(Token + 152), **(PSID **)(a2 + 152)) )
        {
LABEL_40:
          IsElevated = -1073741727;
          goto LABEL_41;
        }
        if ( RtlQueryElevationFlags(&Flags) < 0 || (Flags.Flags & 1) == 0 )
          goto LABEL_32;
        IsElevated = SeTokenIsElevated(a2, &v17);
        if ( IsElevated >= 0 )
        {
          if ( !v17 )
            goto LABEL_32;
          IsElevated = SeTokenIsElevated(Token, &v17);
          if ( IsElevated >= 0 )
          {
            if ( !v17 && (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) != 0 )
            {
              RtlInitUnicodeString(&DestinationString, &word_140551830);
              v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[15];
              if ( v9 )
              {
                v10 = *(_WORD *)v9;
                if ( *(_WORD *)v9 )
                {
                  v11 = *(_WORD **)(v9 + 8);
                  for ( i = &v11[(unsigned __int64)v10 >> 1]; i != v11; --i )
                  {
                    if ( *i == 92 )
                      break;
                  }
                }
              }
              if ( stru_1406FB800.LevelPlus1 > 5 )
              {
                if ( TlgKeywordOn(&stru_1406FB800, 0x200000000000uLL) )
                {
                  v26 = 2LL;
                  v25 = v28;
                  v28[0] = v14;
                  v27 = v13;
                  v28[1] = 0;
                  TlgWrite(&stru_1406FB800, &unk_140254F66, 0LL, 0LL, 4u, &pData);
                }
              }
              goto LABEL_40;
            }
LABEL_32:
            IsElevated = 0;
            if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0
              || (*(_DWORD *)(a2 + 200) & 0x4000) != 0
              && ((v15 = *(void **)(a2 + 784), v16 = *(void **)(Token + 784), RtlEqualSid(v16, v15))
               || RtlIsParentOfChildAppContainer(v16, v15)) )
            {
              if ( !SeTokenIsRestricted((PACCESS_TOKEN)Token)
                || SeTokenIsRestricted((PACCESS_TOKEN)a2)
                && (SeTokenIsWriteRestricted((PACCESS_TOKEN)Token) || !SeTokenIsWriteRestricted((PACCESS_TOKEN)a2)) )
              {
                goto LABEL_41;
              }
            }
            goto LABEL_40;
          }
        }
      }
LABEL_41:
      SepReleaseOrderedReadLocks(Token, a2);
      return IsElevated;
    }
  }
  return 0;
}
