/*
 * XREFs of KiFlushRangeTb @ 0x14012FDBC
 * Callers:
 *     MmSetAddressRangeModified @ 0x140016B20 (MmSetAddressRangeModified.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14012FD08 (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall KiFlushRangeTb(unsigned __int64 a1, char a2)
{
  char *v2; // r8
  int v4; // edx
  unsigned __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  bool i; // zf
  __int128 v9; // [rsp+0h] [rbp-38h]
  __int128 v10; // [rsp+10h] [rbp-28h]

  v2 = (char *)a1;
  _R11D = 0;
  v4 = (1 << a2) & 0xA;
  if ( v4 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
  {
    *(_QWORD *)&v9 = 1LL;
    *((_QWORD *)&v9 + 1) = a1;
    __asm { invpcid r11d, [rsp+38h+var_38] }
  }
  v5 = a1 & 0x3FF;
  LOBYTE(CurrentThread) = 8 * ((a1 >> 10) & 3);
  for ( i = v5 == 0; ; i = v5 == 0 )
  {
    __invlpg(v2);
    if ( i )
      break;
    v2 += 4096LL << (9 * ((unsigned __int8)(a1 >> 10) & 3u));
    if ( v4 )
    {
      if ( KiFlushPcid )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !CurrentThread->ApcState.Process->AddressPolicy )
        {
          *(_QWORD *)&v10 = 1LL;
          *((_QWORD *)&v10 + 1) = v2;
          __asm { invpcid r11d, [rsp+38h+var_28] }
        }
      }
    }
    --v5;
  }
  return (char)CurrentThread;
}
