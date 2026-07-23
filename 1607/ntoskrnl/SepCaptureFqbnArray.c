/*
 * XREFs of SepCaptureFqbnArray @ 0x140690D1C
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14047B324 (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureFqbnArray(char *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  size_t v6; // rbx
  unsigned __int16 *PoolWithTag; // rdi
  SIZE_T v9; // rdx
  unsigned int i; // r8d
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  char *v15; // rsi
  unsigned int j; // ebx
  unsigned __int16 v17; // ax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx

  v6 = 24LL * a2;
  if ( v6 > 0xFFFFFFFF )
    return 3221225621LL;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v6, 0x74416553u);
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( (_DWORD)v6 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[(unsigned int)v6] > 0x7FFFFFFF0000LL || &Src[(unsigned int)v6] < Src )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(PoolWithTag, Src, (unsigned int)v6);
  if ( (((unsigned int)v6 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) < (unsigned int)v6 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225621LL;
  }
  v9 = ((_DWORD)v6 + 1) & 0xFFFFFFFE;
  for ( i = 0; i < a2; ++i )
  {
    v11 = v9 + PoolWithTag[12 * i + 4];
    if ( v11 < (unsigned int)v9 )
    {
      v12 = -1073741675;
LABEL_19:
      ExFreePoolWithTag(PoolWithTag, 0);
      return v12;
    }
    v9 = v11;
  }
  v13 = ExAllocatePoolWithTag(PagedPool, v9, 0x74416553u);
  v14 = v13;
  if ( !v13 )
  {
    v12 = -1073741670;
    goto LABEL_19;
  }
  memmove(v13, PoolWithTag, v6);
  v15 = (char *)(((unsigned __int64)&v14[v6 / 8] + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  for ( j = 0; j < a2; ++j )
  {
    v17 = PoolWithTag[12 * j + 4];
    if ( v17 )
    {
      v18 = *(_QWORD *)&PoolWithTag[12 * j + 8];
      if ( (v18 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = v18 + v17;
      if ( v19 > 0x7FFFFFFF0000LL || v19 < v18 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(v15, *(const void **)&PoolWithTag[12 * j + 8], PoolWithTag[12 * j + 4]);
    v14[3 * j + 2] = v15;
    v15 += PoolWithTag[12 * j + 4];
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  *a4 = v14;
  return 0LL;
}
