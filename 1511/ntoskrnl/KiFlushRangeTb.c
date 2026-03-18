/*
 * XREFs of KiFlushRangeTb @ 0x14011F814
 * Callers:
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MmSetAddressRangeModified @ 0x1400B9910 (MmSetAddressRangeModified.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14011F758 (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

struct _KTHREAD *__fastcall KiFlushRangeTb(char *a1, char a2)
{
  char *v2; // r8
  int v4; // r10d
  __int64 v5; // rdx
  struct _KTHREAD *result; // rax
  bool i; // zf
  __int128 v8; // [rsp+0h] [rbp-38h]
  __int128 v9; // [rsp+10h] [rbp-28h]

  v2 = a1;
  _R11D = 0;
  v4 = (1 << a2) & 0xA;
  if ( v4 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
  {
    *(_QWORD *)&v8 = 1LL;
    *((_QWORD *)&v8 + 1) = a1;
    __asm { invpcid r11d, [rsp+38h+var_38] }
  }
  v5 = (unsigned __int16)a1 & 0x7FF;
  result = (struct _KTHREAD *)-(__int64)((unsigned __int16)a1 & 0x800);
  for ( i = v5 == 0; ; i = v5 == 0 )
  {
    __invlpg(v2);
    if ( i )
      break;
    v2 += ((unsigned __int16)a1 & 0x800) != 0LL ? 0x200000LL : 4096LL;
    if ( v4 && KiFlushPcid )
    {
      result = KeGetCurrentThread();
      if ( !result->ApcState.Process->AddressPolicy )
      {
        *(_QWORD *)&v9 = 1LL;
        *((_QWORD *)&v9 + 1) = v2;
        __asm { invpcid r11d, [rsp+38h+var_28] }
      }
    }
    --v5;
  }
  return result;
}
