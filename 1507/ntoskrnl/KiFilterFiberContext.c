/*
 * XREFs of KiFilterFiberContext @ 0x14079AA3C
 * Callers:
 *     KeInitAmd64SpecificState @ 0x1407BA6E4 (KeInitAmd64SpecificState.c)
 * Callees:
 *     KdDisableDebugger @ 0x140170694 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x1401FDC58 (KdEnableDebugger.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 *     KiSwInterruptPresent @ 0x1407E918C (KiSwInterruptPresent.c)
 */

__int64 __fastcall KiFilterFiberContext(__int64 a1)
{
  NTSTATUS v2; // r14d
  unsigned __int64 v3; // rax
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v6; // r15d
  unsigned __int64 v7; // rax
  unsigned __int128 v8; // rax
  unsigned __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rbp
  char v12; // bl
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r10
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx

  v2 = KdDisableDebugger();
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v3 = __rdtsc();
  v4 = 1;
  v5 = __ROR8__(v3, 3);
  v6 = (((0x7010008004002001LL * (v5 ^ v3)) ^ (((v5 ^ v3) * (unsigned __int128)0x7010008004002001uLL) >> 64)) % 0xA < 6)
     + 1;
  v7 = __rdtsc();
  v8 = (__ROR8__(v7, 3) ^ v7) * (unsigned __int128)0x7010008004002001uLL;
  v9 = v8;
  *(_QWORD *)&v8 = __rdtsc();
  v10 = __ROR8__(v8, 3);
  v11 = ((0x7010008004002001LL * (v10 ^ (unsigned __int64)v8)) ^ (((v10 ^ (unsigned __int64)v8)
                                                                 * (unsigned __int128)0x7010008004002001uLL) >> 64))
      % 6;
  v12 = sub_14079BAE4((v9 ^ *((_QWORD *)&v8 + 1)) % 0xD, v11, v6, a1, 1);
  if ( !v12 )
    goto LABEL_15;
  if ( v6 == 2 )
  {
    v13 = __rdtsc();
    v14 = __ROR8__(v13, 3);
    v15 = ((0x7010008004002001LL * (v14 ^ v13)) ^ (((v14 ^ v13) * (unsigned __int128)0x7010008004002001uLL) >> 64))
        % 0xD;
    do
    {
      v16 = __rdtsc();
      v17 = __ROR8__(v16, 3);
      v18 = ((0x7010008004002001LL * (v17 ^ v16)) ^ (((v17 ^ v16) * (unsigned __int128)0x7010008004002001uLL) >> 64))
          % 6;
    }
    while ( (_DWORD)v11 && (_DWORD)v18 == (_DWORD)v11 );
    v12 = sub_14079BAE4(v15, v18, 2, a1, 0);
  }
  if ( !v12 )
    goto LABEL_15;
  if ( !qword_1403D11C0 && !a1 && (int)KiSwInterruptPresent() >= 0 )
    v12 = sub_14079BAE4(0, 7, 1, 0, 0);
  if ( !v12 )
LABEL_15:
    v4 = 0;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  ExpPoolProtectionEstablished = 0;
  _disable();
  _enable();
  if ( v2 >= 0 )
    KdEnableDebugger();
  return v4;
}
