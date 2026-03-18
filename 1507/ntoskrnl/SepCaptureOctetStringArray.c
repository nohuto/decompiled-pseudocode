/*
 * XREFs of SepCaptureOctetStringArray @ 0x1406D42D0
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140547CC4 (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureOctetStringArray(char *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  size_t v7; // rbx
  unsigned int v8; // r14d
  _DWORD *PoolWithTag; // rdi
  unsigned int v11; // edx
  _DWORD *v12; // rcx
  unsigned int v13; // ebx
  _QWORD *v14; // rax
  _QWORD *v15; // r14
  char *v16; // r15
  unsigned int i; // ebx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx

  v7 = 16LL * a2;
  if ( v7 > 0xFFFFFFFF )
    return 3221225621LL;
  v8 = 16 * a2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v7, 0x74416553u);
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
  v11 = 0;
  if ( a2 )
  {
    v12 = PoolWithTag + 2;
    while ( v8 + *v12 >= v8 )
    {
      v8 += *v12;
      ++v11;
      v12 += 4;
      if ( v11 >= a2 )
        goto LABEL_16;
    }
    v13 = -1073741675;
    goto LABEL_18;
  }
LABEL_16:
  v14 = ExAllocatePoolWithTag(PagedPool, v8, 0x74416553u);
  v15 = v14;
  if ( !v14 )
  {
    v13 = -1073741670;
LABEL_18:
    ExFreePoolWithTag(PoolWithTag, 0);
    return v13;
  }
  memmove(v14, PoolWithTag, v7);
  v16 = (char *)&v15[v7 / 8];
  for ( i = 0; i < a2; ++i )
  {
    v18 = (unsigned int)PoolWithTag[4 * i + 2];
    if ( (_DWORD)v18 )
    {
      v19 = *(_QWORD *)&PoolWithTag[4 * i];
      if ( v19 + v18 > MmUserProbeAddress || v19 + v18 < v19 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v16, *(const void **)&PoolWithTag[4 * i], (unsigned int)PoolWithTag[4 * i + 2]);
    v15[2 * i] = v16;
    v16 += (unsigned int)PoolWithTag[4 * i + 2];
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  *a4 = v15;
  return 0LL;
}
