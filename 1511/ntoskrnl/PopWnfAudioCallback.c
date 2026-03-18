/*
 * XREFs of PopWnfAudioCallback @ 0x1404EACF8
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     ExQueryWnfStateData @ 0x1404BB5FC (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfAudioCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _BYTE *a6)
{
  int v6; // ebx
  BOOL v7; // ecx
  __int64 v9; // rcx
  unsigned int v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+28h] [rbp-20h] BYREF
  int v12; // [rsp+30h] [rbp-18h] BYREF

  v10 = 8;
  v6 = ExQueryWnfStateData(a1, &v11, &v12, &v10);
  if ( v6 >= 0 )
  {
    if ( v10 < 8 )
      return 0;
    PopAcquirePolicyLock();
    if ( *a6 )
    {
      v7 = (v12 & 2) != 0;
      if ( (v12 & 2) == 0 )
      {
LABEL_5:
        *a6 = v7;
        if ( v7 )
        {
          qword_140305A58 = MEMORY[0xFFFFF78000000008];
        }
        else
        {
          if ( qword_140305A08 )
          {
            if ( qword_140305A08 <= (unsigned __int64)qword_140305A58 )
              v9 = MEMORY[0xFFFFF78000000008] - qword_140305A58;
            else
              v9 = MEMORY[0xFFFFF78000000008] - qword_140305A08;
            qword_140305A60 += v9;
          }
          qword_140305A58 = 0LL;
        }
      }
    }
    else
    {
      v7 = (v12 & 2) != 0;
      if ( (v12 & 2) != 0 )
        goto LABEL_5;
    }
    PopReleasePolicyLock();
  }
  return (unsigned int)v6;
}
