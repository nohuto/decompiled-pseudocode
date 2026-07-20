/*
 * XREFs of sub_1400080D4 @ 0x1400080D4
 * Callers:
 *     sub_140007D9C @ 0x140007D9C (sub_140007D9C.c)
 *     sub_140008F84 @ 0x140008F84 (sub_140008F84.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400080D4(void *a1, __int64 a2)
{
  NTSTATUS v3; // r8d
  __int64 v4; // rcx
  struct _IO_STATUS_BLOCK v6; // [rsp+50h] [rbp-38h] BYREF
  _DWORD v7[2]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v8; // [rsp+68h] [rbp-20h]
  __int64 v9; // [rsp+70h] [rbp-18h]

  v7[0] = 0;
  v7[1] = 1;
  v8 = 0LL;
  v9 = -1LL;
  v3 = NtFsControlFile(a1, 0LL, 0LL, 0LL, &v6, 0x98208u, v7, 0x18u, 0LL, 0);
  if ( v3 < 0 )
  {
    v4 = 2LL * (_InterlockedIncrement(&dword_140020420) % 32);
    *((_DWORD *)&unk_140020220 + 2 * v4) = 3920;
    *((_DWORD *)&unk_140020220 + 2 * v4 + 1) = v3;
    *((_QWORD *)&unk_140020220 + v4 + 1) = a2;
  }
  return (unsigned int)v3;
}
