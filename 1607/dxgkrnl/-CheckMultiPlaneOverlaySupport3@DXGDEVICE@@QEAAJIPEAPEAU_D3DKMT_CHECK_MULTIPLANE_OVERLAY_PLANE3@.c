/*
 * XREFs of ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015C0E8
 * Callers:
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C0160AD0 (DxgkCheckMultiPlaneOverlaySupport3.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0006A38 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000D7DC (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C009326C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00A5A60 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00A5A90 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C015AD70 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXHPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015B788 (-CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE.c)
 *     ?UpdateCheckPlaneWithIndependentFlip3@DXGDEVICE@@QEAAJIIPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x1C018B8D0 (-UpdateCheckPlaneWithIndependentFlip3@DXGDEVICE@@QEAAJIIPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTE.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlaySupport3(
        DXGDEVICE *this,
        unsigned int a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a3,
        int a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a5,
        bool a6,
        int *a7,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a8)
{
  int *v8; // r13
  __int64 v10; // rsi
  int v11; // edi
  ADAPTER_RENDER *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *v23; // rbx
  _QWORD *v24; // rbx
  __int64 v25; // rcx
  char v26; // r15
  unsigned int v27; // r12d
  __int64 v28; // r13
  char *v29; // rax
  __int64 v30; // rsi
  __int64 v31; // r15
  __int64 v32; // r13
  unsigned int v33; // ebx
  unsigned int v34; // ecx
  __int64 v35; // r8
  int v36; // edx
  struct DXGRESOURCE *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  struct _EX_RUNDOWN_REF *v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  _QWORD *i; // rbx
  unsigned int v47; // r12d
  unsigned int v48; // eax
  _QWORD *v49; // rax
  _QWORD *v50; // r13
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rcx
  _DWORD *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  _QWORD *v58; // r10
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rdx
  _QWORD *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  char v66; // al
  unsigned int *v67; // [rsp+28h] [rbp-D8h]
  char v68; // [rsp+60h] [rbp-A0h]
  unsigned int v69; // [rsp+64h] [rbp-9Ch]
  unsigned int v70; // [rsp+68h] [rbp-98h] BYREF
  bool v71; // [rsp+6Ch] [rbp-94h]
  unsigned int v72; // [rsp+70h] [rbp-90h]
  struct _EX_RUNDOWN_REF *v73; // [rsp+78h] [rbp-88h] BYREF
  __int64 Elements; // [rsp+80h] [rbp-80h]
  int *v75; // [rsp+88h] [rbp-78h]
  _QWORD *v76; // [rsp+90h] [rbp-70h]
  int v77; // [rsp+98h] [rbp-68h]
  unsigned int v78; // [rsp+9Ch] [rbp-64h]
  int v79; // [rsp+A0h] [rbp-60h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v80; // [rsp+A8h] [rbp-58h]
  _BYTE v81[16]; // [rsp+B0h] [rbp-50h] BYREF
  char *v82; // [rsp+C0h] [rbp-40h]
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v83; // [rsp+C8h] [rbp-38h]
  _BYTE v84[16]; // [rsp+D0h] [rbp-30h] BYREF
  PVOID v85[4]; // [rsp+E8h] [rbp-18h] BYREF
  int v86; // [rsp+108h] [rbp+8h]
  char v87[32]; // [rsp+110h] [rbp+10h] BYREF

  v8 = a7;
  v10 = a2;
  v11 = 0;
  v79 = a4;
  v80 = a3;
  *a7 = 0;
  a8->Value = 0;
  v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v72 = a2;
  v75 = a7;
  v83 = a8;
  if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v12) )
  {
    v85[0] = 0LL;
    v86 = 0;
    Elements = PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(v85, v10);
    v23 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)Elements;
    if ( Elements )
    {
      DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v81, *((struct ADAPTER_RENDER **)this + 2));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v81);
      v26 = 1;
      v27 = v10 + 1;
      v68 = 1;
      v69 = v10 + 1;
      v71 = EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails);
      v70 = 0;
      if ( (_DWORD)v10 )
      {
        v28 = Elements;
        v29 = (char *)v80 - Elements;
        v76 = (_QWORD *)Elements;
        v82 = (char *)v80 - Elements;
        while ( v11 >= 0 )
        {
          v30 = *(_QWORD *)&v29[v28];
          v31 = 0LL;
          v32 = *((_QWORD *)this + 5);
          v33 = *(_DWORD *)(v30 + 4);
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v32 + 184));
          v34 = (v33 >> 6) & 0xFFFFFF;
          if ( v34 < *(_DWORD *)(v32 + 224)
            && (v35 = *(_QWORD *)(v32 + 208),
                v36 = *(_DWORD *)(v35 + 16LL * v34 + 8),
                ((v33 >> 26) & 0x30) == (*(_BYTE *)(v35 + 16LL * v34 + 8) & 0x30))
            && (v36 & 0x1000) == 0
            && (v36 & 0xF) != 0
            && (*(_BYTE *)(v35 + 16LL * v34 + 8) & 0xF) == 4 )
          {
            v37 = *(struct DXGRESOURCE **)(v35 + 16LL * v34);
          }
          else
          {
            v37 = 0LL;
          }
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v73, v37);
          ExReleasePushLockSharedEx(v32 + 184, 0LL);
          KeLeaveCriticalRegion();
          v41 = v73;
          if ( !v73 )
            goto LABEL_66;
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v84, (struct DXGFASTMUTEX *const)&v73[10]);
          if ( v71 )
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v84);
          for ( i = (_QWORD *)v73[3].Count; ; i = (_QWORD *)i[8] )
          {
            if ( !i )
              goto LABEL_28;
            if ( (DXGDEVICE *)i[1] != this )
            {
              v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v44, v45);
              v49[3] = *(unsigned int *)(v30 + 4);
              v49[4] = i[1];
              v49[5] = this;
              v49[6] = -1073741811LL;
              WdLogEvent5_WdWarning(v49);
LABEL_28:
              v47 = v70;
              goto LABEL_29;
            }
            v43 = *(unsigned int *)(i[6] + 4LL);
            if ( (v43 & 0x200B) != 0 )
              break;
          }
          v47 = v70;
          v31 = i[6];
          v48 = v69;
          if ( (v43 & 0x2008) == 0 )
            v48 = v70;
          v69 = v48;
LABEL_29:
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v84);
          if ( !v31 )
          {
LABEL_66:
            v65 = WdLogNewEntry5_WdWarning(v38, v41, v39, v40);
            *(_QWORD *)(v65 + 24) = *(unsigned int *)(v30 + 4);
            *(_QWORD *)(v65 + 32) = -1073741811LL;
LABEL_67:
            WdLogEvent5_WdWarning(v65);
            v11 = -1073741811;
LABEL_68:
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v73);
            LODWORD(v10) = v72;
            break;
          }
          v50 = v76;
          *v76 = *(_QWORD *)(v31 + 16);
          v51 = *(unsigned int *)(v30 + 16);
          if ( (unsigned int)v51 >= *((_DWORD *)this + 716) )
          {
            v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v41, v51, v40);
            v62[3] = *(unsigned int *)(v30 + 16);
            v62[4] = 0LL;
            goto LABEL_62;
          }
          if ( (_DWORD)v51 != ((*(_DWORD *)(v31 + 4) >> 6) & 0xF) )
          {
            v52 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            if ( !*(_QWORD *)(v52 + 896) || !*(_BYTE *)(v52 + 2090) )
            {
              v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v41, v51, v40);
              v62[3] = *(unsigned int *)(v30 + 16);
              v63 = (*(_DWORD *)(v31 + 4) >> 6) & 0xF;
              v62[5] = 0LL;
              v62[4] = v63;
LABEL_62:
              WdLogEvent5_WdWarning(v62);
              v68 = 0;
              goto LABEL_68;
            }
          }
          if ( a6
            && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 357) + 2128LL), this, v51) )
          {
            v64 = WdLogNewEntry5_WdWarning(v53, v41, v51, v40);
            v11 = -1073741790;
            *(_QWORD *)(v64 + 24) = -1073741790LL;
            WdLogEvent5_WdWarning(v64);
            goto LABEL_68;
          }
          v54 = *(_DWORD **)(v30 + 24);
          if ( v54[1] >= v54[3]
            || v54[2] >= v54[4]
            || v54[5] >= v54[7]
            || v54[6] >= v54[8]
            || v54[9] >= v54[11]
            || v54[10] >= v54[12] )
          {
            v65 = WdLogNewEntry5_WdWarning(v54, v41, v51, v40);
            *(_QWORD *)(v65 + 24) = -1073741811LL;
            goto LABEL_67;
          }
          if ( v54[13] > 4u )
          {
            v55 = WdLogNewEntry5_WdWarning(v54, v41, v51, v40);
            *(_QWORD *)(v55 + 24) = *(int *)(*(_QWORD *)(v30 + 24) + 52LL);
            *(_QWORD *)(v55 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v55);
            v11 = -1073741811;
          }
          v56 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v30 + 24) + 76LL) - 1);
          if ( (unsigned int)v56 > 1 )
          {
            v57 = WdLogNewEntry5_WdWarning(v56, v41, v51, v40);
            *(_QWORD *)(v57 + 24) = -1073741811LL;
            WdLogEvent5_WdWarning(v57);
            v11 = -1073741811;
          }
          v58 = (_QWORD *)*((_QWORD *)this + 2);
          v59 = v58[2];
          if ( !*(_QWORD *)(v59 + 864) && (!*(_QWORD *)(v59 + 896) || !*(_BYTE *)(v59 + 2090)) )
          {
            v60 = *(_DWORD *)(*(_QWORD *)(v30 + 24) + 72LL);
            if ( v60 == -1 || v60 > 0 && (v60 <= 3 || v60 == 5 || (unsigned int)(v60 - 10) <= 6) )
              v68 = 0;
          }
          if ( *(_DWORD *)(v30 + 8) || *(_DWORD *)(v30 + 12) )
          {
            v61 = *(unsigned int *)(v30 + 16);
            v70 = 0;
            LODWORD(v76) = 0;
            v77 = 0;
            v67 = &v70;
            (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, char *))(*(_QWORD *)(v58[47] + 8LL) + 320LL))(
              v58[48],
              v61,
              v30 + 8,
              -1LL,
              v87);
            if ( v70 )
            {
              v11 = DXGDEVICE::UpdateCheckPlaneWithIndependentFlip3(
                      this,
                      *(_DWORD *)(v30 + 16),
                      v78,
                      *(struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)(v30 + 24));
              if ( v11 < 0 )
                goto LABEL_68;
            }
          }
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v73);
          LODWORD(v10) = v72;
          v28 = (__int64)(v50 + 1);
          v70 = v47 + 1;
          v76 = (_QWORD *)v28;
          if ( v47 + 1 >= v72 )
            break;
          v29 = v82;
        }
        v8 = v75;
        v27 = v69;
        v26 = v68;
        v23 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)Elements;
      }
      v66 = v26;
      if ( v79 )
        v66 = 0;
      if ( v11 >= 0 && v66 )
        v11 = DXGDEVICE::CheckMultiPlaneOverlayInternal3(this, v27, v10, v80, v23, (unsigned int)v67, v8, v83);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v81);
      if ( v81[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v81);
    }
    else
    {
      v11 = -1073741801;
      v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      v24[3] = v10;
      v24[4] = -1073741801LL;
      v24[5] = PsGetCurrentProcess(v25);
      WdLogEvent5_WdWarning(v24);
    }
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v85);
    return (unsigned int)v11;
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v17 + 24) = 0LL;
    WdLogEvent5_WdWarning(v17);
    return 0LL;
  }
}
