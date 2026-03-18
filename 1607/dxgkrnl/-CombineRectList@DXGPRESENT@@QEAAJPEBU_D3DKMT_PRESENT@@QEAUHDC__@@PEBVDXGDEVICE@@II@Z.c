/*
 * XREFs of ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C00DBD30
 * Callers:
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C00DC1A0 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0006908 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C001CE68 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00DC5B8 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C0171234 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z @ 0x1C0172DC0 (-XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z.c)
 */

__int64 __fastcall DXGPRESENT::CombineRectList(
        struct tagRECT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        const struct DXGDEVICE *a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int top; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned int i; // edi
  unsigned int v14; // eax
  LONG bottom; // r10d
  int v16; // r15d
  LONG v17; // r8d
  int v18; // r9d
  int v19; // r12d
  LONG v20; // edx
  int v21; // r10d
  LONG left; // r11d
  LONG v23; // edi
  __int64 VidPnSourceId; // rsi
  __int64 v25; // rdi
  __int64 v26; // rcx
  int v27; // esi
  LONG v28; // r13d
  unsigned int v29; // edi
  const struct tagRECT *v30; // r10
  LONG *v31; // r9
  LONG v32; // r8d
  LONG right; // edx
  LONG v34; // ecx
  LONG v35; // eax
  LONG v36; // r8d
  LONG v37; // edx
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // r14d
  __int64 v41; // r9
  LONG v42; // r15d
  LONG v43; // r12d
  LONG *v44; // rax
  LONG v45; // r11d
  LONG v46; // r9d
  int v47; // r8d
  LONG v48; // edx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  __int64 v50; // rcx
  __int64 v51; // rdi
  LONG v52; // eax
  __int64 v53; // r10
  LONG v54; // ecx
  LONG *v55; // r10
  int v56; // ecx
  LONG v57; // eax
  SIZE_T v59; // rax
  PVOID v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rax
  __int64 v66; // r13
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rdi
  const struct tagRECT *ContentRect; // rax
  struct tagRECT *v75; // rdi
  _DWORD *v76; // r8
  DXGADAPTER **v77; // rcx
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  char v79; // [rsp+30h] [rbp-69h]
  struct tagRECT v80; // [rsp+38h] [rbp-61h] BYREF
  LONG v81; // [rsp+48h] [rbp-51h]
  LONG v82; // [rsp+4Ch] [rbp-4Dh]
  unsigned int v83; // [rsp+50h] [rbp-49h]
  unsigned int v84; // [rsp+54h] [rbp-45h]
  LONG v85; // [rsp+58h] [rbp-41h]
  int v86; // [rsp+5Ch] [rbp-3Dh]
  int v87; // [rsp+60h] [rbp-39h]
  int v88; // [rsp+64h] [rbp-35h]
  unsigned int v89; // [rsp+68h] [rbp-31h] BYREF
  int v90; // [rsp+6Ch] [rbp-2Dh]
  __int128 v91; // [rsp+70h] [rbp-29h]
  struct tagRECT v92; // [rsp+80h] [rbp-19h] BYREF
  struct tagRECT v93; // [rsp+90h] [rbp-9h] BYREF
  ADAPTER_DISPLAY *v94; // [rsp+A0h] [rbp+7h]
  LONG *v95; // [rsp+A8h] [rbp+Fh]

  if ( !(unsigned int)DXGPRESENT::ComputeSrcDstRects((DXGPRESENT *)this, a2, a5, a6) )
    goto LABEL_70;
  if ( !this[7].top )
  {
    v62 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v62 + 24) = 8592LL;
    WdLogEvent5_WdAssertion(v62);
  }
  if ( !*(_QWORD *)&this[1].left )
  {
    v63 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v63 + 24) = 8593LL;
    WdLogEvent5_WdAssertion(v63);
  }
  v9 = 0LL;
  while ( 1 )
  {
    top = this[4].top;
    if ( !top )
      top = 1;
    if ( (unsigned int)v9 >= top )
      break;
    v11 = (unsigned int)v9;
    v9 = (unsigned int)(v9 + 1);
    *(&this[22].left + v11) = 0;
  }
  v12 = (unsigned int)this[7].top * (unsigned __int64)*(unsigned int *)(*(_QWORD *)&this[1].left + 8LL);
  if ( v12 > 0xFFFFFFFF )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v64[3] = -1073741675LL;
    v64[4] = this;
    v64[5] = (unsigned int)this[7].top;
    v64[6] = *(unsigned int *)(*(_QWORD *)&this[1].left + 8LL);
    WdLogEvent5_WdError(v64);
    return 3221225621LL;
  }
  if ( !(_DWORD)v12 )
    goto LABEL_70;
  for ( i = 0; ; ++i )
  {
    v14 = this[4].top;
    if ( !v14 )
      v14 = 1;
    if ( i >= v14 )
    {
      bottom = this[9].bottom;
      v16 = 0;
      v17 = this[8].top;
      v18 = this[8].bottom - v17;
      v19 = 0;
      v87 = 0;
      v88 = 0;
      v84 = 0;
      v83 = 0;
      v20 = this[9].top;
      v21 = bottom - v20;
      if ( v18 == v21 && (left = this[9].left, v23 = this[8].left, this[8].right - v23 == this[9].right - left) )
      {
        v79 = 0;
        v16 = v23 - left;
        v19 = v17 - v20;
        v87 = v23 - left;
        v88 = v17 - v20;
      }
      else
      {
        v79 = 1;
        v84 = ((this[8].right - this[8].left) << 16) / (this[9].right - this[9].left);
        v83 = (v18 << 16) / v21;
      }
      v91 = 0LL;
      if ( (a2->Flags.Value & 0x10100) != 0x10100 )
        goto LABEL_78;
      VidPnSourceId = a2->VidPnSourceId;
      v25 = *(_QWORD *)(*((_QWORD *)a4 + 357) + 2128LL);
      v26 = *(_QWORD *)(v25 + 16);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v26 + 160) )
        ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v26 + 144));
      v91 = *(_OWORD *)(1016 * VidPnSourceId + *(_QWORD *)(v25 + 112) + 628);
      if ( (*(unsigned int (__fastcall **)(HDC, unsigned int *))(*(_QWORD *)(*((_QWORD *)a4 + 5) + 72LL) + 328LL))(
             a3,
             &v89) )
      {
        v27 = DWORD1(v91) - v90;
        v28 = HIDWORD(v91) - v90;
        v81 = v91 - v89;
        v85 = DWORD2(v91) - v89;
      }
      else
      {
LABEL_78:
        v28 = HIDWORD(v91);
        v27 = DWORD1(v91);
        v85 = DWORD2(v91);
        v81 = v91;
      }
      v29 = 0;
      v86 = v27;
      v82 = v28;
      v89 = 0;
      if ( this[7].top )
      {
        v30 = this + 9;
        while ( 1 )
        {
          v31 = (LONG *)(*(_QWORD *)&this[7].right + 16LL * v29);
          v32 = *v31;
          if ( *v31 > v30->left )
          {
            v93.left = *v31;
          }
          else
          {
            v32 = v30->left;
            v93.left = v30->left;
          }
          right = v31[2];
          if ( right < this[9].right )
          {
            v93.right = v31[2];
          }
          else
          {
            right = this[9].right;
            v93.right = right;
          }
          v34 = v31[1];
          if ( v34 > this[9].top )
          {
            v93.top = v31[1];
          }
          else
          {
            v34 = this[9].top;
            v93.top = v34;
          }
          v35 = v31[3];
          if ( v35 >= this[9].bottom )
            v35 = this[9].bottom;
          v93.bottom = v35;
          if ( v35 > v34 && right > v32 )
          {
            if ( v79 )
            {
              DXGPRESENT::XformRect(this + 8, v30, &v80, &v93, v84, v83);
              v37 = v80.right;
              v30 = this + 9;
              v36 = v80.left;
              v38 = (unsigned int)v80.top;
            }
            else
            {
              v36 = v16 + v32;
              v37 = v16 + right;
              v80.left = v36;
              v38 = (unsigned int)(v19 + v34);
              v80.right = v37;
              v80.top = v38;
              v80.bottom = v35 + v19;
            }
            v39 = *(_QWORD *)&this[1].left;
            v40 = 0;
            v41 = v39 + 32;
            *(_QWORD *)&v91 = v39 + 32;
            if ( *(_DWORD *)(v39 + 8) )
              break;
          }
LABEL_69:
          v89 = ++v29;
          if ( v29 >= this[7].top )
            goto LABEL_70;
        }
        v42 = v80.bottom;
        v43 = v81;
        while ( 1 )
        {
          v44 = (LONG *)(v41 + 16LL * v40);
          v45 = *v44;
          if ( *v44 > v36 )
          {
            v92.left = *v44;
          }
          else
          {
            v45 = v36;
            v92.left = v36;
          }
          v46 = v44[2];
          if ( v46 < v37 )
          {
            v92.right = v44[2];
          }
          else
          {
            v46 = v37;
            v92.right = v37;
          }
          if ( v45 >= v46 )
            goto LABEL_67;
          v47 = v44[1];
          if ( v47 > (int)v38 )
          {
            v92.top = v44[1];
          }
          else
          {
            v47 = v38;
            v92.top = v38;
          }
          v48 = v44[3];
          if ( v48 >= v42 )
            v48 = v42;
          v92.bottom = v48;
          if ( v47 < v48 )
          {
            Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
            if ( (*(_DWORD *)&Value & 0x10000) == 0 )
            {
              v66 = 0LL;
              if ( this[4].top )
              {
                do
                {
                  v67 = *((_QWORD *)a4 + 357);
                  if ( !v67 || !*(_QWORD *)(v67 + 2128) )
                  {
                    v68 = WdLogNewEntry5_WdAssertion(v38);
                    *(_QWORD *)(v68 + 24) = 8725LL;
                    WdLogEvent5_WdAssertion(v68);
                  }
                  v94 = *(ADAPTER_DISPLAY **)(*((_QWORD *)a4 + 357) + 2128LL);
                  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v94 + 2)) )
                  {
                    v70 = WdLogNewEntry5_WdAssertion(v69);
                    *(_QWORD *)(v70 + 24) = 8728LL;
                    WdLogEvent5_WdAssertion(v70);
                  }
                  v71 = *((_QWORD *)&this[14].left + v66);
                  v72 = (unsigned int)v66 + 88LL;
                  v73 = *((unsigned int *)&this->left + v72);
                  v95 = &this->left + v72;
                  ContentRect = ADAPTER_DISPLAY::GetContentRect((DXGADAPTER **)v94, v66);
                  v75 = (struct tagRECT *)(v71 + 16 * v73);
                  if ( DXGPRESENT::IntersectRect(v75, &v92, ContentRect)
                    && ((a2->Flags.Value & 0x100) == 0 || (_DWORD)v66 == a2->VidPnSourceId) )
                  {
                    v75->top -= v76[1];
                    v75->bottom -= v76[1];
                    v75->left -= *v76;
                    v77 = (DXGADAPTER **)v94;
                    v75->right -= *v76;
                    CddInterface = ADAPTER_DISPLAY::GetCddInterface(v77, v66);
                    v38 = (unsigned __int64)CddInterface;
                    if ( CddInterface )
                      (*((void (__fastcall **)(_QWORD, struct tagRECT *))CddInterface + 1))(
                        *(_QWORD *)CddInterface,
                        v75);
                    ++*v95;
                    this->top &= ~2u;
                  }
                  v66 = (unsigned int)(v66 + 1);
                }
                while ( (unsigned int)v66 < this[4].top );
                v38 = (unsigned int)v80.top;
                v42 = v80.bottom;
                v27 = v86;
                v43 = v81;
              }
              v28 = v82;
              goto LABEL_66;
            }
            v50 = (unsigned int)this[22].left;
            v51 = *(_QWORD *)&this[14].left;
            if ( (*(_WORD *)&Value & 0x100) != 0 )
            {
              v52 = v85;
              v53 = 16LL * (unsigned int)v50;
              v54 = v43;
              v55 = (LONG *)(v51 + v53);
              if ( v45 > v43 )
                v54 = v45;
              *v55 = v54;
              if ( v46 < v52 )
                v52 = v46;
              v55[2] = v52;
              if ( v54 >= v52 )
                goto LABEL_86;
              v56 = v27;
              v57 = v28;
              if ( v47 > v27 )
                v56 = v47;
              v55[1] = v56;
              if ( v48 < v28 )
                v57 = v48;
              v55[3] = v57;
              if ( v56 >= v57 )
              {
LABEL_86:
                v38 = (unsigned int)v80.top;
                goto LABEL_66;
              }
            }
            else
            {
              *(struct tagRECT *)(v51 + 16 * v50) = v92;
            }
            ++this[22].left;
            this->top &= ~2u;
            v38 = (unsigned int)v80.top;
          }
