/*
 * XREFs of ?bTightenRao@DC@@QEAAHXZ @ 0x1C004B158
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002FA30 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C004CCC0 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C004FDF0 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     NtGdiFrameRgn @ 0x1C0139550 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0139B60 (NtGdiFillRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C028FD68 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiOffsetClipRgn @ 0x1C0290810 (NtGdiOffsetClipRgn.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall DC::bTightenRao(DC *this)
{
  _DWORD *v1; // rdx
  unsigned int v2; // edi
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rcx
  int v8; // esi
  _DWORD *v9; // rcx
  int v10; // eax
  _DWORD *v11; // rdx
  _DWORD *v12; // [rsp+28h] [rbp-59h] BYREF
  _DWORD *v13; // [rsp+30h] [rbp-51h] BYREF
  __int128 v14; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v16[2]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v17; // [rsp+68h] [rbp-19h] BYREF
  __int64 v18; // [rsp+70h] [rbp-11h] BYREF
  __int64 v19; // [rsp+78h] [rbp-9h] BYREF
  __int64 v20; // [rsp+80h] [rbp-1h] BYREF
  __int64 v21; // [rsp+88h] [rbp+7h] BYREF
  __int64 v22; // [rsp+90h] [rbp+Fh] BYREF
  _DWORD *v23; // [rsp+98h] [rbp+17h] BYREF
  int v24; // [rsp+A0h] [rbp+1Fh]
  __int64 v25; // [rsp+A8h] [rbp+27h]
  __int64 v26; // [rsp+B0h] [rbp+2Fh]
  __int64 v27; // [rsp+B8h] [rbp+37h]

  v1 = (_DWORD *)*((_QWORD *)this + 193);
  v2 = 0;
  if ( v1 )
  {
    v4 = *((_QWORD *)this + 28);
    v5 = *((_QWORD *)this + 29);
    v2 = 1;
    LODWORD(v14) = rclEmpty.left;
    *(_QWORD *)((char *)&v14 + 4) = *(_QWORD *)&rclEmpty.top;
    v6 = *((_QWORD *)this + 191);
    HIDWORD(v14) = rclEmpty.bottom;
    v13 = v1;
    *((_OWORD *)this + 87) = v14;
    if ( !(v6 | v5 | v4) )
    {
      if ( *((_QWORD *)this + 194) )
      {
        v17 = *((_QWORD *)this + 194);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
        *((_QWORD *)this + 194) = 0LL;
      }
      RGNOBJ::vGetSubRect((RGNOBJ *)&v13, (struct _RECTL *)this + 87);
LABEL_6:
      DC::vUpdate_VisRect(this, *((struct REGION **)this + 193));
      return v2;
    }
    v25 = v4;
    v8 = v4 != 0;
    *(&v25 + (v4 != 0)) = v5;
    if ( v5 )
      ++v8;
    *(&v25 + v8) = v6;
    if ( v6 )
      ++v8;
    v12 = (_DWORD *)*((_QWORD *)this + 194);
    if ( v12 )
      goto LABEL_18;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v23);
    v9 = 0LL;
    if ( v23 )
      v9 = v23;
    v12 = v9;
    if ( v24 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
    if ( v12 )
    {
LABEL_18:
      if ( v8 == 1 )
      {
        v18 = v25;
        v10 = RGNOBJ::bCopy((RGNOBJ *)&v12, (struct RGNOBJ *)&v18);
      }
      else
      {
        if ( v8 != 2 )
        {
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
          v22 = v25;
          v21 = v26;
          *(_QWORD *)&v14 = v27;
          if ( !v15[0]
            || !RGNOBJ::iCombine((RGNOBJ *)v15, (struct RGNOBJ *)&v22, (struct RGNOBJ *)&v21, 1)
            || !RGNOBJ::iCombine((RGNOBJ *)&v12, (struct RGNOBJ *)v15, (struct RGNOBJ *)&v14, 1) )
          {
            v2 = 0;
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
          if ( v2 )
          {
LABEL_21:
            v11 = v12;
            v11[7] = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
            if ( RGNOBJ::bOffset((RGNOBJ *)&v12, (struct _POINTL *)this + 178) )
            {
              if ( v13[20] == 160
                && v13[22] <= v12[22]
                && v13[24] >= v12[24]
                && v13[23] <= v12[23]
                && v13[25] >= v12[25] )
              {
                *((_QWORD *)this + 194) = v12;
                RGNOBJ::vGetSubRect((RGNOBJ *)&v12, (struct _RECTL *)this + 87);
              }
              else
              {
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
                if ( v16[0]
                  && RGNOBJ::iCombine((RGNOBJ *)v16, (struct RGNOBJ *)&v13, (struct RGNOBJ *)&v12, 1)
                  && RGNOBJ::bCopy((RGNOBJ *)&v12, (struct RGNOBJ *)v16) )
                {
                  *((_QWORD *)this + 194) = v12;
                  RGNOBJ::vGetSubRect((RGNOBJ *)&v12, (struct _RECTL *)this + 87);
                }
                else
                {
                  v2 = 0;
                }
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
              }
            }
            else
            {
              v2 = 0;
            }
            if ( v2 )
              goto LABEL_6;
          }
LABEL_39:
          *((_QWORD *)this + 194) = 0LL;
          if ( v12 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
          goto LABEL_6;
        }
        v20 = v25;
        v19 = v26;
        v10 = RGNOBJ::iCombine((RGNOBJ *)&v12, (struct RGNOBJ *)&v20, (struct RGNOBJ *)&v19, 1);
      }
      if ( v10 )
        goto LABEL_21;
    }
    v2 = 0;
    goto LABEL_39;
  }
  return v2;
}
