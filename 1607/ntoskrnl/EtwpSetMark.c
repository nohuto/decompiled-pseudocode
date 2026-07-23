/*
 * XREFs of EtwpSetMark @ 0x1406A2A5C
 * Callers:
 *     NtTraceEvent @ 0x1400D3400 (NtTraceEvent.c)
 *     EtwpLogRefSetAutoMark @ 0x1406A7230 (EtwpLogRefSetAutoMark.c)
 * Callees:
 *     EtwpLogSystemEventUnsafe @ 0x1400734CC (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MmEmptyAllWorkingSets @ 0x1401EA204 (MmEmptyAllWorkingSets.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     MmIdentifyPhysicalMemory @ 0x140658EFC (MmIdentifyPhysicalMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpSetMark(unsigned int a1, _DWORD *a2, unsigned int a3, char a4, KPROCESSOR_MODE PreviousMode)
{
  unsigned int v8; // ebx
  char v9; // r14
  _DWORD *v11; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-38h]
  int v13; // [rsp+44h] [rbp-34h]
  void *v14; // [rsp+48h] [rbp-30h]
  int v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+54h] [rbp-24h]

  v8 = 0;
  if ( a3 > 4 )
  {
    if ( a3 <= 0xFFDD )
    {
      if ( PreviousMode )
      {
        if ( ((unsigned __int8)a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)a2 + a3 > 0x7FFFFFFF0000LL || (_DWORD *)((char *)a2 + a3) < a2 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v9 = 0;
      if ( (*a2 & 1) != 0 && a4 )
      {
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        {
          v9 = 1;
          MmEmptyAllWorkingSets();
        }
        else
        {
          v8 = -1073741727;
        }
      }
      v11 = a2 + 1;
      v12 = a3 - 4;
      v13 = 0;
      v14 = &EtwpNull;
      v15 = 2;
      v16 = 0;
      EtwpLogSystemEventUnsafe((__int64)&v11, KeGetCurrentThread(), a1, 2u, 3874, 0x3100u);
      if ( v9 )
        MmIdentifyPhysicalMemory(a1, 0x275u, 1);
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
