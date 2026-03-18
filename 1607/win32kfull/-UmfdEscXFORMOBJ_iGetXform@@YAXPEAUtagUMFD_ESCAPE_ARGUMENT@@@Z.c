/*
 * XREFs of ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A4D80
 * Callers:
 *     UmfdDispatchEscape @ 0x1C02A519C (UmfdDispatchEscape.c)
 * Callees:
 *     XFORMOBJ_iGetXform @ 0x1C001A780 (XFORMOBJ_iGetXform.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C02D8F0C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 */

void __fastcall UmfdEscXFORMOBJ_iGetXform(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  volatile void **v1; // rbx
  struct UmfdTls *v2; // rax
  XFORMOBJ *v3; // rcx
  XFORML pxform; // [rsp+30h] [rbp-28h] BYREF

  v1 = (volatile void **)((char *)a1 + 8);
  v2 = UmfdTls::EnsureTls();
  if ( v2 )
  {
    v3 = (XFORMOBJ *)*((_QWORD *)v2 + 4);
    if ( v3 )
    {
      *(_DWORD *)v1 = XFORMOBJ_iGetXform(v3 + 54, &pxform);
      ProbeForWrite(v1[1], 0x18uLL, 4u);
      *(XFORML *)v1[1] = pxform;
    }
    else
    {
      *(_DWORD *)v1 = -1;
    }
  }
}
