/*
 * XREFs of PepIdlePrepare @ 0x1C0002160
 * Callers:
 *     <none>
 * Callees:
 *     PepIdleCancel @ 0x1C0002580 (PepIdleCancel.c)
 *     AcpiCStateIdlePrepare @ 0x1C0003450 (AcpiCStateIdlePrepare.c)
 *     __security_check_cookie @ 0x1C0006330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006B40 (memset.c)
 */

__int64 __fastcall PepIdlePrepare(__int64 a1)
{
  __int64 v2; // r15
  unsigned int v3; // r14d
  ULONG_PTR BugCheckParameter4; // rbx
  int v5; // edi
  ULONG_PTR v6; // r12
  bool v7; // zf
  char v8; // r9
  unsigned int v9; // ecx
  __int64 v10; // rdx
  ULONG_PTR v11; // rcx
  __int64 v12; // r8
  __int64 result; // rax
  signed __int32 v14[8]; // [rsp+0h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h] BYREF
  char v17; // [rsp+60h] [rbp-10h]
  BOOL v18; // [rsp+64h] [rbp-Ch]

  v2 = *(_QWORD *)(a1 + 64);
  v3 = *(_DWORD *)(a1 + 56);
  BugCheckParameter4 = *(_QWORD *)a1;
  if ( dword_1C00098C8 >= (unsigned int)dword_1C00093A4 )
  {
    _InterlockedOr(v14, 0);
    AcpiCStateIdlePrepare();
    v6 = *(_QWORD *)(BugCheckParameter4 + 48);
    memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
    HIDWORD(BugCheckParameter3[2]) = v3;
    BugCheckParameter3[0] = (ULONG_PTR)&v16;
    HIDWORD(BugCheckParameter3[1]) = *(_DWORD *)(a1 + 76);
    LODWORD(BugCheckParameter3[4]) = *(_DWORD *)(a1 + 72);
    v17 = *(_BYTE *)(a1 + 51);
    v16 = *(_QWORD *)(a1 + 24);
    v7 = *(_BYTE *)(a1 + 52) == 0;
    BugCheckParameter3[3] = v6;
    v18 = !v7;
    if ( (int)((__int64 (__fastcall *)(_QWORD, ULONG_PTR *))qword_1C0009638)(
                *(_QWORD *)BugCheckParameter4,
                BugCheckParameter3) < 0 )
      KeBugCheckEx(0x143u, 1uLL, 3uLL, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
    v8 = BugCheckParameter3[1];
    v5 = -1;
    v9 = HIDWORD(BugCheckParameter3[1]);
    if ( !LOBYTE(BugCheckParameter3[1]) )
    {
      if ( HIDWORD(BugCheckParameter3[1]) >= *(_DWORD *)(BugCheckParameter4 + 56) )
        KeBugCheckEx(0x143u, 2uLL, 1uLL, HIDWORD(BugCheckParameter3[1]), BugCheckParameter4);
      if ( LODWORD(BugCheckParameter3[4]) != -1 && LODWORD(BugCheckParameter3[4]) >= dword_1C00098D0 )
        KeBugCheckEx(0x143u, 2uLL, 2uLL, LODWORD(BugCheckParameter3[4]), BugCheckParameter4);
    }
    if ( LODWORD(BugCheckParameter3[2]) > v3 )
      KeBugCheckEx(0x143u, 2uLL, 0LL, LODWORD(BugCheckParameter3[2]), BugCheckParameter4);
    v10 = 0LL;
    if ( LODWORD(BugCheckParameter3[2]) )
    {
      do
      {
        v11 = *(unsigned __int8 *)(v6 + 16LL * (unsigned int)v10 + 8);
        v12 = *(_QWORD *)(v6 + 16LL * (unsigned int)v10);
        if ( (_DWORD)v11 != 255 && ((unsigned int)v11 >= *(_DWORD *)(v12 + 1076) || v8) )
          KeBugCheckEx(0x143u, 2uLL, 1uLL, v11, *(_QWORD *)(v12 + 656));
        *(_BYTE *)(v2 + 8 * v10 + 4) = v11;
        *(_DWORD *)(v2 + 8 * v10) = *(_DWORD *)(v12 + 56);
        v10 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v10 < LODWORD(BugCheckParameter3[2]) );
      v9 = HIDWORD(BugCheckParameter3[1]);
    }
    if ( !*(_BYTE *)(BugCheckParameter4 + 72LL * v9 + 128) || *(_QWORD *)(BugCheckParameter4 + 72LL * v9 + 88) )
    {
      if ( !v8 )
      {
        *(_DWORD *)(BugCheckParameter4 + 8) = v9;
        v5 = BugCheckParameter3[4];
        goto LABEL_23;
      }
    }
    else
    {
      PepIdleCancel(*(_QWORD *)a1);
    }
    *(_DWORD *)(BugCheckParameter4 + 8) = -1;
LABEL_23:
    *(_DWORD *)(a1 + 60) = BugCheckParameter3[2];
    goto LABEL_24;
  }
  v5 = -1;
  *(_DWORD *)(BugCheckParameter4 + 8) = -2;
LABEL_24:
  *(_DWORD *)(a1 + 72) = v5;
  result = *(unsigned int *)(BugCheckParameter4 + 8);
  *(_DWORD *)(a1 + 76) = result;
  return result;
}
