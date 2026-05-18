/*
 * XREFs of sub_1800049A0 @ 0x1800049A0
 * Callers:
 *     sub_180004654 @ 0x180004654 (sub_180004654.c)
 *     sub_1800047D0 @ 0x1800047D0 (sub_1800047D0.c)
 * Callees:
 *     sub_180001228 @ 0x180001228 (sub_180001228.c)
 *     _guard_check_icall_nop @ 0x180003360 (_guard_check_icall_nop.c)
 *     sub_180003A80 @ 0x180003A80 (sub_180003A80.c)
 *     sub_180003B24 @ 0x180003B24 (sub_180003B24.c)
 *     sub_180003DD8 @ 0x180003DD8 (sub_180003DD8.c)
 *     sub_1800045AC @ 0x1800045AC (sub_1800045AC.c)
 *     sub_180004608 @ 0x180004608 (sub_180004608.c)
 *     sub_180004970 @ 0x180004970 (sub_180004970.c)
 *     sub_180004CC0 @ 0x180004CC0 (sub_180004CC0.c)
 *     sub_180004E30 @ 0x180004E30 (sub_180004E30.c)
 *     __security_check_cookie @ 0x1800063A0 (__security_check_cookie.c)
 *     memset @ 0x180007606 (memset.c)
 */

__int64 sub_1800049A0()
{
  int v0; // edi
  __int64 v1; // rax
  volatile signed __int32 *v2; // rsi
  int v3; // eax
  int v4; // edx
  unsigned int v5; // eax
  wchar_t Buffer[48]; // [rsp+40h] [rbp-D8h] BYREF
  wchar_t v8[48]; // [rsp+A0h] [rbp-78h] BYREF

  if ( sub_180004970() )
    return 0;
  sub_1800045AC();
  v1 = sub_180003DD8(96LL);
  v2 = (volatile signed __int32 *)v1;
  if ( v1 )
  {
    sub_180004CC0(v1, (unsigned int)dword_18000C710, hObject);
    *((_DWORD *)v2 + 22) = 1;
    *(_QWORD *)v2 = off_180008E80;
  }
  else
  {
    v2 = 0LL;
  }
  if ( !v2 )
  {
    v0 = -2147024882;
    if ( &unk_18000933C )
      sub_180003B24(4u, (__int64)&unk_18000933C, 1LL, 0x8007000E, 250);
    else
      sub_180003A80(-2147024882, 250);
    return (unsigned int)v0;
  }
  memset(Buffer, 0, 82);
  memset(v8, 0, 82);
  LeaveCriticalSection(&CriticalSection);
  if ( NtCurrentPeb()->SessionId
    && (v3 = sub_180001228(Buffer, 41LL, L"\\Sessions\\%d", NtCurrentPeb()->SessionId), v0 = v3, v3 < 0) )
  {
    if ( !&unk_18000933C )
    {
      v4 = 271;
LABEL_14:
      sub_180003A80(v3, v4);
      goto LABEL_24;
    }
    sub_180003B24(4u, (__int64)&unk_18000933C, 1LL, v3, 271);
  }
  else
  {
    v3 = sub_180001228(v8, 41LL, L"%s\\Windows\\DwmApiPort", Buffer);
    v0 = v3;
    if ( v3 >= 0 )
    {
      v5 = sub_180004E30(v2, v8);
      v3 = sub_180004608(v5);
      v0 = v3;
      if ( v3 < 0 )
      {
        if ( !&unk_18000933C )
        {
          v4 = 281;
          goto LABEL_14;
        }
        sub_180003B24(4u, (__int64)&unk_18000933C, 1LL, v3, 281);
      }
    }
    else
    {
      if ( !&unk_18000933C )
      {
        v4 = 278;
        goto LABEL_14;
      }
      sub_180003B24(4u, (__int64)&unk_18000933C, 1LL, v3, 278);
    }
  }
LABEL_24:
  EnterCriticalSection(&CriticalSection);
  if ( v0 >= 0 && !*(&hObject + 1) )
  {
    *(&hObject + 1) = (HANDLE)v2;
    v2 = 0LL;
  }
  if ( v2 && _InterlockedExchangeAdd(v2 + 22, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v2)(v2, 1LL);
  return (unsigned int)v0;
}
