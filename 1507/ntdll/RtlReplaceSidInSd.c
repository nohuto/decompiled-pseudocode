/*
 * XREFs of RtlReplaceSidInSd @ 0x1800CEA20
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x18006CB40 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x18006F360 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x18006F790 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x180070A00 (RtlGetGroupSecurityDescriptor.c)
 *     memcmp @ 0x180087B20 (memcmp.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

NTSTATUS __cdecl RtlReplaceSidInSd(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID OldSid,
        PSID NewSid,
        ULONG *NumChanges)
{
  int v5; // r14d
  size_t v7; // r14
  PSECURITY_DESCRIPTOR v9; // r13
  NTSTATUS result; // eax
  unsigned __int8 v11; // al
  int v12; // ecx
  char *v13; // rsi
  unsigned __int8 v14; // al
  int v15; // ecx
  char *v16; // rsi
  __int64 AceCount; // rsi
  PACL v18; // rdi
  __int64 v19; // rdx
  unsigned __int8 v20; // al
  int v21; // ecx
  void *v22; // r15
  __int64 v23; // rsi
  PACL v24; // rdi
  __int64 v25; // rdx
  unsigned __int8 v26; // al
  int v27; // ecx
  void *v28; // r15
  unsigned int v29; // [rsp+20h] [rbp-18h]
  PACL Dacl[2]; // [rsp+28h] [rbp-10h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+88h] [rbp+50h] BYREF
  char *v33; // [rsp+90h] [rbp+58h]
  PSID Owner; // [rsp+98h] [rbp+60h] BYREF

  v33 = (char *)NewSid;
  *NumChanges = 0;
  v5 = *((unsigned __int8 *)OldSid + 1);
  Owner = 0LL;
  v7 = (unsigned int)(4 * v5);
  v29 = v7;
  v9 = SecurityDescriptor;
  result = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, &OwnerDefaulted);
  if ( result >= 0 )
  {
    if ( Owner )
    {
      if ( *(_BYTE *)Owner == *(_BYTE *)OldSid )
      {
        v11 = *((_BYTE *)OldSid + 1);
        if ( *((_BYTE *)Owner + 1) == v11 || *((unsigned __int8 *)Owner + 1) == v11 + 1 )
        {
          v12 = *(_DWORD *)((char *)Owner + 2) - *(_DWORD *)((char *)OldSid + 2);
          if ( !v12 )
            v12 = *((unsigned __int16 *)Owner + 3) - *((unsigned __int16 *)OldSid + 3);
          if ( !v12 )
          {
            v13 = (char *)Owner + 8;
            if ( !memcmp((char *)Owner + 8, (char *)OldSid + 8, (unsigned int)v7) )
            {
              memmove(v13, (char *)NewSid + 8, (unsigned int)v7);
              ++*NumChanges;
            }
          }
        }
      }
    }
    Owner = 0LL;
    result = RtlGetGroupSecurityDescriptor(v9, &Owner, &OwnerDefaulted);
    if ( result >= 0 )
    {
      if ( Owner )
      {
        if ( *(_BYTE *)Owner == *(_BYTE *)OldSid )
        {
          v14 = *((_BYTE *)OldSid + 1);
          if ( *((_BYTE *)Owner + 1) == v14 || *((unsigned __int8 *)Owner + 1) == v14 + 1 )
          {
            v15 = *(_DWORD *)((char *)Owner + 2) - *(_DWORD *)((char *)OldSid + 2);
            if ( !v15 )
              v15 = *((unsigned __int16 *)Owner + 3) - *((unsigned __int16 *)OldSid + 3);
            if ( !v15 )
            {
              v16 = (char *)Owner + 8;
              if ( !memcmp((char *)Owner + 8, (char *)OldSid + 8, (unsigned int)v7) )
              {
                memmove(v16, (char *)NewSid + 8, (unsigned int)v7);
                ++*NumChanges;
              }
            }
          }
        }
      }
      Dacl[0] = 0LL;
      result = RtlGetDaclSecurityDescriptor(v9, (PBOOLEAN)&Owner, Dacl, &OwnerDefaulted);
      if ( result >= 0 )
      {
        if ( (_BYTE)Owner )
        {
          if ( Dacl[0] )
          {
            AceCount = Dacl[0]->AceCount;
            v18 = Dacl[0] + 1;
            if ( Dacl[0]->AceCount )
            {
              while ( v18->AclRevision > 3u )
              {
                if ( v18->AclRevision == 4 )
                {
                  v19 = (__int64)(&v18[2].AceCount + 2 * (unsigned int)HIBYTE(v18[1].AceCount));
                  goto LABEL_29;
                }
LABEL_37:
                v18 = (PACL)((char *)v18 + v18->AclSize);
                if ( !--AceCount )
                {
                  v9 = SecurityDescriptor;
                  v7 = (unsigned int)v7;
                  goto LABEL_39;
                }
              }
              v19 = (__int64)&v18[1];
LABEL_29:
              if ( *(_BYTE *)v19 == *(_BYTE *)OldSid )
              {
                v20 = *((_BYTE *)OldSid + 1);
                if ( *(_BYTE *)(v19 + 1) == v20 || *(unsigned __int8 *)(v19 + 1) == v20 + 1 )
                {
                  v21 = *(_DWORD *)(v19 + 2) - *(_DWORD *)((char *)OldSid + 2);
                  if ( !v21 )
                    v21 = *(unsigned __int16 *)(v19 + 6) - *((unsigned __int16 *)OldSid + 3);
                  if ( !v21 )
                  {
                    v22 = (void *)(v19 + 8);
                    if ( !memcmp((const void *)(v19 + 8), (char *)OldSid + 8, (unsigned int)v7) )
                    {
                      memmove(v22, v33 + 8, (unsigned int)v7);
                      ++*NumChanges;
                    }
                  }
                }
              }
              goto LABEL_37;
            }
          }
        }
LABEL_39:
        Dacl[0] = 0LL;
        result = RtlGetSaclSecurityDescriptor(v9, (PBOOLEAN)&Owner, Dacl, &OwnerDefaulted);
        if ( result >= 0 && (_BYTE)Owner && Dacl[0] )
        {
          v23 = Dacl[0]->AceCount;
          v24 = Dacl[0] + 1;
          if ( Dacl[0]->AceCount )
          {
            while ( v24->AclRevision > 3u )
            {
              if ( v24->AclRevision == 4 )
              {
                v25 = (__int64)(&v24[2].AceCount + 2 * (unsigned int)HIBYTE(v24[1].AceCount));
                goto LABEL_47;
              }
LABEL_55:
              v7 = v29;
              v24 = (PACL)((char *)v24 + v24->AclSize);
              if ( !--v23 )
                return 0;
            }
            v25 = (__int64)&v24[1];
LABEL_47:
            if ( *(_BYTE *)v25 == *(_BYTE *)OldSid )
            {
              v26 = *((_BYTE *)OldSid + 1);
              if ( *(_BYTE *)(v25 + 1) == v26 || *(unsigned __int8 *)(v25 + 1) == v26 + 1 )
              {
                v27 = *(_DWORD *)(v25 + 2) - *(_DWORD *)((char *)OldSid + 2);
                if ( !v27 )
                  v27 = *(unsigned __int16 *)(v25 + 6) - *((unsigned __int16 *)OldSid + 3);
                if ( !v27 )
                {
                  v28 = (void *)(v25 + 8);
                  if ( !memcmp((const void *)(v25 + 8), (char *)OldSid + 8, v7) )
                  {
                    memmove(v28, v33 + 8, v7);
                    ++*NumChanges;
                  }
                }
              }
            }
            goto LABEL_55;
          }
          return 0;
        }
      }
    }
  }
  return result;
}
