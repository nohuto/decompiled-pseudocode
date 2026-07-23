/*
 * XREFs of RtlpInheritAcl @ 0x18004157C
 * Callers:
 *     RtlpNewSecurityObject @ 0x180044AC8 (RtlpNewSecurityObject.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E0030 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlpInheritAcl2 @ 0x180040628 (RtlpInheritAcl2.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpInheritAcl(
        _BYTE *a1,
        unsigned __int8 *a2,
        int a3,
        char a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        PGENERIC_MAPPING a11,
        int a12,
        __int64 a13,
        int a14,
        PVOID *a15,
        _BYTE *a16,
        int *a17)
{
  void *ProcessHeap; // rsi
  PVOID *v22; // rbx
  unsigned int v23; // ecx
  int v24; // r14d
  ACL *Acl; // rax
  unsigned int v26; // edi
  __int64 v28; // [rsp+D0h] [rbp+18h] BYREF

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( a3 || a1 )
  {
    v22 = a15;
    v23 = 200;
    LODWORD(v28) = 200;
    v24 = 0;
    while ( 1 )
    {
      Acl = (ACL *)RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v23);
      *v22 = Acl;
      if ( !Acl )
        break;
      v26 = RtlpInheritAcl2(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, (ULONG *)&v28, Acl, a16, a17);
      if ( (v26 & 0x80000000) == 0 )
      {
        if ( !(_DWORD)v28 )
        {
          RtlFreeHeap(ProcessHeap, 0, *v22);
          *v22 = 0LL;
        }
        return v26;
      }
      RtlFreeHeap(ProcessHeap, 0, *v22);
      *v22 = 0LL;
      if ( v26 != -1073741789 )
        return v26;
      if ( (unsigned int)++v24 >= 2 )
        return v26;
      v23 = v28;
    }
    return 3221225495LL;
  }
  else
  {
    *a16 = 0;
    *a17 = a5 != 0 ? 0x400 : 0;
    *a15 = 0LL;
    return 2147483659LL;
  }
}
