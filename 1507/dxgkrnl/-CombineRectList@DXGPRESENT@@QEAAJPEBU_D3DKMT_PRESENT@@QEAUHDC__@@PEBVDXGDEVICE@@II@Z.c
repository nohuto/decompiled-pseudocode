/*
 * XREFs of ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C00B19EC
 * Callers:
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C00B1D80 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C000E354 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00B218C (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C00B2248 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z @ 0x1C0149370 (-XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z.c)
 */

__int64 __fastcall DXGPRESENT::CombineRectList(
        DXGPRESENT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        const struct DXGDEVICE *a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int i; // edx
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned int j; // esi
  unsigned int v19; // ecx
  int v20; // edi
  int v21; // r11d
  int v22; // edx
  int v23; // r10d
  int v24; // r8d
  int v25; // r9d
  const struct tagRECT *v26; // rsi
  const struct tagRECT *v27; // r12
  int v28; // r11d
  int v29; // edi
  const struct _D3DKMT_PRESENT *v30; // r14
  __int64 v31; // rax
  int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // rcx
  LONG left; // r8d
  LONG v36; // r9d
  LONG v37; // r10d
  __int64 v38; // rdx
  bool v39; // cc
  LONG v40; // eax
  LONG v41; // ecx
  __int64 v42; // rax
  unsigned int v43; // r13d
  __int64 v44; // rcx
  __int64 v45; // rdx
  const struct _CDDDXGK_INTERFACE *v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  __int64 v50; // rcx
  __int64 v51; // rdx
  SIZE_T v53; // rax
  PVOID v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r15
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  struct tagRECT *v69; // rsi
  __int64 v70; // r12
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  char v72; // [rsp+38h] [rbp-59h]
  int v73; // [rsp+3Ch] [rbp-55h]
  int v74; // [rsp+40h] [rbp-51h]
  unsigned int v75; // [rsp+44h] [rbp-4Dh]
  unsigned int v76; // [rsp+48h] [rbp-49h] BYREF
  int v77; // [rsp+4Ch] [rbp-45h]
  unsigned int v78; // [rsp+50h] [rbp-41h]
  unsigned int v79; // [rsp+54h] [rbp-3Dh]
  struct tagRECT v80; // [rsp+58h] [rbp-39h] BYREF
  struct tagRECT v81; // [rsp+68h] [rbp-29h] BYREF
  struct tagRECT v82; // [rsp+78h] [rbp-19h] BYREF
  __int64 v83; // [rsp+88h] [rbp-9h]
  struct tagRECT v84; // [rsp+90h] [rbp-1h] BYREF

  if ( !(unsigned int)DXGPRESENT::ComputeSrcDstRects(this, a2, a5, a6) )
    goto LABEL_47;
  if ( !*((_DWORD *)this + 29) )
  {
    v56 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v56 + 24) = 8063LL;
    WdLogEvent5_WdAssertion(v56);
  }
  if ( !*((_QWORD *)this + 2) )
  {
    v57 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v57 + 24) = 8064LL;
    WdLogEvent5_WdAssertion(v57);
  }
  for ( i = 0; ; ++i )
  {
    v14 = *((_DWORD *)this + 17);
    v15 = 1LL;
    if ( v14 )
      v15 = v14;
    if ( i >= (unsigned int)v15 )
      break;
    v16 = i;
    *((_DWORD *)this + v16 + 88) = 0;
  }
  v17 = *((unsigned int *)this + 29) * (unsigned __int64)*(unsigned int *)(*((_QWORD *)this + 2) + 8LL);
  if ( v17 > 0xFFFFFFFF )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v58[3] = -1073741675LL;
    v58[4] = this;
    v58[5] = *((unsigned int *)this + 29);
    v58[6] = *(unsigned int *)(*((_QWORD *)this + 2) + 8LL);
    WdLogEvent5_WdError(v58);
    return 3221225621LL;
  }
  if ( !(_DWORD)v17 )
    goto LABEL_47;
  for ( j = 0; ; ++j )
  {
    v19 = 1;
    if ( *((_DWORD *)this + 17) )
      v19 = *((_DWORD *)this + 17);
    if ( j >= v19 )
    {
      v20 = 0;
      v21 = 0;
      v22 = *((_DWORD *)this + 37);
      v23 = *((_DWORD *)this + 39) - v22;
      v24 = *((_DWORD *)this + 33);
      v25 = *((_DWORD *)this + 35) - v24;
      v74 = 0;
      v73 = 0;
      v78 = 0;
      v79 = 0;
      if ( v25 == v23 )
      {
        v26 = (const struct tagRECT *)((char *)this + 144);
        v27 = (const struct tagRECT *)((char *)this + 128);
        v28 = *((_DWORD *)this + 36);
        v29 = *((_DWORD *)this + 32);
        if ( *((_DWORD *)this + 34) - v29 == *((_DWORD *)this + 38) - v28 )
        {
          v20 = v29 - v28;
          v72 = 0;
          v74 = v20;
          v21 = v24 - v22;
          v73 = v24 - v22;
LABEL_22:
          v30 = a2;
          v80 = 0LL;
          if ( (a2->Flags.Value & 0x10100) == 0x10100 )
          {
            v31 = *((_QWORD *)a4 + 5);
            v80 = *(struct tagRECT *)(1008LL * a2->VidPnSourceId
                                    + *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a4 + 2338) + 1976LL) + 112LL)
                                    + 628);
            v32 = (*(__int64 (__fastcall **)(HDC, unsigned int *))(*(_QWORD *)(v31 + 80) + 328LL))(a3, &v76);
            v21 = v73;
            if ( v32 )
            {
              v80.left -= v76;
              v80.right -= v76;
              v80.top -= v77;
              v80.bottom -= v77;
            }
          }
          v33 = 0;
          v76 = 0;
          if ( *((_DWORD *)this + 29) )
          {
            while ( 1 )
            {
              v34 = *((_QWORD *)this + 15);
              left = v26->left;
              v36 = *((_DWORD *)this + 38);
              v37 = *((_DWORD *)this + 37);
              v38 = 2LL * v33;
              v39 = *(_DWORD *)(v34 + 16LL * v33) <= v26->left;
              v40 = *(_DWORD *)(v34 + 16LL * v33 + 12);
              if ( !v39 )
                left = *(_DWORD *)(v34 + 8 * v38);
              v39 = *(_DWORD *)(v34 + 8 * v38 + 8) < v36;
              v82.left = left;
              if ( v39 )
                v36 = *(_DWORD *)(v34 + 8 * v38 + 8);
              v39 = *(_DWORD *)(v34 + 8 * v38 + 4) <= v37;
              v82.right = v36;
              if ( !v39 )
                v37 = *(_DWORD *)(v34 + 8 * v38 + 4);
              v41 = *((_DWORD *)this + 39);
              v82.top = v37;
              if ( v40 < v41 )
                v41 = v40;
              v82.bottom = v41;
              if ( v41 > v37 && v36 > left )
              {
                if ( v72 )
                {
                  DXGPRESENT::XformRect(v27, v26, &v81, &v82, v78, v79);
                }
                else
                {
                  v81.left = left + v20;
                  v81.right = v36 + v20;
                  v81.top = v37 + v21;
                  v81.bottom = v41 + v21;
                }
                v42 = *((_QWORD *)this + 2);
                v43 = 0;
                v75 = 0;
                v44 = v42 + 32;
                v83 = v42 + 32;
                if ( *(_DWORD *)(v42 + 8) )
                  break;
              }
LABEL_46:
              v27 = (const struct tagRECT *)((char *)this + 128);
              v21 = v73;
              v33 = v76 + 1;
              v76 = v33;
              if ( v33 >= *((_DWORD *)this + 29) )
                goto LABEL_47;
            }
            while ( 1 )
            {
              if ( DXGPRESENT::IntersectRect(&v84, (const struct tagRECT *)(v44 + 16LL * v43), &v81) )
              {
                Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v30->Flags.Value;
                if ( (*(_DWORD *)&Value & 0x10000) == 0 )
                {
                  v60 = 0LL;
                  if ( *((_DWORD *)this + 17) )
                  {
                    do
                    {
                      v61 = *((_QWORD *)a4 + 2338);
                      if ( !v61 || !*(_QWORD *)(v61 + 1976) )
                      {
                        v62 = WdLogNewEntry5_WdAssertion(v46, v45, v47, v48);
                        *(_QWORD *)(v62 + 24) = 8196LL;
                        WdLogEvent5_WdAssertion(v62);
                      }
                      v63 = *(_QWORD *)(*((_QWORD *)a4 + 2338) + 1976LL);
                      if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v63 + 16)) )
                      {
                        v68 = WdLogNewEntry5_WdAssertion(v65, v64, v66, v67);
                        *(_QWORD *)(v68 + 24) = 8199LL;
                        WdLogEvent5_WdAssertion(v68);
                      }
                      v69 = (struct tagRECT *)(*((_QWORD *)this + v60 + 28) + 16LL * *((unsigned int *)this + v60 + 88));
                      v70 = 1008LL * (unsigned int)v60 + *(_QWORD *)(v63 + 112);
                      if ( DXGPRESENT::IntersectRect(v69, &v84, (const struct tagRECT *)(v70 + 628))
                        && ((a2->Flags.Value & 0x100) == 0 || (_DWORD)v60 == a2->VidPnSourceId) )
                      {
                        v69->top -= *(_DWORD *)(v70 + 632);
                        v69->bottom -= *(_DWORD *)(v70 + 632);
                        v69->left -= *(_DWORD *)(v70 + 628);
                        v69->right -= *(_DWORD *)(v70 + 628);
                        CddInterface = ADAPTER_DISPLAY::GetCddInterface((DXGADAPTER **)v63, v60);
                        v46 = CddInterface;
                        if ( CddInterface )
                          (*((void (__fastcall **)(_QWORD, struct tagRECT *))CddInterface + 1))(
                            *(_QWORD *)CddInterface,
                            v69);
                        ++*((_DWORD *)this + v60 + 88);
                        *((_DWORD *)this + 1) &= ~2u;
                      }
                      v60 = (unsigned int)(v60 + 1);
                    }
                    while ( (unsigned int)v60 < *((_DWORD *)this + 17) );
                    v43 = v75;
                    v30 = a2;
                  }
                  goto LABEL_44;
                }
                v50 = *((unsigned int *)this + 88);
                v51 = *((_QWORD *)this + 28);
                if ( (*(_WORD *)&Value & 0x100) == 0 )
                {
                  *(struct tagRECT *)(v51 + 16 * v50) = v84;
LABEL_43:
                  ++*((_DWORD *)this + 88);
                  *((_DWORD *)this + 1) &= ~2u;
                  goto LABEL_44;
                }
                if ( DXGPRESENT::IntersectRect((struct tagRECT *)(v51 + 16 * v50), &v84, &v80) )
                  goto LABEL_43;
              }
