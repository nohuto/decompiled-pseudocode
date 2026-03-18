/*
 * XREFs of ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C029D2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C01467A8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C01467F8 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0146F48 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C0286AB4 (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall UMPDDrvEnableSurface(struct DHPDEV__ *a1)
{
  UMPDOBJ *v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rax
  UMPDOBJ *v7; // rcx
  size_t Size; // [rsp+20h] [rbp-50h]
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v11; // [rsp+38h] [rbp-38h] BYREF
  _QWORD Src[4]; // [rsp+40h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v11);
  memset(Src, 0, sizeof(Src));
  v2 = v11;
  if ( v11 )
  {
    Src[0] = 0x300000020LL;
    Src[2] = *(_QWORD *)v11;
    Src[3] = a1;
    LODWORD(Size) = 8;
    v3 = UMPDOBJ::Thunk(v11, Src, 0x20u, &v10, Size);
    v5 = v10;
    if ( v3 == -1 )
      v5 = 0LL;
    if ( v5 )
    {
      LOBYTE(v4) = 5;
      v6 = HmgShareLockCheck(v5, v4);
      v10 = v6;
      if ( v6 )
      {
        if ( *(_WORD *)(v6 + 100) == 1 )
        {
          LOBYTE(v7) = *(_BYTE *)(v6 + 112) & 0x29;
          if ( (_BYTE)v7 != 41 )
            v5 = 0LL;
        }
        if ( *((_DWORD *)v2 + 109) )
          UMPDOBJ::vClient(v7, (void *)(v6 + 24));
      }
      else
      {
        v5 = 0LL;
      }
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v10);
    }
  }
  else
  {
    v5 = 0LL;
  }
  XUMPDOBJ::~XUMPDOBJ(&v11);
  return v5;
}
