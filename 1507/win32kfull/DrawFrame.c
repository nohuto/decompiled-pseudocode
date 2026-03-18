/*
 * XREFs of DrawFrame @ 0x1C00F9D40
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01FFBA8 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     xxxMNDrawFullNC @ 0x1C0241710 (xxxMNDrawFullNC.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     GrePolyPatBlt @ 0x1C00865E0 (GrePolyPatBlt.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall DrawFrame(HDC a1, int *a2, int a3, int a4)
{
  int v4; // esi
  int v6; // r14d
  __int64 v7; // r12
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  int v14; // ebx
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _DWORD *v19; // rax
  int v20; // edi
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v32; // ecx
  _DWORD v33[4]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v34; // [rsp+48h] [rbp-29h]
  int v35; // [rsp+50h] [rbp-21h]
  int v36; // [rsp+54h] [rbp-1Dh]
  int v37; // [rsp+58h] [rbp-19h]
  int v38; // [rsp+5Ch] [rbp-15h]
  __int64 v39; // [rsp+60h] [rbp-11h]
  int v40; // [rsp+68h] [rbp-9h]
  int v41; // [rsp+6Ch] [rbp-5h]
  int v42; // [rsp+70h] [rbp-1h]
  int v43; // [rsp+74h] [rbp+3h]
  __int64 v44; // [rsp+78h] [rbp+7h]
  int v45; // [rsp+80h] [rbp+Fh]
  int v46; // [rsp+84h] [rbp+13h]
  int v47; // [rsp+88h] [rbp+17h]
  int v48; // [rsp+8Ch] [rbp+1Bh]
  __int64 v49; // [rsp+90h] [rbp+1Fh]

  v4 = *a2;
  v6 = a2[1];
  v7 = a4;
  if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x4000) == 0 )
    {
LABEL_21:
      v13 = (_DWORD *)(gpsi + 2288LL);
      goto LABEL_5;
    }
  }
  else if ( IsDPIDWMSysMet(v10)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                      + 260LL) & 1 )
  {
    goto LABEL_21;
  }
  if ( IsDPIDWMSysMet(5uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v28 = 0)
      : (v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v28) )
  {
    v13 = (_DWORD *)(gpsi + 2676LL);
  }
  else
  {
    v13 = (_DWORD *)(gpsi + 1900LL);
  }
LABEL_5:
  v14 = a3 * *v13;
  if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) == 0 )
    {
LABEL_37:
      v18 = gpsi;
      v19 = (_DWORD *)(gpsi + 2292LL);
      goto LABEL_9;
    }
  }
  else if ( IsDPIDWMSysMet(v15)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                      + 260LL) & 1 )
  {
    goto LABEL_37;
  }
  if ( IsDPIDWMSysMet(6uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v32 = 0)
      : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v32) )
  {
    v18 = gpsi;
    v19 = (_DWORD *)(gpsi + 2680LL);
  }
  else
  {
    v18 = gpsi;
    v19 = (_DWORD *)(gpsi + 1904LL);
  }
LABEL_9:
  v20 = *v19 * a3;
  v21 = a2[2] - v14 - v4;
  v22 = a2[3] - v20 - v6;
  if ( (v7 & 0xFFFFFFF8) == 0xF8 )
    v23 = *(_QWORD *)(v18 + 3944);
  else
    v23 = *(_QWORD *)(v18 + 8 * (v7 >> 3) + 3696);
  v37 = a2[2] - v14 - v4;
  v42 = v21;
  v35 = v14 + v4;
  v45 = v4 + v21;
  v33[3] = v22;
  v46 = v20 + v6;
  v34 = v23;
  v39 = v23;
  v44 = v23;
  v48 = v22;
  v49 = v23;
  v33[0] = v4;
  v33[1] = v6;
  v33[2] = v14;
  v36 = v6;
  v38 = v20;
  v40 = v4;
  v41 = v22 + v6;
  v43 = v20;
  v47 = v14;
  GrePolyPatBlt(a1, (v7 & 4) != 0 ? 5898313 : 15728673, (struct _POLYPATBLT *)v33, 4u);
  return 1LL;
}
