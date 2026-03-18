/*
 * XREFs of ExQueryClipSp @ 0x14015B0B0
 * Callers:
 *     sub_140587464 @ 0x140587464 (sub_140587464.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     sub_1405874F8 @ 0x1405874F8 (sub_1405874F8.c)
 */

__int64 __fastcall ExQueryClipSp(int a1, int a2, __int64 a3, unsigned int a4, void *a5, unsigned int *a6)
{
  int v9; // eax
  int v10; // ebx
  int *v12; // rdx
  unsigned int v13; // edi
  _DWORD Src[2]; // [rsp+30h] [rbp-20h] BYREF
  int v15; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+3Ch] [rbp-14h]
  int v17; // [rsp+44h] [rbp-Ch]

  Src[0] = 0;
  v15 = 0;
  Src[1] = 0;
  v16 = 0LL;
  v17 = 0;
  if ( a1 )
  {
    if ( a1 != 3 )
      return (unsigned int)-1073741198;
    if ( qword_14077E400 )
    {
      v9 = qword_14077E400();
LABEL_5:
      v10 = v9;
      goto LABEL_6;
    }
  }
  else if ( qword_14077E3F0 )
  {
    v9 = qword_14077E3F0(a3);
    goto LABEL_5;
  }
  v10 = -1073741637;
LABEL_6:
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( !a1 )
  {
    v13 = 8;
    v10 = sub_1405874F8(0, a2, 0, 8, Src, (__int64)a6);
    if ( v10 < 0 )
      return (unsigned int)v10;
    Src[0] = 0;
    v12 = Src;
    goto LABEL_17;
  }
  if ( a1 != 3 )
    return (unsigned int)-1073741198;
  LODWORD(v16) = 0;
  v12 = &v15;
  v15 = 1;
  v13 = 16;
LABEL_17:
  *a6 = v13;
  if ( v13 > a4 )
    return (unsigned int)-1073741789;
  else
    memmove(a5, v12, v13);
  return (unsigned int)v10;
}
