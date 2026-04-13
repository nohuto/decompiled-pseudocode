/*
 * XREFs of sub_18000B5E4 @ 0x18000B5E4
 * Callers:
 *     sub_18000B5B0 @ 0x18000B5B0 (sub_18000B5B0.c)
 * Callees:
 *     sub_1800011FC @ 0x1800011FC (sub_1800011FC.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

int __fastcall sub_18000B5E4(__int64 a1, int *a2)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // r10
  void *v4; // r9
  void *v5; // rcx
  __int64 v6; // rax
  void *v7; // r8
  void *v8; // rcx
  void *v9; // r8
  void *v10; // rcx
  void *v11; // r11
  void *v12; // r8
  void *v13; // rcx
  void *v14; // r8
  void *v15; // rcx
  void *v16; // r8
  void *v17; // rcx
  void *v18; // r8
  void *v19; // rcx
  void *v20; // rcx
  int v22; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+3Ch] [rbp-CCh] BYREF
  int v24; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+44h] [rbp-C4h] BYREF
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+58h] [rbp-B0h] BYREF
  int *v28; // [rsp+78h] [rbp-90h]
  __int64 v29; // [rsp+80h] [rbp-88h]
  void *v30; // [rsp+88h] [rbp-80h]
  int v31; // [rsp+90h] [rbp-78h]
  int v32; // [rsp+94h] [rbp-74h]
  int *v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  void *v35; // [rsp+A8h] [rbp-60h]
  int v36; // [rsp+B0h] [rbp-58h]
  int v37; // [rsp+B4h] [rbp-54h]
  int *v38; // [rsp+B8h] [rbp-50h]
  __int64 v39; // [rsp+C0h] [rbp-48h]
  void *v40; // [rsp+C8h] [rbp-40h]
  int v41; // [rsp+D0h] [rbp-38h]
  int v42; // [rsp+D4h] [rbp-34h]
  int *v43; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-28h]
  void *v45; // [rsp+E8h] [rbp-20h]
  int v46; // [rsp+F0h] [rbp-18h]
  int v47; // [rsp+F4h] [rbp-14h]
  int *v48; // [rsp+F8h] [rbp-10h]
  __int64 v49; // [rsp+100h] [rbp-8h]
  void *v50; // [rsp+108h] [rbp+0h]
  int v51; // [rsp+110h] [rbp+8h]
  int v52; // [rsp+114h] [rbp+Ch]
  void *v53; // [rsp+118h] [rbp+10h]
  int v54; // [rsp+120h] [rbp+18h]
  int v55; // [rsp+124h] [rbp+1Ch]
  int *v56; // [rsp+128h] [rbp+20h]
  __int64 v57; // [rsp+130h] [rbp+28h]
  void *v58; // [rsp+138h] [rbp+30h]
  int v59; // [rsp+140h] [rbp+38h]
  int v60; // [rsp+144h] [rbp+3Ch]
  void *v61; // [rsp+148h] [rbp+40h]
  int v62; // [rsp+150h] [rbp+48h]
  int v63; // [rsp+154h] [rbp+4Ch]
  _UNKNOWN *retaddr; // [rsp+170h] [rbp+68h] BYREF

  v2 = &retaddr;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)v3 > 5u && (*(_QWORD *)(v3 + 16) & 0x200000000000LL) != 0 )
  {
    v2 = (_UNKNOWN **)(*(_QWORD *)(v3 + 24) & 0x200000000000LL);
    if ( v2 == *(_UNKNOWN ***)(v3 + 24) )
    {
      v4 = &unk_18002B658;
      v5 = (void *)*((_QWORD *)a2 + 6);
      v26 = a2[1];
      v29 = 4LL;
      v28 = &v26;
      LODWORD(v6) = 0;
      v7 = &unk_18002B658;
      if ( v5 )
      {
        v7 = v5;
        v6 = -1LL;
        do
          ++v6;
        while ( *((_BYTE *)v5 + v6) );
      }
      v8 = (void *)*((_QWORD *)a2 + 15);
      v31 = v6 + 1;
      v33 = a2 + 14;
      LODWORD(v6) = 0;
      v30 = v7;
      v9 = &unk_18002B658;
      v32 = 0;
      v34 = 4LL;
      if ( v8 )
      {
        v9 = v8;
        v6 = -1LL;
        do
          ++v6;
        while ( *((_BYTE *)v8 + v6) );
      }
      v10 = (void *)*((_QWORD *)a2 + 2);
      v11 = &unk_18002B65C;
      v35 = v9;
      v36 = v6 + 1;
      v12 = &unk_18002B65C;
      v24 = *a2;
      v38 = &v24;
      LODWORD(v6) = 0;
      v37 = 0;
      v39 = 4LL;
      if ( v10 )
      {
        v12 = v10;
        v6 = -1LL;
        do
          ++v6;
        while ( *((_WORD *)v10 + v6) );
      }
      v13 = (void *)*((_QWORD *)a2 + 8);
      v41 = 2 * v6 + 2;
      v22 = a2[6];
      v43 = &v22;
      LODWORD(v6) = 0;
      v40 = v12;
      v14 = &unk_18002B658;
      v42 = 0;
      v44 = 4LL;
      if ( v13 )
      {
        v14 = v13;
        v6 = -1LL;
        do
          ++v6;
        while ( *((_BYTE *)v13 + v6) );
      }
      v15 = (void *)*((_QWORD *)a2 + 10);
      v46 = v6 + 1;
      v23 = a2[18];
      v48 = &v23;
      LODWORD(v6) = 0;
      v45 = v14;
      v16 = &unk_18002B658;
      v47 = 0;
      v49 = 4LL;
      if ( v15 )
      {
        v16 = v15;
        v6 = -1LL;
        do
          ++v6;
        while ( *((_BYTE *)v15 + v6) );
      }
      v17 = (void *)*((_QWORD *)a2 + 11);
      v51 = v6 + 1;
      LODWORD(v6) = 0;
      v50 = v16;
      v18 = &unk_18002B65C;
      v52 = 0;
      if ( v17 )
      {
        v18 = v17;
        v6 = -1LL;
        do
          ++v6;
        while ( *((_WORD *)v17 + v6) );
      }
      v19 = (void *)*((_QWORD *)a2 + 13);
      v54 = 2 * v6 + 2;
      v25 = a2[24];
      v56 = &v25;
      LODWORD(v6) = 0;
      v53 = v18;
      v55 = 0;
      v57 = 4LL;
      if ( v19 )
      {
        v4 = v19;
        v6 = -1LL;
        do
          ++v6;
        while ( *((_BYTE *)v19 + v6) );
      }
      v20 = (void *)*((_QWORD *)a2 + 14);
      v59 = v6 + 1;
      LODWORD(v6) = 0;
      v58 = v4;
      v60 = 0;
      if ( v20 )
      {
        v11 = v20;
        v6 = -1LL;
        do
          ++v6;
        while ( *((_WORD *)v20 + v6) );
      }
      v61 = v11;
      v62 = 2 * v6 + 2;
      v63 = 0;
      LODWORD(v2) = sub_1800011FC(v3, byte_180033124, 0LL, 0LL, 0x10u, &v27);
    }
  }
  return (int)v2;
}
