/*
 * XREFs of EtwWriteErrorLogEntry @ 0x1405041BC
 * Callers:
 *     IopErrorLogThread @ 0x140503EFC (IopErrorLogThread.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall EtwWriteErrorLogEntry(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8)
{
  __int16 v8; // r15
  int v9; // eax
  __int64 v11; // r14
  unsigned __int16 v12; // si
  unsigned __int16 v13; // r10
  char v14; // al
  __int64 v15; // rax
  unsigned int v16; // edi
  unsigned __int16 v17; // cx
  unsigned int v18; // edx
  unsigned __int16 v19; // r8
  unsigned int v20; // r11d
  __int64 v21; // rax
  unsigned int v22; // edi
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // edi
  __int64 v26; // rax
  unsigned int v27; // edi
  __int64 v28; // rax
  __int64 result; // rax
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // r14
  _WORD *v32; // rcx
  __int64 v33; // rcx
  unsigned __int16 v34; // [rsp+98h] [rbp-80h] BYREF
  __int16 v35; // [rsp+9Ch] [rbp-7Ch] BYREF
  unsigned int v36; // [rsp+A0h] [rbp-78h] BYREF
  int v37; // [rsp+A8h] [rbp-70h] BYREF
  char v38; // [rsp+ACh] [rbp-6Ch]
  char v39; // [rsp+ADh] [rbp-6Bh]
  __int16 v40; // [rsp+AEh] [rbp-6Ah]
  __int64 v41; // [rsp+B0h] [rbp-68h]
  _QWORD v42[50]; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v43; // [rsp+248h] [rbp+130h] BYREF
  _QWORD v44[6]; // [rsp+250h] [rbp+138h]
  int v45; // [rsp+280h] [rbp+168h]
  int v46; // [rsp+284h] [rbp+16Ch]
  unsigned __int16 *v47; // [rsp+288h] [rbp+170h]
  __int64 v48; // [rsp+290h] [rbp+178h]
  __int64 v49; // [rsp+298h] [rbp+180h]
  int v50; // [rsp+2A0h] [rbp+188h]
  int v51; // [rsp+2A4h] [rbp+18Ch]

  v8 = IopErrorLogSession;
  v9 = *(_DWORD *)(a2 + 12) >> 30;
  v11 = a3;
  v12 = 0;
  v13 = 0;
  if ( v9 == 1 )
    v14 = 4;
  else
    v14 = (v9 == 2) + 2;
  v38 = v14;
  v40 = *(_WORD *)(a2 + 8);
  v15 = -1LL;
  v44[1] = a2 + 12;
  v37 = 0;
  v39 = 0;
  v41 = 0LL;
  v43 = a4;
  v44[0] = 8LL;
  v44[2] = 4LL;
  do
    ++v15;
  while ( *(_WORD *)(a5 + 2 * v15) );
  v44[5] = a5;
  v35 = v15 + 1;
  v16 = 5;
  v44[3] = &v35;
  v45 = 2 * (unsigned __int16)(v15 + 1);
  v47 = &a7;
  v44[4] = 2LL;
  v46 = 0;
  v48 = 2LL;
  if ( a7 )
  {
    v16 = 6;
    v49 = a8;
    v50 = a7;
    v51 = 0;
  }
  v17 = *(_WORD *)(a2 + 4);
  v18 = *(unsigned __int16 *)(a2 + 2) + 40;
  if ( v18 > a3 )
    v18 = a3;
  v36 = v18;
  if ( v17 && *(unsigned __int16 *)(a2 + 6) < v18 )
    *(_WORD *)(a2 + 6) = v18;
  v19 = 0;
  v20 = v17;
  *(_WORD *)(a2 + 4) = v17 + 1;
  v21 = v16;
  v22 = v16 + 1;
  v21 *= 2LL;
  v34 = 0;
  v44[v21 - 1] = &v34;
  v44[v21] = 2LL;
  v23 = 2LL * v22;
  v24 = -1LL;
  v44[2 * v22 - 1] = a6;
  do
    ++v24;
  while ( *(_WORD *)(a6 + 2 * v24) );
  HIDWORD(v44[2 * v22]) = 0;
  v25 = v22 + 1;
  LODWORD(v44[v23]) = 2 * (unsigned __int16)(v24 + 1);
  if ( v20 )
  {
    v30 = (*(unsigned __int16 *)(a2 + 6) + a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    v31 = a2 + v11;
    do
    {
      v32 = (_WORD *)(v30 + 2LL * v13);
      if ( (unsigned __int64)v32 >= v31 )
        break;
      if ( !*v32 )
      {
        ++v19;
        v12 = v13 + 1;
        v34 = v19;
      }
      ++v13;
    }
    while ( v19 < v20 );
    v33 = 2LL * v25++;
    v44[v33 - 1] = v30;
    LODWORD(v44[v33]) = 2 * v12;
    HIDWORD(v44[v33]) = 0;
  }
  v26 = 2LL * v25;
  v34 = v19 + 1;
  v27 = v25 + 1;
  v44[v26 - 1] = &v36;
  v44[v26] = 4LL;
  v28 = 2LL * v27;
  LODWORD(v44[v28]) = v18;
  v44[v28 - 1] = a2;
  HIDWORD(v44[v28]) = 0;
  memset(v42, 0, sizeof(v42));
  v42[16] = -1LL;
  *(GUID *)&v42[3] = LegacyEventLogGuid;
  HIWORD(v42[14]) = v8;
  LODWORD(v42[14]) = 1;
  BYTE4(v42[14]) = -1;
  v42[17] = 0LL;
  LODWORD(v42[15]) = 64;
  result = EtwpEventWriteFull(
             (__int64)v42,
             1u,
             0,
             0,
             (unsigned __int16 *)&v37,
             0,
             4,
             0LL,
             0LL,
             v27 + 1,
             (__int64)&v43,
             0LL,
             0LL,
             0LL,
             0,
             0LL,
             0LL);
  if ( (int)result < 0 )
    --*(_WORD *)(a2 + 4);
  return result;
}
