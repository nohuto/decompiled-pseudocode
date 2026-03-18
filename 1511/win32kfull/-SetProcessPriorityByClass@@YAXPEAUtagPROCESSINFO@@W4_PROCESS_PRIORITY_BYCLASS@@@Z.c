/*
 * XREFs of ?SetProcessPriorityByClass@@YAXPEAUtagPROCESSINFO@@W4_PROCESS_PRIORITY_BYCLASS@@@Z @ 0x1C00817A4
 * Callers:
 *     ?SetForegroundPriorityProcess@@YAXPEAUtagPROCESSINFO@@PEAUtagTHREADINFO@@W4_PROCESS_PRIORITY_BYCLASS@@@Z @ 0x1C00816A8 (-SetForegroundPriorityProcess@@YAXPEAUtagPROCESSINFO@@PEAUtagTHREADINFO@@W4_PROCESS_PRIORITY_BYC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetProcessPriorityByClass(__int64 *a1, int a2)
{
  int v4; // r8d
  __int64 v5; // rsi
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax

  v4 = (*((_DWORD *)a1 + 194) >> 18) & 3;
  if ( a2 != v4 )
  {
    v5 = *a1;
    if ( a2 )
    {
      v6 = a2 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          goto LABEL_7;
        v8 = *a1;
        if ( v4 == 1 )
        {
          v7 = 2LL;
          goto LABEL_6;
        }
        PsSetProcessPriorityByClass(v8, 1LL);
        v7 = 2LL;
      }
      else
      {
        v7 = 1LL;
      }
    }
    else
    {
      v7 = 0LL;
    }
    v8 = v5;
LABEL_6:
    result = PsSetProcessPriorityByClass(v8, v7);
LABEL_7:
    *((_DWORD *)a1 + 194) ^= (*((_DWORD *)a1 + 194) ^ (a2 << 18)) & 0xC0000;
  }
  return result;
}
