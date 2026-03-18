/*
 * XREFs of SepSetSingletonEntry @ 0x140201014
 * Callers:
 *     SeSetSecurityAttributesTokenEx @ 0x140200DEC (SeSetSecurityAttributesTokenEx.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400059B0 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140008104 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepSetSingletonEntry(unsigned int a1, _DWORD *a2, __int64 a3)
{
  unsigned int v5; // edi
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v7; // rbx
  KIRQL v8; // si
  _DWORD *PoolWithTag; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax

  v5 = 0;
  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(a1);
  v7 = SingletonEntryFromIndexNumber;
  if ( SingletonEntryFromIndexNumber )
  {
    v8 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
    if ( !*((_QWORD *)v7 + 2) )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x74416553u);
      *((_QWORD *)v7 + 2) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v5 = -1073741801;
LABEL_7:
        ExReleaseSpinLockExclusive(v7, v8);
        return v5;
      }
      *PoolWithTag = 0;
      *(_DWORD *)(*((_QWORD *)v7 + 2) + 24LL) = 0;
      v10 = (_QWORD *)(*((_QWORD *)v7 + 2) + 8LL);
      v10[1] = v10;
      *v10 = v10;
      v11 = (_QWORD *)(*((_QWORD *)v7 + 2) + 32LL);
      v11[1] = v11;
      *v11 = v11;
    }
    v5 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)v7 + 2), a2, a3);
    *((_DWORD *)SepSingletonGlobal + 4) |= 1u;
    goto LABEL_7;
  }
  return v5;
}
