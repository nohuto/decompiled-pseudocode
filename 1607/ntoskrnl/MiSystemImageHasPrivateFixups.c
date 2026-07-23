/*
 * XREFs of MiSystemImageHasPrivateFixups @ 0x140099A90
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiSystemImageHasPrivateFixups(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rdi
  bool v4; // zf
  KIRQL v8; // al
  __int64 *i; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rbx

  v3 = 0LL;
  v4 = qword_140326808 == (_QWORD)&qword_140326808;
  *a3 = 0;
  *a2 = 0LL;
  if ( v4
    || (a1 < qword_140328030 || a1 >= qword_140328030 + 0x8000000000LL)
    && (!PsNtosImageBase
     || (a1 < (unsigned __int64)PsNtosImageBase || a1 >= PsNtosImageEnd)
     && (a1 < (unsigned __int64)PsHalImageBase || a1 >= PsHalImageEnd))
    && (a1 < qword_140326950 || a1 >= qword_140326950 + 0x8000000000LL) )
  {
    return 0LL;
  }
  v8 = ExAcquireSpinLockShared(&dword_140326800);
  for ( i = (__int64 *)qword_140326808; i != &qword_140326808; i = (__int64 *)*i )
  {
    if ( a1 >= i[2] && a1 <= i[3] )
    {
      v10 = i[2];
      v11 = (a1 - v10) >> 12;
      if ( _bittest(*(const signed __int32 **)(i[5] + 8), v11) )
      {
        *a3 = v11;
        v3 = v10 - i[4];
        *a2 = i[6];
      }
      break;
    }
  }
  ExReleaseSpinLockShared(&dword_140326800, v8);
  return v3;
}
