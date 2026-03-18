/*
 * XREFs of SepCaptureOctetStringArray @ 0x140651BC0
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1403C404C (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureOctetStringArray(char *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  size_t v7; // rbx
  unsigned int v8; // esi
  unsigned int *PoolWithTag; // rdi
  unsigned int i; // ecx
  unsigned int v12; // ebx
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  char *v15; // r15
  unsigned int j; // ebx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx

  v7 = 16LL * a2;
  if ( v7 > 0xFFFFFFFF )
    return 3221225621LL;
  v8 = 16 * a2;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v7, 0x74416553u);
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
  for ( i = 0; i < a2; ++i )
  {
    if ( v8 + PoolWithTag[4 * i + 2] < v8 )
    {
      v12 = -1073741675;
LABEL_17:
      ExFreePoolWithTag(PoolWithTag, 0);
      return v12;
    }
    v8 += PoolWithTag[4 * i + 2];
  }
  v13 = ExAllocatePoolWithTag(PagedPool, v8, 0x74416553u);
  v14 = v13;
  if ( !v13 )
  {
    v12 = -1073741670;
    goto LABEL_17;
  }
  memmove(v13, PoolWithTag, v7);
  v15 = (char *)&v14[v7 / 8];
  for ( j = 0; j < a2; ++j )
  {
    v17 = PoolWithTag[4 * j + 2];
    if ( (_DWORD)v17 )
    {
      v18 = *(_QWORD *)&PoolWithTag[4 * j];
      if ( v18 + v17 > MmUserProbeAddress || v18 + v17 < v18 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v15, *(const void **)&PoolWithTag[4 * j], PoolWithTag[4 * j + 2]);
    v14[2 * j] = v15;
    v15 += PoolWithTag[4 * j + 2];
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  *a4 = v14;
  return 0LL;
}
