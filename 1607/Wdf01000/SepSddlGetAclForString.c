/*
 * XREFs of SepSddlGetAclForString @ 0x1C00CB670
 * Callers:
 *     SepSddlDaclFromSDDLString @ 0x1C00CB5C4 (SepSddlDaclFromSDDLString.c)
 * Callees:
 *     memset @ 0x1C003C780 (memset.c)
 *     SepSddlAddAceToAcl @ 0x1C00CB9DC (SepSddlAddAceToAcl.c)
 *     SepSddlGetSidForString @ 0x1C00CBA64 (SepSddlGetSidForString.c)
 *     SepSddlParseWideStringUlong @ 0x1C00CCA5C (SepSddlParseWideStringUlong.c)
 */

__int64 __fastcall SepSddlGetAclForString(wchar_t *AclString, _ACL **Acl, wchar_t **End)
{
  wchar_t *v5; // rbx
  unsigned int SidForString; // r12d
  unsigned int v7; // edi
  wchar_t *v8; // rax
  __int64 v9; // rax
  bool v10; // zf
  wchar_t *v11; // rax
  int v12; // r8d
  wchar_t *i; // rax
  unsigned int v14; // r15d
  unsigned int v15; // edi
  _ACL *PoolWithTag; // rax
  _ACL *v17; // r14
  int v18; // r14d
  _STRSD_KEY_LOOKUP *v19; // rdi
  unsigned int v20; // ebp
  _WORD *j; // rbx
  wchar_t *k; // rbx
  unsigned int m; // esi
  __int64 KeyLen; // rax
  wchar_t *v25; // rax
  wchar_t *v26; // rbx
  __int64 v27; // rax
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  wchar_t *v30; // rbx
  _ACL *v32; // rax
  void *SidPtr; // [rsp+40h] [rbp-58h] BYREF
  unsigned int Mask; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int AclUsed; // [rsp+A8h] [rbp+10h] BYREF
  wchar_t *MaskEnd; // [rsp+B0h] [rbp+18h] BYREF
  wchar_t *EndLocation; // [rsp+B8h] [rbp+20h] BYREF

  *Acl = 0LL;
  v5 = AclString;
  SidPtr = 0LL;
  SidForString = 0;
  v7 = 0;
  v8 = wcschr(AclString, 0x3Au);
  *End = v8;
  if ( v8 != v5 )
  {
    if ( v8 )
    {
      v11 = v8 - 1;
    }
    else
    {
      v9 = -1LL;
      do
        v10 = v5[++v9] == 0;
      while ( !v10 );
      v11 = &v5[v9];
    }
    *End = v11;
    v12 = 0;
    for ( i = v5; i < *End; ++i )
    {
      if ( *i == 59 )
      {
        ++v7;
      }
      else if ( *i != 32 )
      {
        v12 = 1;
      }
    }
    v14 = v7 / 5;
    if ( v7 != 5 * (v7 / 5) || !v7 && v12 )
      return (unsigned int)-1073741811;
    if ( v14 )
    {
      v15 = 48 * v14 + 8;
      if ( v15 > 0xFFFF )
        v15 = 0xFFFF;
      PoolWithTag = (_ACL *)ExAllocatePoolWithTag(PagedPool, v15, 0x6C416553u);
      *Acl = PoolWithTag;
      v17 = PoolWithTag;
      if ( PoolWithTag )
      {
        AclUsed = 8;
        memset(PoolWithTag, 0, v15);
        *(_WORD *)&v17->AclRevision = 2;
        v17->AclSize = v15;
        *(_DWORD *)&v17->AceCount = 0;
        v18 = 0;
        v19 = RightsLookup;
        while ( 1 )
        {
          v10 = *v5 == 32;
          v20 = 0;
          Mask = 0;
          if ( v10 )
          {
            do
              ++v5;
            while ( *v5 == 32 );
          }
          if ( *v5 == 40 )
            ++v5;
          for ( ; *v5 == 32; ++v5 )
            ;
          if ( _wcsnicmp(v5, L"A", 1uLL) )
            break;
          for ( j = v5 + 2; *j == 32; ++j )
            ;
          if ( *j != 59 )
            break;
          for ( k = j + 1; *k == 32; ++k )
            ;
          if ( *k != 59 )
          {
LABEL_27:
            while ( *k == 32 )
              ++k;
            for ( m = 0; m < 8; ++m )
            {
              if ( !_wcsnicmp(k, v19->Key, v19->KeyLen) )
              {
                v19 = RightsLookup;
                v20 |= RightsLookup[m].Value;
                KeyLen = RightsLookup[m].KeyLen;
                Mask = v20;
                v25 = &k[KeyLen];
                goto LABEL_34;
              }
              ++v19;
            }
            MaskEnd = k;
            SepSddlParseWideStringUlong(k, (const wchar_t **)&MaskEnd, &Mask);
            v25 = MaskEnd;
            if ( MaskEnd == k )
              break;
            v20 = Mask;
            v19 = RightsLookup;
LABEL_34:
            k = v25;
            if ( *v25 != 59 )
              goto LABEL_27;
          }
          v26 = k + 1;
          v27 = 2LL;
          do
          {
            for ( ; *v26 == 32; ++v26 )
              ;
            if ( *v26 != 59 )
              SidForString = -1073741811;
            ++v26;
            --v27;
          }
          while ( v27 );
          if ( SidForString )
            goto LABEL_80;
          for ( ; *v26 == 32; ++v26 )
            ;
          SidForString = SepSddlGetSidForString(v26, &SidPtr, &EndLocation);
          if ( SidForString )
            goto LABEL_80;
          v30 = EndLocation;
          if ( !EndLocation )
            goto LABEL_78;
          if ( *EndLocation == 32 )
          {
            do
              ++v30;
            while ( *v30 == 32 );
            EndLocation = v30;
          }
          if ( *v30 != 41 )
          {
LABEL_78:
            SidForString = -1073741705;
            goto LABEL_80;
          }
          v5 = v30 + 1;
          if ( SidPtr )
          {
            SidForString = SepSddlAddAceToAcl(Acl, &AclUsed, v28, v29, v20, v14 - v18, SidPtr);
            if ( SidForString )
              goto LABEL_80;
          }
          if ( *v5 == 40 )
            ++v5;
          if ( ++v18 >= v14 )
          {
            (*Acl)->AclSize = AclUsed;
            return SidForString;
          }
        }
        SidForString = -1073741811;
LABEL_80:
        ExFreePoolWithTag(*Acl, 0);
        *Acl = 0LL;
        return SidForString;
      }
    }
    else
    {
      v32 = (_ACL *)ExAllocatePoolWithTag(PagedPool, 8uLL, 0x6C416553u);
      *Acl = v32;
      if ( v32 )
      {
        *v32 = (_ACL)524290LL;
        return SidForString;
      }
    }
    return (unsigned int)-1073741670;
  }
  return 3221225485LL;
}
