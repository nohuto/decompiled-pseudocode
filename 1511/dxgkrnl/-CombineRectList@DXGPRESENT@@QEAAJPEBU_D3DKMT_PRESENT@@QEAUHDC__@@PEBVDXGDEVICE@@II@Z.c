/*
 * XREFs of ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C00C6DB4
 * Callers:
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C00C70DC (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0007C34 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C00B375C (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00C79C8 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C00C7A84 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z @ 0x1C014CFF0 (-XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z.c)
 */

__int64 __fastcall DXGPRESENT::CombineRectList(
        DXGPRESENT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        const struct DXGDEVICE *a4,
        unsigned int a5,
        unsigned int a6)
{
  const struct _D3DKMT_PRESENT *v8; // rsi
  __int64 v10; // rcx
  unsigned int i; // edx
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 result; // rax
  int v16; // edi
  int v17; // r11d
  int v18; // edx
  int v19; // r10d
  int v20; // r8d
  int v21; // r9d
  const struct tagRECT *v22; // r15
  const struct tagRECT *v23; // r12
  int v24; // r11d
  int v25; // edi
  int v26; // ecx
  __int64 v27; // rax
  int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rcx
  LONG left; // r8d
  LONG v32; // r9d
  LONG v33; // r10d
  __int64 v34; // rdx
  bool v35; // cc
  LONG v36; // eax
  LONG v37; // ecx
  __int64 v38; // rax
  unsigned int v39; // r13d
  __int64 v40; // rcx
  const struct _CDDDXGK_INTERFACE *v41; // rcx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r15
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // r12
  struct tagRECT *v55; // rsi
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  char v57; // [rsp+38h] [rbp-59h]
  int v58; // [rsp+3Ch] [rbp-55h]
  int v59; // [rsp+40h] [rbp-51h]
  unsigned int v60; // [rsp+44h] [rbp-4Dh]
  unsigned int v61; // [rsp+48h] [rbp-49h] BYREF
  int v62; // [rsp+4Ch] [rbp-45h]
  unsigned int v63; // [rsp+50h] [rbp-41h]
  unsigned int v64; // [rsp+54h] [rbp-3Dh]
  struct tagRECT v65; // [rsp+58h] [rbp-39h] BYREF
  struct tagRECT v66; // [rsp+68h] [rbp-29h] BYREF
  struct tagRECT v67; // [rsp+78h] [rbp-19h] BYREF
  __int64 v68; // [rsp+88h] [rbp-9h]
  struct tagRECT v69; // [rsp+90h] [rbp-1h] BYREF

  v8 = a2;
  if ( !(unsigned int)DXGPRESENT::ComputeSrcDstRects(this, a2, a5, a6) )
    goto LABEL_42;
  if ( !*((_DWORD *)this + 29) )
  {
    v45 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v45 + 24) = 8009LL;
    WdLogEvent5_WdAssertion(v45);
  }
  if ( !*((_QWORD *)this + 2) )
  {
    v46 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v46 + 24) = 8010LL;
    WdLogEvent5_WdAssertion(v46);
  }
  for ( i = 0; ; ++i )
  {
    v12 = 1;
    if ( *((_DWORD *)this + 17) )
      v12 = *((_DWORD *)this + 17);
    if ( i >= v12 )
      break;
    v13 = i;
    *((_DWORD *)this + v13 + 88) = 0;
  }
  v14 = *((unsigned int *)this + 29) * (unsigned __int64)*(unsigned int *)(*((_QWORD *)this + 2) + 8LL);
  if ( v14 > 0xFFFFFFFF )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v47[3] = -1073741675LL;
    v47[4] = this;
    v47[5] = *((unsigned int *)this + 29);
    v47[6] = *(unsigned int *)(*((_QWORD *)this + 2) + 8LL);
    WdLogEvent5_WdError(v47);
    return 3221225621LL;
  }
  if ( !(_DWORD)v14 )
    goto LABEL_42;
  result = DXGPRESENT::GrowRectList(this, v14);
  if ( (int)result < 0 )
    return result;
  v16 = 0;
  v17 = 0;
  v18 = *((_DWORD *)this + 37);
  v19 = *((_DWORD *)this + 39) - v18;
  v20 = *((_DWORD *)this + 33);
  v21 = *((_DWORD *)this + 35) - v20;
  v59 = 0;
  v58 = 0;
  v63 = 0;
  v64 = 0;
  if ( v21 != v19 )
    goto LABEL_46;
  v22 = (const struct tagRECT *)((char *)this + 144);
  v23 = (const struct tagRECT *)((char *)this + 128);
  v24 = *((_DWORD *)this + 36);
  v25 = *((_DWORD *)this + 32);
  if ( *((_DWORD *)this + 34) - v25 != *((_DWORD *)this + 38) - v24 )
  {
    v16 = 0;
    v17 = 0;
LABEL_46:
    v23 = (const struct tagRECT *)((char *)this + 128);
    v22 = (const struct tagRECT *)((char *)this + 144);
    v57 = 1;
    v63 = ((*((_DWORD *)this + 34) - *((_DWORD *)this + 32)) << 16) / (*((_DWORD *)this + 38) - *((_DWORD *)this + 36));
    v64 = (v21 << 16) / v19;
    goto LABEL_17;
  }
  v16 = v25 - v24;
  v57 = 0;
  v59 = v16;
  v17 = v20 - v18;
  v58 = v20 - v18;
