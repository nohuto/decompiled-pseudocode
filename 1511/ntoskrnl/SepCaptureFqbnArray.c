/*
 * XREFs of SepCaptureFqbnArray @ 0x1406519A0
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1403C404C (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureFqbnArray(char *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  size_t v7; // rbx
  unsigned __int16 *PoolWithTag; // rdi
  SIZE_T v10; // rdx
  unsigned int i; // r8d
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  _QWORD *v14; // rax
  _QWORD *v15; // r14
  char *v16; // rsi
  unsigned int j; // ebx
  unsigned __int16 v18; // ax
  ULONG64 v19; // rcx
  ULONG64 v20; // rdx

  v7 = 24LL * a2;
  if ( v7 > 0xFFFFFFFF )
    return 3221225621LL;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v7, 0x74416553u);
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( (_DWORD)v7 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[(unsigned int)v7] > MmUserProbeAddress || &Src[(unsigned int)v7] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(PoolWithTag, Src, (unsigned int)v7);
  if ( (((unsigned int)v7 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) < (unsigned int)v7 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225621LL;
  }
  v10 = ((_DWORD)v7 + 1) & 0xFFFFFFFE;
  for ( i = 0; i < a2; ++i )
  {
    v12 = v10 + PoolWithTag[12 * i + 4];
    if ( v12 < (unsigned int)v10 )
    {
      v13 = -1073741675;
LABEL_19:
      ExFreePoolWithTag(PoolWithTag, 0);
      return v13;
    }
    v10 = v12;
  }
  v14 = ExAllocatePoolWithTag(PagedPool, v10, 0x74416553u);
  v15 = v14;
  if ( !v14 )
  {
    v13 = -1073741670;
    goto LABEL_19;
  }
  memmove(v14, PoolWithTag, v7);
  v16 = (char *)(((unsigned __int64)&v15[v7 / 8] + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  for ( j = 0; j < a2; ++j )
  {
    v18 = PoolWithTag[12 * j + 4];
    if ( v18 )
    {
      v19 = *(_QWORD *)&PoolWithTag[12 * j + 8];
      if ( (v19 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = v19 + v18;
      if ( v20 > MmUserProbeAddress || v20 < v19 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v16, *(const void **)&PoolWithTag[12 * j + 8], PoolWithTag[12 * j + 4]);
    v15[3 * j + 2] = v16;
    v16 += PoolWithTag[12 * j + 4];
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  *a4 = v15;
  return 0LL;
}
