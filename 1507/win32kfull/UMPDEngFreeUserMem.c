/*
 * XREFs of UMPDEngFreeUserMem @ 0x1C02A2690
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C011C1B8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C011C208 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C011C86C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

_BOOL8 __fastcall UMPDEngFreeUserMem(__int64 a1)
{
  BOOL v2; // ebx
  size_t Size; // [rsp+20h] [rbp-60h]
  int v5; // [rsp+30h] [rbp-50h] BYREF
  UMPDOBJ *v6; // [rsp+38h] [rbp-48h] BYREF
  _OWORD Src[3]; // [rsp+40h] [rbp-40h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v6);
  memset(Src, 0, sizeof(Src));
  v2 = 0;
  if ( v6 )
  {
    if ( *((_DWORD *)v6 + 109) )
    {
      *(_QWORD *)&Src[0] = 0x7700000030LL;
      *(_QWORD *)&Src[1] = *(_QWORD *)v6;
      *((_QWORD *)&Src[1] + 1) = a1;
      Src[2] = 0LL;
      LODWORD(Size) = 4;
      if ( (unsigned int)UMPDOBJ::Thunk(v6, Src, 0x30u, &v5, Size) != -1 )
        v2 = v5 != 0;
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v6);
  return v2;
}
