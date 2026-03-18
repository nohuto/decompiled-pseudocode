/*
 * XREFs of SepInternalQuerySecurityAttributesTokenEx @ 0x14008A220
 * Callers:
 *     NtQuerySecurityAttributesToken @ 0x140433870 (NtQuerySecurityAttributesToken.c)
 *     SeQuerySecurityAttributesToken @ 0x1404D74E0 (SeQuerySecurityAttributesToken.c)
 * Callees:
 *     SepGetSingletonEntryFromIndexNumber @ 0x140008104 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000D930 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14008A3A0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x14009C6E4 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14009E350 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1400E6034 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1401366E8 (AuthzBasepAllocateSecurityAttributesList.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SepInternalFillNoAttribs @ 0x140200FEC (SepInternalFillNoAttribs.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepDetermineGlobalTableCheckNeededForQuery @ 0x140433D48 (SepDetermineGlobalTableCheckNeededForQuery.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x1406550E0 (SepGetProcUniqueLuidAndIndexFromToken.c)
 */

__int64 __fastcall SepInternalQuerySecurityAttributesTokenEx(
        __int64 a1,
        char a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        size_t Size,
        _DWORD *a7)
{
  _DWORD *v7; // rbx
  bool v9; // zf
  _DWORD *v12; // rsi
  _DWORD *v13; // r12
  __int64 v14; // rax
  unsigned __int16 v15; // cx
  int v17; // r14d
  __int64 v18; // r15
  _QWORD *v19; // rax
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v21; // r14
  KIRQL v22; // r15
  __int64 SecurityAttributesList; // rax
  int SecurityAttributesToken; // esi
  unsigned __int64 v25; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+68h] [rbp+10h] BYREF

  LOBYTE(v26) = a2;
  v7 = 0LL;
  v9 = (*(_DWORD *)(a1 + 200) & 0x20000) == 0;
  v26 = 0;
  if ( !v9 || !(unsigned __int8)SepDetermineGlobalTableCheckNeededForQuery(a1, a3, a4) )
  {
    v12 = *(_DWORD **)(a1 + 776);
    v13 = a7;
    v25 = 0LL;
    *a7 = 0;
    if ( !*v12 )
    {
      if ( (unsigned int)Size < 0x10 )
      {
        LODWORD(v7) = -1073741789;
      }
      else
      {
        v19 = a5;
        *a5 = 0LL;
        v19[1] = 0LL;
        *(_WORD *)v19 = 1;
      }
      *v13 = 16;
      return (unsigned int)v7;
    }
    if ( a4 )
    {
      v14 = a3 + 2;
      while ( 1 )
      {
        v15 = *(_WORD *)(v14 - 2);
        if ( !v15 || !*(_WORD *)v14 || v15 > *(_WORD *)v14 || !*(_QWORD *)(v14 + 6) )
          break;
        LODWORD(v7) = (_DWORD)v7 + 1;
        v14 += 16LL;
        if ( (unsigned int)v7 >= a4 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      LODWORD(v7) = AuthzBasepGetSecurityAttributesCopyoutBufferSize(v12, a3, a4, &v25);
      if ( (int)v7 < 0 )
        return (unsigned int)v7;
      v17 = v25;
      if ( v25 )
      {
        v18 = (unsigned int)Size;
        if ( (unsigned int)Size < v25 )
        {
          LODWORD(v7) = -1073741789;
          *v13 = v25;
        }
        else
        {
          memset(a5, 0, (unsigned int)Size);
          LODWORD(v7) = AuthzBasepCopyoutSecurityAttributes(v12, a3, a4, a5, v18);
          *v13 = v17;
        }
        return (unsigned int)v7;
      }
    }
    LODWORD(v7) = -1073741811;
    return (unsigned int)v7;
  }
  if ( (int)SepGetProcUniqueLuidAndIndexFromToken(a1, &v26, &v25) < 0 )
    return SepInternalFillNoAttribs(a5, (unsigned int)Size, a7);
  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v26);
  v21 = SingletonEntryFromIndexNumber;
  if ( !SingletonEntryFromIndexNumber )
    return SepInternalFillNoAttribs(a5, (unsigned int)Size, a7);
  v22 = ExAcquireSpinLockShared(SingletonEntryFromIndexNumber);
  if ( *((_QWORD *)v21 + 2) )
  {
    SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
    v7 = (_DWORD *)SecurityAttributesList;
    SecurityAttributesToken = SecurityAttributesList
                            ? AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)v21 + 2), SecurityAttributesList, 0LL)
                            : -1073741801;
  }
  else
  {
    SecurityAttributesToken = -1073741275;
  }
  ExReleaseSpinLockShared(v21, v22);
  if ( SecurityAttributesToken == -1073741275 )
    return SepInternalFillNoAttribs(a5, (unsigned int)Size, a7);
  if ( SecurityAttributesToken < 0 )
    goto LABEL_33;
  if ( v7 )
  {
    SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(v7, a3, a4, a5, Size, a7);
LABEL_33:
    if ( v7 )
    {
      AuthzBasepFreeSecurityAttributesList(v7);
      ExFreePoolWithTag(v7, 0);
    }
  }
  return (unsigned int)SecurityAttributesToken;
}
