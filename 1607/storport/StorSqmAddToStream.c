/*
 * XREFs of StorSqmAddToStream @ 0x1C0044BC0
 * Callers:
 *     RaSqmLogAdapterStatistics @ 0x1C002B738 (RaSqmLogAdapterStatistics.c)
 *     RaSqmLogScsiPassthroughStatistics @ 0x1C002BA00 (RaSqmLogScsiPassthroughStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memset @ 0x1C001AD80 (memset.c)
 */

NTSTATUS __fastcall StorSqmAddToStream(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  NTSTATUS result; // eax
  unsigned int v7; // r11d
  unsigned int v8; // r8d
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r10d
  void *v12; // rcx
  __int64 v13; // rax
  const wchar_t *v14; // rax
  const wchar_t *v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[64]; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+480h] [rbp+378h] BYREF
  unsigned int v22; // [rsp+488h] [rbp+380h] BYREF

  v22 = a3;
  v21 = a2;
  v19 = 11;
  result = (unsigned int)memset(UserData, 0, sizeof(UserData));
  if ( byte_1C004F7E1 )
  {
    *(_QWORD *)&UserData[0].Size = 4LL;
    UserData[0].Ptr = (unsigned __int64)&v19;
    UserData[1].Ptr = (unsigned __int64)&unk_1C004F320;
    UserData[2].Ptr = (unsigned __int64)&v21;
    UserData[3].Ptr = (unsigned __int64)&v22;
    v7 = 0;
    *(_QWORD *)&UserData[1].Size = 16LL;
    *(_QWORD *)&UserData[2].Size = 4LL;
    *(_QWORD *)&UserData[3].Size = 4LL;
    if ( a3 )
    {
      v8 = 6;
      do
      {
        if ( v8 >= 0x40 )
          break;
        v9 = a4 + 16LL * v7;
        v10 = v8 - 2;
        v11 = *(_DWORD *)v9;
        UserData[v10].Ptr = v9;
        *(_QWORD *)&UserData[v10].Size = 4LL;
        v12 = (void *)(v9 + 8);
        if ( v11 != 1 )
          v12 = &unk_1C0048F30;
        v13 = v8 - 1;
        UserData[v13].Ptr = (unsigned __int64)v12;
        *(_QWORD *)&UserData[v13].Size = 4LL;
        if ( v11 == 2 )
        {
          v14 = *(const wchar_t **)(v9 + 8);
          v15 = v14;
        }
        else
        {
          v14 = L"0";
          v15 = L"0";
        }
        v16 = -1LL;
        do
          ++v16;
        while ( v14[v16] );
        v17 = 2 * v16 + 2;
        ++v7;
        v18 = v8;
        v8 += 3;
        v18 *= 2LL;
        *(&UserData[0].Ptr + v18) = (unsigned __int64)v15;
        *(&UserData[0].Size + 2 * v18) = v17;
        *(&UserData[0].Reserved + 2 * v18) = 0;
      }
      while ( v7 < a3 );
    }
    return EtwWrite(RegHandle, &SQM_ADD_STREAMROW, 0LL, 0x40u, UserData);
  }
  return result;
}