LABEL_44:
              ++v43;
              v44 = v83;
              v75 = v43;
              if ( v43 >= *(_DWORD *)(*((_QWORD *)this + 2) + 8LL) )
              {
                v20 = v74;
                v26 = (const struct tagRECT *)((char *)this + 144);
                goto LABEL_46;
              }
            }
          }
LABEL_47:
          *((_DWORD *)this + 1) &= ~8u;
          return 0LL;
        }
        v20 = 0;
        v21 = 0;
      }
      v27 = (const struct tagRECT *)((char *)this + 128);
      v26 = (const struct tagRECT *)((char *)this + 144);
      v72 = 1;
      v78 = ((*((_DWORD *)this + 34) - *((_DWORD *)this + 32)) << 16)
          / (*((_DWORD *)this + 38) - *((_DWORD *)this + 36));
      v79 = (v25 << 16) / v23;
      goto LABEL_22;
    }
    if ( *((_DWORD *)this + j + 40) >= (unsigned int)v17 )
      continue;
    operator delete(*((void **)this + j + 28));
    v53 = 16LL * (unsigned int)v17;
    if ( !is_mul_ok((unsigned int)v17, 0x10uLL) )
      v53 = -1LL;
    v54 = operator new[](v53, 0x4B677844u, PagedPool);
    *((_QWORD *)this + j + 28) = v54;
    if ( !v54 )
      break;
    *((_DWORD *)this + j + 40) = v17;
  }
  *((_DWORD *)this + j + 40) = 0;
  v59 = WdLogNewEntry5_WdLowResource(v55);
  *(_QWORD *)(v59 + 32) = (unsigned int)v17;
  *(_QWORD *)(v59 + 24) = this;
  WdLogEvent5_WdLowResource(v59);
  return 3221225495LL;
}
