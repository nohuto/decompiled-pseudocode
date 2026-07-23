/*
 * XREFs of SepInternalQuerySecurityAttributesTokenEx @ 0x14000DF60
 * Callers:
 *     SeQuerySecurityAttributesTokenAccessInformation @ 0x1402194B4 (SeQuerySecurityAttributesTokenAccessInformation.c)
 *     SeQuerySecurityAttributesToken @ 0x14040DDE0 (SeQuerySecurityAttributesToken.c)
 *     NtQuerySecurityAttributesToken @ 0x14040E2E0 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x14040E6D0 (NtQueryInformationToken.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14000CF3C (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x14000D284 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14000E0F0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14000E910 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14007CF64 (SepGetSingletonEntryFromIndexNumber.c)
 *     SepPotentialGlobalTableAttribute @ 0x140080674 (SepPotentialGlobalTableAttribute.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14010C930 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1401465C0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x14021A8A8 (SepGetProcUniqueLuidAndIndexFromToken.c)
 *     SepInternalFillNoAttribs @ 0x14021A94C (SepInternalFillNoAttribs.c)
 *     AuthzBasepSecurityAttributePresent @ 0x140234258 (AuthzBasepSecurityAttributePresent.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepInternalQuerySecurityAttributesTokenEx(
        __int64 a1,
        char a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        _QWORD *a6,
        size_t Size,
        _DWORD *a8)
{
  _DWORD *v8; // rbx
  bool v10; // zf
  _DWORD *v13; // rsi
  _DWORD *v14; // r15
  __int64 v15; // rax
  unsigned __int16 v16; // cx
  int v18; // ebp
  size_t v19; // r12
  _QWORD *v20; // rax
  unsigned int v21; // ebp
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v23; // rbp
  KIRQL v24; // r15
  __int64 SecurityAttributesList; // rax
  int SecurityAttributesToken; // esi
  size_t v27; // [rsp+20h] [rbp-38h]
  unsigned __int64 v28; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v29; // [rsp+68h] [rbp+10h] BYREF

  LOBYTE(v29) = a2;
  v8 = 0LL;
  v10 = (*(_DWORD *)(a1 + 200) & 0x20000) == 0;
  v29 = 0;
  if ( !v10 )
    goto LABEL_4;
  if ( !a5 )
  {
    if ( (SepSingletonGlobal[4] & 1) == 0 || !a3 )
      goto LABEL_4;
    v21 = 0;
    if ( a4 )
    {
      while ( (unsigned __int8)SepPotentialGlobalTableAttribute((PCUNICODE_STRING)(a3 + 16LL * v21))
           && !(unsigned __int8)AuthzBasepSecurityAttributePresent(*(_QWORD *)(a1 + 776), a3 + 16LL * v21) )
      {
        if ( ++v21 >= a4 )
          goto LABEL_27;
      }
LABEL_4:
      v13 = *(_DWORD **)(a1 + 776);
      v14 = a8;
      v28 = 0LL;
      *a8 = 0;
      if ( !*v13 )
      {
        if ( (unsigned int)Size < 0x10 )
        {
          LODWORD(v8) = -1073741789;
        }
        else
        {
          v20 = a6;
          *a6 = 0LL;
          v20[1] = 0LL;
          *(_WORD *)v20 = 1;
        }
        *v14 = 16;
        return (unsigned int)v8;
      }
      if ( a4 )
      {
        v15 = a3 + 2;
        while ( 1 )
        {
          v16 = *(_WORD *)(v15 - 2);
          if ( !v16 || !*(_WORD *)v15 || v16 > *(_WORD *)v15 || !*(_QWORD *)(v15 + 6) )
            break;
          LODWORD(v8) = (_DWORD)v8 + 1;
          v15 += 16LL;
          if ( (unsigned int)v8 >= a4 )
            goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        LODWORD(v8) = AuthzBasepGetSecurityAttributesCopyoutBufferSize(v13, a3, a4, &v28);
        if ( (int)v8 < 0 )
          return (unsigned int)v8;
        v18 = v28;
        if ( v28 )
        {
          v19 = (unsigned int)Size;
          if ( (unsigned int)Size < v28 )
          {
            LODWORD(v8) = -1073741789;
            *v14 = v28;
          }
          else
          {
            memset(a6, 0, (unsigned int)Size);
            LODWORD(v8) = AuthzBasepCopyoutSecurityAttributes(v13, a3, a4, a6, v19);
            *v14 = v18;
          }
          return (unsigned int)v8;
        }
      }
      LODWORD(v8) = -1073741811;
      return (unsigned int)v8;
    }
  }
LABEL_27:
  if ( (int)SepGetProcUniqueLuidAndIndexFromToken(a1, &v29, &v28) < 0 )
    return SepInternalFillNoAttribs(a6, (unsigned int)Size, a8);
  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v29);
  v23 = SingletonEntryFromIndexNumber;
  if ( !SingletonEntryFromIndexNumber )
    return SepInternalFillNoAttribs(a6, (unsigned int)Size, a8);
  v24 = ExAcquireSpinLockShared(SingletonEntryFromIndexNumber);
  if ( *((_QWORD *)v23 + 2) )
  {
    SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
    v8 = (_DWORD *)SecurityAttributesList;
    SecurityAttributesToken = SecurityAttributesList
                            ? AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)v23 + 2), SecurityAttributesList, 0LL)
                            : -1073741801;
  }
  else
  {
    SecurityAttributesToken = -1073741275;
  }
  ExReleaseSpinLockShared(v23, v24);
  if ( SecurityAttributesToken == -1073741275 )
    return SepInternalFillNoAttribs(a6, (unsigned int)Size, a8);
  if ( SecurityAttributesToken < 0 )
    goto LABEL_39;
  if ( v8 )
  {
    LODWORD(v27) = Size;
    SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(v8, a3, a4, a6, v27, a8);
LABEL_39:
    if ( v8 )
    {
      AuthzBasepFreeSecurityAttributesList(v8);
      ExFreePoolWithTag(v8, 0);
    }
  }
  return (unsigned int)SecurityAttributesToken;
}
