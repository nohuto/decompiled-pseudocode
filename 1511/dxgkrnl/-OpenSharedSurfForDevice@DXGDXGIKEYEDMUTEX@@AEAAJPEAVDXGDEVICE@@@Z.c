/*
 * XREFs of ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C015842C
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01581E8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000238C (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0065E00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0065F40 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C006E6DC (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C006EAC4 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C009D388 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v14; // rbx
  int v15; // r12d
  unsigned int v16; // r14d
  int v17; // r13d
  unsigned int v18; // eax
  __int64 v19; // r15
  unsigned __int64 v20; // rdx
  _BYTE *PoolWithTag; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r15
  unsigned int v26; // r8d
  void *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  unsigned int v33; // r14d
  __int64 v34; // r15
  unsigned int v35; // ecx
  __int64 v36; // r8
  int v37; // edx
  struct DXGRESOURCE *v38; // rdx
  __int64 v39; // rcx
  struct _EX_RUNDOWN_REF *v40; // rax
  char v41; // r14
  _QWORD *v42; // rdi
  ULONG_PTR Count; // r15
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int v66; // [rsp+20h] [rbp-E0h]
  int v67; // [rsp+30h] [rbp-D0h]
  __int64 v68; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v69; // [rsp+58h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v70; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v71; // [rsp+68h] [rbp-98h] BYREF
  void *v72; // [rsp+70h] [rbp-90h]
  __int64 v73; // [rsp+78h] [rbp-88h] BYREF
  int v74; // [rsp+80h] [rbp-80h] BYREF
  __int64 v75; // [rsp+84h] [rbp-7Ch]
  __int64 v76; // [rsp+8Ch] [rbp-74h]
  __int64 v77; // [rsp+94h] [rbp-6Ch]
  unsigned int v78; // [rsp+9Ch] [rbp-64h]
  char v79[16]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v80[14]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE *v81; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v82[320]; // [rsp+128h] [rbp+28h] BYREF
  int v83; // [rsp+268h] [rbp+168h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 197LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *((_DWORD *)this + 1);
  v74 = 0;
  v75 = v6;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0;
  LODWORD(v9) = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>((__int64)a2, &v74, v6);
  if ( (int)v9 < 0 )
  {
    v12 = WdLogNewEntry5_WdEvent(v8, v7, v10, v11);
    *(_QWORD *)(v12 + 24) = a2;
    WdLogEvent5_WdEvent(v12);
    return (unsigned int)v9;
  }
  v14 = (unsigned int)v77;
  v15 = HIDWORD(v77);
  v16 = v77 + HIDWORD(v77);
  if ( (int)v77 + HIDWORD(v77) < (unsigned int)v77 )
  {
    v65 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v65 + 24) = 214LL;
  }
  else
  {
    v17 = HIDWORD(v76);
    v18 = v16 + HIDWORD(v76);
    if ( v16 + HIDWORD(v76) >= v16 )
    {
      v19 = v18;
      v72 = operator new[](v18, 0x674D444Fu, PagedPool);
      if ( !v72 )
      {
        v24 = WdLogNewEntry5_WdLowResource(PoolWithTag, v20, v22, v23);
        *(_QWORD *)(v24 + 24) = this;
        *(_QWORD *)(v24 + 32) = v19;
        WdLogEvent5_WdLowResource(v24);
        return 3221225495LL;
      }
      memset(v80, 0, 72);
      v81 = 0LL;
      v83 = 0;
      v25 = v78;
      if ( v78 <= 4 )
      {
        PoolWithTag = v82;
        v81 = v82;
      }
      else
      {
        v20 = 0xFFFFFFFFFFFFFFFFuLL % v78;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v78 < 0x50 )
          goto LABEL_51;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 80LL * v78, 0x4B677844u);
        v81 = PoolWithTag;
      }
      v83 = v25;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 80 * v25);
        PoolWithTag = v81;
        if ( v81 )
        {
          v26 = *((_DWORD *)this + 1);
          LODWORD(v80[0]) = *((_DWORD *)a2 + 71);
          v27 = (void *)v80[7];
          v80[2] = v81;
          if ( (_DWORD)v14 )
            v27 = v72;
          HIDWORD(v80[0]) = v26;
          v80[7] = v27;
          LODWORD(v80[1]) = v25;
          LODWORD(v80[8]) = v14;
          if ( v15 )
            v80[5] = (char *)v72 + v14;
          LODWORD(v80[6]) = v15;
          if ( v17 )
            v80[3] = (char *)v72 + v16;
          LODWORD(v80[4]) = v17;
          LODWORD(v9) = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                          a2,
                          (__int64)v80,
                          v26,
                          v23,
                          0,
                          0LL,
                          v67,
                          0LL,
                          0LL,
                          0LL);
          if ( (int)v9 < 0 )
          {
            v63 = WdLogNewEntry5_WdEvent(v29, v28, v30, v31);
            *(_QWORD *)(v63 + 24) = this;
            *(_QWORD *)(v63 + 32) = *((unsigned int *)this + 1);
            WdLogEvent5_WdEvent(v63);
          }
          else
          {
            v32 = *((_QWORD *)this + 2);
            v33 = HIDWORD(v80[8]);
            *((_DWORD *)this + 24) = HIDWORD(v80[8]);
            v34 = *(_QWORD *)(v32 + 40);
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v34 + 192));
            v35 = (v33 >> 6) & 0xFFFFFF;
            if ( v35 < *(_DWORD *)(v34 + 232)
              && (v36 = *(_QWORD *)(v34 + 216),
                  v37 = *(_DWORD *)(v36 + 16LL * v35 + 8),
                  ((v33 >> 26) & 0x30) == (*(_BYTE *)(v36 + 16LL * v35 + 8) & 0x30))
              && (v37 & 0x1000) == 0
              && (v37 & 0xF) != 0
              && (*(_BYTE *)(v36 + 16LL * v35 + 8) & 0xF) == 4 )
            {
              v38 = *(struct DXGRESOURCE **)(v36 + 16LL * v35);
            }
            else
            {
              v38 = 0LL;
            }
            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v70, v38);
            ExReleasePushLockSharedEx(v34 + 192, 0LL);
            KeLeaveCriticalRegion();
            v40 = v70;
            if ( v70 )
            {
              v41 = 0;
              *((_DWORD *)this + 25) = *(_DWORD *)(v70[3].Count + 16);
              v42 = (_QWORD *)*((_QWORD *)a2 + 2);
              v69 = 0LL;
              v68 = 0LL;
              v73 = 0LL;
              Count = v40[3].Count;
              if ( DXGDEVICE::UmdManagesResidency(a2) || (*(_DWORD *)(v42[2] + 1388LL) & 0x40) != 0 )
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(v42[53] + 8LL) + 944LL))(
                  *((_QWORD *)a2 + 67),
                  (*(_DWORD *)(Count + 72) >> 12) & 0x3F,
                  &v68,
                  &v73);
              if ( DXGDEVICE::UmdManagesResidency(a2) )
              {
                v44 = v42[53];
                v45 = v42[54];
                v71 = 0LL;
                v46 = (*(__int64 (__fastcall **)(__int64, __int64, ULONG_PTR, __int64, int, __int64 *, char *))(*(_QWORD *)(v44 + 8) + 752LL))(
                        v45,
                        v68,
                        Count + 24,
                        1LL,
                        3,
                        &v71,
                        v79);
                v9 = v46;
                if ( v46 >= 0 )
                {
                  if ( v46 == 259 )
                  {
                    v41 = 1;
                    v69 = v71;
                    LODWORD(v9) = 0;
                  }
                }
                else
                {
                  v51 = WdLogNewEntry5_WdWarning(v48, v47, v49, v50);
                  *(_QWORD *)(v51 + 24) = v9;
                  WdLogEvent5_WdWarning(v51);
                }
              }
              if ( (int)v9 >= 0 )
              {
                if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 1388LL) & 0x40) != 0 )
                {
                  memset(v80, 0, 0x68uLL);
                  v80[7] |= 1uLL;
                  v52 = v42[2];
                  v53 = *(_QWORD *)(Count + 24);
                  v80[2] = *(_QWORD *)(v52 + 1872);
                  v54 = *(_QWORD *)(v52 + 1880);
                  v55 = v42[54];
                  v80[3] = v54;
                  LOBYTE(v66) = 1;
                  v56 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, unsigned int, int))(*(_QWORD *)(v42[53] + 8LL) + 776LL))(
                          v55,
                          v68,
                          v53,
                          v80,
                          v66,
                          -2);
                  v9 = v56;
                  if ( v56 >= 0 )
                  {
                    if ( v56 == 259 )
                    {
                      v41 = 1;
                      v69 = v80[12];
                      LODWORD(v9) = 0;
                    }
                  }
                  else
                  {
                    v61 = WdLogNewEntry5_WdWarning(v58, v57, v59, v60);
                    *(_QWORD *)(v61 + 24) = v9;
                    WdLogEvent5_WdWarning(v61);
                  }
                }
                if ( v41 )
                  (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(v42[53] + 8LL) + 952LL))(
                    v42[54],
                    &v73,
                    &v69,
                    1LL);
              }
            }
            else
            {
              v62 = WdLogNewEntry5_WdError(v39);
              *(_QWORD *)(v62 + 24) = this;
              *(_QWORD *)(v62 + 32) = *((unsigned int *)this + 24);
              WdLogEvent5_WdError(v62);
              LODWORD(v9) = -1073741811;
            }
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v70);
          }
          operator delete(v72);
          goto LABEL_52;
        }
      }
LABEL_51:
      v64 = WdLogNewEntry5_WdLowResource(PoolWithTag, v20, v22, v23);
      *(_QWORD *)(v64 + 24) = 241LL;
      WdLogEvent5_WdLowResource(v64);
      LODWORD(v9) = -1073741801;
LABEL_52:
      PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v81);
      return (unsigned int)v9;
    }
    v65 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v65 + 24) = 220LL;
  }
  WdLogEvent5_WdError(v65);
  return 3221225621LL;
}
