/*
 * XREFs of KiKernelIstMceExit @ 0x140225A40
 * Callers:
 *     KiMcheckAbort @ 0x140162F00 (KiMcheckAbort.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall KiKernelIstMceExit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // [rsp+10h] [rbp+10h]
  unsigned __int64 v14; // [rsp+18h] [rbp+18h]

  v8 = v14;
  if ( (v14 & 1) != 0 )
  {
    if ( !_interlockedbittestandreset(MK_FP(__GS__, 28696LL), 0) )
    {
      v12 = __readcr3();
      if ( v12 == v14 )
        goto LABEL_8;
      v8 = v14 | 0x8000000000000000uLL;
    }
  }
  else
  {
    v9 = __readcr3();
    if ( v9 == v14 )
      goto LABEL_8;
  }
  __writecr3(v8);
LABEL_8:
  __writemsr(0xC0000101, v13);
  __asm { iretq }
}
