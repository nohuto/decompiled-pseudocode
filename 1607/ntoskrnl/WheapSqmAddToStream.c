/*
 * XREFs of WheapSqmAddToStream @ 0x1406BBCB4
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x1406BA988 (WheapAttemptPhysicalPageOffline.c)
 *     WheapPfaMemoryCheck @ 0x1406BB5FC (WheapPfaMemoryCheck.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x1406BB950 (WheapPfaRetireExpiredMemoryEntries.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

NTSTATUS __fastcall WheapSqmAddToStream(int a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbx
  NTSTATUS result; // eax
  unsigned int v6; // r11d
  const wchar_t **v7; // r8
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // rdx
  int v9; // ecx
  const wchar_t **v10; // rax
  const wchar_t *v11; // r9
  const wchar_t *v12; // r10
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[31]; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+268h] [rbp+160h] BYREF
  unsigned int v18; // [rsp+270h] [rbp+168h] BYREF

  v18 = a2;
  v17 = a1;
  v4 = a2;
  result = (unsigned int)memset(UserData, 0, sizeof(UserData));
  v15 = 11;
  if ( a3 && (unsigned int)v4 < 9 )
  {
    *(_QWORD *)&UserData[0].Size = 4LL;
    UserData[0].Ptr = (ULONGLONG)&v15;
    UserData[1].Ptr = (ULONGLONG)&unk_140287218;
    UserData[2].Ptr = (ULONGLONG)&v17;
    UserData[3].Ptr = (ULONGLONG)&v18;
    *(_QWORD *)&UserData[1].Size = 16LL;
    *(_QWORD *)&UserData[2].Size = 4LL;
    *(_QWORD *)&UserData[3].Size = 4LL;
    if ( (_DWORD)v4 )
    {
      v6 = 6;
      v7 = (const wchar_t **)(a3 + 8);
      p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData[4].Reserved;
      do
      {
        *(_QWORD *)&p_Reserved[-1].Reserved = 4LL;
        v9 = *((_DWORD *)v7 - 2);
        *(_QWORD *)&p_Reserved[-3].Reserved = v7 - 1;
        v10 = (const wchar_t **)&unk_140287210;
        if ( v9 == 1 )
          v10 = v7;
        *(_QWORD *)&p_Reserved[3].Reserved = 4LL;
        *(_QWORD *)&p_Reserved[1].Reserved = v10;
        if ( v9 == 2 )
          v11 = *v7;
        else
          v11 = L"0";
        if ( v9 == 2 )
          v12 = *v7;
        else
          v12 = L"0";
        v13 = -1LL;
        do
          ++v13;
        while ( v11[v13] );
        v14 = v6;
        p_Reserved += 12;
        v6 += 3;
        v7 += 2;
        UserData[v14].Ptr = (ULONGLONG)v12;
        UserData[v14].Size = 2 * v13 + 2;
        *(&UserData[0].Reserved + 1 * v14) = 0;
        --v4;
      }
      while ( v4 );
    }
    return EtwWrite((REGHANDLE)WheapDispatchPtr.DriverObject, &WHEA_SQM_EVENT_ADDTOSTREAM, 0LL, 0x1Fu, UserData);
  }
  return result;
}