LABEL_66:
          v36 = v80.left;
          v37 = v80.right;
LABEL_67:
          ++v40;
          v41 = v91;
          if ( v40 >= *(_DWORD *)(*(_QWORD *)&this[1].left + 8LL) )
          {
            v16 = v87;
            v30 = this + 9;
            v19 = v88;
            v29 = v89;
            goto LABEL_69;
          }
        }
      }
LABEL_70:
      this->top &= ~8u;
      return 0LL;
    }
    if ( *(&this[10].left + i) >= (unsigned int)v12 )
      continue;
    operator delete(*((void **)&this[14].left + i));
    v59 = 16LL * (unsigned int)v12;
    if ( !is_mul_ok((unsigned int)v12, 0x10uLL) )
      v59 = -1LL;
    v60 = operator new(v59, 0x4B677844u, PagedPool);
    *((_QWORD *)&this[14].left + i) = v60;
    if ( !v60 )
      break;
    *(&this[10].left + i) = v12;
  }
  *(&this[10].left + i) = 0;
  v65 = WdLogNewEntry5_WdLowResource(v61);
  *(_QWORD *)(v65 + 32) = (unsigned int)v12;
  *(_QWORD *)(v65 + 24) = this;
  WdLogEvent5_WdLowResource(v65);
  return 3221225495LL;
}
