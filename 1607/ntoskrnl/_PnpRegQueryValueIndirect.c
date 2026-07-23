/*
 * XREFs of _PnpRegQueryValueIndirect @ 0x1404E2E64
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnalignedStringCbLengthW @ 0x14010B188 (RtlUnalignedStringCbLengthW.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpParseIndirectResourceString @ 0x1404A3088 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1404AC370 (_PnpParseIndirectInfString.c)
 *     _RegRtlQueryValue @ 0x1404E09F0 (_RegRtlQueryValue.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall PnpRegQueryValueIndirect(
        size_t a1,
        void *a2,
        const WCHAR *a3,
        unsigned int *a4,
        unsigned __int64 a5,
        __int64 a6,
        bool *a7)
{
  void *v7; // rbx
  unsigned int *v8; // r14
  void *v11; // rax
  PVOID PoolWithTag; // rdi
  bool *v13; // rsi
  unsigned int Value; // eax
  unsigned int v15; // r12d
  unsigned int v17; // ecx
  unsigned int v18; // ebp
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  void *v23; // rbx
  __int64 v24; // rcx
  int v25; // eax
  size_t pcbLength; // [rsp+70h] [rbp+8h] BYREF
  void *v27; // [rsp+78h] [rbp+10h]

  v27 = a2;
  pcbLength = a1;
  v7 = (void *)a5;
  v8 = (unsigned int *)a6;
  v11 = a2;
  PoolWithTag = 0LL;
  if ( a5 )
  {
    v11 = a2;
    v7 = (void *)(-(__int64)(*(_DWORD *)a6 != 0) & a5);
  }
  else
  {
    *(_DWORD *)a6 = 0;
  }
  v13 = a7;
  if ( a7 )
    *a7 = 0;
  *a4 = 0;
  Value = RegRtlQueryValue(v11, a3, a4, v7, v8);
  v15 = Value;
  if ( Value && Value != -1073741789 || !v13 )
    return v15;
  v17 = *a4;
  if ( *a4 > 3 )
  {
    if ( v17 <= 6 )
      goto LABEL_22;
    if ( v17 != 7 )
    {
      if ( v17 - 8 > 3 )
      {
        *v13 = (_WORD)v17 == 25;
        return v15;
      }
LABEL_22:
      *v13 = 0;
      return v15;
    }
  }
  v18 = *v8;
  if ( Value )
  {
    if ( v18 <= 0xFFFE )
    {
      v23 = v27;
      while ( 1 )
      {
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v18, 0x52504E50u);
        if ( !PoolWithTag )
          break;
        LODWORD(pcbLength) = v18;
        v25 = PnpCtxRegQueryValue(v24, v23, a3, 0LL, PoolWithTag, &pcbLength);
        if ( v25 != -1073741789 )
          goto LABEL_34;
        if ( (unsigned int)pcbLength <= v18 )
        {
          v25 = -1073741595;
LABEL_34:
          if ( v25 )
            goto LABEL_20;
          v7 = PoolWithTag;
          goto LABEL_17;
        }
        v18 = pcbLength;
        if ( (unsigned int)pcbLength > 0xFFFE )
          goto LABEL_20;
      }
    }
  }
  else
  {
LABEL_17:
    if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v7, v18, &pcbLength) >= 0
      && (PnpParseIndirectInfString((const wchar_t *)v7, v19, v20)
       || PnpParseIndirectResourceString((const wchar_t *)v7, v21, v22)) )
    {
      *v13 = 1;
    }
LABEL_20:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v15;
}
