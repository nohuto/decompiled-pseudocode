/*
 * XREFs of HvFreeUnreconciledData @ 0x1404B9E34
 * Callers:
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     HvFoldBackUnreconciledData @ 0x1405E69A4 (HvFoldBackUnreconciledData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall HvFreeUnreconciledData(__int64 a1)
{
  void *v2; // rcx
  __int64 i; // rdi
  void *v4; // rcx

  v2 = *(void **)(a1 + 2944);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 2944) = 0LL;
    *(_BYTE *)(a1 + 2896) = 0;
  }
  if ( *(_QWORD *)(a1 + 2912) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 2936); i = (unsigned int)(i + 1) )
    {
      v4 = *(void **)(*(_QWORD *)(a1 + 2928) + 24 * i + 8);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 2928), 0);
    ExFreePoolWithTag(*(PVOID *)(a1 + 2912), 0);
    *(_QWORD *)(a1 + 2928) = 0LL;
    *(_DWORD *)(a1 + 2936) = 0;
    *(_DWORD *)(a1 + 2904) = 0;
    *(_QWORD *)(a1 + 2912) = 0LL;
  }
}
