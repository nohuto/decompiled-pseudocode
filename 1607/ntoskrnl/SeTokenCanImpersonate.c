/*
 * XREFs of SeTokenCanImpersonate @ 0x14050F920
 * Callers:
 *     PsImpersonateClient @ 0x14050F3C0 (PsImpersonateClient.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     SepCopyTokenIntegrity @ 0x14000E110 (SepCopyTokenIntegrity.c)
 *     RtlEqualSid @ 0x14000F570 (RtlEqualSid.c)
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     RtlSidDominates @ 0x1400760C0 (RtlSidDominates.c)
 *     SeTokenIsRestricted @ 0x14007F740 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x14007F750 (SeTokenIsWriteRestricted.c)
 *     SepReleaseOrderedReadLocks @ 0x14007F7D8 (SepReleaseOrderedReadLocks.c)
 *     SepAcquireOrderedReadLocks @ 0x14007F810 (SepAcquireOrderedReadLocks.c)
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     RtlSidDominatesForTrust @ 0x1400D3CA0 (RtlSidDominatesForTrust.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     RtlIsParentOfChildAppContainer @ 0x1403E1C94 (RtlIsParentOfChildAppContainer.c)
 *     SeTokenIsElevated @ 0x1404D33E8 (SeTokenIsElevated.c)
 *     RtlQueryElevationFlags @ 0x1404D5D70 (RtlQueryElevationFlags.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405037E4 (SepIsImpersonationAllowedDueToCapability.c)
 */

__int64 __fastcall SeTokenCanImpersonate(_DWORD *Token, _DWORD *a2, int a3, _BYTE *a4)
{
  int IsElevated; // ebx
  void *v8; // rbx
  void *v9; // rdi
  __int64 result; // rax
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
  char v21; // [rsp+31h] [rbp-58h] BYREF
  bool v22; // [rsp+32h] [rbp-57h] BYREF
  int v23; // [rsp+34h] [rbp-55h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-51h] BYREF
  void *Buf2; // [rsp+48h] [rbp-41h]
  void *Buf1; // [rsp+58h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-19h] BYREF
  _DWORD *v28; // [rsp+90h] [rbp+7h]
  __int64 v29; // [rsp+98h] [rbp+Fh]
  __int64 v30; // [rsp+A0h] [rbp+17h]
  _DWORD v31[2]; // [rsp+A8h] [rbp+1Fh] BYREF

  v22 = 0;
  v21 = 0;
  v20 = 0;
  *a4 = 0;
  if ( a3 >= 2 )
  {
    if ( a2[6] == 998 && !a2[7] )
    {
      if ( (Token[50] & 0x4000) != 0 )
      {
        if ( (a2[50] & 0x4000) == 0 )
          return 3221225569LL;
        v8 = (void *)*((_QWORD *)a2 + 98);
        v9 = (void *)*((_QWORD *)Token + 98);
        if ( !RtlEqualSid(v9, v8) && !RtlIsParentOfChildAppContainer(v9, v8) )
          return 3221225569LL;
      }
      return 0;
    }
    result = RtlSidDominatesForTrust(*((_QWORD *)Token + 138), *((_QWORD *)a2 + 138), &v21);
    if ( (int)result < 0 )
      return result;
    if ( !v21 )
      *a4 = 1;
    if ( (Token[18] & 0x20000000) != 0 )
      return 0;
    SepAcquireOrderedReadLocks((unsigned __int64)Token, (unsigned __int64)a2);
    SepCopyTokenIntegrity();
    SepCopyTokenIntegrity();
    IsElevated = RtlSidDominates((char *)Buf1, (char *)Buf2, &v22);
    if ( IsElevated >= 0 )
    {
      if ( !v22 )
        goto LABEL_47;
      if ( SepIsImpersonationAllowedDueToCapability((__int64)Token, (__int64)a2)
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
      if ( (int)RtlQueryElevationFlags(&v23) < 0 || (v23 & 1) == 0 )
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
            RtlInitUnicodeString(&DestinationString, &word_140583CF0);
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
              TlgWrite(&stru_140747870, &unk_14027E426, 0LL, 0LL, 4u, &pData);
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
    return (unsigned int)IsElevated;
  }
  return 0;
}
