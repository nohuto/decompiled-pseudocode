/*
 * XREFs of PepIdlePrepare @ 0x1C0005EF0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiCStateIdlePrepare @ 0x1C0001000 (AcpiCStateIdlePrepare.c)
 *     __security_check_cookie @ 0x1C0002450 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D00 (memset.c)
 *     PepIdleCancel @ 0x1C0005D10 (PepIdleCancel.c)
 */

__int64 __fastcall PepIdlePrepare(_QWORD **a1, __int64 a2)
{
  _QWORD *v3; // r15
  unsigned int v4; // r14d
  ULONG_PTR BugCheckParameter4; // rbx
  int v6; // edi
  ULONG_PTR v7; // r12
  bool v8; // zf
  char v9; // r9
  unsigned int v10; // ecx
  __int64 v11; // rdx
  ULONG_PTR v12; // rcx
  __int64 v13; // r8
  __int64 result; // rax
  signed __int32 v15[8]; // [rsp+0h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v17; // [rsp+58h] [rbp-18h] BYREF
  char v18; // [rsp+60h] [rbp-10h]
  BOOL v19; // [rsp+64h] [rbp-Ch]

  v3 = a1[8];
  v4 = *((_DWORD *)a1 + 14);
  BugCheckParameter4 = (ULONG_PTR)*a1;
  if ( dword_1C000E1D0 >= (unsigned int)dword_1C000DD04 )
  {
    _InterlockedOr(v15, 0);
    AcpiCStateIdlePrepare((__int64 *)a1, a2);
    v7 = *(_QWORD *)(BugCheckParameter4 + 48);
    memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
    HIDWORD(BugCheckParameter3[2]) = v4;
    BugCheckParameter3[0] = (ULONG_PTR)&v17;
    HIDWORD(BugCheckParameter3[1]) = *((_DWORD *)a1 + 19);
    LODWORD(BugCheckParameter3[4]) = *((_DWORD *)a1 + 18);
    v18 = *((_BYTE *)a1 + 51);
    v17 = a1[3];
    v8 = *((_BYTE *)a1 + 52) == 0;
    BugCheckParameter3[3] = v7;
    v19 = !v8;
    if ( (int)((__int64 (__fastcall *)(_QWORD, ULONG_PTR *))qword_1C000DF78)(
                *(_QWORD *)BugCheckParameter4,
                BugCheckParameter3) < 0 )
      KeBugCheckEx(0x143u, 1uLL, 3uLL, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
    v9 = BugCheckParameter3[1];
    v6 = -1;
    v10 = HIDWORD(BugCheckParameter3[1]);
    if ( !LOBYTE(BugCheckParameter3[1]) )
    {
      if ( HIDWORD(BugCheckParameter3[1]) >= *(_DWORD *)(BugCheckParameter4 + 56) )
        KeBugCheckEx(0x143u, 2uLL, 1uLL, HIDWORD(BugCheckParameter3[1]), BugCheckParameter4);
      if ( LODWORD(BugCheckParameter3[4]) != -1 && LODWORD(BugCheckParameter3[4]) >= dword_1C000E1D8 )
        KeBugCheckEx(0x143u, 2uLL, 2uLL, LODWORD(BugCheckParameter3[4]), BugCheckParameter4);
    }
    if ( LODWORD(BugCheckParameter3[2]) > v4 )
      KeBugCheckEx(0x143u, 2uLL, 0LL, LODWORD(BugCheckParameter3[2]), BugCheckParameter4);
    v11 = 0LL;
    if ( LODWORD(BugCheckParameter3[2]) )
    {
      do
      {
        v12 = *(unsigned __int8 *)(v7 + 16LL * (unsigned int)v11 + 8);
        v13 = *(_QWORD *)(v7 + 16LL * (unsigned int)v11);
        if ( (_DWORD)v12 != 255 && ((unsigned int)v12 >= *(_DWORD *)(v13 + 1060) || v9) )
          KeBugCheckEx(0x143u, 2uLL, 1uLL, v12, *(_QWORD *)(v13 + 640));
        BYTE4(v3[v11]) = v12;
        LODWORD(v3[v11]) = *(_DWORD *)(v13 + 56);
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (unsigned int)v11 < LODWORD(BugCheckParameter3[2]) );
      v10 = HIDWORD(BugCheckParameter3[1]);
    }
    if ( !*(_BYTE *)(BugCheckParameter4 + 72LL * v10 + 128) || *(_QWORD *)(BugCheckParameter4 + 72LL * v10 + 88) )
    {
      if ( !v9 )
      {
        *(_DWORD *)(BugCheckParameter4 + 8) = v10;
        v6 = BugCheckParameter3[4];
        goto LABEL_23;
      }
    }
    else
    {
      PepIdleCancel(*a1, 2);
    }
    *(_DWORD *)(BugCheckParameter4 + 8) = -1;
LABEL_23:
    *((_DWORD *)a1 + 15) = BugCheckParameter3[2];
    goto LABEL_24;
  }
  v6 = -1;
  *(_DWORD *)(BugCheckParameter4 + 8) = -2;
LABEL_24:
  *((_DWORD *)a1 + 18) = v6;
  result = *(unsigned int *)(BugCheckParameter4 + 8);
  *((_DWORD *)a1 + 19) = result;
  return result;
}
