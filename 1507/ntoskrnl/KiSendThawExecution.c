/*
 * XREFs of KiSendThawExecution @ 0x140206CD0
 * Callers:
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 *     KeThawExecution @ 0x14020657C (KeThawExecution.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiSetDebuggerOwner @ 0x140206EA0 (KiSetDebuggerOwner.c)
 */

unsigned __int64 __fastcall KiSendThawExecution(char a1)
{
  unsigned __int64 result; // rax
  unsigned int v3; // ecx
  __int64 v4; // rdx
  struct _KPRCB *v5; // rcx
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // r9
  unsigned __int16 i; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned int v14; // [rsp+28h] [rbp-79h]
  unsigned __int16 v15; // [rsp+38h] [rbp-69h]
  _QWORD v16[21]; // [rsp+40h] [rbp-61h] BYREF

  KeGetCurrentPrcb()->IpiFrozen = 0;
  KiSetDebuggerOwner(0LL);
  if ( (KiBugCheckActive & 3) == 0
    || (result = (unsigned __int64)KeGetCurrentPrcb(), (unsigned int)KiBugCheckActive >> 4 != *(_DWORD *)(result + 36))
    || KiResumeForReboot )
  {
    result = (unsigned int)KeNumberProcessors_0;
    if ( (unsigned int)KeNumberProcessors_0 >= 2 && !PoAllProcIntrDisabled )
    {
      v15 = 1;
      memset(v16, 0, 0xA0uLL);
      v14 = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v3 = 0;
        do
        {
          v4 = v3;
          v5 = (struct _KPRCB *)KiProcessorBlock[v3];
          if ( v5 != KeGetCurrentPrcb() )
          {
            if ( (v5->IpiFrozen & 0xF) == 2 )
            {
              v5->IpiFrozen = 3;
              if ( a1 )
              {
                v6 = KiProcessorIndexToNumberMappingTable[v4] & 0x3F;
                v7 = (unsigned int)KiProcessorIndexToNumberMappingTable[v4] >> 6;
                if ( v15 <= (unsigned int)v7 )
                  v15 = v7 + 1;
                v8 = (unsigned int)v7;
                v9 = v16[v7];
                _bittestandset64(&v9, v6);
                v16[v8] = v9;
              }
            }
            else
            {
              v5->IpiFrozen = 0;
            }
          }
          v3 = ++v14;
        }
        while ( v14 < (unsigned int)KeNumberProcessors_0 );
      }
      v10 = v16[0];
      for ( i = 0; ; v10 = v16[i] )
      {
        while ( v10 )
        {
          _BitScanForward64(&v12, v10);
          v10 &= ~(1LL << v12);
          v13 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v12]];
          while ( *(_DWORD *)(v13 + 11528) == 3 )
            _mm_pause();
        }
        result = ++i;
        if ( i >= (unsigned int)v15 )
          break;
      }
    }
  }
  return result;
}
