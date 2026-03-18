/*
 * XREFs of HvlpExtendedFastHypercallWithOutput @ 0x14017ED00
 * Callers:
 *     HvlpFastHypercall @ 0x1401E5834 (HvlpFastHypercall.c)
 * Callees:
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlpExtendedFastHypercallWithOutput(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r11
  _QWORD *v9; // [rsp+0h] [rbp-10h]
  __int64 v10; // [rsp+8h] [rbp-8h]

  result = HvlpExtendedFastHypercall(a1, a2, 16 * a3);
  if ( !(_WORD)result )
  {
    v8 = (unsigned __int16)a5;
    if ( v10 || (*v9 = v6, v9[1] = v7, v8 = (unsigned __int16)a5 - 1LL, (unsigned __int16)a5 != 1LL) )
      __asm { jmp     r9 }
  }
  return result;
}
