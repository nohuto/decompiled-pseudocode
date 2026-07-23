/*
 * XREFs of KiVerifyScopesExecute @ 0x1407D9D78
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiVerifyPdata @ 0x1407DA35C (KiVerifyPdata.c)
 */

__int64 KiVerifyScopesExecute()
{
  int v0; // ebx
  __int64 (__fastcall **v1)(); // rdi
  int v2; // esi
  ULONG_PTR BugCheckParameter4; // rdx
  unsigned __int64 v5; // [rsp+30h] [rbp-20h] BYREF
  BOOL v6; // [rsp+38h] [rbp-18h]
  int v7; // [rsp+3Ch] [rbp-14h]
  int v8; // [rsp+40h] [rbp-10h]
  ULONG_PTR v9; // [rsp+48h] [rbp-8h]

  v9 = 0LL;
  v0 = KiVerifyPass;
  v5 = 0xFEFFFFFFFFFFFFFFuLL;
  if ( !KiVerifyPass )
  {
    BugCheckParameter4 = v9;
    goto LABEL_10;
  }
  do
  {
    v1 = KiVerifyXcptRoutines;
    v2 = 0;
    v6 = v0 % 2 == 0;
    do
    {
      v7 = 0;
      v8 = 0;
      ((void (__fastcall *)(unsigned __int64 *))*v1)(&v5);
      if ( !v8 )
        KeBugCheckEx(0x14Du, v2, v0, v7, 0LL);
      ++v2;
      ++v1;
      BugCheckParameter4 = __ROL8__(v7 ^ v9, v7 & 0x3F);
      v9 = BugCheckParameter4;
    }
    while ( (__int64)v1 < (__int64)&qword_14080B168 );
    --v0;
  }
  while ( v0 );
  if ( BugCheckParameter4 != 0x7493D5224FA9E69ALL )
LABEL_10:
    KeBugCheckEx(0x14Du, 0xFFFFFFFFuLL, 0LL, 0x7493D5224FA9E69AuLL, BugCheckParameter4);
  KiVerifyPdata((ULONG_PTR)PsNtosImageBase);
  return KiVerifyPdata((ULONG_PTR)PsHalImageBase);
}
