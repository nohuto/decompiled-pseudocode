/*
 * XREFs of PopWnfAudioCallback @ 0x14055EEA4
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     ExQueryWnfStateData @ 0x140563580 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfAudioCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _BYTE *a6)
{
  int v6; // eax
  unsigned int v7; // ebx
  BOOL v8; // ecx
  __int64 v10; // rcx
  unsigned int v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h] BYREF
  int v13; // [rsp+30h] [rbp-18h] BYREF

  v11 = 8;
  v6 = ExQueryWnfStateData(a1, &v12, &v13, &v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( v11 < 8 )
      return 0;
    PopAcquirePolicyLock();
    if ( *a6 )
    {
      v8 = (v13 & 2) != 0;
      if ( (v13 & 2) == 0 )
      {
LABEL_5:
        *a6 = v8;
        if ( v8 )
        {
          qword_1403537D8 = MEMORY[0xFFFFF78000000008];
        }
        else
        {
          if ( qword_140353788 )
          {
            if ( qword_140353788 <= (unsigned __int64)qword_1403537D8 )
              v10 = MEMORY[0xFFFFF78000000008] - qword_1403537D8;
            else
              v10 = MEMORY[0xFFFFF78000000008] - qword_140353788;
            qword_1403537E0 += v10;
          }
          qword_1403537D8 = 0LL;
        }
      }
    }
    else
    {
      v8 = (v13 & 2) != 0;
      if ( (v13 & 2) != 0 )
        goto LABEL_5;
    }
    PopReleasePolicyLock();
    return v7;
  }
  if ( (PoDebug & 1) != 0 )
    DbgPrint("PopWnfAudioPlaybackCallback: Failed to query WNF state data (Status=0x%x)\n", v6);
  return v7;
}
