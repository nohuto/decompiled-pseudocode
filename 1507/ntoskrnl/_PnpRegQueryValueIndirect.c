/*
 * XREFs of _PnpRegQueryValueIndirect @ 0x14043DFF4
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbLengthW @ 0x140025FE8 (RtlStringCbLengthW.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _PnpCtxRegQueryValue @ 0x14043E1AC (_PnpCtxRegQueryValue.c)
 *     _PnpParseIndirectResourceString @ 0x140522934 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x14053B874 (_PnpParseIndirectInfString.c)
 */

__int64 __fastcall PnpRegQueryValueIndirect(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        size_t pcbLength,
        unsigned int *a6,
        bool *a7)
{
  const wchar_t *v7; // rbx
  unsigned int *v8; // r14
  __int64 v10; // rax
  PVOID PoolWithTag; // rdi
  bool *v12; // rsi
  unsigned int Value; // eax
  unsigned int v14; // r12d
  unsigned int v16; // ecx
  unsigned int v17; // ebp
  __int64 v18; // rcx
  int v19; // eax

  v7 = (const wchar_t *)pcbLength;
  v8 = a6;
  v10 = a2;
  PoolWithTag = 0LL;
  if ( pcbLength )
  {
    v10 = a2;
    a1 = -(__int64)(*a6 != 0);
    v7 = (const wchar_t *)(a1 & pcbLength);
  }
  else
  {
    *a6 = 0;
  }
  v12 = a7;
  if ( a7 )
    *a7 = 0;
  *a4 = 0;
  Value = PnpCtxRegQueryValue(a1, v10);
  v14 = Value;
  if ( Value && Value != -1073741789 || !v12 )
    return v14;
  v16 = *a4;
  if ( *a4 > 3 )
  {
    if ( v16 <= 6 )
      goto LABEL_29;
    if ( v16 != 7 )
    {
      if ( v16 - 8 > 3 )
      {
        *v12 = (_WORD)v16 == 25;
        return v14;
      }
LABEL_29:
      *v12 = 0;
      return v14;
    }
  }
  v17 = *v8;
  if ( Value )
  {
    if ( v17 <= 0xFFFE )
    {
      while ( 1 )
      {
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x52504E50u);
        if ( !PoolWithTag )
          break;
        LODWORD(pcbLength) = v17;
        v19 = PnpCtxRegQueryValue(v18, a2);
        if ( v19 != -1073741789 )
          goto LABEL_27;
        if ( (unsigned int)pcbLength <= v17 )
        {
          v19 = -1073741595;
LABEL_27:
          if ( v19 )
            goto LABEL_20;
          v7 = (const wchar_t *)PoolWithTag;
          goto LABEL_17;
        }
        v17 = pcbLength;
        if ( (unsigned int)pcbLength > 0xFFFE )
          goto LABEL_20;
      }
    }
  }
  else
  {
LABEL_17:
    if ( RtlStringCbLengthW(v7, v17, &pcbLength) >= 0
      && ((unsigned __int8)PnpParseIndirectInfString(v7) || (unsigned __int8)PnpParseIndirectResourceString(v7)) )
    {
      *v12 = 1;
    }
LABEL_20:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v14;
}
