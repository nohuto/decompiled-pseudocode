/*
 * XREFs of MiSystemImageHasPrivateFixups @ 0x1400DF9F4
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiSystemImageHasPrivateFixups(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rdi
  bool v4; // zf
  KIRQL v8; // al
  __int64 *v9; // rdx
  KIRQL v10; // bp
  __int64 v11; // r8
  unsigned __int64 v12; // rbx

  v3 = 0LL;
  v4 = qword_1402FE508 == (_QWORD)&qword_1402FE508;
  *a3 = 0;
  *a2 = 0LL;
  if ( v4
    || a1 + 0x80000000000LL > 0x7FFFFFFFFFLL
    && (!PsNtosImageBase
     || (a1 >= PsNtosImageEnd || a1 < (unsigned __int64)PsNtosImageBase)
     && (a1 >= PsHalImageEnd || a1 < (unsigned __int64)PsHalImageBase))
    && a1 + 0x70000000000LL > 0x7FFFFFFFFFLL )
  {
    return 0LL;
  }
  v8 = ExAcquireSpinLockShared(&dword_1402FE500);
  v9 = (__int64 *)qword_1402FE508;
  v10 = v8;
  while ( v9 != &qword_1402FE508 )
  {
    if ( a1 >= v9[2] && a1 <= v9[3] )
    {
      v11 = v9[2];
      v12 = (a1 - v11) >> 12;
      if ( _bittest(*(const signed __int32 **)(v9[5] + 8), v12) )
      {
        *a3 = v12;
        v3 = v11 - v9[4];
        *a2 = v9[6];
      }
      break;
    }
    v9 = (__int64 *)*v9;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FE500);
  __writecr8(v10);
  return v3;
}
