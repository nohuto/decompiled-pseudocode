/*
 * XREFs of PiDmGetReferencedObjectFromProperty @ 0x1405471E8
 * Callers:
 *     PiDmObjectProcessPropertyChange @ 0x1404E0000 (PiDmObjectProcessPropertyChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpGetObjectProperty @ 0x140437764 (PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140439850 (PiDmGetObject.c)
 *     _PnpStringFromGuid @ 0x140440494 (_PnpStringFromGuid.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140547318 (PiDmObjectGetCachedObjectReference.c)
 */

__int64 __fastcall PiDmGetReferencedObjectFromProperty(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int **a7)
{
  int CachedObjectReference; // eax
  unsigned int Object; // ebx
  int ObjectProperty; // eax
  PVOID v13; // rdi
  wchar_t *v14; // rdx
  int v15; // [rsp+28h] [rbp-E0h]
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+70h] [rbp-98h] BYREF
  wchar_t v19[40]; // [rsp+80h] [rbp-88h] BYREF

  P = 0LL;
  *a7 = 0LL;
  CachedObjectReference = PiDmObjectGetCachedObjectReference(a1, a2, a3, a5, (__int64)a7);
  Object = CachedObjectReference;
  if ( CachedObjectReference >= 0 )
  {
    if ( (*a7)[7] != a6 )
    {
      PiDmObjectRelease(*a7);
      *a7 = 0LL;
      return (unsigned int)-1073741772;
    }
    return Object;
  }
  if ( CachedObjectReference != -1073741802 )
    return Object;
  ObjectProperty = PnpGetObjectProperty(0x5A706E50u, 0x10uLL, a2, a1, 0LL, v15, a5, (__int64)&v16, &P, &v18, 0);
  v13 = P;
  Object = ObjectProperty;
  if ( ObjectProperty >= 0 )
  {
    if ( (_DWORD)v16 == 13 )
    {
      Object = PnpStringFromGuid((int *)P, v19);
      if ( (Object & 0x80000000) != 0 )
        goto LABEL_11;
      v14 = v19;
      goto LABEL_10;
    }
    if ( (_DWORD)v16 == 18 )
    {
      v14 = (wchar_t *)P;
LABEL_10:
      Object = PiDmGetObject(a6, (__int64)v14, a7);
      goto LABEL_11;
    }
    Object = -1073741772;
  }
LABEL_11:
  if ( v13 )
    ExFreePoolWithTag(v13, 0x5A706E50u);
  return Object;
}
