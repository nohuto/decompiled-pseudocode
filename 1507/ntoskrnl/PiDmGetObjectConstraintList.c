/*
 * XREFs of PiDmGetObjectConstraintList @ 0x1404DF3E0
 * Callers:
 *     PiDmGetCmObjectConstraintListFromCache @ 0x1404DF360 (PiDmGetCmObjectConstraintListFromCache.c)
 * Callees:
 *     PiDmListEnumObjectsWithCallback @ 0x140438E44 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140439850 (PiDmGetObject.c)
 */

__int64 __fastcall PiDmGetObjectConstraintList(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rdi
  unsigned int v8; // r15d
  _WORD *v9; // rsi
  int Object; // eax
  int v13; // ebx
  unsigned int v14; // eax
  __int64 (__fastcall *v16)(__int64, __int64, _BYTE *); // [rsp+20h] [rbp-20h] BYREF
  __int128 v17; // [rsp+28h] [rbp-18h]
  __int64 v18; // [rsp+38h] [rbp-8h]
  PVOID P; // [rsp+80h] [rbp+40h] BYREF

  v7 = a7;
  v8 = a6;
  v9 = a5;
  *a7 = 0;
  P = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  if ( v8 )
    *v9 = 0;
  Object = PiDmGetObject(*((unsigned int *)&PiDmListDefs + 10 * a1), a2, &P);
  v13 = Object;
  if ( Object < 0 )
  {
    if ( Object != -1073741772 )
      goto LABEL_10;
    v13 = 0;
  }
  else
  {
    v16 = PiDmCmObjectMatchCallback;
    *(_QWORD *)&v17 = a4;
    *((_QWORD *)&v17 + 1) = v9;
    v18 = v8;
    v13 = PiDmListEnumObjectsWithCallback(a1, (__int64 *)P, PiDmGetObjectListCallback, (__int64)&v16);
    if ( v13 < 0 )
      goto LABEL_10;
    *v7 = HIDWORD(v18);
  }
  if ( *v7 )
  {
    v14 = *v7 + 1;
    *v7 = v14;
    if ( v9 && v8 >= v14 )
      v9[v14 - 1] = 0;
    else
      v13 = -1073741789;
  }
LABEL_10:
  if ( P )
    PiDmObjectRelease((unsigned int *)P);
  return (unsigned int)v13;
}
