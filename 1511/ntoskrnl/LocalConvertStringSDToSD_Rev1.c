/*
 * XREFs of LocalConvertStringSDToSD_Rev1 @ 0x14068530C
 * Callers:
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x14021B784 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 * Callees:
 *     RtlSetGroupSecurityDescriptor @ 0x1403C01DC (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1403C0234 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1403C0948 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 *     RtlNtStatusToDosError @ 0x14049D1D0 (RtlNtStatusToDosError.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1404B9670 (RtlAbsoluteToSelfRelativeSD.c)
 *     LocalGetAclForString @ 0x1406859BC (LocalGetAclForString.c)
 *     LocalGetSDControlForString @ 0x140686754 (LocalGetSDControlForString.c)
 *     LocalGetSidForString @ 0x140686904 (LocalGetSidForString.c)
 *     SddlpAlloc @ 0x140687AFC (SddlpAlloc.c)
 *     SddlpFree @ 0x140687B40 (SddlpFree.c)
 */

__int64 __fastcall LocalConvertStringSDToSD_Rev1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        PSECURITY_DESCRIPTOR *a5,
        ULONG *a6)
{
  __int64 v6; // rdx
  wchar_t *v7; // rax
  ULONG v8; // ebx
  void *v9; // r14
  void *v10; // rsi
  ACL *v11; // r13
  ACL *v12; // r12
  PSECURITY_DESCRIPTOR *v13; // r15
  int v14; // ecx
  wchar_t *v15; // rax
  ULONG v16; // eax
  ULONG v17; // eax
  ULONG SidForString; // eax
  wchar_t *v19; // rax
  ULONG SDControlForString; // eax
  ULONG AclForString; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  void *v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rdx
  int v32; // [rsp+30h] [rbp-71h]
  int v33; // [rsp+38h] [rbp-69h]
  wchar_t *v34; // [rsp+50h] [rbp-51h] BYREF
  __int16 v35; // [rsp+58h] [rbp-49h]
  ULONG BufferLength; // [rsp+5Ch] [rbp-45h] BYREF
  ACL *v37; // [rsp+60h] [rbp-41h]
  void *v38; // [rsp+68h] [rbp-39h] BYREF
  ACL *v39; // [rsp+70h] [rbp-31h]
  void *v40; // [rsp+78h] [rbp-29h] BYREF
  _BYTE SecurityDescriptor[2]; // [rsp+80h] [rbp-21h] BYREF
  __int16 v42; // [rsp+82h] [rbp-1Fh]
  __int64 v43; // [rsp+F8h] [rbp+57h] BYREF
  __int64 SaclPresent; // [rsp+100h] [rbp+5Fh]
  BOOLEAN DaclPresent; // [rsp+108h] [rbp+67h]
  char v46; // [rsp+110h] [rbp+6Fh] BYREF

  SaclPresent = a2;
  v43 = a1;
  v6 = 0LL;
  v7 = a4;
  v40 = 0LL;
  v8 = 0;
  v38 = 0LL;
  v9 = 0LL;
  v39 = 0LL;
  v10 = 0LL;
  v37 = 0LL;
  v11 = 0LL;
  LOBYTE(v43) = 0;
  v12 = 0LL;
  v46 = 0;
  BufferLength = 0;
  DaclPresent = 0;
  LOBYTE(SaclPresent) = 0;
  v35 = 0;
  if ( !a4 )
    return 87LL;
  v13 = a5;
  if ( !a5 )
    return 87LL;
  if ( a6 )
    *a6 = 0;
  while ( v7 )
  {
    v14 = *v7;
    if ( *v7 )
    {
      switch ( v14 )
      {
        case ' ':
          ++v7;
          break;
        case 'D':
          if ( v7[1] != 58 || (v19 = v7 + 2, v11) )
          {
LABEL_36:
            v8 = 87;
            goto LABEL_61;
          }
          if ( *v19 != 40 )
          {
            SDControlForString = LocalGetSDControlForString(v19);
            v6 = 0LL;
            v8 = SDControlForString;
            if ( SDControlForString )
              goto LABEL_61;
            v19 = v34;
          }
          AclForString = LocalGetAclForString(v19, 0LL, 0LL, v33, 0);
          v11 = v39;
          v6 = 0LL;
          v8 = AclForString;
          if ( AclForString )
            goto LABEL_61;
          v7 = v34;
          DaclPresent = 1;
          break;
        case 'G':
          v8 = 87;
          if ( v7[1] != 58 || v10 )
            goto LABEL_61;
          SidForString = LocalGetSidForString(
                           (int)v7 + 4,
                           (unsigned int)&v38,
                           (unsigned int)&v34,
                           (unsigned int)&v46,
                           0LL,
                           v32,
                           v33,
                           0);
          v10 = v38;
LABEL_22:
          v6 = 0LL;
          v8 = SidForString;
          if ( SidForString )
            goto LABEL_61;
          v7 = v34;
          break;
        case 'O':
          v8 = 87;
          if ( v7[1] != 58 || v9 )
            goto LABEL_61;
          SidForString = LocalGetSidForString(
                           (int)v7 + 4,
                           (unsigned int)&v40,
                           (unsigned int)&v34,
                           (unsigned int)&v43,
                           0LL,
                           v32,
                           v33,
                           0);
          v9 = v40;
          goto LABEL_22;
        case 'S':
          if ( v7[1] != 58 )
            goto LABEL_36;
          v15 = v7 + 2;
          if ( v12 )
            goto LABEL_36;
          if ( *v15 != 40 )
          {
            v16 = LocalGetSDControlForString(v15);
            v6 = 0LL;
            v8 = v16;
            if ( v16 )
              goto LABEL_61;
            v15 = v34;
          }
          v17 = LocalGetAclForString(v15, 0LL, 0LL, v33, 0);
          v12 = v37;
          v6 = 0LL;
          v8 = v17;
          if ( v17 )
            goto LABEL_61;
          v7 = v34;
          LOBYTE(SaclPresent) = 1;
          break;
        default:
          goto LABEL_36;
      }
    }
    else
    {
      v7 = 0LL;
    }
  }
  v22 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v22 < 0 )
    v8 = RtlNtStatusToDosError(v22);
  v42 |= v35;
  if ( !v8 )
  {
    if ( !v9
      || (v23 = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v9, 0), v23 >= 0)
      || (v8 = RtlNtStatusToDosError(v23)) == 0 )
    {
      if ( !v10
        || (v24 = RtlSetGroupSecurityDescriptor(SecurityDescriptor, v10, 0), v24 >= 0)
        || (v8 = RtlNtStatusToDosError(v24)) == 0 )
      {
        if ( !DaclPresent
          || (v25 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, DaclPresent, v11, 0), v25 >= 0)
          || (v8 = RtlNtStatusToDosError(v25)) == 0 )
        {
          if ( !(_BYTE)SaclPresent
            || (v26 = RtlSetSaclSecurityDescriptor(SecurityDescriptor, SaclPresent, v12, 0), v26 >= 0)
            || (v8 = RtlNtStatusToDosError(v26)) == 0 )
          {
            if ( RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, *v13, &BufferLength) == -1073741789 )
            {
              v8 = 0;
              v27 = (void *)SddlpAlloc(BufferLength);
              *v13 = v27;
              if ( !v27 )
              {
                v8 = 8;
                goto LABEL_61;
              }
              v28 = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v27, &BufferLength);
              if ( v28 < 0 )
              {
                v8 = RtlNtStatusToDosError(v28);
                SddlpFree(*v13, v29);
                *v13 = 0LL;
                goto LABEL_58;
              }
              goto LABEL_59;
            }
            v8 = 122;
LABEL_58:
            if ( !v8 )
            {
LABEL_59:
              if ( a6 )
                *a6 = BufferLength;
            }
          }
        }
      }
    }
  }
LABEL_61:
  if ( (_BYTE)v43 == 1 )
    SddlpFree(v9, v6);
  if ( v46 == 1 )
    SddlpFree(v10, v6);
  SddlpFree(v11, v6);
  SddlpFree(v12, v30);
  return v8;
}
