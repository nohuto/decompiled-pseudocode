/*
 * XREFs of EtwWriteString @ 0x14025C1D8
 * Callers:
 *     <none>
 * Callees:
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

NTSTATUS __stdcall EtwWriteString(
        REGHANDLE RegHandle,
        UCHAR Level,
        ULONGLONG Keyword,
        LPCGUID ActivityId,
        PCWSTR String)
{
  unsigned __int16 *v9; // r14
  NTSTATUS v10; // r8d
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int8 v14; // dl
  __int64 v15; // r10
  UCHAR v16; // al
  unsigned __int8 v17; // r10
  __int64 v18; // rdx
  UCHAR v19; // cl
  __int64 v20; // [rsp+90h] [rbp-11h] BYREF
  _QWORD v21[2]; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int64 v22; // [rsp+A8h] [rbp+7h] BYREF
  PCWSTR v23; // [rsp+B0h] [rbp+Fh] BYREF
  int v24; // [rsp+B8h] [rbp+17h]
  int v25; // [rsp+BCh] [rbp+1Bh]

  v22 = 0LL;
  v20 = 0LL;
  v9 = 0LL;
  v10 = 0;
  if ( !RegHandle )
    return -1073741816;
  v12 = *(_QWORD *)(RegHandle + 104);
  if ( v12 )
    v9 = (unsigned __int16 *)(v12 + 28);
  v21[0] = 0LL;
  v13 = -1LL;
  BYTE4(v21[0]) = Level;
  v21[1] = Keyword;
  v23 = String;
  do
    ++v13;
  while ( String[v13] );
  v14 = *(_BYTE *)(RegHandle + 99);
  v24 = 2 * v13 + 2;
  v25 = 0;
  if ( v14 )
  {
    v15 = *(_QWORD *)(RegHandle + 32);
    if ( *(_DWORD *)(v15 + 80) )
    {
      v16 = *(_BYTE *)(v15 + 84);
      if ( (Level <= v16 || !v16)
        && ((*(_DWORD *)(v15 + 88) & 0x40) != 0 && !Keyword
         || (Keyword & *(_QWORD *)(v15 + 96)) != 0 && (Keyword & *(_QWORD *)(v15 + 104)) == *(_QWORD *)(v15 + 104)) )
      {
        v10 = EtwpEventWriteFull(
                *(_QWORD *)(RegHandle + 32),
                v14,
                0LL,
                0,
                (unsigned __int16 *)v21,
                4,
                0,
                (GUID *)ActivityId,
                0LL,
                1u,
                (__int64)&v23,
                0LL,
                &v20,
                0LL,
                *(_BYTE *)(RegHandle + 101),
                v9,
                &v22);
      }
    }
  }
  v17 = *(_BYTE *)(RegHandle + 100);
  if ( v17 )
  {
    v18 = *(_QWORD *)(RegHandle + 40);
    if ( *(_DWORD *)(v18 + 80) )
    {
      v19 = *(_BYTE *)(v18 + 84);
      if ( (Level <= v19 || !v19)
        && ((*(_DWORD *)(v18 + 88) & 0x40) != 0 && !Keyword
         || (Keyword & *(_QWORD *)(v18 + 96)) != 0 && (Keyword & *(_QWORD *)(v18 + 104)) == *(_QWORD *)(v18 + 104)) )
      {
        return EtwpEventWriteFull(
                 *(_QWORD *)(RegHandle + 32),
                 v17,
                 0LL,
                 0,
                 (unsigned __int16 *)v21,
                 4,
                 0,
                 (GUID *)ActivityId,
                 0LL,
                 1u,
                 (__int64)&v23,
                 0LL,
                 &v20,
                 v18,
                 *(_BYTE *)(RegHandle + 101),
                 v9,
                 &v22);
      }
    }
  }
  return v10;
}
