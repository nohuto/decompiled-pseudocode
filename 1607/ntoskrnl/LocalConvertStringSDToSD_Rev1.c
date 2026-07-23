/*
 * XREFs of LocalConvertStringSDToSD_Rev1 @ 0x1404B9DFC
 * Callers:
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1400A8908 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 * Callees:
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140479BD8 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14048DBFC (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14048DC54 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlNtStatusToDosError @ 0x1404A6B50 (RtlNtStatusToDosError.c)
 *     SddlpFree @ 0x1404BA0C0 (SddlpFree.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1404BA0D8 (RtlAbsoluteToSelfRelativeSD.c)
 *     LocalGetAclForString @ 0x1404BA348 (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x1404BA830 (LocalGetSidForString.c)
 *     SddlpAlloc @ 0x1404BAB78 (SddlpAlloc.c)
 *     LocalGetSDControlForString @ 0x1406CB750 (LocalGetSDControlForString.c)
 */

__int64 __fastcall LocalConvertStringSDToSD_Rev1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        PSECURITY_DESCRIPTOR *a5,
        ULONG *a6)
{
  wchar_t *v6; // rax
  ULONG SDControlForString; // ebx
  void *v8; // r14
  void *v9; // rsi
  ACL *v10; // r13
  ACL *v11; // r12
  PSECURITY_DESCRIPTOR *v12; // r15
  int v13; // ecx
  ULONG SidForString; // eax
  wchar_t *v15; // rax
  ULONG AclForString; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  void *v21; // rax
  int v22; // eax
  wchar_t *v24; // rax
  ULONG v25; // eax
  int v26; // eax
  int v27; // [rsp+30h] [rbp-71h]
  int v28; // [rsp+38h] [rbp-69h]
  wchar_t *v29; // [rsp+50h] [rbp-51h] BYREF
  ULONG BufferLength; // [rsp+58h] [rbp-49h] BYREF
  ACL *v31; // [rsp+60h] [rbp-41h]
  void *v32; // [rsp+68h] [rbp-39h] BYREF
  void *v33; // [rsp+70h] [rbp-31h] BYREF
  ACL *v34; // [rsp+78h] [rbp-29h]
  _BYTE SecurityDescriptor[2]; // [rsp+80h] [rbp-21h] BYREF
  __int64 v36; // [rsp+F8h] [rbp+57h] BYREF
  __int64 SaclPresent; // [rsp+100h] [rbp+5Fh]
  BOOLEAN DaclPresent; // [rsp+108h] [rbp+67h]
  char v39; // [rsp+110h] [rbp+6Fh] BYREF

  SaclPresent = a2;
  v36 = a1;
  v6 = a4;
  v32 = 0LL;
  SDControlForString = 0;
  v33 = 0LL;
  v8 = 0LL;
  v34 = 0LL;
  v9 = 0LL;
  v31 = 0LL;
  v10 = 0LL;
  LOBYTE(v36) = 0;
  v11 = 0LL;
  v39 = 0;
  BufferLength = 0;
  DaclPresent = 0;
  LOBYTE(SaclPresent) = 0;
  if ( !a4 )
    return 87LL;
  v12 = a5;
  if ( !a5 )
    return 87LL;
  if ( a6 )
    *a6 = 0;
  while ( v6 )
  {
    v13 = *v6;
    if ( *v6 )
    {
      switch ( v13 )
      {
        case 'D':
          if ( v6[1] != 58 || (v15 = v6 + 2, v10) )
          {
LABEL_44:
            SDControlForString = 87;
            goto LABEL_39;
          }
          if ( *v15 != 40 )
          {
            SDControlForString = LocalGetSDControlForString(v15);
            if ( SDControlForString )
              goto LABEL_39;
            v15 = v29;
          }
          AclForString = LocalGetAclForString(v15, 0LL, 0LL, v28, 0);
          v10 = v34;
          SDControlForString = AclForString;
          if ( AclForString )
            goto LABEL_39;
          v6 = v29;
          DaclPresent = 1;
          break;
        case 'G':
          SDControlForString = 87;
          if ( v6[1] != 58 || v9 )
            goto LABEL_39;
          SidForString = LocalGetSidForString(
                           (int)v6 + 4,
                           (unsigned int)&v33,
                           (unsigned int)&v29,
                           (unsigned int)&v39,
                           0LL,
                           v27,
                           v28,
                           0);
          v9 = v33;
          goto LABEL_12;
        case 'O':
          SDControlForString = 87;
          if ( v6[1] != 58 || v8 )
            goto LABEL_39;
          SidForString = LocalGetSidForString(
                           (int)v6 + 4,
                           (unsigned int)&v32,
                           (unsigned int)&v29,
                           (unsigned int)&v36,
                           0LL,
                           v27,
                           v28,
                           0);
          v8 = v32;
LABEL_12:
          SDControlForString = SidForString;
          if ( SidForString )
            goto LABEL_39;
          v6 = v29;
          break;
        case ' ':
          ++v6;
          break;
        case 'S':
          if ( v6[1] != 58 )
            goto LABEL_44;
          v24 = v6 + 2;
          if ( v11 )
            goto LABEL_44;
          if ( *v24 != 40 )
          {
            SDControlForString = LocalGetSDControlForString(v24);
            if ( SDControlForString )
              goto LABEL_39;
            v24 = v29;
          }
          v25 = LocalGetAclForString(v24, 0LL, 0LL, v28, 0);
          v11 = v31;
          SDControlForString = v25;
          if ( v25 )
            goto LABEL_39;
          v6 = v29;
          LOBYTE(SaclPresent) = 1;
          break;
        default:
          goto LABEL_44;
      }
    }
    else
    {
      v6 = 0LL;
    }
  }
  v17 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v17 < 0 )
    SDControlForString = RtlNtStatusToDosError(v17);
  if ( !SDControlForString )
  {
    if ( !v8
      || (v18 = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v8, 0), v18 >= 0)
      || (SDControlForString = RtlNtStatusToDosError(v18)) == 0 )
    {
      if ( !v9
        || (v19 = RtlSetGroupSecurityDescriptor(SecurityDescriptor, v9, 0), v19 >= 0)
        || (SDControlForString = RtlNtStatusToDosError(v19)) == 0 )
      {
        if ( !DaclPresent
          || (v20 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, DaclPresent, v10, 0), v20 >= 0)
          || (SDControlForString = RtlNtStatusToDosError(v20)) == 0 )
        {
          if ( !(_BYTE)SaclPresent
            || (v26 = RtlSetSaclSecurityDescriptor(SecurityDescriptor, SaclPresent, v11, 0), v26 >= 0)
            || (SDControlForString = RtlNtStatusToDosError(v26)) == 0 )
          {
            if ( RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, *v12, &BufferLength) == -1073741789 )
            {
              SDControlForString = 0;
              v21 = (void *)SddlpAlloc(BufferLength);
              *v12 = v21;
              if ( !v21 )
              {
                SDControlForString = 8;
                goto LABEL_39;
              }
              v22 = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v21, &BufferLength);
              if ( v22 >= 0 )
              {
LABEL_37:
                if ( a6 )
                  *a6 = BufferLength;
                goto LABEL_39;
              }
              SDControlForString = RtlNtStatusToDosError(v22);
              SddlpFree(*v12);
              *v12 = 0LL;
            }
            else
            {
              SDControlForString = 122;
            }
            if ( !SDControlForString )
              goto LABEL_37;
          }
        }
      }
    }
  }
LABEL_39:
  if ( (_BYTE)v36 == 1 )
    SddlpFree(v8);
  if ( v39 == 1 )
    SddlpFree(v9);
  SddlpFree(v10);
  SddlpFree(v11);
  return SDControlForString;
}
