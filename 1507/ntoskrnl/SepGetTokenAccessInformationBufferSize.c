/*
 * XREFs of SepGetTokenAccessInformationBufferSize @ 0x14052745C
 * Callers:
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140482E10 (NtQueryInformationToken.c)
 * Callees:
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x140527690 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 */

__int64 __fastcall SepGetTokenAccessInformationBufferSize(
        __int64 a1,
        char a2,
        __int64 a3,
        _DWORD *a4,
        int *a5,
        int *a6,
        int *a7,
        int *a8,
        unsigned int *a9,
        int *a10,
        int *a11,
        unsigned int *a12,
        _DWORD *a13)
{
  unsigned int v14; // ebx
  int v16; // edi
  unsigned int i; // ecx
  __int64 v18; // r11
  int v19; // ebp
  unsigned int v20; // eax
  int v21; // r14d
  int v22; // r13d
  __int64 *v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rax
  int v26; // r12d
  int v27; // r14d
  __int64 v28; // rax
  unsigned int v29; // esi
  int v30; // ecx
  __int64 *v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 *v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rax
  int v38; // [rsp+20h] [rbp-48h]
  int v39; // [rsp+24h] [rbp-44h]
  int v40; // [rsp+70h] [rbp+8h]
  int v41; // [rsp+78h] [rbp+10h] BYREF
  _DWORD *v42; // [rsp+88h] [rbp+20h]

  v42 = a4;
  LOBYTE(v41) = a2;
  v14 = 0;
  v16 = 0;
  for ( i = 0; i <= 0x23; ++i )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( _bittest64(&v18, i) )
      ++v16;
  }
  v19 = 12 * v16 + 16;
  if ( v16 )
    v19 = 12 * v16 + 4;
  v20 = *(_DWORD *)(a1 + 124);
  v21 = 16 * v20;
  v22 = 16 * *(_DWORD *)(a1 + 128);
  v38 = 16 * v20;
  v39 = 16 * *(_DWORD *)(a1 + 800);
  v40 = 16 * v20;
  if ( v20 )
  {
    v23 = *(__int64 **)(a1 + 152);
    v24 = v20;
    do
    {
      v25 = *v23;
      v23 += 2;
      v21 += (4 * *(unsigned __int8 *)(v25 + 1) + 15) & 0xFFFFFFF8;
      --v24;
    }
    while ( v24 );
    v40 = v21;
  }
  v26 = 16 * *(_DWORD *)(a1 + 128);
  if ( *(_DWORD *)(a1 + 128) )
  {
    v35 = *(__int64 **)(a1 + 160);
    v36 = *(unsigned int *)(a1 + 128);
    do
    {
      v37 = *v35;
      v35 += 2;
      v26 += (4 * *(unsigned __int8 *)(v37 + 1) + 15) & 0xFFFFFFF8;
      --v36;
    }
    while ( v36 );
  }
  v27 = 16 * *(_DWORD *)(a1 + 800);
  if ( *(_DWORD *)(a1 + 800) )
  {
    v32 = *(__int64 **)(a1 + 792);
    v33 = *(unsigned int *)(a1 + 800);
    do
    {
      v34 = *v32;
      v32 += 2;
      v27 += (4 * *(unsigned __int8 *)(v34 + 1) + 15) & 0xFFFFFFF8;
      --v33;
    }
    while ( v33 );
  }
  v28 = *(_QWORD *)(a1 + 784);
  v29 = 0;
  if ( v28 )
    v29 = (4 * *(unsigned __int8 *)(v28 + 1) + 15) & 0xFFFFFFF8;
  if ( !(_BYTE)v41 )
    a3 = *(_QWORD *)(a1 + 1104);
  if ( a3 )
    v14 = (4 * *(unsigned __int8 *)(a3 + 1) + 15) & 0xFFFFFFF8;
  AuthzBasepQueryInternalSecurityAttributesToken(*(_QWORD *)(a1 + 776), 0LL, 0LL, &v41);
  *v42 = v16;
  *a5 = v40;
  *a6 = v38;
  *a7 = v26;
  *a8 = v22;
  *a9 = v29;
  *a10 = v27;
  *a11 = v39;
  v30 = v41;
  *a12 = v14;
  *a13 = v30;
  return v19 + 904 + v40 + v26 + v27 + v29 + v30 + v14;
}
