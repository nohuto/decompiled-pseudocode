/*
 * XREFs of KeLoadMTRR @ 0x1403A5F74
 * Callers:
 *     KiLoadMTRRTarget @ 0x1403AA9CC (KiLoadMTRRTarget.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeFlushCurrentTbImmediately @ 0x1401C6F30 (KeFlushCurrentTbImmediately.c)
 *     KiLockStepExecution @ 0x1403A6150 (KiLockStepExecution.c)
 *     KiWriteFixedMtrr @ 0x1403A6190 (KiWriteFixedMtrr.c)
 *     KiReadFixedMtrr @ 0x1403A6298 (KiReadFixedMtrr.c)
 *     KiCompareVarMtrr @ 0x1403A63A0 (KiCompareVarMtrr.c)
 */

__int64 __fastcall KeLoadMTRR(__int64 a1)
{
  __int16 v2; // di
  bool v3; // di
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int v9; // r11d
  __int64 v10; // r8
  unsigned int v11; // r10d
  __int64 v12; // r8
  __int64 v13; // rdx
  PVOID v14; // r8
  _QWORD *v15; // rcx
  _BYTE v17[96]; // [rsp+20h] [rbp-98h] BYREF
  int v18; // [rsp+B0h] [rbp-8h]

  if ( byte_1402E2670 )
  {
    v2 = v18;
    _disable();
    v3 = (v2 & 0x200) != 0;
    ((void (*)(void))KiLockStepExecution)();
    v4 = __readcr0();
    __writecr0(v4 & 0xFFFFFFFF9FFFFFFFuLL | 0x40000000);
    __wbinvd();
    v5 = __readcr4();
    if ( (v5 & 0x80) != 0 )
      __writecr4(v5 & 0xFFFFFFFFFFFFFF7FuLL);
    else
      KeFlushCurrentTbImmediately();
    v6 = KiMtrrInfo & 0xFFFFFFFFFFFFF7FFuLL;
    v7 = (KiMtrrInfo & 0xFFFFFFFFFFFFF7FFuLL) >> 32;
    __writemsr(0x2FFu, KiMtrrInfo & 0xFFFFFFFFFFFFF7FFuLL);
    if ( !(unsigned __int8)KiCompareVarMtrr(767LL, v7) )
      KeMtrrComparisonFailed = 1;
    v9 = 0;
    if ( (_BYTE)qword_1402E2668 )
    {
      v10 = 0LL;
      v11 = 513;
      do
      {
        v12 = 2 * v10;
        __writemsr(v11 - 1, *((_QWORD *)qword_1402E2678 + v12));
        v8 = HIDWORD(*((_QWORD *)qword_1402E2678 + v12 + 1));
        __writemsr(v11, *((_QWORD *)qword_1402E2678 + v12 + 1));
        v10 = ++v9;
        v11 += 2;
      }
      while ( v9 < (unsigned __int64)(unsigned __int8)qword_1402E2668 );
    }
    if ( qword_1402E2680 )
    {
      KiReadFixedMtrr(v17, v8);
      v14 = qword_1402E2680;
      if ( !KeGetCurrentPrcb()->Number )
      {
        v13 = 0LL;
        v14 = (PVOID)((_BYTE *)qword_1402E2680 - v17);
        v15 = v17;
        while ( *(_QWORD *)((char *)v15 + (_QWORD)v14) == *v15 )
        {
          v13 = (unsigned int)(v13 + 1);
          ++v15;
          if ( (unsigned int)v13 >= 0xB )
            goto LABEL_17;
        }
        KeMtrrComparisonFailed = 1;
      }
LABEL_17:
      KiWriteFixedMtrr(qword_1402E2680, v13, v14);
    }
    __writemsr(0x2FFu, v6 | 0x800);
    __wbinvd();
    KeFlushCurrentTbImmediately();
    __writecr0(v4);
    if ( (v5 & 0x80) != 0 )
      __writecr4(v5);
    KiLockStepExecution(a1);
    if ( v3 )
      _enable();
  }
  return 0LL;
}
