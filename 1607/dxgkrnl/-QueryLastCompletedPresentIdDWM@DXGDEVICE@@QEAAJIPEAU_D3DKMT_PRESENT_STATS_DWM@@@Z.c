/*
 * XREFs of ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C0143BF4
 * Callers:
 *     DxgkGetDeviceState @ 0x1C00C61B0 (DxgkGetDeviceState.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C0184340 (-QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::QueryLastCompletedPresentIdDWM(
        DXGDEVICE *this,
        unsigned int a2,
        struct _D3DKMT_PRESENT_STATS_DWM *a3)
{
  __int64 v3; // rax
  struct DXGADAPTER *v5; // rdi
  __int64 v6; // rbp
  int PresentStatsDWM; // ebx
  __int64 v9; // rdx
  _BYTE v10[80]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *((_QWORD *)this + 2);
  v5 = (struct DXGADAPTER *)*((_QWORD *)this + 357);
  v6 = a2;
  if ( v5 == *(struct DXGADAPTER **)(v3 + 16) )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v3 + 376) + 8LL) + 400LL))(
             *((_QWORD *)this + 71),
             a2);
  if ( !v5 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, v5, 0LL);
  PresentStatsDWM = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v10);
  if ( PresentStatsDWM >= 0 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)v5 + 266) + 256LL);
    if ( v9 )
      PresentStatsDWM = BLTQUEUE::QueryPresentStatsDWM((BLTQUEUE *)(*(_QWORD *)(v9 + 8) + 2632 * v6), a3);
    else
      PresentStatsDWM = -1073741811;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v10);
  return (unsigned int)PresentStatsDWM;
}
