/*
 * XREFs of NtGdiGetUFI @ 0x1C02A76E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     GreGetUFI @ 0x1C026A69C (GreGetUFI.c)
 */

__int64 __fastcall NtGdiGetUFI(HDC a1, _QWORD *a2, char *a3, unsigned int *a4, unsigned int *a5, _DWORD *a6)
{
  unsigned int UFI; // ebx
  _DWORD *v10; // rcx
  unsigned int **v11; // rsi
  char v12; // al
  unsigned int v13; // r14d
  size_t v14; // r8
  char *v15; // rax
  unsigned int *v16; // rcx
  unsigned int v18; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-A4h] BYREF
  __int64 v20; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-98h] BYREF
  _BYTE Src[80]; // [rsp+60h] [rbp-88h] BYREF

  v18 = 0;
  UFI = GreGetUFI(a1, &v21, Src, &v19, &v18, (__int64)&v20, 0LL);
  if ( UFI )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_QWORD *)W32UserProbeAddress;
    *a2 = v21;
    v10 = a6;
    v11 = (unsigned int **)W32UserProbeAddress;
    if ( (unsigned __int64)a6 >= W32UserProbeAddress )
      v10 = (_DWORD *)W32UserProbeAddress;
    v12 = v20;
    *v10 = v20;
    if ( (v12 & 2) != 0 && a3 )
    {
      v13 = v19;
      v14 = v19;
      v15 = &a3[v19];
      if ( (unsigned __int64)v15 > W32UserProbeAddress || v15 <= a3 )
      {
        *W32UserProbeAddress = 0;
        v11 = (unsigned int **)W32UserProbeAddress;
      }
      memmove(a3, Src, v14);
      if ( a4 >= *v11 )
        a4 = *v11;
      *a4 = v13;
      v16 = a5;
      if ( a5 >= *v11 )
        v16 = *v11;
      *v16 = v18;
    }
  }
  return UFI;
}