LABEL_17:
  v26 = v8->Flags.Value & 0x10100;
  v65 = 0LL;
  if ( v26 == 65792 )
  {
    v27 = *((_QWORD *)a4 + 5);
    v65 = *(struct tagRECT *)(1016LL * v8->VidPnSourceId
                            + *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a4 + 354) + 1984LL) + 136LL)
                            + 628);
    v28 = (*(__int64 (__fastcall **)(HDC, unsigned int *))(*(_QWORD *)(v27 + 80) + 328LL))(a3, &v61);
    v17 = v58;
    if ( v28 )
    {
      v65.left -= v61;
      v65.right -= v61;
      v65.top -= v62;
      v65.bottom -= v62;
    }
  }
  v29 = 0;
  v61 = 0;
  if ( *((_DWORD *)this + 29) )
  {
    while ( 1 )
    {
      v30 = *((_QWORD *)this + 15);
      left = v22->left;
      v32 = *((_DWORD *)this + 38);
      v33 = *((_DWORD *)this + 37);
      v34 = 2LL * v29;
      v35 = *(_DWORD *)(v30 + 16LL * v29) <= v22->left;
      v36 = *(_DWORD *)(v30 + 16LL * v29 + 12);
      if ( !v35 )
        left = *(_DWORD *)(v30 + 8 * v34);
      v35 = *(_DWORD *)(v30 + 8 * v34 + 8) < v32;
      v67.left = left;
      if ( v35 )
        v32 = *(_DWORD *)(v30 + 8 * v34 + 8);
      v35 = *(_DWORD *)(v30 + 8 * v34 + 4) <= v33;
      v67.right = v32;
      if ( !v35 )
        v33 = *(_DWORD *)(v30 + 8 * v34 + 4);
      v37 = *((_DWORD *)this + 39);
      v67.top = v33;
      if ( v36 < v37 )
        v37 = v36;
      v67.bottom = v37;
      if ( v37 > v33 && v32 > left )
      {
        if ( v57 )
        {
          DXGPRESENT::XformRect(v23, v22, &v66, &v67, v63, v64);
        }
        else
        {
          v66.left = left + v16;
          v66.right = v32 + v16;
          v66.top = v33 + v17;
          v66.bottom = v37 + v17;
        }
        v38 = *((_QWORD *)this + 2);
        v39 = 0;
        v60 = 0;
        v40 = v38 + 32;
        v68 = v38 + 32;
        if ( *(_DWORD *)(v38 + 8) )
          break;
      }
LABEL_41:
      v23 = (const struct tagRECT *)((char *)this + 128);
      v17 = v58;
      v29 = v61 + 1;
      v61 = v29;
      if ( v29 >= *((_DWORD *)this + 29) )
        goto LABEL_42;
    }
    while ( 1 )
    {
      if ( DXGPRESENT::IntersectRect(&v69, (const struct tagRECT *)(v40 + 16LL * v39), &v66) )
      {
        Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v8->Flags.Value;
        if ( (*(_DWORD *)&Value & 0x10000) == 0 )
        {
          v48 = 0LL;
          if ( *((_DWORD *)this + 17) )
          {
            do
            {
              v49 = *((_QWORD *)a4 + 354);
              if ( !v49 || !*(_QWORD *)(v49 + 1984) )
              {
                v50 = WdLogNewEntry5_WdAssertion(v41);
                *(_QWORD *)(v50 + 24) = 8142LL;
                WdLogEvent5_WdAssertion(v50);
              }
              v51 = *(_QWORD *)(*((_QWORD *)a4 + 354) + 1984LL);
              if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v51 + 16)) )
              {
                v53 = WdLogNewEntry5_WdAssertion(v52);
                *(_QWORD *)(v53 + 24) = 8145LL;
                WdLogEvent5_WdAssertion(v53);
              }
              v54 = *(_QWORD *)(v51 + 136) + 1016LL * (unsigned int)v48;
              v55 = (struct tagRECT *)(*((_QWORD *)this + v48 + 28) + 16LL * *((unsigned int *)this + v48 + 88));
              if ( DXGPRESENT::IntersectRect(v55, &v69, (const struct tagRECT *)(v54 + 628))
                && ((a2->Flags.Value & 0x100) == 0 || (_DWORD)v48 == a2->VidPnSourceId) )
              {
                v55->top -= *(_DWORD *)(v54 + 632);
                v55->bottom -= *(_DWORD *)(v54 + 632);
                v55->left -= *(_DWORD *)(v54 + 628);
                v55->right -= *(_DWORD *)(v54 + 628);
                CddInterface = ADAPTER_DISPLAY::GetCddInterface((DXGADAPTER **)v51, v48);
                v41 = CddInterface;
                if ( CddInterface )
                  (*((void (__fastcall **)(_QWORD, struct tagRECT *))CddInterface + 1))(*(_QWORD *)CddInterface, v55);
                ++*((_DWORD *)this + v48 + 88);
                *((_DWORD *)this + 1) &= ~2u;
              }
              v48 = (unsigned int)(v48 + 1);
            }
            while ( (unsigned int)v48 < *((_DWORD *)this + 17) );
            v39 = v60;
            v8 = a2;
          }
          goto LABEL_39;
        }
        v43 = *((unsigned int *)this + 88);
        v44 = *((_QWORD *)this + 28);
        if ( (*(_WORD *)&Value & 0x100) == 0 )
        {
          *(struct tagRECT *)(v44 + 16 * v43) = v69;
LABEL_38:
          ++*((_DWORD *)this + 88);
          *((_DWORD *)this + 1) &= ~2u;
          goto LABEL_39;
        }
        if ( DXGPRESENT::IntersectRect((struct tagRECT *)(v44 + 16 * v43), &v69, &v65) )
          goto LABEL_38;
      }
LABEL_39:
      ++v39;
      v40 = v68;
      v60 = v39;
      if ( v39 >= *(_DWORD *)(*((_QWORD *)this + 2) + 8LL) )
      {
        v16 = v59;
        v22 = (const struct tagRECT *)((char *)this + 144);
        goto LABEL_41;
      }
    }
  }
LABEL_42:
  *((_DWORD *)this + 1) &= ~8u;
  return 0LL;
}
