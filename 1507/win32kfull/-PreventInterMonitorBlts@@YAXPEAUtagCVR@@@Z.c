/*
 * XREFs of ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01C35CC
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0066BA0 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall PreventInterMonitorBlts(struct tagCVR *a1)
{
  int v2; // r8d
  int v3; // edx
  int v4; // r8d
  __int64 v5; // rcx
  __int64 i; // rbx
  __int64 v7; // rcx
  int *v8; // r8
  int v9; // ecx
  __int64 v10; // rcx
  int *v11; // r8
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+48h] [rbp-38h]
  __int64 v20; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp-20h] BYREF
  __int64 v23; // [rsp+68h] [rbp-18h]

  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 56)) )
  {
    v2 = *((_DWORD *)a1 + 19);
    v3 = -*((_DWORD *)a1 + 18);
    LODWORD(v20) = *((_DWORD *)a1 + 14) - *((_DWORD *)a1 + 18);
    v4 = -v2;
    LODWORD(v21) = v3 + *((_DWORD *)a1 + 16);
    HIDWORD(v20) = v4 + *((_DWORD *)a1 + 15);
    HIDWORD(v21) = v4 + *((_DWORD *)a1 + 17);
    v5 = gpDispInfo;
    for ( i = *(_QWORD *)(gpDispInfo + 96LL); i; i = *(_QWORD *)(i + 16) )
    {
      if ( (*(_DWORD *)(i + 24) & 1) != 0 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x4000) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v7 = 0LL)
            : (v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
              !(_DWORD)v7) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) == 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v9 = 0)
              : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
                v8 = (int *)(i + 60),
                !v9) )
          {
            v8 = (int *)(i + 28);
          }
        }
        else
        {
          v8 = (int *)(i + 44);
        }
        if ( (unsigned int)IntersectRect(&v18, (int *)&v20, v8) )
        {
          LODWORD(v16) = *((_DWORD *)a1 + 18) + v18;
          LODWORD(v17) = *((_DWORD *)a1 + 18) + v19;
          HIDWORD(v16) = *((_DWORD *)a1 + 19) + HIDWORD(v18);
          HIDWORD(v17) = *((_DWORD *)a1 + 19) + HIDWORD(v19);
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(HIDWORD(v17)) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x4000) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v10 = 0LL)
              : (v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                !(_DWORD)v10) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) == 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v12 = 0)
                : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  v11 = (int *)(i + 60),
                  !v12) )
            {
              v11 = (int *)(i + 28);
            }
          }
          else
          {
            v11 = (int *)(i + 44);
          }
          IntersectRect(&v22, (int *)&v16, v11);
          v14 = v22 - v16;
          if ( v22 == v16 )
            v14 = v23 - v17;
          if ( v14 )
          {
            if ( !*((_QWORD *)a1 + 15) )
              *((_QWORD *)a1 + 15) = CreateEmptyRgn(v5, v13);
            GreSetRectRgn(ghrgnInv2, (unsigned int)v16, HIDWORD(v16), (unsigned int)v17);
            GreSetRectRgn(ghrgnGDC, (unsigned int)v22, HIDWORD(v22), (unsigned int)v23);
            GreCombineRgn(ghrgnInv2, ghrgnInv2, ghrgnGDC, 4LL);
            GreCombineRgn(*((_QWORD *)a1 + 15), *((_QWORD *)a1 + 15), ghrgnInv2, 2LL);
          }
          else
          {
            v15 = v18 - v20;
            if ( v18 == v20 )
              v15 = v19 - v21;
            if ( !v15 )
              return;
          }
        }
      }
    }
  }
}
