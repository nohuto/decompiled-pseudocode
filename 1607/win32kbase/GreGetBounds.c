/*
 * XREFs of GreGetBounds @ 0x1C0039760
 * Callers:
 *     CreateCacheDC @ 0x1C0020830 (CreateCacheDC.c)
 *     GetMonitorDC @ 0x1C0038300 (GetMonitorDC.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C001EF08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0028CB0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     HmgShareLock @ 0x1C0029670 (HmgShareLock.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C002C700 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0039974 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C00C53B8 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBounds(unsigned int a1, struct tagRECT *a2, char a3)
{
  unsigned int v6; // esi
  unsigned int *v7; // rax
  unsigned int *v8; // r8
  __int64 v9; // rax
  struct tagRECT *v10; // r8
  struct tagRECT v11; // xmm0
  int v12; // edx
  struct EPOINTL *v13; // rax
  int v14; // ecx
  struct tagRECT v16; // [rsp+20h] [rbp-40h] BYREF
  unsigned int *v17; // [rsp+30h] [rbp-30h] BYREF
  int v18; // [rsp+38h] [rbp-28h]
  int v19; // [rsp+3Ch] [rbp-24h]
  _BYTE v20[32]; // [rsp+40h] [rbp-20h] BYREF

  v18 = 0;
  v19 = 0;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v20);
  v6 = 1;
  v7 = (unsigned int *)HmgShareLock(a1, 1);
  v17 = v7;
  v8 = v7;
  v16 = 0LL;
  if ( !v7 )
    goto LABEL_27;
  if ( (a3 & 1) != 0 )
  {
    if ( (a3 & 4) != 0 )
      v7[9] |= 0x40u;
    else
      v7[9] |= 0x20u;
  }
  else
  {
    if ( (a3 & 2) == 0 )
      goto LABEL_11;
    if ( (a3 & 4) != 0 )
      v7[9] &= ~0x40u;
    else
      v7[9] &= ~0x20u;
  }
  v8 = v17;
LABEL_11:
  if ( (a3 & 4) == 0 )
  {
    v11 = (struct tagRECT)*((_OWORD *)v8 + 91);
    goto LABEL_18;
  }
  v9 = *((_QWORD *)v8 + 196);
  if ( v9 && (a3 & 3) == 0 )
    v16 = *(struct tagRECT *)(v9 + 88);
  if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v16) )
  {
    v11 = v10[92];
LABEL_18:
    v16 = v11;
  }
  if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v16) || IsRectEmptyInl(&v16) )
  {
LABEL_27:
    v6 = 0;
    goto LABEL_28;
  }
  if ( a2 )
  {
    v13 = DC::eptlOrigin((DC *)v8);
    v14 = *(_DWORD *)v13;
    LODWORD(v13) = *((_DWORD *)v13 + 1);
    v16.top += (int)v13;
    v16.left += v14;
    v16.right += v14;
    v16.bottom += (int)v13;
    *a2 = v16;
  }
  if ( v12 )
  {
    v8[368] = 0x7FFFFFFF;
    v17[369] = 0x7FFFFFFF;
    v17[370] = 0x80000000;
    v17[371] = 0x80000000;
  }
  else
  {
    v8[364] = 0x7FFFFFFF;
    v17[365] = 0x7FFFFFFF;
    v17[366] = 0x80000000;
    v17[367] = 0x80000000;
  }
  v8 = v17;
LABEL_28:
  if ( v8 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v17);
    HmgDecrementShareReferenceCount(v17);
  }
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v20);
  return v6;
}
