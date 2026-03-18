/*
 * XREFs of $$6d @ 0x140252664
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140242000 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall __6d(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  unsigned __int128 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int128 v14; // rax
  unsigned __int64 v15; // rbx
  _BYTE v17[16]; // [rsp+20h] [rbp-A9h] BYREF
  _BYTE v18[32]; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v19[176]; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v20; // [rsp+130h] [rbp+67h] BYREF

  if ( (*(_DWORD *)(a1 + 1756) & 8) == 0 )
    return 0LL;
  v6 = __rdtsc();
  v7 = (__ROR8__(v6, 3) ^ v6) * (unsigned __int128)0x7010008004002001uLL;
  if ( (((unsigned __int8)v7 ^ BYTE8(v7)) & 3) != 0 )
    return 0LL;
  LODWORD(v8) = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 912))(0LL);
  if ( v9 )
  {
    do
    {
      LODWORD(v8) = v8 + 1;
      v9 = (*(__int64 (__fastcall **)(__int64))(a1 + 912))(v9);
    }
    while ( v9 );
    if ( (_DWORD)v8 )
    {
      v10 = __rdtsc();
      v11 = __ROR8__(v10, 3) ^ v10;
      v8 = (((v11 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * v11)) % (unsigned int)v8;
    }
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 912))(0LL);
  if ( !v12 )
    return 0LL;
  do
  {
    if ( !(_DWORD)v8 )
      break;
    LODWORD(v8) = v8 - 1;
    v12 = (*(__int64 (__fastcall **)(__int64))(a1 + 912))(v12);
  }
  while ( v12 );
  if ( !v12 )
    return 0LL;
  if ( (*(int (__fastcall **)(__int64))(a1 + 896))(v12) < 0 )
  {
    (*(void (__fastcall **)(__int64))(a1 + 920))(v12);
    v12 = 0LL;
  }
  if ( !v12 )
    return 0LL;
  (*(void (__fastcall **)(__int64, __int64))(a1 + 1040))(v12, a2);
  (*(void (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD))(a1 + 424))(v12, v19, 0LL, 0LL);
  v13 = __rdtsc();
  v14 = (__ROR8__(v13, 3) ^ v13) * (unsigned __int128)0x7010008004002001uLL;
  v15 = ((unsigned __int64)v14 ^ *((_QWORD *)&v14 + 1)) % (*(unsigned int (__fastcall **)(_BYTE *))(a1 + 416))(v19);
  (*(void (__fastcall **)(struct _KTHREAD *, _BYTE *))(a1 + 432))(KeGetCurrentThread(), v17);
  (*(void (__fastcall **)(_BYTE *, _BYTE *))(a1 + 400))(v18, v19);
  while ( (*(int (__fastcall **)(unsigned int *, _BYTE *))(a1 + 408))(&v20, v18) >= 0 )
  {
    if ( !(_DWORD)v15 )
    {
      (*(void (__fastcall **)(_BYTE *, _QWORD))(a1 + 392))(v17, v20);
      break;
    }
    LODWORD(v15) = v15 - 1;
  }
  (*(void (__fastcall **)(_BYTE *, __int64))(a1 + 440))(v17, a3);
  return 1LL;
}
