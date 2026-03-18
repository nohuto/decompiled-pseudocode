/*
 * XREFs of NtGdiExtGetObjectW @ 0x1C004BEB0
 * Callers:
 *     <none>
 * Callees:
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall NtGdiExtGetObjectW(struct HLFONT__ *a1, int a2, char *a3)
{
  unsigned __int64 v4; // r14
  unsigned int v6; // r15d
  int v7; // ebx
  int ObjectW; // eax
  unsigned int v9; // esi
  char *v10; // rcx
  _BYTE Src[592]; // [rsp+20h] [rbp-288h] BYREF

  v4 = a2;
  v6 = (unsigned int)a1 & 0x7F0000;
  memset(Src, 0, sizeof(Src));
  if ( (v4 & 0x80000000) != 0LL || v4 > 0x250 )
    LODWORD(v4) = 592;
  v7 = v4;
  if ( v6 == 0x100000 )
    v7 = 16;
  ObjectW = GreExtGetObjectW(a1, v7, (unsigned __int16 *)((unsigned __int64)Src & -(__int64)(a3 != 0LL)));
  v9 = ObjectW;
  if ( v6 == 0x100000 && v7 >= (int)v4 )
    v7 = v4;
  if ( ObjectW && a3 )
  {
    if ( v7 < ObjectW )
      ObjectW = v7;
    v10 = &a3[ObjectW];
    if ( (unsigned __int64)v10 > W32UserProbeAddress || v10 <= a3 || ((unsigned __int8)a3 & 1) != 0 )
      *W32UserProbeAddress = 0;
    memmove(a3, Src, ObjectW);
  }
  return v9;
}
