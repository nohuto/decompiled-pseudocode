/*
 * XREFs of sub_180007FCC @ 0x180007FCC
 * Callers:
 *     sub_180007DA0 @ 0x180007DA0 (sub_180007DA0.c)
 * Callees:
 *     sub_180002654 @ 0x180002654 (sub_180002654.c)
 */

RTL_SRWLOCK *__fastcall sub_180007FCC(RTL_SRWLOCK *a1)
{
  RTL_SRWLOCK *v1; // rdi
  bool v3; // zf
  RTL_SRWLOCK *result; // rax

  v1 = a1 + 1;
  sub_180002654(&a1[1].Ptr);
  v3 = qword_18003AC80 == 0;
  a1->Ptr = off_18002CE58;
  v1->Ptr = off_18002CCF8;
  a1[4].Ptr = off_18002C718;
  a1[5].Ptr = off_18002C7E0;
  a1[6].Ptr = off_18002CD40;
  a1[7].Ptr = off_18002C950;
  a1[8].Ptr = off_18002CDB8;
  a1[10].Ptr = (PVOID)1;
  if ( !v3 )
    _InterlockedIncrement(&dword_18003AC88);
  a1->Ptr = off_18002CE90;
  v1->Ptr = off_18002C908;
  a1[4].Ptr = off_18002C640;
  a1[5].Ptr = off_18002C6A0;
  a1[6].Ptr = off_18002CAC8;
  a1[7].Ptr = off_18002C988;
  a1[8].Ptr = off_18002CD80;
  InitializeSRWLock(a1 + 11);
  a1[12].Ptr = 0LL;
  result = a1;
  a1[14].Ptr = 0LL;
  return result;
}
