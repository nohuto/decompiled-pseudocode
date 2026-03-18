/*
 * XREFs of ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C0039DC8
 * Callers:
 *     GreSetPointer @ 0x1C003B8F4 (GreSetPointer.c)
 * Callees:
 *     EngSetPointerShape @ 0x1C000A490 (EngSetPointerShape.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00BBC94 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00EFE70 (-SETFLAG@@YAXHAECKK@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSetPointer(HDEV a1, struct _CURSINFO *a2, char a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // r14
  int v7; // ebx
  HDEV v8; // r15
  int v9; // eax
  struct _CURSINFO *v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  struct PALETTE *v20; // rdx
  RECTL *v21; // r10
  __int64 v22; // rcx
  char v23; // di
  __int64 v24; // rax
  LONG v25; // r9d
  LONG v26; // r8d
  LONG v27; // ecx
  LONG v28; // edx
  int v29; // r11d
  int v30; // ecx
  LONG v31; // r9d
  int v32; // edi
  int v33; // ebx
  int v34; // eax
  char v35; // cl
  __int64 (__fastcall *v36)(SURFOBJ *, __int64, __int64, XLATEOBJ *, int, int, LONG, LONG, RECTL *, int); // r10
  int v37; // r9d
  int v38; // edx
  int v39; // eax
  SURFOBJ *v40; // rsi
  volatile unsigned int *v41; // rdx
  volatile unsigned int *v42; // rdx
  volatile unsigned int *v43; // rdx
  __int64 v44; // rax
  signed __int32 v45; // ett
  signed __int32 v46; // ett
  signed __int32 v47; // ett
  struct _SURFOBJ *v48; // rcx
  __int64 v49; // r8
  int v50; // edi
  SURFOBJ *v51; // r8
  XLATEOBJ *v52; // r9
  SURFOBJ *v53; // rdx
  __int64 v54; // rax
  SURFOBJ *v55; // rcx
  HDEV v56; // rax
  unsigned __int8 v57; // al
  __int64 v58; // rax
  SURFOBJ *v59; // rcx
  void (__fastcall *v60)(SURFOBJ *, __int64, __int64, _QWORD); // rax
  LONG xHot; // [rsp+20h] [rbp-C1h]
  LONG yHot; // [rsp+28h] [rbp-B9h]
  LONG x; // [rsp+30h] [rbp-B1h]
  LONG y; // [rsp+38h] [rbp-A9h]
  RECTL *prcl; // [rsp+40h] [rbp-A1h]
  int fl; // [rsp+48h] [rbp-99h]
  LONG v67; // [rsp+60h] [rbp-81h]
  LONG v68; // [rsp+60h] [rbp-81h]
  int v69; // [rsp+64h] [rbp-7Dh]
  int v70; // [rsp+68h] [rbp-79h]
  int v71; // [rsp+6Ch] [rbp-75h]
  int v72; // [rsp+6Ch] [rbp-75h]
  SURFOBJ *pso; // [rsp+70h] [rbp-71h]
  char v75; // [rsp+78h] [rbp-69h]
  int v76; // [rsp+7Ch] [rbp-65h]
  LONG v77; // [rsp+80h] [rbp-61h]
  struct PALETTE *v78; // [rsp+88h] [rbp-59h] BYREF
  RECTL v79; // [rsp+90h] [rbp-51h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-41h]
  XLATEOBJ *v81; // [rsp+A8h] [rbp-39h] BYREF
  __int64 v82; // [rsp+B0h] [rbp-31h]
  __int64 v83; // [rsp+B8h] [rbp-29h] BYREF
  unsigned int v84; // [rsp+C0h] [rbp-21h]
  BOOL v85; // [rsp+C4h] [rbp-1Dh]
  XLATEOBJ *v86; // [rsp+C8h] [rbp-19h]
  __int64 v87; // [rsp+D0h] [rbp-11h] BYREF
  __int64 v88; // [rsp+D8h] [rbp-9h] BYREF
  RECTL v89; // [rsp+E0h] [rbp-1h] BYREF

  v5 = 0LL;
  v84 = a4;
  v71 = 0;
  v7 = a3 & 0x10;
  v67 = v7;
  v8 = a1 + 14;
  v9 = *((_DWORD *)a1 + 14);
  v10 = a2;
  v85 = (a3 & 0x20) != 0;
  if ( (v9 & 0x400) == 0 )
  {
    if ( a2 )
    {
      v11 = *((_QWORD *)a2 + 1);
      LOBYTE(a2) = 5;
      v12 = HmgShareLockCheck(v11, a2);
      v88 = v12;
      v14 = v12;
      if ( !v12 || *(_DWORD *)(v12 + 96) != 1 || (*(_DWORD *)(v12 + 60) & 1) != 0 )
        goto LABEL_42;
      v15 = 0LL;
      v16 = *((_QWORD *)a1 + 322);
      v80 = 0LL;
      v82 = 0LL;
      v78 = 0LL;
      v86 = 0LL;
      v81 = 0LL;
      v83 = 0LL;
      v87 = 0LL;
      if ( v16 )
        pso = (SURFOBJ *)(v16 + 24);
      else
        pso = 0LL;
      if ( *((_QWORD *)v10 + 2) || *((_QWORD *)v10 + 6) )
      {
        v17 = *((_QWORD *)v10 + 6);
        LOBYTE(v13) = 5;
        if ( v17 )
        {
          v18 = HmgShareLockCheck(v17, v13);
          v71 = 1;
        }
        else
        {
          v18 = HmgShareLockCheck(*((_QWORD *)v10 + 2), v13);
        }
        v83 = v18;
        v19 = v18;
        if ( !v18 )
          goto LABEL_61;
        if ( *(_DWORD *)(v18 + 60) != *(int *)(v14 + 60) >> 1 )
          goto LABEL_41;
        v20 = *(struct PALETTE **)(v18 + 120);
        v78 = v20;
        if ( !v20 )
        {
          v56 = (HDEV)*((_QWORD *)a1 + 5);
          if ( v56 != a1 )
          {
            v20 = (struct PALETTE *)*((_QWORD *)v56 + 229);
            v78 = v20;
          }
        }
        if ( !(unsigned int)bIsCompatible(&v78, v20, v19, a1, 1) )
          goto LABEL_41;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v81,
                             0LL,
                             0LL,
                             v78,
                             *((_QWORD *)a1 + 229),
                             ppalDefault,
                             ppalDefault,
                             0,
                             0xFFFFFF,
                             0,
                             0) )
        {
          v15 = v19;
          v86 = v81;
          v80 = v19;
        }
        else
        {
LABEL_61:
          v15 = 0LL;
        }
        v7 = v67;
      }
      v21 = (RECTL *)((char *)v10 + 32);
      if ( !*((_DWORD *)v10 + 11) || (*(_DWORD *)v10 & 0x400) != 0 && !v7 || (*(_DWORD *)v10 & 0x400) == 0 && v7 )
      {
        if ( v15 )
          v48 = (struct _SURFOBJ *)(v15 + 24);
        else
          v48 = 0LL;
        vProcessCursorShape(
          (HDEV)v48,
          v7,
          v71,
          (struct _SURFOBJ *)(v14 + 24),
          v48,
          v78,
          (struct _RECTL *)v10 + 2,
          (HBITMAP *)v10 + 3);
        v21 = (RECTL *)((char *)v10 + 32);
        if ( v7 )
          *(_DWORD *)v10 |= 0x400u;
        else
          *(_DWORD *)v10 &= ~0x400u;
      }
      v22 = *((_QWORD *)v10 + 3);
      v23 = a3 & 0xEF;
      v75 = a3 & 0xEF;
      if ( v22 && *((_DWORD *)a1 + 533) > 3u )
      {
        LOBYTE(v13) = 5;
        v24 = HmgShareLockCheck(v22, v13);
        v25 = *((_DWORD *)v10 + 9);
        v21 = (RECTL *)((char *)v10 + 32);
        v26 = *((_DWORD *)v10 + 8);
        v27 = *((_DWORD *)v10 + 10);
        v28 = *((_DWORD *)v10 + 11);
        v79.left = v26;
        v82 = v24;
        v87 = v24;
        v79.top = v25;
        v79.right = v27;
        v79.bottom = v28;
        if ( !v7 )
          goto LABEL_25;
        v79.left = v26 + 1;
        v79.top = v25 + 1;
        v79.bottom = v28 + 6;
        v79.right = v27 + 8;
      }
      v29 = 3;
      if ( v7 )
      {
LABEL_26:
        v76 = v29;
        if ( (*(_DWORD *)v8 & 0x400) != 0 )
        {
LABEL_41:
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v87);
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v83);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v81);
LABEL_42:
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v88);
          return;
        }
        v30 = *((__int16 *)v10 + 3);
        v31 = *((_DWORD *)a1 + 20);
        v32 = v23 & 0xC | 1;
        *((_DWORD *)a1 + 22) = *((__int16 *)v10 + 2);
        v33 = 0;
        v68 = *((_DWORD *)a1 + 21);
        v34 = 0;
        *((_DWORD *)a1 + 23) = v30;
        v35 = v84;
        v72 = 0;
        v77 = v31;
        v70 = 0;
        v69 = 1;
        if ( v84 )
        {
          v57 = a5;
          if ( a5 )
          {
            if ( v84 >= 0x10 )
              v35 = 16;
            if ( a5 >= 0xFF )
              v57 = -1;
            v32 |= (v35 & 0xF | (16 * v57)) << 8;
            v34 = 1;
            v72 = 1;
          }
          else
          {
            v34 = 0;
          }
        }
        if ( v85 )
          goto LABEL_77;
        v36 = (__int64 (__fastcall *)(SURFOBJ *, __int64, __int64, XLATEOBJ *, int, int, LONG, LONG, RECTL *, int))*((_QWORD *)a1 + 369);
        if ( v36 && (!v34 || ((_DWORD)a1[538] & 0x200) != 0) )
        {
          if ( !v82 )
          {
            v89 = (RECTL)*((_OWORD *)v10 + 2);
            if ( v80 )
              v49 = v80 + 24;
            else
              v49 = 0LL;
            v39 = v36(pso, v14 + 24, v49, v86, *((__int16 *)v10 + 2), *((__int16 *)v10 + 3), v31, v68, &v89, v32);
            if ( v39 == 3 )
            {
              if ( *((_QWORD *)a1 + 370) )
                (*((void (__fastcall **)(SURFOBJ *, __int64, __int64, _QWORD))a1 + 370))(
                  pso,
                  0xFFFFFFFFLL,
                  0xFFFFFFFFLL,
                  0LL);
              LOBYTE(v39) = 1;
            }
LABEL_34:
            if ( (v39 & 2) != 0 )
            {
              v70 = 1;
              v69 = 0;
LABEL_36:
              v33 = ((unsigned __int8)v39 >> 2) & 1;
              if ( !v69 )
              {
                if ( (*(_DWORD *)v8 & 4) != 0 )
                {
                  v58 = *((_QWORD *)a1 + 322);
                  v59 = 0LL;
                  if ( v58 )
                    v59 = (SURFOBJ *)(v58 + 24);
                  EngSetPointerShape(v59, 0LL, 0LL, 0LL, 0, 0, 0, 0, 0LL, 0);
                }
                v40 = pso;
LABEL_39:
                if ( !v70 && (*(_DWORD *)v8 & 2) != 0 )
                {
                  v60 = (void (__fastcall *)(SURFOBJ *, __int64, __int64, _QWORD))*((_QWORD *)a1 + 370);
                  if ( v60 )
                    v60(v40, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
                }
                SETFLAG(v69, (volatile unsigned int *)a1 + 14, 4u);
                SETFLAG(v70, v41, 2u);
                SETFLAG(v72, v42, 0x100000u);
                SETFLAG(v33, v43, 0x200000u);
                goto LABEL_41;
              }
              v31 = v77;
              goto LABEL_76;
            }
LABEL_101:
            v70 = 0;
            v69 = 1;
            goto LABEL_36;
          }
          if ( ((_DWORD)a1[538] & 0x20) != 0 )
          {
            v37 = v29 + *((__int16 *)v10 + 3);
            v38 = v29 + *((__int16 *)v10 + 2);
            v89 = v79;
            v39 = v36(pso, 0LL, v82 + 24, 0LL, v38, v37, v77, v68, &v89, v32 | 0x10u);
            if ( v39 == 3 )
              goto LABEL_101;
            goto LABEL_34;
          }
        }
LABEL_76:
        v21 = (RECTL *)((char *)v10 + 32);
LABEL_77:
        v50 = v75 & 0x40 | v32;
        if ( v82 )
        {
          v51 = (SURFOBJ *)(v82 + 24);
          fl = v50 | 0x10;
          prcl = &v79;
          y = v68;
          x = v31;
          v52 = 0LL;
          yHot = v76 + *((__int16 *)v10 + 3);
          v53 = 0LL;
          xHot = v76 + *((__int16 *)v10 + 2);
        }
        else
        {
          v51 = 0LL;
          if ( v80 )
            v51 = (SURFOBJ *)(v80 + 24);
          v53 = (SURFOBJ *)(v14 + 24);
          fl = v50;
          prcl = v21;
          y = v68;
          x = v31;
          v52 = v86;
          yHot = *((__int16 *)v10 + 3);
          xHot = *((__int16 *)v10 + 2);
        }
        v40 = pso;
        EngSetPointerShape(pso, v53, v51, v52, xHot, yHot, x, y, prcl, fl);
        goto LABEL_39;
      }
LABEL_25:
      v29 = 0;
      goto LABEL_26;
    }
    if ( (v9 & 4) != 0 )
    {
      v54 = *((_QWORD *)a1 + 322);
      v55 = 0LL;
      if ( v54 )
        v55 = (SURFOBJ *)(v54 + 24);
      EngSetPointerShape(v55, 0LL, 0LL, 0LL, 0, 0, 0, 0, 0LL, 0);
    }
    if ( (*(_DWORD *)v8 & 2) != 0 && *((_QWORD *)a1 + 370) )
    {
      v44 = *((_QWORD *)a1 + 322);
      if ( v44 )
        v5 = v44 + 24;
      (*((void (__fastcall **)(__int64, __int64, __int64, _QWORD))a1 + 370))(v5, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
    }
    _m_prefetchw(v8);
    do
      v45 = *(_DWORD *)v8;
    while ( v45 != _InterlockedCompareExchange((volatile signed __int32 *)v8, *(_DWORD *)v8 & 0xFFFFFFFD, *(_DWORD *)v8) );
    _m_prefetchw(v8);
    do
      v46 = *(_DWORD *)v8;
    while ( v46 != _InterlockedCompareExchange((volatile signed __int32 *)v8, *(_DWORD *)v8 & 0xFFFFFFFB, *(_DWORD *)v8) );
    _m_prefetchw(v8);
    do
      v47 = *(_DWORD *)v8;
    while ( v47 != _InterlockedCompareExchange((volatile signed __int32 *)v8, *(_DWORD *)v8 & 0xFFEFFFFF, *(_DWORD *)v8) );
  }
}
