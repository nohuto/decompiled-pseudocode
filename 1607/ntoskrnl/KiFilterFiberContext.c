/*
 * XREFs of KiFilterFiberContext @ 0x140777A80
 * Callers:
 *     KeInitAmd64SpecificState @ 0x1407988CC (KeInitAmd64SpecificState.c)
 * Callees:
 *     KdDisableDebugger @ 0x1401D137C (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x1401D1450 (KdEnableDebugger.c)
 *     ExFreePool @ 0x140255B30 (ExFreePool.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 *     KiSwInterruptPresent @ 0x1407BD344 (KiSwInterruptPresent.c)
 */

__int64 __fastcall KiFilterFiberContext(__int64 a1)
{
  NTSTATUS v2; // r14d
  unsigned __int64 v3; // rax
  unsigned int v4; // ebx
  unsigned __int128 v5; // rax
  int v6; // r15d
  unsigned __int128 v7; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // rbp
  char v12; // di
  unsigned __int64 v13; // rax
  unsigned __int128 v14; // rax
  int v15; // r10d
  unsigned __int64 v16; // rax
  unsigned __int128 v17; // rax
  unsigned __int64 v18; // rcx
  int v19; // ecx
  __int64 *v20; // rax
  __int64 v21; // rdx

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
  v5 = (__ROR8__(v3, 3) ^ v3) * (unsigned __int128)0x7010008004002001uLL;
  v6 = (((unsigned __int64)v5 ^ *((_QWORD *)&v5 + 1)) % 0xA < 6) + 1;
  *(_QWORD *)&v5 = __rdtsc();
  v7 = (__ROR8__(v5, 3) ^ (unsigned __int64)v5) * (unsigned __int128)0x7010008004002001uLL;
  v8 = v7;
  *(_QWORD *)&v7 = __rdtsc();
  v9 = v8 ^ *((_QWORD *)&v7 + 1);
  v10 = (__ROR8__(v7, 3) ^ (unsigned __int64)v7) * (unsigned __int128)0x7010008004002001uLL;
  v11 = ((unsigned __int64)v10 ^ *((_QWORD *)&v10 + 1)) % 6;
  v12 = sub_140778D9C(v9 % 0xD, v11, v6, a1, 1);
  if ( !v12 )
    goto LABEL_23;
  if ( v6 == 2 )
  {
    v13 = __rdtsc();
    v14 = (__ROR8__(v13, 3) ^ v13) * (unsigned __int128)0x7010008004002001uLL;
    v15 = ((unsigned __int64)v14 ^ *((_QWORD *)&v14 + 1)) % 0xD;
    do
    {
      v16 = __rdtsc();
      v17 = (__ROR8__(v16, 3) ^ v16) * (unsigned __int128)0x7010008004002001uLL;
      v18 = ((unsigned __int64)v17 ^ *((_QWORD *)&v17 + 1)) % 6;
    }
    while ( (_DWORD)v11 && (_DWORD)v18 == (_DWORD)v11 );
    v12 = sub_140778D9C(v15, v18, 2, a1, 0);
  }
  if ( !v12 )
    goto LABEL_23;
  if ( !qword_1403AA200 && !a1 && (int)KiSwInterruptPresent() >= 0 )
    v12 = sub_140778D9C(0, 7, 1, 0, 0);
  if ( v12 )
  {
    if ( !a1 )
    {
      if ( qword_1402F9D08 )
        ExFreePool(qword_1402F9D08);
      v19 = 24;
      v20 = &__0;
      v21 = 3LL;
      do
      {
        *v20 = 0LL;
        v19 -= 8;
        ++v20;
        --v21;
      }
      while ( v21 );
      for ( ; v19; --v19 )
      {
        *(_BYTE *)v20 = 0;
        v20 = (__int64 *)((char *)v20 + 1);
      }
    }
  }
  else
  {
LABEL_23:
    v4 = 0;
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  _disable();
  _enable();
  if ( v2 >= 0 )
    KdEnableDebugger();
  return v4;
}
