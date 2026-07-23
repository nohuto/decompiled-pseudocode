/*
 * XREFs of SeTokenCanImpersonate @ 0x1404F28B0
 * Callers:
 *     PsImpersonateClient @ 0x1404F2350 (PsImpersonateClient.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     SepCopyTokenIntegrity @ 0x14000DC90 (SepCopyTokenIntegrity.c)
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlSidDominates @ 0x140076140 (RtlSidDominates.c)
 *     SeTokenIsRestricted @ 0x14007F7C0 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x14007F7D0 (SeTokenIsWriteRestricted.c)
 *     SepReleaseOrderedReadLocks @ 0x14007F858 (SepReleaseOrderedReadLocks.c)
 *     SepAcquireOrderedReadLocks @ 0x14007F890 (SepAcquireOrderedReadLocks.c)
 *     RtlSidDominatesForTrust @ 0x1400D1B40 (RtlSidDominatesForTrust.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlIsParentOfChildAppContainer @ 0x1403E1C94 (RtlIsParentOfChildAppContainer.c)
 *     SeTokenIsElevated @ 0x1404B6E88 (SeTokenIsElevated.c)
 *     RtlQueryElevationFlags @ 0x1404B9374 (RtlQueryElevationFlags.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1404E6774 (SepIsImpersonationAllowedDueToCapability.c)
 */

NTSTATUS __fastcall SeTokenCanImpersonate(_DWORD *Token, _DWORD *a2, int a3, _BYTE *a4)
{
  int IsElevated; // ebx
  void *v8; // rbx
  void *v9; // rdi
  NTSTATUS result; // eax
  unsigned __int64 v11; // r10
  unsigned __int16 v12; // ax
  _WORD *v13; // r10
  _WORD *i; // r9
  __int64 v15; // r9
  unsigned __int16 v16; // r10
  void *v17; // r14
  void *v18; // r15
  int v19; // eax
  char v20; // [rsp+30h] [rbp-59h] BYREF
  BOOLEAN DominatesTrust; // [rsp+31h] [rbp-58h] BYREF
  BOOLEAN Dominates[2]; // [rsp+32h] [rbp-57h] BYREF
  _RTL_ELEVATION_FLAGS Flags; // [rsp+34h] [rbp-55h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-51h] BYREF
  PSID Sid2; // [rsp+48h] [rbp-41h]
  PSID Sid1; // [rsp+58h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-19h] BYREF
  _DWORD *v28; // [rsp+90h] [rbp+7h]
  __int64 v29; // [rsp+98h] [rbp+Fh]
  __int64 v30; // [rsp+A0h] [rbp+17h]
  _DWORD v31[2]; // [rsp+A8h] [rbp+1Fh] BYREF

  Dominates[0] = 0;
  DominatesTrust = 0;
  v20 = 0;
  *a4 = 0;
  if ( a3 >= 2 )
  {
    if ( a2[6] == 998 && !a2[7] )
    {
      if ( (Token[50] & 0x4000) != 0 )
      {
        if ( (a2[50] & 0x4000) == 0 )
          return -1073741727;
        v8 = (void *)*((_QWORD *)a2 + 98);
        v9 = (void *)*((_QWORD *)Token + 98);
        if ( !RtlEqualSid(v9, v8) && !RtlIsParentOfChildAppContainer(v9, v8) )
          return -1073741727;
      }
      return 0;
    }
    result = RtlSidDominatesForTrust(*((PSID *)Token + 138), *((PSID *)a2 + 138), &DominatesTrust);
    if ( result < 0 )
      return result;
    if ( !DominatesTrust )
      *a4 = 1;
    if ( (Token[18] & 0x20000000) != 0 )
      return 0;
    SepAcquireOrderedReadLocks((unsigned __int64)Token, (unsigned __int64)a2);
    SepCopyTokenIntegrity();
    SepCopyTokenIntegrity();
    IsElevated = RtlSidDominates(Sid1, Sid2, Dominates);
    if ( IsElevated >= 0 )
    {
      if ( !Dominates[0] )
        goto LABEL_47;
      if ( SepIsImpersonationAllowedDueToCapability((char *)Token, (__int64)a2)
        || Token[6] == a2[56] && Token[7] == a2[57] )
      {
        IsElevated = 0;
        goto LABEL_48;
      }
      if ( !RtlEqualSid(**((PSID **)Token + 19), **((PSID **)a2 + 19)) )
      {
LABEL_47:
        IsElevated = -1073741727;
        goto LABEL_48;
      }
      if ( RtlQueryElevationFlags(&Flags) < 0 || (Flags.Flags & 1) == 0 )
        goto LABEL_37;
      IsElevated = SeTokenIsElevated(a2, &v20);
      if ( IsElevated >= 0 )
      {
        if ( !v20 )
          goto LABEL_37;
        IsElevated = SeTokenIsElevated(Token, &v20);
        if ( IsElevated >= 0 )
        {
          if ( !v20 && (*(_DWORD *)(*((_QWORD *)Token + 27) + 32LL) & 4) != 0 )
          {
            RtlInitUnicodeString(&DestinationString, &word_1405841A0);
            v11 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[15];
            if ( v11 )
            {
              v12 = *(_WORD *)v11;
              if ( *(_WORD *)v11 )
              {
                v13 = *(_WORD **)(v11 + 8);
                for ( i = &v13[(unsigned __int64)v12 >> 1]; i != v13; --i )
                {
                  if ( *i == 92 )
                    break;
                }
              }
            }
            if ( stru_140747870.LevelPlus1 > 5 && TlgKeywordOn(&stru_140747870, 0x200000000000uLL) )
            {
              v29 = 2LL;
              v28 = v31;
              v31[0] = v16;
              v30 = v15;
              v31[1] = 0;
              TlgWrite(&stru_140747870, &unk_14027E526, 0LL, 0LL, 4u, &pData);
            }
            goto LABEL_47;
          }
LABEL_37:
          IsElevated = 0;
          if ( (Token[50] & 0x4000) == 0
            || (a2[50] & 0x4000) != 0
            && ((v17 = (void *)*((_QWORD *)a2 + 98), v18 = (void *)*((_QWORD *)Token + 98), RtlEqualSid(v18, v17))
             || RtlIsParentOfChildAppContainer(v18, v17)) )
          {
            if ( !SeTokenIsRestricted(Token)
              || SeTokenIsRestricted(a2) && (SeTokenIsWriteRestricted(Token) || !SeTokenIsWriteRestricted(a2)) )
            {
              v19 = a2[30];
              if ( Token[30] == v19 || v19 )
                goto LABEL_48;
            }
          }
          goto LABEL_47;
        }
      }
    }
LABEL_48:
    SepReleaseOrderedReadLocks((__int64)Token, (__int64)a2);
    return IsElevated;
  }
  return 0;
}
