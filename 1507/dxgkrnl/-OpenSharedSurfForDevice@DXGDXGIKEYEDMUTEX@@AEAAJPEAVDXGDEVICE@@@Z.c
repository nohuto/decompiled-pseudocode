/*
 * XREFs of ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C0154328
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C0153F7C (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C00026D8 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00773DC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0077400 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007B838 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C007BD88 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C011EE74 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v17; // rbx
  int v18; // r12d
  unsigned int v19; // r14d
  int v20; // r13d
  unsigned int v21; // eax
  __int64 v22; // r15
  _BYTE *PoolWithTag; // rcx
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // r9
  unsigned int v27; // r8d
  void *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  unsigned int v34; // r14d
  __int64 v35; // r15
  unsigned int v36; // ecx
  __int64 v37; // r8
  int v38; // edx
  struct DXGRESOURCE *v39; // rdx
  __int64 v40; // rcx
  struct _EX_RUNDOWN_REF *v41; // rax
  char v42; // r14
  _QWORD *v43; // rdi
  ULONG_PTR Count; // r15
  __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned int v67; // [rsp+20h] [rbp-E0h]
  int v68; // [rsp+30h] [rbp-D0h]
  __int64 v69; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v70; // [rsp+58h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v71; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v72; // [rsp+68h] [rbp-98h] BYREF
  void *v73; // [rsp+70h] [rbp-90h]
  __int64 v74; // [rsp+78h] [rbp-88h] BYREF
  int v75; // [rsp+80h] [rbp-80h] BYREF
  __int64 v76; // [rsp+84h] [rbp-7Ch]
  __int64 v77; // [rsp+8Ch] [rbp-74h]
  __int64 v78; // [rsp+94h] [rbp-6Ch]
  unsigned int v79; // [rsp+9Ch] [rbp-64h]
  char v80[16]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v81[14]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE *v82; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v83[320]; // [rsp+128h] [rbp+28h] BYREF
  int v84; // [rsp+268h] [rbp+168h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 195LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_DWORD *)this + 1);
  v75 = 0;
  v76 = v9;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0;
  LODWORD(v12) = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>((__int64)a2, &v75, v9);
  if ( (int)v12 < 0 )
  {
    v15 = WdLogNewEntry5_WdEvent(v11, v10, v13, v14);
    *(_QWORD *)(v15 + 24) = a2;
    WdLogEvent5_WdEvent(v15);
    return (unsigned int)v12;
  }
  v17 = (unsigned int)v78;
  v18 = HIDWORD(v78);
  v19 = v78 + HIDWORD(v78);
  if ( (int)v78 + HIDWORD(v78) < (unsigned int)v78 )
  {
    v66 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v66 + 24) = 212LL;
  }
  else
  {
    v20 = HIDWORD(v77);
    v21 = v19 + HIDWORD(v77);
    if ( v19 + HIDWORD(v77) >= v19 )
    {
      v22 = v21;
      v73 = operator new[](v21, 0x674D444Fu, PagedPool);
      if ( !v73 )
      {
        v24 = WdLogNewEntry5_WdLowResource(PoolWithTag);
        *(_QWORD *)(v24 + 24) = this;
        *(_QWORD *)(v24 + 32) = v22;
        WdLogEvent5_WdLowResource(v24);
        return 3221225495LL;
      }
      memset(v81, 0, 72);
      v82 = 0LL;
      v84 = 0;
      v25 = v79;
      if ( v79 <= 4 )
      {
        PoolWithTag = v83;
        v82 = v83;
      }
      else
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v79 < 0x50 )
          goto LABEL_51;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 80LL * v79, 0x4B677844u);
        v82 = PoolWithTag;
      }
      v84 = v25;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 80 * v25);
        PoolWithTag = v82;
        if ( v82 )
        {
          v27 = *((_DWORD *)this + 1);
          LODWORD(v81[0]) = *((_DWORD *)a2 + 71);
          v28 = (void *)v81[7];
          v81[2] = v82;
          if ( (_DWORD)v17 )
            v28 = v73;
          HIDWORD(v81[0]) = v27;
          v81[7] = v28;
          LODWORD(v81[1]) = v25;
          LODWORD(v81[8]) = v17;
          if ( v18 )
            v81[5] = (char *)v73 + v17;
          LODWORD(v81[6]) = v18;
          if ( v20 )
            v81[3] = (char *)v73 + v19;
          LODWORD(v81[4]) = v20;
          LODWORD(v12) = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                           a2,
                           (__int64)v81,
                           v27,
                           v26,
                           0,
                           0LL,
                           v68,
                           0LL,
                           0LL,
                           0LL);
          if ( (int)v12 < 0 )
          {
            v64 = WdLogNewEntry5_WdEvent(v30, v29, v31, v32);
            *(_QWORD *)(v64 + 24) = this;
            *(_QWORD *)(v64 + 32) = *((unsigned int *)this + 1);
            WdLogEvent5_WdEvent(v64);
          }
          else
          {
            v33 = *((_QWORD *)this + 2);
            v34 = HIDWORD(v81[8]);
            *((_DWORD *)this + 24) = HIDWORD(v81[8]);
            v35 = *(_QWORD *)(v33 + 40);
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v35 + 192));
            v36 = (v34 >> 6) & 0xFFFFFF;
            if ( v36 < *(_DWORD *)(v35 + 232)
              && (v37 = *(_QWORD *)(v35 + 216),
                  v38 = *(_DWORD *)(v37 + 16LL * v36 + 8),
                  ((v34 >> 26) & 0x30) == (*(_BYTE *)(v37 + 16LL * v36 + 8) & 0x30))
              && (v38 & 0x1000) == 0
              && (v38 & 0xF) != 0
              && (*(_BYTE *)(v37 + 16LL * v36 + 8) & 0xF) == 4 )
            {
              v39 = *(struct DXGRESOURCE **)(v37 + 16LL * v36);
            }
            else
            {
              v39 = 0LL;
            }
            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v71, v39);
            ExReleasePushLockSharedEx(v35 + 192, 0LL);
            KeLeaveCriticalRegion();
            v41 = v71;
            if ( v71 )
            {
              v42 = 0;
              *((_DWORD *)this + 25) = *(_DWORD *)(v71[3].Count + 16);
              v43 = (_QWORD *)*((_QWORD *)a2 + 2);
              v70 = 0LL;
              v69 = 0LL;
              v74 = 0LL;
              Count = v41[3].Count;
              if ( DXGDEVICE::UmdManagesResidency(a2) || (*(_DWORD *)(v43[2] + 1380LL) & 0x40) != 0 )
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(v43[50] + 8LL) + 936LL))(
                  *((_QWORD *)a2 + 67),
                  (*(_DWORD *)(Count + 72) >> 9) & 0x3F,
                  &v69,
                  &v74);
              if ( DXGDEVICE::UmdManagesResidency(a2) )
              {
                v45 = v43[50];
                v46 = v43[51];
                v72 = 0LL;
                v47 = (*(__int64 (__fastcall **)(__int64, __int64, ULONG_PTR, __int64, int, __int64 *, char *))(*(_QWORD *)(v45 + 8) + 752LL))(
                        v46,
                        v69,
                        Count + 24,
                        1LL,
                        3,
                        &v72,
                        v80);
                v12 = v47;
                if ( v47 >= 0 )
                {
                  if ( v47 == 259 )
                  {
                    v42 = 1;
                    v70 = v72;
                    LODWORD(v12) = 0;
                  }
                }
                else
                {
                  v52 = WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
                  *(_QWORD *)(v52 + 24) = v12;
                  WdLogEvent5_WdWarning(v52);
                }
              }
              if ( (int)v12 >= 0 )
              {
                if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 1380LL) & 0x40) != 0 )
                {
                  memset(v81, 0, 0x68uLL);
                  v81[7] |= 1uLL;
                  v53 = v43[2];
                  v54 = *(_QWORD *)(Count + 24);
                  v81[2] = *(_QWORD *)(v53 + 1864);
                  v55 = *(_QWORD *)(v53 + 1872);
                  v56 = v43[51];
                  v81[3] = v55;
                  LOBYTE(v67) = 1;
                  v57 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, unsigned int, int))(*(_QWORD *)(v43[50] + 8LL) + 776LL))(
                          v56,
                          v69,
                          v54,
                          v81,
                          v67,
                          -2);
                  v12 = v57;
                  if ( v57 >= 0 )
                  {
                    if ( v57 == 259 )
                    {
                      v42 = 1;
                      v70 = v81[12];
                      LODWORD(v12) = 0;
                    }
                  }
                  else
                  {
                    v62 = WdLogNewEntry5_WdWarning(v59, v58, v60, v61);
                    *(_QWORD *)(v62 + 24) = v12;
                    WdLogEvent5_WdWarning(v62);
                  }
                }
                if ( v42 )
                  (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(v43[50] + 8LL) + 944LL))(
                    v43[51],
                    &v74,
                    &v70,
                    1LL);
              }
            }
            else
            {
              v63 = WdLogNewEntry5_WdError(v40);
              *(_QWORD *)(v63 + 24) = this;
              *(_QWORD *)(v63 + 32) = *((unsigned int *)this + 24);
              WdLogEvent5_WdError(v63);
              LODWORD(v12) = -1073741811;
            }
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v71);
          }
          operator delete(v73);
          goto LABEL_52;
        }
      }
LABEL_51:
      v65 = WdLogNewEntry5_WdLowResource(PoolWithTag);
      *(_QWORD *)(v65 + 24) = 239LL;
      WdLogEvent5_WdLowResource(v65);
      LODWORD(v12) = -1073741801;
LABEL_52:
      PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v82);
      return (unsigned int)v12;
    }
    v66 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v66 + 24) = 218LL;
  }
  WdLogEvent5_WdError(v66);
  return 3221225621LL;
}
