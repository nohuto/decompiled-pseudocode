/*
 * XREFs of ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x180097AB0
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@@Z @ 0x180096E50 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@@Z.c)
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z @ 0x180097098 (-EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMM@Z @ 0x18009719C (-InjectPan@ManipulationInjector@@QEAAXMM@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXM@Z @ 0x1800975C8 (-InjectZoom@ManipulationInjector@@QEAAXM@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z @ 0x1800977E8 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180086E0C (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x180097A40 (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ManipulationInjector::InjectAndScrub(
        ManipulationInjector *this,
        __int64 a2,
        _OWORD *a3,
        const char *a4)
{
  unsigned int i; // edi
  __int64 v6; // rdx
  _OWORD *v7; // r8
  __int64 v8; // r10
  _OWORD *v9; // r9
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rcx
  __int64 v19; // r10
  _OWORD *v20; // r9
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  DWORD v29; // eax
  const char *v30; // r9
  unsigned int v31; // r15d
  __int16 v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned __int16 v35; // r10
  bool v36; // al
  char v37; // cl
  int v38; // r13d
  BOOL v39; // r11d
  int v40; // r12d
  int v41; // edi
  int v42; // esi
  struct tagPOINT v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  DWORD v55; // eax
  DWORD LastError; // eax
  DWORD TickCount; // eax
  __int64 v58; // rdx
  __int64 j; // r8
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r9
  int v63; // eax
  __int16 v64; // ax
  unsigned int v65; // edx
  unsigned int v66; // r8d
  unsigned __int64 v67; // r9
  __int64 v68; // r10
  int v69; // eax
  char *v70; // rdx
  unsigned int v71; // eax
  __int64 v72; // [rsp+38h] [rbp-D0h]
  __int64 v73; // [rsp+38h] [rbp-D0h]
  int v74; // [rsp+40h] [rbp-C8h]
  __int64 v75; // [rsp+48h] [rbp-C0h]
  int v76; // [rsp+50h] [rbp-B8h]
  __int64 v77; // [rsp+58h] [rbp-B0h]
  int v78; // [rsp+60h] [rbp-A8h]
  __int64 v79; // [rsp+68h] [rbp-A0h]
  int v80; // [rsp+70h] [rbp-98h]
  __int64 v81; // [rsp+78h] [rbp-90h]
  int v82; // [rsp+80h] [rbp-88h]
  __int64 v83; // [rsp+88h] [rbp-80h]
  int v84; // [rsp+90h] [rbp-78h]
  int v85; // [rsp+A0h] [rbp-68h]
  __int64 v86; // [rsp+A8h] [rbp-60h]
  int v87; // [rsp+B0h] [rbp-58h]
  __int64 v88; // [rsp+B8h] [rbp-50h]
  int v89; // [rsp+C0h] [rbp-48h]
  int v90; // [rsp+D0h] [rbp-38h]
  struct tagPOINT v91; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v92[74]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+370h] [rbp+268h]

  if ( *((_BYTE *)this + 13) )
  {
    for ( i = 0; i < *((_DWORD *)this + 12); ++i )
      DbgPrint(
        "Injecting %d (%d, %d) 0x%08X\n",
        *((_DWORD *)this + 38 * i + 29),
        *((_DWORD *)this + 38 * i + 36),
        *((_DWORD *)this + 38 * i + 37),
        *((_DWORD *)this + 38 * i + 31));
  }
  switch ( *(_DWORD *)this )
  {
    case 1:
      memset(v92, 0, 0x248uLL);
      TickCount = GetTickCount();
      LOBYTE(v58) = 0;
      HIDWORD(v92[0]) = TickCount;
      for ( j = 0LL;
            (unsigned int)(unsigned __int16)j < *((_DWORD *)this + 12);
            HIWORD(v92[v61 + 3]) = *(_WORD *)((char *)this + v62 + 148) )
      {
        v60 = (unsigned __int8)v58;
        LOBYTE(v58) = v58 + 1;
        v61 = 7 * v60;
        v62 = 152LL * (unsigned __int16)j;
        LOWORD(v92[7 * v60 + 3]) = *(_WORD *)((char *)this + v62 + 116);
        v63 = *(_DWORD *)((char *)this + v62 + 124);
        if ( (v63 & 0x10000) != 0 )
        {
          WORD1(v92[v61 + 3]) |= 9u;
        }
        else if ( (v63 & 0x20000) != 0 )
        {
          WORD1(v92[v61 + 3]) |= 0xAu;
        }
        else if ( (v63 & 0x40000) != 0 )
        {
          WORD1(v92[v61 + 3]) |= 4u;
        }
        else if ( (v63 & 2) != 0 )
        {
          WORD1(v92[v61 + 3]) |= 8u;
        }
        else if ( (v63 & 0x8000) != 0 )
        {
          WORD1(v92[v61 + 3]) |= 0x2004u;
        }
        LOWORD(j) = j + 1;
        WORD2(v92[v61 + 3]) = *(_WORD *)((char *)this + v62 + 144);
      }
      HIBYTE(v92[2]) = v58;
      if ( (unsigned int)(unsigned __int8)v58 - 1 > 9 )
      {
        v64 = 0;
      }
      else if ( (unsigned __int8)v58 == 1 )
      {
        v64 = 80;
      }
      else
      {
        v64 = 56 * (unsigned __int8)v58 + 24;
      }
      LOWORD(v92[0]) = v64;
      if ( (_BYTE)v58 )
        (*((void (__fastcall **)(_QWORD *, __int64, __int64))this + 100))(v92, v58, j);
      break;
    case 2:
      if ( !(unsigned int)InjectPointerInput(*((_QWORD *)this + 12), (char *)this + 104, *((unsigned int *)this + 12)) )
      {
        LastError = GetLastError();
        if ( LastError )
        {
          wil::details::in1diag3::_FailFast_Win32(
            retaddr,
            (void *)0x421,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            (const char *)LastError);
          __debugbreak();
        }
      }
      break;
    case 3:
      v30 = (const char *)*((unsigned int *)this + 12);
      v31 = 10 * (_DWORD)v30 + 1;
      if ( (unsigned int)((_DWORD)v30 - 1) > 3 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x42A,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v30);
        __debugbreak();
      }
      if ( (_DWORD)v30 )
      {
        v32 = 1;
        do
        {
          v33 = (unsigned __int16)(v32 - 1);
          v34 = 152 * v33;
          v35 = 10 * v33;
          v36 = (*((_DWORD *)this + 38 * v33 + 31) & 4) != 0;
          if ( (*((_DWORD *)this + 38 * v33 + 31) & 4) != 0 || (v37 = 0, (*((_BYTE *)this + v34 + 124) & 2) == 0) )
            v37 = 1;
          if ( !v37 )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x432,
              (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
              v30);
            __debugbreak();
          }
          v38 = *(_DWORD *)((char *)this + v34 + 116);
          v39 = v36;
          v40 = 100 * v36;
          v41 = v36 * (int)(float)(64000.0 / (float)(*((_DWORD *)this + 18) - *((_DWORD *)this + 16)));
          v42 = v36 * (int)(float)(64000.0 / (float)(*((_DWORD *)this + 19) - *((_DWORD *)this + 17)));
          if ( *((_DWORD *)this + 22) == 1 )
            v43 = **(struct tagPOINT **)&ManipulationInjector::DeskToDigiPt(
                                           this,
                                           (struct tagPOINT)&v91,
                                           *(_QWORD *)((char *)this + v34 + 144));
          else
            v43 = *(struct tagPOINT *)((char *)this + v34 + 152);
          HIDWORD(v75) = v43.x;
          HIDWORD(v77) = v43.y;
          HIDWORD(v83) = v40;
          LODWORD(v75) = 3145729;
          v44 = 3LL * v35;
          LOWORD(v76) = v32;
          *(_QWORD *)((char *)v92 + 4 * v44) = v75;
          *((_DWORD *)&v92[1] + v44) = v76;
          v45 = 3LL * ((unsigned int)v35 + 1);
          LODWORD(v77) = 3211265;
          *(_QWORD *)((char *)v92 + 4 * v45) = v77;
          LOWORD(v78) = v32;
          *((_DWORD *)&v92[1] + v45) = v78;
          HIDWORD(v88) = v42;
          LODWORD(v79) = 4325389;
          v46 = 3LL * ((unsigned int)v35 + 2);
          HIDWORD(v79) = v39;
          *(_QWORD *)((char *)v92 + 4 * v46) = v79;
          LOWORD(v80) = v32;
          *((_DWORD *)&v92[1] + v46) = v80;
          LODWORD(v81) = 3276813;
          HIDWORD(v81) = v39;
          v47 = 3LL * ((unsigned int)v35 + 3);
          *(_QWORD *)((char *)v92 + 4 * v47) = v81;
          LOWORD(v82) = v32;
          *((_DWORD *)&v92[1] + v47) = v82;
          LODWORD(v83) = 3145741;
          v48 = 3LL * ((unsigned int)v35 + 4);
          LOWORD(v84) = v32;
          *(_QWORD *)((char *)v92 + 4 * v48) = v83;
          *((_DWORD *)&v92[1] + v48) = v84;
          v49 = 3LL * ((unsigned int)v35 + 5);
          *(_QWORD *)((char *)v92 + 4 * v49) = 0x10047000DLL;
          LOWORD(v85) = v32;
          *((_DWORD *)&v92[1] + v49) = v85;
          LODWORD(v86) = 4718605;
          HIDWORD(v86) = v41;
          v50 = 3LL * ((unsigned int)v35 + 6);
          *(_QWORD *)((char *)v92 + 4 * v50) = v86;
          LOWORD(v87) = v32;
          *((_DWORD *)&v92[1] + v50) = v87;
          LODWORD(v88) = 4784141;
          v51 = 3LL * ((unsigned int)v35 + 7);
          LOWORD(v89) = v32;
          *(_QWORD *)((char *)v92 + 4 * v51) = v88;
          *((_DWORD *)&v92[1] + v51) = v89;
          v52 = 3LL * ((unsigned int)v35 + 8);
          LOWORD(v90) = v32;
          *(_QWORD *)((char *)v92 + 4 * v52) = 4128781LL;
          *((_DWORD *)&v92[1] + v52) = v90;
          v53 = 3LL * ((unsigned int)v35 + 9);
          LOWORD(v74) = v32++;
          LODWORD(v72) = 5308429;
          HIDWORD(v72) = v38;
          *(_QWORD *)((char *)v92 + 4 * v53) = v72;
          *((_DWORD *)&v92[1] + v53) = v74;
        }
        while ( (unsigned __int16)(v32 - 1) < (unsigned int)v30 );
      }
      HIDWORD(v73) = (unsigned __int16)v30;
      LODWORD(v73) = 5505037;
      LOWORD(v74) = 0;
      v54 = 3LL * (unsigned __int16)(10 * (_WORD)v30);
      *(_QWORD *)((char *)v92 + 4 * v54) = v73;
      *((_DWORD *)&v92[1] + v54) = v74;
      if ( !(unsigned int)InjectDeviceInput(*((_QWORD *)this + 12), v92, v31) )
      {
        v55 = GetLastError();
        if ( v55 )
        {
          wil::details::in1diag3::_FailFast_Win32(
            retaddr,
            (void *)0x458,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            (const char *)v55);
          __debugbreak();
        }
      }
      break;
    case 4:
      v18 = *((unsigned int *)this + 12);
      if ( (_DWORD)v18 )
      {
        a3 = v92;
        v19 = (unsigned int)v18;
        v20 = (_OWORD *)((char *)this + 112);
        do
        {
          v21 = v20[1];
          *a3 = *v20;
          v22 = v20[2];
          a3[1] = v21;
          v23 = v20[3];
          a3[2] = v22;
          v24 = v20[4];
          a3[3] = v23;
          v25 = v20[5];
          a3[4] = v24;
          v26 = v20[6];
          a3[5] = v25;
          v27 = v20[7];
          a3[6] = v26;
          v28 = v20[8];
          v20 = (_OWORD *)((char *)v20 + 152);
          a3[7] = v27;
          a3[8] = v28;
          a3 += 9;
          --v19;
        }
        while ( v19 );
      }
      if ( !(unsigned int)InjectTouchInput(v18, v92, a3) )
      {
        v29 = GetLastError();
        if ( v29 )
        {
          wil::details::in1diag3::_FailFast_Win32(
            retaddr,
            (void *)0x468,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            (const char *)v29);
          __debugbreak();
        }
      }
      break;
    case 5:
      v6 = *((unsigned int *)this + 12);
      if ( (_DWORD)v6 )
      {
        v7 = v92;
        v8 = (unsigned int)v6;
        v9 = (_OWORD *)((char *)this + 112);
        do
        {
          v10 = v9[1];
          *v7 = *v9;
          v11 = v9[2];
          v7[1] = v10;
          v12 = v9[3];
          v7[2] = v11;
          v13 = v9[4];
          v7[3] = v12;
          v14 = v9[5];
          v7[4] = v13;
          v15 = v9[6];
          v7[5] = v14;
          v16 = v9[7];
          v7[6] = v15;
          v17 = v9[8];
          v9 = (_OWORD *)((char *)v9 + 152);
          v7[7] = v16;
          v7[8] = v17;
          v7 += 9;
          --v8;
        }
        while ( v8 );
      }
      (***((void (__fastcall ****)(_QWORD, __int64, _QWORD *))this + 97))(*((_QWORD *)this + 97), v6, v92);
      break;
    default:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x47C,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        a4);
      __debugbreak();
  }
  v65 = *((_DWORD *)this + 12);
  v66 = 0;
  if ( v65 )
  {
    do
    {
      if ( *((_DWORD *)this + 38 * v66 + 31) != 0x40000 )
        break;
      ++v66;
    }
    while ( v66 < v65 );
    if ( v66 )
    {
      v67 = v66;
      if ( v66 < v65 )
      {
        do
        {
          v68 = 152LL * (unsigned int)v67;
          if ( ((*(_DWORD *)((char *)this + v68 + 124) - 65542) & 0xFFFEFFFF) != 0 )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x48D,
              (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
              (const char *)v67);
            __debugbreak();
          }
          v69 = v67;
          v67 = (unsigned int)(v67 + 1);
          v70 = (char *)this + 152 * (v69 - v66);
          *(_OWORD *)(v70 + 104) = *(_OWORD *)((char *)this + v68 + 104);
          *(_OWORD *)(v70 + 120) = *(_OWORD *)((char *)this + v68 + 120);
          *(_OWORD *)(v70 + 136) = *(_OWORD *)((char *)this + v68 + 136);
          *(_OWORD *)(v70 + 152) = *(_OWORD *)((char *)this + v68 + 152);
          *(_OWORD *)(v70 + 168) = *(_OWORD *)((char *)this + v68 + 168);
          *(_OWORD *)(v70 + 184) = *(_OWORD *)((char *)this + v68 + 184);
          *(_OWORD *)(v70 + 200) = *(_OWORD *)((char *)this + v68 + 200);
          *(_OWORD *)(v70 + 216) = *(_OWORD *)((char *)this + v68 + 216);
          *(_OWORD *)(v70 + 232) = *(_OWORD *)((char *)this + v68 + 232);
          *((_QWORD *)v70 + 31) = *(_QWORD *)((char *)this + v68 + 248);
        }
        while ( (unsigned int)v67 < *((_DWORD *)this + 12) );
      }
      v71 = *((_DWORD *)this + 12);
      if ( v71 < v66 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x490,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          (const char *)v67);
        __debugbreak();
      }
      *((_DWORD *)this + 12) = v71 - v66;
    }
  }
}
