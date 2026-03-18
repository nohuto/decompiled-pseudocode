/*
 * XREFs of PiDmGetReferencedObjectFromProperty @ 0x14045CC84
 * Callers:
 *     PiDmObjectProcessPropertyChange @ 0x14045A798 (PiDmObjectProcessPropertyChange.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x14043D410 (PiDmGetObject.c)
 *     PnpGetObjectProperty @ 0x14043ED84 (PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x14045C050 (_PnpStringFromGuid.c)
 *     PiDmObjectGetCachedObjectReference @ 0x14045CD10 (PiDmObjectGetCachedObjectReference.c)
 */

__int64 __fastcall PiDmGetReferencedObjectFromProperty(
        unsigned int a1,
        __int64 a2,
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
        goto LABEL_14;
      v14 = v19;
    }
    else
    {
      if ( (_DWORD)v16 != 18 )
      {
        Object = -1073741772;
        goto LABEL_14;
      }
      v14 = (wchar_t *)P;
    }
    Object = PiDmGetObject(a6, (__int64)v14, a7);
  }
LABEL_14:
  if ( v13 )
    ExFreePoolWithTag(v13, 0x5A706E50u);
  return Object;
}
