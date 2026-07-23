/*
 * XREFs of PiDmGetObjectConstraintList @ 0x1404E8DF8
 * Callers:
 *     PiDmGetCmObjectConstraintListFromCache @ 0x1404E8D78 (PiDmGetCmObjectConstraintListFromCache.c)
 * Callees:
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1404E3A48 (PiDmListEnumObjectsWithCallback.c)
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
  _WORD *v10; // rsi
  int Object; // eax
  int v13; // ebx
  unsigned int v14; // eax
  __int64 (__fastcall *v16)(__int64, __int64, _BYTE *); // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h]
  _WORD *v18; // [rsp+30h] [rbp-10h]
  __int64 v19; // [rsp+38h] [rbp-8h]
  PVOID P; // [rsp+80h] [rbp+40h] BYREF

  v7 = a7;
  v8 = a6;
  v10 = a5;
  *a7 = 0;
  P = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( v8 )
    *v10 = 0;
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
    v17 = a4;
    v18 = v10;
    v19 = v8;
    v13 = PiDmListEnumObjectsWithCallback(a1, (volatile signed __int64 *)P, PiDmGetObjectListCallback, (__int64)&v16);
    if ( v13 < 0 )
      goto LABEL_10;
    *v7 = HIDWORD(v19);
  }
  if ( *v7 )
  {
    v14 = *v7 + 1;
    *v7 = v14;
    if ( v10 && v8 >= v14 )
      v10[v14 - 1] = 0;
    else
      v13 = -1073741789;
  }
LABEL_10:
  if ( P )
    PiDmObjectRelease((unsigned int *)P);
  return (unsigned int)v13;
}
