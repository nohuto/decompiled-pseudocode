/*
 * XREFs of NtGdiGetEmbUFI @ 0x1C02A6780
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     GreGetUFI @ 0x1C0269238 (GreGetUFI.c)
 */

__int64 __fastcall NtGdiGetEmbUFI(HDC a1, _QWORD *a2, char *a3, _BYTE *a4, _BYTE *a5, _DWORD *a6, __int64 *a7)
{
  unsigned int UFI; // edi
  _DWORD *v11; // rcx
  unsigned __int64 *v12; // rbx
  char v13; // dl
  unsigned int v14; // r14d
  size_t v15; // r8
  char *v16; // rax
  _BYTE *v17; // rcx
  int v19; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-A4h] BYREF
  __int64 v21; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-98h] BYREF
  __int64 v23; // [rsp+58h] [rbp-90h] BYREF
  _BYTE Src[80]; // [rsp+60h] [rbp-88h] BYREF

  v19 = 0;
  UFI = GreGetUFI(a1, &v22, Src, &v20, &v19, (__int64)&v21, &v23);
  if ( UFI )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_QWORD *)W32UserProbeAddress;
    *a2 = v22;
    v11 = a6;
    v12 = (unsigned __int64 *)W32UserProbeAddress;
    if ( (unsigned __int64)a6 >= W32UserProbeAddress )
      v11 = (_DWORD *)W32UserProbeAddress;
    v13 = v21;
    *v11 = v21;
    if ( (unsigned __int64)(a7 + 1) > W32UserProbeAddress || a7 + 1 <= a7 )
    {
      *W32UserProbeAddress = 0;
      v12 = (unsigned __int64 *)W32UserProbeAddress;
    }
    *a7 = v23;
    if ( (v13 & 2) != 0 && a3 )
    {
      v14 = v20;
      v15 = v20;
      v16 = &a3[v20];
      if ( (unsigned __int64)v16 > *v12 || v16 <= a3 )
      {
        *(_BYTE *)*v12 = 0;
        v12 = (unsigned __int64 *)W32UserProbeAddress;
      }
      memmove(a3, Src, v15);
      if ( (unsigned __int64)a4 >= *v12 )
        a4 = (_BYTE *)*v12;
      *(_DWORD *)a4 = v14;
      v17 = a5;
      if ( (unsigned __int64)a5 >= *v12 )
        v17 = (_BYTE *)*v12;
      *(_DWORD *)v17 = v19;
    }
  }
  return UFI;
}
