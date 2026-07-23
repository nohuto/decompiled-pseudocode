/*
 * XREFs of KeLoadMTRR @ 0x1403D2568
 * Callers:
 *     KiLoadMTRRTarget @ 0x1403D6AD8 (KiLoadMTRRTarget.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeFlushCurrentTbImmediately @ 0x1401D5ECC (KeFlushCurrentTbImmediately.c)
 *     KiLockStepExecution @ 0x1403D2744 (KiLockStepExecution.c)
 *     KiWriteFixedMtrr @ 0x1403D2784 (KiWriteFixedMtrr.c)
 *     KiReadFixedMtrr @ 0x1403D288C (KiReadFixedMtrr.c)
 *     KiCompareVarMtrr @ 0x1403D2994 (KiCompareVarMtrr.c)
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

  if ( byte_140307BB0 )
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
    if ( (_BYTE)qword_140307BA8 )
    {
      v10 = 0LL;
      v11 = 513;
      do
      {
        v12 = 2 * v10;
        __writemsr(v11 - 1, *((_QWORD *)qword_140307BB8 + v12));
        v8 = HIDWORD(*((_QWORD *)qword_140307BB8 + v12 + 1));
        __writemsr(v11, *((_QWORD *)qword_140307BB8 + v12 + 1));
        v10 = ++v9;
        v11 += 2;
      }
      while ( v9 < (unsigned __int64)(unsigned __int8)qword_140307BA8 );
    }
    if ( qword_140307BC0 )
    {
      KiReadFixedMtrr(v17, v8);
      v14 = qword_140307BC0;
      if ( !KeGetCurrentPrcb()->Number )
      {
        v13 = 0LL;
        v14 = (PVOID)((_BYTE *)qword_140307BC0 - v17);
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
      KiWriteFixedMtrr(qword_140307BC0, v13, v14);
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
