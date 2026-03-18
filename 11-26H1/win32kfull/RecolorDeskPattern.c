/*
 * XREFs of RecolorDeskPattern @ 0x140246F20
 * Callers:
 *     SetDesktopPattern @ 0x14008586C (SetDesktopPattern.c)
 * Callees:
 *     GreCreateDIBitmap @ 0x140015974 (GreCreateDIBitmap.c)
 *     GreCreateCompatibleBitmapEx @ 0x1400171C0 (GreCreateCompatibleBitmapEx.c)
 *     GreSetTextColor @ 0x140027BB0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140027C40 (GreSetBkColor.c)
 *     GreMarkDeletableBrush @ 0x140083F20 (GreMarkDeletableBrush.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall RecolorDeskPattern(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 CompatibleBitmap; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r12
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // ebx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 PatternBrush; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  _DWORD v66[3]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v67; // [rsp+84h] [rbp+13h]
  __int64 v68; // [rsp+8Ch] [rbp+1Bh]
  int v69; // [rsp+94h] [rbp+23h]
  int v70; // [rsp+98h] [rbp+27h]
  int v71; // [rsp+9Ch] [rbp+2Bh]
  char v72; // [rsp+A0h] [rbp+2Fh]
  char v73; // [rsp+A1h] [rbp+30h]
  char v74; // [rsp+A2h] [rbp+31h]
  char v75; // [rsp+A4h] [rbp+33h]
  char v76; // [rsp+A5h] [rbp+34h]
  char v77; // [rsp+A6h] [rbp+35h]

  v2 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 62792) )
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 62792);
    UserSessionState = W32GetUserSessionState(v7, v6);
    v9 = GreSelectBitmap(*(_QWORD *)(UserSessionState + 43248), v5);
    v13 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19904);
    if ( *(_DWORD *)(v13 + 2220) )
    {
      v30 = W32GetUserSessionState(v13, v12);
      CompatibleBitmap = (__int64)GreCreateCompatibleBitmapEx(
                                    *(Gre::Base **)(*(_QWORD *)(v30 + 56968) + 64LL),
                                    8,
                                    8,
                                    0,
                                    0LL,
                                    0LL);
    }
    else
    {
      v66[0] = 40;
      v70 = 2;
      v71 = 2;
      v66[1] = 8;
      v66[2] = 8;
      v67 = 65537LL;
      v68 = 0LL;
      v69 = 0;
      v14 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19904);
      v72 = *(_BYTE *)(v14 + 4574);
      v16 = *(_QWORD *)(W32GetUserSessionState(v14, v15) + 19904);
      v73 = BYTE1(*(_DWORD *)(v16 + 4572));
      v18 = *(_QWORD *)(W32GetUserSessionState(v16, v17) + 19904);
      v74 = *(_BYTE *)(v18 + 4572);
      v20 = *(_QWORD *)(W32GetUserSessionState(v18, v19) + 19904);
      v75 = *(_BYTE *)(v20 + 4602);
      v22 = *(_QWORD *)(W32GetUserSessionState(v20, v21) + 19904);
      v76 = BYTE1(*(_DWORD *)(v22 + 4600));
      v24 = *(_QWORD *)(W32GetUserSessionState(v22, v23) + 19904);
      v77 = *(_BYTE *)(v24 + 4600);
      v26 = W32GetUserSessionState(v24, v25);
      CompatibleBitmap = GreCreateDIBitmap(
                           *(Gre::Base **)(*(_QWORD *)(v26 + 56968) + 64LL),
                           0,
                           0LL,
                           (__int64)v66,
                           0,
                           48,
                           0,
                           0LL,
                           0,
                           0LL,
                           0,
                           0LL);
    }
    v31 = CompatibleBitmap;
    if ( CompatibleBitmap )
    {
      v32 = W32GetUserSessionState(v29, v28);
      v33 = GreSelectBitmap(*(_QWORD *)(v32 + 43256), v31);
      v36 = *(_QWORD *)(W32GetUserSessionState(v35, v34) + 19904);
      v37 = *(_DWORD *)(v36 + 4572);
      v39 = W32GetUserSessionState(v36, v38);
      GreSetTextColor(*(HDC *)(v39 + 43256), v37);
      v42 = *(_QWORD *)(W32GetUserSessionState(v41, v40) + 19904);
      v43 = *(_DWORD *)(v42 + 4600);
      v45 = W32GetUserSessionState(v42, v44);
      GreSetBkColor(*(HDC *)(v45 + 43256), v43);
      v48 = *(_QWORD *)(W32GetUserSessionState(v47, v46) + 43248);
      v51 = W32GetUserSessionState(v50, v49);
      GreBitBltInternal(*(Gre::Base **)(v51 + 43256), 0, 0, 8, 8, v48, 0, 0, 0xCC0020u, 0, 0);
      PatternBrush = GreCreatePatternBrush(v31);
      if ( PatternBrush )
      {
        v56 = *(_QWORD *)(W32GetUserSessionState(v53, v52) + 19904);
        if ( *(_QWORD *)(v56 + 4704) )
        {
          v57 = W32GetUserSessionState(v56, v55);
          GreMarkDeletableBrush(*(HBRUSH *)(*(_QWORD *)(v57 + 19904) + 4704LL));
          v60 = W32GetUserSessionState(v59, v58);
          GreDeleteObject(*(_QWORD *)(*(_QWORD *)(v60 + 19904) + 4704LL));
        }
        GreMarkUndeletableBrush(PatternBrush);
        GreSetBrushOwner(PatternBrush, 0LL);
        v2 = 1;
        v53 = *(_QWORD *)(W32GetUserSessionState(v62, v61) + 19904);
        *(_QWORD *)(v53 + 4704) = PatternBrush;
      }
      v63 = W32GetUserSessionState(v53, v52);
      GreSelectBitmap(*(_QWORD *)(v63 + 43256), v33);
      GreDeleteObject(v31);
    }
    v64 = W32GetUserSessionState(v29, v28);
    GreSelectBitmap(*(_QWORD *)(v64 + 43248), v9);
  }
  return v2;
}
