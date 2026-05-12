/*
 * XREFs of StorSqmAddToStream @ 0x1C003B488
 * Callers:
 *     RaSqmLogAdapterStatistics @ 0x1C0026118 (RaSqmLogAdapterStatistics.c)
 *     RaSqmLogScsiPassthroughStatistics @ 0x1C00263E0 (RaSqmLogScsiPassthroughStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     memset @ 0x1C0013300 (memset.c)
 */

NTSTATUS __fastcall StorSqmAddToStream(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  NTSTATUS result; // eax
  unsigned int v7; // r11d
  unsigned int v8; // r8d
  _DWORD *v9; // rdx
  __int64 v10; // rcx
  int v11; // r10d
  void *v12; // rcx
  __int64 v13; // rax
  const wchar_t *v14; // rax
  const wchar_t *v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // [rsp+38h] [rbp-D0h] BYREF
  int *UserData; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v21[127]; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+480h] [rbp+378h] BYREF
  unsigned int v23; // [rsp+488h] [rbp+380h] BYREF

  v23 = a3;
  v22 = a2;
  v19 = 11;
  UserData = 0LL;
  result = (unsigned int)memset(v21, 0, sizeof(v21));
  if ( byte_1C0044698 )
  {
    v21[0] = 4LL;
    UserData = &v19;
    v21[1] = &unk_1C0044258;
    v21[3] = &v22;
    v21[5] = &v23;
    v7 = 0;
    v21[2] = 16LL;
    v21[4] = 4LL;
    v21[6] = 4LL;
    if ( a3 )
    {
      v8 = 6;
      do
      {
        if ( v8 >= 0x40 )
          break;
        v9 = (_DWORD *)(a4 + 16LL * v7);
        v10 = 2LL * (v8 - 2);
        v11 = *v9;
        v21[v10 - 1] = v9;
        v21[v10] = 4LL;
        v12 = v9 + 2;
        if ( v11 != 1 )
          v12 = &unk_1C003ED08;
        v13 = 2LL * (v8 - 1);
        v21[v13 - 1] = v12;
        v21[v13] = 4LL;
        if ( v11 == 2 )
        {
          v14 = (const wchar_t *)*((_QWORD *)v9 + 1);
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
        v21[v18 - 1] = v15;
        LODWORD(v21[v18]) = v17;
        HIDWORD(v21[v18]) = 0;
      }
      while ( v7 < a3 );
    }
    return EtwWrite(RegHandle, &SQM_ADD_STREAMROW, 0LL, 0x40u, (PEVENT_DATA_DESCRIPTOR)&UserData);
  }
  return result;
}
