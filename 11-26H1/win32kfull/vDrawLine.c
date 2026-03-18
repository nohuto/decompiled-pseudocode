/*
 * XREFs of vDrawLine @ 0x140187A94
 * Callers:
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1401877F8 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 * Callees:
 *     bGIQtoIntegerLine @ 0x140187E1C (bGIQtoIntegerLine.c)
 *     vLine32Octant16 @ 0x140198570 (vLine32Octant16.c)
 *     vLine32Octant07 @ 0x1401AC210 (vLine32Octant07.c)
 *     vHorizontalLine32 @ 0x1401BF1E0 (vHorizontalLine32.c)
 *     vLine24Octant16 @ 0x1401CFC50 (vLine24Octant16.c)
 *     vLine32Octant34 @ 0x1401D6D50 (vLine32Octant34.c)
 *     vLine32Octant25 @ 0x1401D7580 (vLine32Octant25.c)
 *     vLineCallbackOctant07 @ 0x1401D7810 (vLineCallbackOctant07.c)
 *     vHorizontalLine24 @ 0x1401DC590 (vHorizontalLine24.c)
 *     vLine24Octant07 @ 0x1401E8CE0 (vLine24Octant07.c)
 *     vLineCallbackOctant16 @ 0x1401EC420 (vLineCallbackOctant16.c)
 *     vLineCallbackOctant34 @ 0x1401ECA10 (vLineCallbackOctant34.c)
 *     vLine24Octant34 @ 0x1401F2750 (vLine24Octant34.c)
 *     vLine24Octant25 @ 0x1401F3AB0 (vLine24Octant25.c)
 *     vLine1Octant07 @ 0x140200840 (vLine1Octant07.c)
 *     vLine1Octant34 @ 0x140205670 (vLine1Octant34.c)
 *     vHorizontalLineCallback @ 0x140206740 (vHorizontalLineCallback.c)
 *     vLine1Octant25 @ 0x140206D30 (vLine1Octant25.c)
 *     vLine1Octant16 @ 0x140207640 (vLine1Octant16.c)
 *     vLineCallbackOctant25 @ 0x14020E140 (vLineCallbackOctant25.c)
 *     vLine4Octant07 @ 0x140238F10 (vLine4Octant07.c)
 *     vLine4Octant16 @ 0x140246E40 (vLine4Octant16.c)
 *     vHorizontalLine8 @ 0x14025A0F0 (vHorizontalLine8.c)
 *     vLine8Octant34 @ 0x14025BEB0 (vLine8Octant34.c)
 *     vHorizontalLine1 @ 0x14026BB90 (vHorizontalLine1.c)
 *     vHorizontalLine4 @ 0x140297C80 (vHorizontalLine4.c)
 *     vHorizontalLine16 @ 0x140340F00 (vHorizontalLine16.c)
 *     vLine16Octant07 @ 0x140340FA0 (vLine16Octant07.c)
 *     vLine16Octant16 @ 0x140340FF0 (vLine16Octant16.c)
 *     vLine16Octant25 @ 0x140341060 (vLine16Octant25.c)
 *     vLine16Octant34 @ 0x1403410D0 (vLine16Octant34.c)
 *     vLine4Octant25 @ 0x140341120 (vLine4Octant25.c)
 *     vLine4Octant34 @ 0x140341200 (vLine4Octant34.c)
 *     vLine8Octant07 @ 0x1403412C0 (vLine8Octant07.c)
 *     vLine8Octant16 @ 0x140341310 (vLine8Octant16.c)
 *     vLine8Octant25 @ 0x140341380 (vLine8Octant25.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall vDrawLine(
        int *a1,
        _DWORD *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int *a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned int v10; // ebx
  unsigned int v11; // r12d
  int v12; // r9d
  __int64 result; // rax
  int v14; // r11d
  int v15; // r9d
  int v16; // r10d
  int v17; // ecx
  int v18; // edx
  int v19; // r14d
  int v20; // r11d
  int v21; // r8d
  int v22; // r9d
  __int64 (__fastcall *v23)(); // r11
  __int128 *v24; // rsi
  int v25; // edx
  __int64 v26; // r8
  unsigned int v27; // ecx
  int v28; // ecx
  bool v29; // zf
  int v30; // edx
  int v31; // r12d
  int v32; // r13d
  bool v33; // cc
  int v34; // eax
  int v35; // eax
  unsigned int v36; // [rsp+30h] [rbp-88h]
  __int64 v37; // [rsp+38h] [rbp-80h] BYREF
  __int128 v38; // [rsp+40h] [rbp-78h]
  __int64 v39; // [rsp+50h] [rbp-68h]
  __int64 v40; // [rsp+58h] [rbp-60h]
  _DWORD *v41; // [rsp+60h] [rbp-58h]
  __int128 v42; // [rsp+68h] [rbp-50h] BYREF

  v41 = a2;
  *(_QWORD *)&v42 = a1;
  v10 = a4;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = a8;
  v11 = 6;
  if ( !a8 )
    v11 = a7;
  v36 = v11;
  v12 = a1[1];
  result = *a1 | v12 | (unsigned int)(*a2 | a2[1]);
  if ( (((unsigned __int8)*a1 | (unsigned __int8)(v12 | *a2 | *((_BYTE *)a2 + 4))) & 0xF) != 0 )
    goto LABEL_31;
  v14 = *a1 >> 4;
  v15 = v12 >> 4;
  v16 = (int)*a2 >> 4;
  v17 = (int)a2[1] >> 4;
  HIDWORD(v37) = v14;
  LODWORD(v38) = v15;
  v18 = 0;
  if ( v16 < v14 )
    v18 = 4;
  LODWORD(v37) = v18;
  v19 = v14;
  if ( v16 >= v14 )
  {
    v19 = v16;
    v16 = v14;
  }
  if ( v17 < v15 )
  {
    v18 |= 2u;
    LODWORD(v37) = v18;
  }
  v20 = v15;
  if ( v17 >= v15 )
  {
    v20 = v17;
    v17 = v15;
  }
  if ( a6 )
  {
    if ( v19 < *a6 )
      return result;
    result = (unsigned int)a6[2];
    if ( v16 >= (int)result )
      return result;
    v31 = a6[1];
    if ( v20 < v31 )
      return result;
    v32 = a6[3];
    if ( v17 >= v32 )
      return result;
    if ( v16 < *a6 || v19 >= (int)result )
    {
      v11 = v36;
    }
    else
    {
      v33 = v17 < v31;
      v11 = v36;
      if ( !v33 && v20 < v32 )
        goto LABEL_13;
    }
LABEL_31:
    result = bGIQtoIntegerLine(v42, v41, a6, &v37);
    if ( !(_DWORD)result || SDWORD1(v38) <= 0 )
      return result;
    if ( (v37 & 2) != 0 )
      v10 = -v10;
    return ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD, _QWORD))*(&funcs_140187CC4[8 * v11] + (v37 & 7)))(
             &v37,
             (int)(v38 * a4) + a3,
             v10,
             a5);
  }
LABEL_13:
  v21 = v19 - v16;
  v22 = v20 - v17;
  if ( v19 - v16 >= v20 - v17 )
  {
    if ( !v22 )
    {
      v23 = funcs_140187C0F[v11];
      v24 = (__int128 *)((int)(v38 * a4) + a3);
      v42 = 0LL;
      if ( a8 )
      {
        LODWORD(v42) = v38;
        *((_QWORD *)&v42 + 1) = a8;
        v24 = &v42;
      }
      v25 = v18 & 4;
      v26 = (unsigned int)(v19 + 1);
      if ( !v25 )
        v26 = (unsigned int)v19;
      v27 = v16 + 1;
      if ( !v25 )
        v27 = v16;
      return ((__int64 (__fastcall *)(__int128 *, _QWORD, __int64, _QWORD))v23)(v24, v27, v26, a5);
    }
    if ( !v21 )
      return result;
    v30 = v18 & 2;
    DWORD1(v38) = v19 - v16;
    DWORD2(v38) = 2 * v21;
    HIDWORD(v38) = 2 * v22;
    v28 = (v30 != 0) - 1 - v21;
    v10 = -v10;
    v29 = v30 == 0;
    goto LABEL_26;
  }
  if ( !v22 )
    return result;
  if ( v21 || !a8 )
  {
    LODWORD(v37) = v18 | 1;
    HIDWORD(v39) = 1;
    DWORD1(v38) = v20 - v17;
    DWORD2(v38) = 2 * v22;
    HIDWORD(v38) = 2 * v21;
    v28 = ((v18 & 4) != 0) - 1 - v22;
    v10 = -v10;
    v29 = (v18 & 2) == 0;
LABEL_26:
    LODWORD(v39) = v28;
    if ( v29 )
      v10 = a4;
    return ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD, _QWORD))*(&funcs_140187CC4[8 * v11] + (v37 & 7)))(
             &v37,
             (int)(v38 * a4) + a3,
             v10,
             a5);
  }
  LODWORD(v42) = v16;
  v34 = v17 + 1;
  if ( (v18 & 2) == 0 )
    v34 = v17;
  DWORD1(v42) = v34;
  DWORD2(v42) = v16 + 1;
  v35 = v20 + 1;
  if ( (v18 & 2) == 0 )
    v35 = v20;
  HIDWORD(v42) = v35;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(a8 + 8))(a8, a5, &v42);
}
