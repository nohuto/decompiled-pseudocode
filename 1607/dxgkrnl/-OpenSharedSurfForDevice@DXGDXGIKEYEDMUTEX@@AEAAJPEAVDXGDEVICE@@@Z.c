/*
 * XREFs of ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C017D228
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C017CE7C (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0007F08 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0097038 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0097590 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00A5A60 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00A5A90 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v11; // rbx
  int v12; // r12d
  unsigned int v13; // r14d
  int v14; // r13d
  unsigned int v15; // eax
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rax
  _BYTE *PoolWithTag; // rcx
  __int64 v20; // r15
  __int64 v21; // r9
  unsigned int v22; // r8d
  void *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // r14d
  __int64 v27; // r15
  unsigned int v28; // ecx
  __int64 v29; // r8
  int v30; // edx
  struct DXGRESOURCE *v31; // rdx
  __int64 v32; // rcx
  struct _EX_RUNDOWN_REF *v33; // rdx
  char v34; // r14
  _QWORD *v35; // rdi
  ULONG_PTR Count; // r15
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // [rsp+20h] [rbp-E0h]
  int v60; // [rsp+30h] [rbp-D0h]
  __int64 v61; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v62; // [rsp+58h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v63; // [rsp+60h] [rbp-A0h] BYREF
  int v64; // [rsp+68h] [rbp-98h] BYREF
  __int64 v65; // [rsp+6Ch] [rbp-94h]
  __int64 v66; // [rsp+74h] [rbp-8Ch]
  __int64 v67; // [rsp+7Ch] [rbp-84h]
  unsigned int v68; // [rsp+84h] [rbp-7Ch]
  __int64 v69; // [rsp+88h] [rbp-78h] BYREF
  __int64 v70; // [rsp+90h] [rbp-70h] BYREF
  void *v71; // [rsp+98h] [rbp-68h]
  char v72[16]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v73[14]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE *v74; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v75[320]; // [rsp+128h] [rbp+28h] BYREF
  int v76; // [rsp+268h] [rbp+168h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 211LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *((_DWORD *)this + 1);
  v64 = 0;
  v65 = v6;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0;
  LODWORD(v8) = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>((__int64)a2, &v64, v6);
  if ( (int)v8 < 0 )
  {
    v9 = WdLogNewEntry5_WdEvent(v7);
    *(_QWORD *)(v9 + 24) = a2;
    WdLogEvent5_WdEvent(v9);
    return (unsigned int)v8;
  }
  v11 = (unsigned int)v67;
  v12 = HIDWORD(v67);
  v13 = v67 + HIDWORD(v67);
  if ( (int)v67 + HIDWORD(v67) < (unsigned int)v67 )
  {
    v58 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v58 + 24) = 228LL;
  }
  else
  {
    v14 = HIDWORD(v66);
    v15 = v13 + HIDWORD(v66);
    if ( v13 + HIDWORD(v66) >= v13 )
    {
      v16 = v15;
      v71 = operator new(v15, 0x674D444Fu, PagedPool);
      if ( !v71 )
      {
        v18 = WdLogNewEntry5_WdLowResource(v17);
        *(_QWORD *)(v18 + 24) = this;
        *(_QWORD *)(v18 + 32) = v16;
        WdLogEvent5_WdLowResource(v18);
        return 3221225495LL;
      }
      memset(v73, 0, 0x48uLL);
      v74 = 0LL;
      v76 = 0;
      v20 = v68;
      if ( v68 <= 4 )
      {
        PoolWithTag = v75;
        v74 = v75;
      }
      else
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v68 < 0x50 )
          goto LABEL_54;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 80LL * v68, 0x4B677844u);
        v74 = PoolWithTag;
      }
      v76 = v20;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 80 * v20);
        PoolWithTag = v74;
        if ( v74 )
        {
          v22 = *((_DWORD *)this + 1);
          LODWORD(v73[0]) = *((_DWORD *)a2 + 77);
          v23 = (void *)v73[7];
          v73[2] = v74;
          if ( (_DWORD)v11 )
            v23 = v71;
          HIDWORD(v73[0]) = v22;
          v73[7] = v23;
          LODWORD(v73[1]) = v20;
          LODWORD(v73[8]) = v11;
          if ( v12 )
            v73[5] = (char *)v71 + v11;
          LODWORD(v73[6]) = v12;
          if ( v14 )
            v73[3] = (char *)v71 + v13;
          LODWORD(v73[4]) = v14;
          LODWORD(v8) = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                          a2,
                          (__int64)v73,
                          v22,
                          v21,
                          0,
                          0LL,
                          v60,
                          0LL,
                          0LL,
                          0LL);
          if ( (int)v8 < 0 )
          {
            v56 = WdLogNewEntry5_WdEvent(v24);
            *(_QWORD *)(v56 + 24) = this;
            *(_QWORD *)(v56 + 32) = *((unsigned int *)this + 1);
            WdLogEvent5_WdEvent(v56);
          }
          else
          {
            v25 = *((_QWORD *)this + 2);
            v26 = HIDWORD(v73[8]);
            *((_DWORD *)this + 24) = HIDWORD(v73[8]);
            v27 = *(_QWORD *)(v25 + 40);
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v27 + 184));
            v28 = (v26 >> 6) & 0xFFFFFF;
            if ( v28 < *(_DWORD *)(v27 + 224)
              && (v29 = *(_QWORD *)(v27 + 208),
                  v30 = *(_DWORD *)(v29 + 16LL * v28 + 8),
                  ((v26 >> 26) & 0x30) == (*(_BYTE *)(v29 + 16LL * v28 + 8) & 0x30))
              && (v30 & 0x1000) == 0
              && (v30 & 0xF) != 0
              && (*(_BYTE *)(v29 + 16LL * v28 + 8) & 0xF) == 4 )
            {
              v31 = *(struct DXGRESOURCE **)(v29 + 16LL * v28);
            }
            else
            {
              v31 = 0LL;
            }
            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v63, v31);
            ExReleasePushLockSharedEx(v27 + 184, 0LL);
            KeLeaveCriticalRegion();
            if ( v63 )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v64, (struct DXGFASTMUTEX *const)&v63[10]);
              if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails) )
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v64);
              v33 = v63;
              v34 = 0;
              *((_DWORD *)this + 25) = *(_DWORD *)(v63[3].Count + 16);
              v35 = (_QWORD *)*((_QWORD *)a2 + 2);
              v62 = 0LL;
              v61 = 0LL;
              v70 = 0LL;
              Count = v33[3].Count;
              if ( DXGDEVICE::UmdManagesResidency(a2) || (*(_DWORD *)(v35[2] + 1524LL) & 0x40) != 0 )
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(v35[50] + 8LL) + 960LL))(
                  *((_QWORD *)a2 + 70),
                  (*(_DWORD *)(Count + 72) >> 12) & 0x3F,
                  &v61,
                  &v70);
              if ( DXGDEVICE::UmdManagesResidency(a2) )
              {
                v37 = v35[50];
                v38 = v35[51];
                v69 = 0LL;
                v39 = (*(__int64 (__fastcall **)(__int64, __int64, ULONG_PTR, __int64, int, __int64 *, char *))(*(_QWORD *)(v37 + 8) + 768LL))(
                        v38,
                        v61,
                        Count + 24,
                        1LL,
                        3,
                        &v69,
                        v72);
                v8 = v39;
                if ( v39 >= 0 )
                {
                  if ( v39 == 259 )
                  {
                    v34 = 1;
                    v62 = v69;
                    LODWORD(v8) = 0;
                  }
                }
                else
                {
                  v44 = WdLogNewEntry5_WdWarning(v41, v40, v42, v43);
                  *(_QWORD *)(v44 + 24) = v8;
                  WdLogEvent5_WdWarning(v44);
                }
              }
              if ( (int)v8 >= 0 )
              {
                if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 1524LL) & 0x40) != 0 )
                {
                  memset(v73, 0, 0x68uLL);
                  v73[7] |= 1uLL;
                  v45 = v35[2];
                  v46 = *(_QWORD *)(Count + 24);
                  v73[2] = *(_QWORD *)(v45 + 2008);
                  v47 = *(_QWORD *)(v45 + 2016);
                  v48 = v35[51];
                  v73[3] = v47;
                  LOBYTE(v59) = 1;
                  v49 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, unsigned int, int))(*(_QWORD *)(v35[50] + 8LL) + 792LL))(
                          v48,
                          v61,
                          v46,
                          v73,
                          v59,
                          -2);
                  v8 = v49;
                  if ( v49 >= 0 )
                  {
                    if ( v49 == 259 )
                    {
                      v34 = 1;
                      v62 = v73[12];
                      LODWORD(v8) = 0;
                    }
                  }
                  else
                  {
                    v54 = WdLogNewEntry5_WdWarning(v51, v50, v52, v53);
                    *(_QWORD *)(v54 + 24) = v8;
                    WdLogEvent5_WdWarning(v54);
                  }
                }
                if ( v34 )
                  (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(v35[50] + 8LL) + 968LL))(
                    v35[51],
                    &v70,
                    &v62,
                    1LL);
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v64);
            }
            else
            {
              v55 = WdLogNewEntry5_WdError(v32);
              *(_QWORD *)(v55 + 24) = this;
              *(_QWORD *)(v55 + 32) = *((unsigned int *)this + 24);
              WdLogEvent5_WdError(v55);
              LODWORD(v8) = -1073741811;
            }
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v63);
          }
          operator delete(v71);
          goto LABEL_55;
        }
      }
LABEL_54:
      v57 = WdLogNewEntry5_WdLowResource(PoolWithTag);
      *(_QWORD *)(v57 + 24) = 255LL;
      WdLogEvent5_WdLowResource(v57);
      LODWORD(v8) = -1073741801;
LABEL_55:
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v74);
      return (unsigned int)v8;
    }
    v58 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v58 + 24) = 234LL;
  }
  WdLogEvent5_WdError(v58);
  return 3221225621LL;
}
