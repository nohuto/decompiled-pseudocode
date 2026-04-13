/*
 * XREFs of sub_18000B884 @ 0x18000B884
 * Callers:
 *     sub_18000B5B0 @ 0x18000B5B0 (sub_18000B5B0.c)
 * Callees:
 *     sub_1800011FC @ 0x1800011FC (sub_1800011FC.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

int __fastcall sub_18000B884(__int64 a1, int *a2)
{
  _UNKNOWN **v2; // rax
  _DWORD *v3; // r11
  void *v4; // r9
  void *v5; // rcx
  __int64 v6; // rax
  void *v7; // r8
  void *v8; // rcx
  void *v9; // r8
  void *v10; // rcx
  void *v11; // r10
  void *v12; // r8
  void *v13; // rcx
  void *v14; // r8
  void *v15; // rcx
  void *v16; // r8
  void *v17; // rcx
  void *v18; // r8
  void *v19; // rcx
  void *v20; // r8
  void *v21; // rcx
  void *v22; // rcx
  int v24; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  int v26; // [rsp+40h] [rbp-C8h] BYREF
  int v27; // [rsp+44h] [rbp-C4h] BYREF
  int v28; // [rsp+48h] [rbp-C0h] BYREF
  int v29; // [rsp+4Ch] [rbp-BCh] BYREF
  int v30; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+58h] [rbp-B0h] BYREF
  int *v32; // [rsp+78h] [rbp-90h]
  __int64 v33; // [rsp+80h] [rbp-88h]
  void *v34; // [rsp+88h] [rbp-80h]
  int v35; // [rsp+90h] [rbp-78h]
  int v36; // [rsp+94h] [rbp-74h]
  int *v37; // [rsp+98h] [rbp-70h]
  __int64 v38; // [rsp+A0h] [rbp-68h]
  void *v39; // [rsp+A8h] [rbp-60h]
  int v40; // [rsp+B0h] [rbp-58h]
  int v41; // [rsp+B4h] [rbp-54h]
  int *v42; // [rsp+B8h] [rbp-50h]
  __int64 v43; // [rsp+C0h] [rbp-48h]
  void *v44; // [rsp+C8h] [rbp-40h]
  int v45; // [rsp+D0h] [rbp-38h]
  int v46; // [rsp+D4h] [rbp-34h]
  int *v47; // [rsp+D8h] [rbp-30h]
  __int64 v48; // [rsp+E0h] [rbp-28h]
  void *v49; // [rsp+E8h] [rbp-20h]
  int v50; // [rsp+F0h] [rbp-18h]
  int v51; // [rsp+F4h] [rbp-14h]
  int *v52; // [rsp+F8h] [rbp-10h]
  __int64 v53; // [rsp+100h] [rbp-8h]
  void *v54; // [rsp+108h] [rbp+0h]
  int v55; // [rsp+110h] [rbp+8h]
  int v56; // [rsp+114h] [rbp+Ch]
  void *v57; // [rsp+118h] [rbp+10h]
  int v58; // [rsp+120h] [rbp+18h]
  int v59; // [rsp+124h] [rbp+1Ch]
  int *v60; // [rsp+128h] [rbp+20h]
  __int64 v61; // [rsp+130h] [rbp+28h]
  void *v62; // [rsp+138h] [rbp+30h]
  int v63; // [rsp+140h] [rbp+38h]
  int v64; // [rsp+144h] [rbp+3Ch]
  void *v65; // [rsp+148h] [rbp+40h]
  int v66; // [rsp+150h] [rbp+48h]
  int v67; // [rsp+154h] [rbp+4Ch]
  int *v68; // [rsp+158h] [rbp+50h]
  __int64 v69; // [rsp+160h] [rbp+58h]
  int *v70; // [rsp+168h] [rbp+60h]
  __int64 v71; // [rsp+170h] [rbp+68h]
  void *v72; // [rsp+178h] [rbp+70h]
  int v73; // [rsp+180h] [rbp+78h]
  int v74; // [rsp+184h] [rbp+7Ch]
  _UNKNOWN *retaddr; // [rsp+1A0h] [rbp+98h] BYREF

  v2 = &retaddr;
  v3 = *(_DWORD **)(a1 + 8);
  if ( *v3 > 5u )
  {
    v4 = &unk_18002B658;
    v5 = (void *)*((_QWORD *)a2 + 6);
    v28 = a2[1];
    v33 = 4LL;
    v32 = &v28;
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
    v35 = v6 + 1;
    v37 = a2 + 14;
    LODWORD(v6) = 0;
    v34 = v7;
    v9 = &unk_18002B658;
    v36 = 0;
    v38 = 4LL;
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
    v39 = v9;
    v40 = v6 + 1;
    v12 = &unk_18002B65C;
    v26 = *a2;
    v42 = &v26;
    LODWORD(v6) = 0;
    v41 = 0;
    v43 = 4LL;
    if ( v10 )
    {
      v12 = v10;
      v6 = -1LL;
      do
        ++v6;
      while ( *((_WORD *)v10 + v6) );
    }
    v13 = (void *)*((_QWORD *)a2 + 8);
    v45 = 2 * v6 + 2;
    v30 = a2[6];
    v47 = &v30;
    LODWORD(v6) = 0;
    v44 = v12;
    v14 = &unk_18002B658;
    v46 = 0;
    v48 = 4LL;
    if ( v13 )
    {
      v14 = v13;
      v6 = -1LL;
      do
        ++v6;
      while ( *((_BYTE *)v13 + v6) );
    }
    v15 = (void *)*((_QWORD *)a2 + 10);
    v50 = v6 + 1;
    v24 = a2[18];
    v52 = &v24;
    LODWORD(v6) = 0;
    v49 = v14;
    v16 = &unk_18002B658;
    v51 = 0;
    v53 = 4LL;
    if ( v15 )
    {
      v16 = v15;
      v6 = -1LL;
      do
        ++v6;
      while ( *((_BYTE *)v15 + v6) );
    }
    v17 = (void *)*((_QWORD *)a2 + 11);
    v55 = v6 + 1;
    LODWORD(v6) = 0;
    v54 = v16;
    v18 = &unk_18002B65C;
    v56 = 0;
    if ( v17 )
    {
      v18 = v17;
      v6 = -1LL;
      do
        ++v6;
      while ( *((_WORD *)v17 + v6) );
    }
    v19 = (void *)*((_QWORD *)a2 + 13);
    v58 = 2 * v6 + 2;
    v25 = a2[24];
    v60 = &v25;
    LODWORD(v6) = 0;
    v57 = v18;
    v20 = &unk_18002B658;
    v59 = 0;
    v61 = 4LL;
    if ( v19 )
    {
      v20 = v19;
      v6 = -1LL;
      do
        ++v6;
      while ( *((_BYTE *)v19 + v6) );
    }
    v21 = (void *)*((_QWORD *)a2 + 14);
    v63 = v6 + 1;
    LODWORD(v6) = 0;
    v62 = v20;
    v64 = 0;
    if ( v21 )
    {
      v11 = v21;
      v6 = -1LL;
      do
        ++v6;
      while ( *((_WORD *)v21 + v6) );
    }
    v22 = (void *)*((_QWORD *)a2 + 5);
    v66 = 2 * v6 + 2;
    v27 = a2[2];
    v68 = &v27;
    v29 = a2[15];
    v70 = &v29;
    LODWORD(v6) = 0;
    v65 = v11;
    v67 = 0;
    v69 = 4LL;
    v71 = 4LL;
    if ( v22 )
    {
      v4 = v22;
      v6 = -1LL;
      do
        ++v6;
      while ( *((_BYTE *)v22 + v6) );
    }
    v72 = v4;
    v73 = v6 + 1;
    v74 = 0;
    LODWORD(v2) = sub_1800011FC((__int64)v3, byte_180033277, 0LL, 0LL, 0x13u, &v31);
  }
  return (int)v2;
}
