/*
 * XREFs of SepSddlGetAclForString @ 0x1C00BC640
 * Callers:
 *     SepSddlDaclFromSDDLString @ 0x1C00BC59C (SepSddlDaclFromSDDLString.c)
 * Callees:
 *     memmove @ 0x1C0036900 (memmove.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     SepSddlGetSidForString @ 0x1C00BC9F8 (SepSddlGetSidForString.c)
 *     SepSddlParseWideStringUlong @ 0x1C00BE010 (SepSddlParseWideStringUlong.c)
 */

__int64 __fastcall SepSddlGetAclForString(unsigned __int16 *AclString, _ACL **Acl, unsigned __int16 **End)
{
  unsigned int v3; // r13d
  unsigned __int16 *v6; // rbx
  unsigned int SidForString; // r15d
  unsigned int v8; // edi
  unsigned __int16 *v9; // rax
  __int64 v10; // rax
  bool v11; // zf
  unsigned __int16 *v12; // rax
  int v13; // r8d
  unsigned __int16 *i; // rax
  unsigned int v15; // r14d
  unsigned int v16; // edi
  _ACL *PoolWithTag; // rax
  _ACL *v18; // rsi
  unsigned int v19; // r12d
  _WORD *j; // rbx
  wchar_t *k; // rbx
  unsigned int v22; // esi
  _STRSD_KEY_LOOKUP *v23; // rdi
  __int64 KeyLen; // rax
  unsigned __int16 *v25; // rax
  unsigned __int16 *v26; // rbx
  __int64 v27; // rax
  unsigned __int16 *v28; // rbx
  void *v29; // rdi
  _ACL *v30; // rsi
  ULONG v31; // eax
  unsigned int v32; // ebp
  _ACL *v34; // rax
  unsigned int v35; // r14d
  _ACL *v36; // rax
  _ACL *v37; // r15
  const void **v38; // r12
  const void **v39; // rbx
  unsigned int Size; // [rsp+20h] [rbp-68h]
  unsigned __int16 *MaskEnd; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int16 *EndLocation; // [rsp+30h] [rbp-58h] BYREF
  void *SidPtr; // [rsp+38h] [rbp-50h] BYREF
  unsigned int Mask; // [rsp+90h] [rbp+8h] BYREF
  const void **v45; // [rsp+98h] [rbp+10h]
  unsigned int v46; // [rsp+A0h] [rbp+18h]
  unsigned int v47; // [rsp+A8h] [rbp+20h]

  v45 = (const void **)Acl;
  v3 = 0;
  *Acl = 0LL;
  v6 = AclString;
  SidPtr = 0LL;
  SidForString = 0;
  v8 = 0;
  v9 = wcschr(AclString, 0x3Au);
  *End = v9;
  if ( v9 != v6 )
  {
    if ( v9 )
    {
      v12 = v9 - 1;
    }
    else
    {
      v10 = -1LL;
      do
        v11 = v6[++v10] == 0;
      while ( !v11 );
      v12 = &v6[v10];
    }
    *End = v12;
    v13 = 0;
    for ( i = v6; i < *End; ++i )
    {
      if ( *i == 59 )
      {
        ++v8;
      }
      else if ( *i != 32 )
      {
        v13 = 1;
      }
    }
    v15 = v8 / 5;
    v47 = v8 / 5;
    if ( v8 != 5 * (v8 / 5) || !v8 && v13 )
      return (unsigned int)-1073741811;
    if ( v15 )
    {
      v16 = 48 * v15 + 8;
      if ( v16 > 0xFFFF )
        v16 = 0xFFFF;
      PoolWithTag = (_ACL *)ExAllocatePoolWithTag(PagedPool, v16, 0x6C416553u);
      *Acl = PoolWithTag;
      v18 = PoolWithTag;
      if ( PoolWithTag )
      {
        Size = 8;
        memset(PoolWithTag, 0, v16);
        *(_WORD *)&v18->AclRevision = 2;
        v19 = 0;
        v18->AclSize = v16;
        *(_DWORD *)&v18->AceCount = 0;
        v46 = 0;
        while ( 1 )
        {
          v11 = *v6 == 32;
          Mask = 0;
          if ( v11 )
          {
            do
              ++v6;
            while ( *v6 == 32 );
          }
          if ( *v6 == 40 )
            ++v6;
          for ( ; *v6 == 32; ++v6 )
            ;
          if ( _wcsnicmp(v6, L"A", 1uLL) )
            break;
          for ( j = v6 + 2; *j == 32; ++j )
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
            v22 = 0;
            v23 = RightsLookup;
            do
            {
              if ( !_wcsnicmp(k, v23->Key, v23->KeyLen) )
              {
                v3 |= RightsLookup[v22].Value;
                KeyLen = RightsLookup[v22].KeyLen;
                Mask = v3;
                v25 = &k[KeyLen];
                goto LABEL_34;
              }
              ++v22;
              ++v23;
            }
            while ( v22 < 8 );
            MaskEnd = k;
            SepSddlParseWideStringUlong(k, (const wchar_t **)&MaskEnd, &Mask);
            v25 = MaskEnd;
            if ( MaskEnd == k )
              break;
            v3 = Mask;
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
            goto LABEL_85;
          for ( ; *v26 == 32; ++v26 )
            ;
          SidForString = SepSddlGetSidForString(v26, &SidPtr, &EndLocation);
          if ( SidForString )
            goto LABEL_85;
          v28 = EndLocation;
          if ( !EndLocation )
            goto LABEL_83;
          if ( *EndLocation == 32 )
          {
            do
              ++v28;
            while ( *v28 == 32 );
            EndLocation = v28;
          }
          if ( *v28 != 41 )
          {
LABEL_83:
            SidForString = -1073741705;
            goto LABEL_85;
          }
          v29 = SidPtr;
          v6 = v28 + 1;
          if ( SidPtr )
          {
            v30 = (_ACL *)*v45;
            v31 = RtlLengthSid(SidPtr) + 8;
            v32 = v31 + Size;
            if ( v31 + Size > v30->AclSize )
            {
              v35 = Size + v31 * (v15 - v19);
              v36 = (_ACL *)ExAllocatePoolWithTag(PagedPool, v35, 0x6C416553u);
              v37 = v36;
              if ( !v36 )
              {
                SidForString = -1073741670;
                goto LABEL_85;
              }
              memset(v36, 0, v35);
              v38 = v45;
              memmove(v37, *v45, Size);
              v37->AclSize = v35;
              ExFreePoolWithTag(v30, 0);
              v15 = v47;
              v30 = v37;
              *v38 = v37;
              v19 = v46;
            }
            Size = v32;
            SidForString = RtlAddAccessAllowedAce(v30, 2u, v3, v29);
            if ( SidForString )
              goto LABEL_85;
          }
          if ( *v6 == 40 )
            ++v6;
          v46 = ++v19;
          if ( v19 >= v15 )
          {
            *((_WORD *)*v45 + 1) = Size;
            return SidForString;
          }
          v3 = 0;
        }
        SidForString = -1073741811;
LABEL_85:
        v39 = v45;
        ExFreePoolWithTag((PVOID)*v45, 0);
        *v39 = 0LL;
        return SidForString;
      }
    }
    else
    {
      v34 = (_ACL *)ExAllocatePoolWithTag(PagedPool, 8uLL, 0x6C416553u);
      *Acl = v34;
      if ( v34 )
      {
        *v34 = (_ACL)524290LL;
        return SidForString;
      }
    }
    return (unsigned int)-1073741670;
  }
  return 3221225485LL;
}
