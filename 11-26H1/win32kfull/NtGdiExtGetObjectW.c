/*
 * XREFs of NtGdiExtGetObjectW @ 0x140013F50
 * Callers:
 *     <none>
 * Callees:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtGdiExtGetObjectW(HPALETTE a1, unsigned int a2, void *a3)
{
  unsigned int v6; // r15d
  int v7; // ebx
  int ObjectW; // eax
  unsigned int v9; // edi
  _BYTE v11[592]; // [rsp+30h] [rbp-288h] BYREF

  v6 = (unsigned int)a1 & 0x7F0000;
  memset_0(v11, 0, sizeof(v11));
  if ( a2 > 0x250 )
    a2 = 592;
  v7 = a2;
  if ( v6 == 0x100000 )
    v7 = 16;
  ObjectW = GreExtGetObjectW(a1);
  v9 = ObjectW;
  if ( v6 == 0x100000 && v7 >= a2 )
    v7 = a2;
  if ( ObjectW && a3 )
  {
    if ( v7 < ObjectW )
      ObjectW = v7;
    GreProbeAndWriteToUntrustedVa(a3, ObjectW, v11, ObjectW, 2uLL);
  }
  return v9;
}
