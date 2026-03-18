/*
 * XREFs of EtwpAddKmRegEntry @ 0x1404CCAA4
 * Callers:
 *     EtwpRegisterProvider @ 0x1404CC76C (EtwpRegisterProvider.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     MmIsSessionAddress @ 0x1400431C0 (MmIsSessionAddress.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     EtwpReferenceGuidEntry @ 0x140435FC0 (EtwpReferenceGuidEntry.c)
 */

__int64 __fastcall EtwpAddKmRegEntry(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v8; // edi
  _BYTE *PoolWithTag; // rax
  _BYTE *v11; // rbx
  __int64 v12; // rcx

  v8 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x52777445u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    v11[98] = 1;
    EtwpReferenceGuidEntry(BugCheckParameter2);
    *((_QWORD *)v11 + 4) = BugCheckParameter2;
    if ( a2 == 2 )
      v11[98] |= 8u;
    if ( a3 )
    {
      *((_QWORD *)v11 + 11) = a3;
      *((_QWORD *)v11 + 10) = a4;
      if ( MmIsSessionAddress(a3) )
      {
        v11[98] |= 0x10u;
        *((_DWORD *)v11 + 14) = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      }
    }
    v12 = *(_QWORD *)(BugCheckParameter2 + 40);
    *(_QWORD *)v11 = v12;
    *((_QWORD *)v11 + 1) = BugCheckParameter2 + 40;
    if ( *(_QWORD *)(v12 + 8) != BugCheckParameter2 + 40 )
      __fastfail(3u);
    *(_QWORD *)(v12 + 8) = v11;
    *(_QWORD *)(BugCheckParameter2 + 40) = v11;
    *((_QWORD *)v11 + 3) = v11 + 16;
    *((_QWORD *)v11 + 2) = v11 + 16;
    v11[98] |= 0x80u;
    *a5 = v11;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v8;
}
