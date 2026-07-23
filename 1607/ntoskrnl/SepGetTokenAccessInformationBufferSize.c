/*
 * XREFs of SepGetTokenAccessInformationBufferSize @ 0x140518DDC
 * Callers:
 *     NtQueryInformationToken @ 0x14040E6D0 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 * Callees:
 *     SepTokenPrivilegeCount @ 0x14000E6F0 (SepTokenPrivilegeCount.c)
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x140518FD0 (AuthzBasepQueryInternalSecurityAttributesToken.c)
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
  __int64 v15; // r11
  int v16; // r14d
  int v17; // r15d
  unsigned int v18; // ecx
  int v19; // ebp
  int v20; // r13d
  __int64 *v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rax
  int v24; // r12d
  int v25; // ebp
  __int64 v26; // rax
  unsigned int v27; // edi
  int v28; // ecx
  __int64 *v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 *v33; // rdx
  __int64 v34; // r9
  __int64 v35; // rax
  int v36; // [rsp+20h] [rbp-48h]
  int v37; // [rsp+24h] [rbp-44h]
  int v38; // [rsp+70h] [rbp+8h]
  int v39; // [rsp+78h] [rbp+10h] BYREF
  _DWORD *v40; // [rsp+88h] [rbp+20h]

  v40 = a4;
  LOBYTE(v39) = a2;
  v14 = 0;
  v16 = SepTokenPrivilegeCount(a1);
  v17 = 12 * v16 + 16;
  if ( v16 )
    v17 = 12 * v16 + 4;
  v18 = *(_DWORD *)(v15 + 124);
  v19 = 16 * v18;
  v20 = 16 * *(_DWORD *)(v15 + 128);
  v36 = 16 * v18;
  v37 = 16 * *(_DWORD *)(v15 + 800);
  v38 = 16 * v18;
  if ( v18 )
  {
    v21 = *(__int64 **)(v15 + 152);
    v22 = v18;
    do
    {
      v23 = *v21;
      v21 += 2;
      v19 += (4 * *(unsigned __int8 *)(v23 + 1) + 15) & 0xFFFFFFF8;
      --v22;
    }
    while ( v22 );
    v38 = v19;
  }
  v24 = 16 * *(_DWORD *)(v15 + 128);
  if ( *(_DWORD *)(v15 + 128) )
  {
    v33 = *(__int64 **)(v15 + 160);
    v34 = *(unsigned int *)(v15 + 128);
    do
    {
      v35 = *v33;
      v33 += 2;
      v24 += (4 * *(unsigned __int8 *)(v35 + 1) + 15) & 0xFFFFFFF8;
      --v34;
    }
    while ( v34 );
  }
  v25 = 16 * *(_DWORD *)(v15 + 800);
  if ( *(_DWORD *)(v15 + 800) )
  {
    v30 = *(__int64 **)(v15 + 792);
    v31 = *(unsigned int *)(v15 + 800);
    do
    {
      v32 = *v30;
      v30 += 2;
      v25 += (4 * *(unsigned __int8 *)(v32 + 1) + 15) & 0xFFFFFFF8;
      --v31;
    }
    while ( v31 );
  }
  v26 = *(_QWORD *)(v15 + 784);
  v27 = 0;
  if ( v26 )
    v27 = (4 * *(unsigned __int8 *)(v26 + 1) + 15) & 0xFFFFFFF8;
  if ( !(_BYTE)v39 )
    a3 = *(_QWORD *)(v15 + 1104);
  if ( a3 )
    v14 = (4 * *(unsigned __int8 *)(a3 + 1) + 15) & 0xFFFFFFF8;
  AuthzBasepQueryInternalSecurityAttributesToken(*(_QWORD *)(v15 + 776), 0LL, 0LL, &v39);
  *v40 = v16;
  *a5 = v38;
  *a6 = v36;
  *a7 = v24;
  *a8 = v20;
  *a9 = v27;
  *a10 = v25;
  *a11 = v37;
  v28 = v39;
  *a12 = v14;
  *a13 = v28;
  return v17 + 904 + v38 + v24 + v25 + v27 + v28 + v14;
}
