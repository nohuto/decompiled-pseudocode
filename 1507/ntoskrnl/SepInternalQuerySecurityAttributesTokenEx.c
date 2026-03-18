/*
 * XREFs of SepInternalQuerySecurityAttributesTokenEx @ 0x140044E10
 * Callers:
 *     SeQuerySecurityAttributesToken @ 0x1404829C4 (SeQuerySecurityAttributesToken.c)
 *     NtQuerySecurityAttributesToken @ 0x140482AD0 (NtQuerySecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400156C0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14002C088 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x14002C308 (AuthzBasepCopyoutSecurityAttributes.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14002D234 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x140044FA0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140109210 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14015EB3C (AuthzBasepAllocateSecurityAttributesList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SepInternalFillNoAttribs @ 0x14024FE50 (SepInternalFillNoAttribs.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SepDetermineGlobalTableCheckNeededForQuery @ 0x140482DB0 (SepDetermineGlobalTableCheckNeededForQuery.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x1406D6F58 (SepGetProcUniqueLuidAndIndexFromToken.c)
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
  _DWORD *v13; // r15
  __int64 v14; // rax
  unsigned __int16 v15; // cx
  int v17; // r14d
  size_t v18; // r12
  _QWORD *v19; // rax
  __int64 *SingletonEntryFromIndexNumber; // rsi
  unsigned __int8 CurrentIrql; // r15
  signed __int32 v22; // ett
  __int64 SecurityAttributesList; // rax
  int SecurityAttributesToken; // r14d
  size_t v25; // [rsp+20h] [rbp-48h]
  _BYTE v26[56]; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v28; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v29; // [rsp+78h] [rbp+10h] BYREF

  LOBYTE(v29) = a2;
  v7 = 0LL;
  v9 = (*(_DWORD *)(a1 + 200) & 0x20000) == 0;
  v29 = 0;
  if ( !v9 || !(unsigned __int8)SepDetermineGlobalTableCheckNeededForQuery(a1, a3, a4) )
  {
    v12 = *(_DWORD **)(a1 + 776);
    v13 = a7;
    v28 = 0LL;
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
      LODWORD(v7) = AuthzBasepGetSecurityAttributesCopyoutBufferSize(v12, a3, a4, &v28);
      if ( (int)v7 < 0 )
        return (unsigned int)v7;
      v17 = v28;
      if ( v28 )
      {
        v18 = (unsigned int)Size;
        if ( (unsigned int)Size < v28 )
        {
          LODWORD(v7) = -1073741789;
          *v13 = v28;
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
  if ( (int)SepGetProcUniqueLuidAndIndexFromToken(a1, &v29, v26) < 0 )
    return SepInternalFillNoAttribs(a5, (unsigned int)Size, a7);
  SingletonEntryFromIndexNumber = (__int64 *)SepGetSingletonEntryFromIndexNumber(v29);
  if ( !SingletonEntryFromIndexNumber )
    return SepInternalFillNoAttribs(a5, (unsigned int)Size, a7);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SingletonEntryFromIndexNumber);
  }
  else
  {
    _m_prefetchw(SingletonEntryFromIndexNumber);
    v22 = *(_DWORD *)SingletonEntryFromIndexNumber & 0x7FFFFFFF;
    if ( v22 != _InterlockedCompareExchange((volatile signed __int32 *)SingletonEntryFromIndexNumber, v22 + 1, v22) )
      ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)SingletonEntryFromIndexNumber);
  }
  if ( SingletonEntryFromIndexNumber[2] )
  {
    SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
    v7 = (_DWORD *)SecurityAttributesList;
    SecurityAttributesToken = SecurityAttributesList
                            ? AuthzBasepDuplicateSecurityAttributes(
                                SingletonEntryFromIndexNumber[2],
                                SecurityAttributesList,
                                0)
                            : -1073741801;
  }
  else
  {
    SecurityAttributesToken = -1073741275;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(SingletonEntryFromIndexNumber, retaddr);
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)SingletonEntryFromIndexNumber, 0xBFFFFFFF);
    _InterlockedDecrement((volatile signed __int32 *)SingletonEntryFromIndexNumber);
  }
  __writecr8(CurrentIrql);
  if ( SecurityAttributesToken == -1073741275 )
    return SepInternalFillNoAttribs(a5, (unsigned int)Size, a7);
  if ( SecurityAttributesToken < 0 )
    goto LABEL_40;
  if ( v7 )
  {
    LODWORD(v25) = Size;
    SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(v7, a3, a4, a5, v25, a7);
LABEL_40:
    if ( v7 )
    {
      AuthzBasepFreeSecurityAttributesList(v7);
      ExFreePoolWithTag(v7, 0);
    }
  }
  return (unsigned int)SecurityAttributesToken;
}
