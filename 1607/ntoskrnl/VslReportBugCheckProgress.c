/*
 * XREFs of VslReportBugCheckProgress @ 0x1401C2DE8
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

NTSTATUS __fastcall VslReportBugCheckProgress(char *a1, __int64 *a2, const void *a3, unsigned int a4, unsigned int a5)
{
  size_t v5; // r11
  unsigned int v10; // ecx
  wchar_t **v11; // rdx
  unsigned __int16 *v12; // rax
  int v13; // r9d
  int v14; // r8d
  size_t v15; // rbx
  char v16[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v17; // [rsp+28h] [rbp-80h]
  __int64 v18; // [rsp+30h] [rbp-78h]
  char v19[8]; // [rsp+40h] [rbp-68h] BYREF
  size_t v20; // [rsp+48h] [rbp-60h]
  __int64 v21; // [rsp+50h] [rbp-58h]

  v5 = a4;
  if ( a4 > 8 )
    return -1073741811;
  v10 = 0;
  v11 = IumBugCheckVariables;
  while ( 1 )
  {
    v12 = (unsigned __int16 *)a1;
    do
    {
      v13 = *(unsigned __int16 *)((char *)v12 + (char *)*v11 - a1);
      v14 = *v12 - v13;
      if ( v14 )
        break;
      ++v12;
    }
    while ( v13 );
    if ( !v14 )
      break;
    ++v10;
    ++v11;
    if ( v10 >= 3 )
      goto LABEL_11;
  }
  v17 = v10;
LABEL_11:
  if ( v10 == 3 )
    return -1073741811;
  v18 = *a2;
  v15 = v5;
  memmove(v19, a3, v5);
  v21 = a5;
  v20 = v15;
  return VslpEnterIumSecureMode(1, 237LL, 0LL, (__int64)v16);
}
