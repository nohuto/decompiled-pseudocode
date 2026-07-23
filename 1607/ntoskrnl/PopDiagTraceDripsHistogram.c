/*
 * XREFs of PopDiagTraceDripsHistogram @ 0x1402081A0
 * Callers:
 *     PpmSnapDripsAccountingSnapshot @ 0x140200F94 (PpmSnapDripsAccountingSnapshot.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDripsHistogram(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rdi
  char v8; // si
  unsigned int v9; // r8d
  unsigned int i; // r9d
  unsigned int v11; // edx
  unsigned int j; // r8d
  __int64 v13; // rax
  char *v14; // rcx
  __int64 v15; // r9
  const GUID *v16; // r9
  __int64 v17; // r10
  char v19; // [rsp+38h] [rbp-49h] BYREF
  char v20; // [rsp+39h] [rbp-48h] BYREF
  char v21; // [rsp+3Ah] [rbp-47h] BYREF
  char v22; // [rsp+3Bh] [rbp-46h] BYREF
  char v23; // [rsp+3Ch] [rbp-45h] BYREF
  __int16 v24; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  __int64 v26; // [rsp+58h] [rbp-29h]
  char v27; // [rsp+60h] [rbp-21h] BYREF
  __int16 *v28; // [rsp+68h] [rbp-19h]
  __int64 v29; // [rsp+70h] [rbp-11h]
  char *v30; // [rsp+78h] [rbp-9h]
  __int64 v31; // [rsp+80h] [rbp-1h]
  char *v32; // [rsp+88h] [rbp+7h]
  __int64 v33; // [rsp+90h] [rbp+Fh]
  char *v34; // [rsp+98h] [rbp+17h]
  __int64 v35; // [rsp+A0h] [rbp+1Fh]
  char *v36; // [rsp+A8h] [rbp+27h]
  __int64 v37; // [rsp+B0h] [rbp+2Fh]
  char *v38; // [rsp+B8h] [rbp+37h]
  __int64 v39; // [rsp+C0h] [rbp+3Fh]

  LODWORD(v36) = -1;
  v37 = -1LL;
  LODWORD(pData.Ptr) = 0;
  LOBYTE(v4) = -89 * a1;
  *(_QWORD *)&pData.Size = 20000000LL;
  v26 = 0LL;
  v6 = a1 / 0x23C34600;
  v27 = 0;
  LODWORD(v28) = 0;
  v29 = 160000000LL;
  v30 = 0LL;
  LOBYTE(v31) = 0;
  LODWORD(v32) = 0;
  v33 = 600000000LL;
  v34 = 0LL;
  LOBYTE(v35) = 0;
  v38 = 0LL;
  LOBYTE(v39) = 0;
  if ( !(unsigned __int16)(a1 / 0x23C34600) )
    return v4;
  v4 = 100 * a2 / a1;
  v8 = v4;
  if ( !(_BYTE)v4 )
    return v4;
  v9 = 2;
  for ( i = 25; ; --i )
  {
    if ( qword_1403A97C8[3 * i] > *((_QWORD *)&pData.Size + 4 * v9) )
      continue;
    *((_DWORD *)&pData.Ptr + 8 * v9) = i;
    if ( !v9 )
      break;
    --v9;
  }
  v11 = 0;
  for ( j = 0; j < 0x1A; ++j )
  {
    if ( j > *((_DWORD *)&pData.Ptr + 8 * v11) )
      ++v11;
    v13 = *a4++;
    *(&v26 + 4 * v11) += v13;
  }
  v14 = &v27;
  v15 = 4LL;
  do
  {
    v4 = ((a1 >> 1) + 100LL * *((_QWORD *)v14 - 1)) / a1;
    *v14 = v4;
    v14 += 32;
    --v15;
  }
  while ( v15 );
  if ( hProvider.LevelPlus1 > 5 )
  {
    LOBYTE(v4) = TlgKeywordOn(&hProvider, 0x400000000000uLL);
    if ( (_BYTE)v4 )
    {
      v20 = v27;
      v21 = v31;
      v22 = v35;
      v23 = v39;
      v28 = &v24;
      v30 = &v19;
      v32 = &v20;
      v34 = &v21;
      v36 = &v22;
      v38 = &v23;
      v24 = v6;
      v19 = v8;
      v29 = 2LL;
      v31 = v17;
      v33 = v17;
      v35 = v17;
      v37 = v17;
      v39 = v17;
      LOBYTE(v4) = TlgWrite(&hProvider, &unk_14027D39B, 0LL, v16, 8u, &pData);
    }
  }
  return v4;
}
