/*
 * XREFs of KiSendThawExecution @ 0x140083DBC
 * Callers:
 *     KeThawExecution @ 0x140083258 (KeThawExecution.c)
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 * Callees:
 *     KiSetDebuggerOwner @ 0x140083F20 (KiSetDebuggerOwner.c)
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall KiSendThawExecution(char a1)
{
  __int64 result; // rax
  int v3; // ecx
  struct _KPRCB *v4; // rcx
  __int64 v5; // [rsp+28h] [rbp-89h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-81h] BYREF
  __int16 v7; // [rsp+40h] [rbp-71h]
  _QWORD v8[22]; // [rsp+48h] [rbp-69h] BYREF

  KeGetCurrentPrcb()->IpiFrozen = 0;
  KiSetDebuggerOwner(0LL);
  if ( (KiBugCheckActive & 3) == 0
    || (result = (__int64)KeGetCurrentPrcb(),
        LODWORD(v5) = (unsigned int)KiBugCheckActive >> 4,
        (unsigned int)KiBugCheckActive >> 4 != *(_DWORD *)(result + 36))
    || KiResumeForReboot )
  {
    result = (unsigned int)KeNumberProcessors_0;
    if ( (unsigned int)KeNumberProcessors_0 >= 2 && !PoAllProcIntrDisabled )
    {
      LODWORD(v8[0]) = 1310721;
      memset((char *)v8 + 4, 0, 0xA4uLL);
      LODWORD(v5) = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v3 = v5;
        do
        {
          v4 = (struct _KPRCB *)KiProcessorBlock[v3];
          if ( v4 != KeGetCurrentPrcb() )
          {
            if ( (v4->IpiFrozen & 0xF) == 2 )
            {
              v4->IpiFrozen = 3;
              if ( a1 )
                KeAddProcessorAffinityEx(v8, (unsigned int)v5);
            }
            else
            {
              v4->IpiFrozen = 0;
            }
          }
          LODWORD(v5) = v5 + 1;
          v3 = v5;
        }
        while ( (unsigned int)v5 < (unsigned int)KeNumberProcessors_0 );
      }
      v6[1] = v8[1];
      v6[0] = v8;
      v7 = 0;
      while ( 1 )
      {
        result = KeEnumerateNextProcessor(&v5, v6);
        if ( (_DWORD)result )
          break;
        while ( *(_DWORD *)(KiProcessorBlock[(unsigned int)v5] + 11528) == 3 )
          _mm_pause();
      }
    }
  }
  return result;
}
