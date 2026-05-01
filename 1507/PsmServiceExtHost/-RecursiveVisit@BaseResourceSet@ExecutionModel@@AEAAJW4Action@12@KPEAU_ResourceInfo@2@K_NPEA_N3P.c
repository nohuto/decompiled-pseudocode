/*
 * XREFs of ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000E690
 * Callers:
 *     ?ReassignResources@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAV12@@Z @ 0x180001258 (-ReassignResources@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_S.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000E690 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@KW4Enum@Priority@2@W44PendType@2@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEA_N4PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18000E980 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@K.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000ECD0 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18002E4FC (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 * Callees:
 *     ?erase@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x180004F64 (-erase@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE20 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000E690 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::RecursiveVisit(
        ExecutionModel::BaseResourceSet *this,
        int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        _BYTE *a7,
        _BYTE *a8,
        __int64 *a9,
        __int64 a10)
{
  bool v10; // zf
  int v11; // r11d
  _BYTE *v12; // rdx
  __int64 v13; // rbx
  __int64 v15; // rdi
  unsigned __int64 v16; // rbp
  int *v17; // rbx
  __int64 v18; // r9
  char *v19; // r10
  int v20; // edx
  char v21; // al
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int8 v24; // r11
  unsigned __int64 v25; // rcx
  __int64 *v26; // rbp
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(ExecutionModel::BaseResourceSet *); // rbx
  __int64 v29; // rbx
  __int64 *v30; // rax
  __int64 *v31; // rbp
  __int64 **v32; // rax
  char v33; // di
  __int64 (__fastcall *v34)(ExecutionModel::BaseResourceSet *); // rbx
  unsigned int v35; // ecx
  _QWORD *v36; // rax
  _BYTE *v37; // rax
  __int64 result; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 *v42; // r8
  char *i; // rax
  char **v44; // rbx
  bool (__fastcall *v45)(ExecutionModel::BaseResourceSet *, struct ExecutionModel::_ResourceInfo *); // [rsp+50h] [rbp-38h]
  char *v46; // [rsp+58h] [rbp-30h]
  __int64 v47; // [rsp+90h] [rbp+8h] BYREF
  int v48; // [rsp+98h] [rbp+10h]
  unsigned int v49; // [rsp+A0h] [rbp+18h]
  __int64 v50; // [rsp+A8h] [rbp+20h]

  v50 = a4;
  v49 = a3;
  v48 = a2;
  v10 = *((_DWORD *)this + 338) == 2;
  v11 = a2;
  v12 = a8;
  v13 = a4;
  *a8 = 0;
  if ( v10 )
  {
    v15 = 0LL;
    LOBYTE(v47) = 0;
    if ( a3 )
    {
      while ( 1 )
      {
        v16 = *(unsigned int *)(v13 + 24 * v15);
        v17 = (int *)(v13 + 24 * v15);
        if ( (unsigned int)v16 <= 0x2F )
        {
          v18 = 24LL * (int)v16 + 192;
          v19 = (char *)this + v18;
          v46 = (char *)this + v18;
          if ( *(_QWORD *)((char *)this + v18 + 8) )
          {
            v20 = v17[4];
            if ( v20 < 101 )
            {
              if ( !a6
                || ((v45 = *(bool (__fastcall **)(ExecutionModel::BaseResourceSet *, struct ExecutionModel::_ResourceInfo *))(*(_QWORD *)this + 96LL),
                     v45 != ExecutionModel::BaseResourceSet::HasLowerPrecedenceThan)
                  ? (v21 = ((__int64 (__fastcall *)(ExecutionModel::BaseResourceSet *, int *, _QWORD))v45)(
                             this,
                             v17,
                             a5),
                     a3 = v49,
                     v19 = v46,
                     v11 = v48)
                  : (v21 = v20 < *((_DWORD *)this + 6 * (int)v16 + 52)),
                    v21) )
              {
                v22 = *((_QWORD *)this + 168);
                v23 = *((_QWORD *)v19 + 1);
                v24 = _bittest64(&v22, v16);
                v25 = *((_QWORD *)v17 + 1);
                if ( v23 < v25 )
                  v25 = *((_QWORD *)v19 + 1);
                if ( v24 )
                  v25 = *((_QWORD *)v17 + 1);
                if ( v48 )
                {
                  if ( v48 != 1 )
                    __fastfail(0xC0000001);
                  if ( !v24 )
                    *((_QWORD *)v19 + 1) = v23 - v25;
                  v39 = a10;
                  v40 = 3 * (*v17 + 8LL);
                  *(_OWORD *)(a10 + 8 * v40) = *(_OWORD *)v17;
                  *(_QWORD *)(v39 + 8 * v40 + 16) = *((_QWORD *)v17 + 2);
                }
                else
                {
                  LOBYTE(v47) = 1;
                }
                *((_QWORD *)v17 + 1) -= v25;
                v11 = v48;
              }
            }
          }
          else if ( !*((_QWORD *)v17 + 1) && v11 == 1 )
          {
            v41 = a10;
            *(_OWORD *)(v18 + a10) = *(_OWORD *)v17;
            *(_QWORD *)(v18 + v41 + 16) = *((_QWORD *)v17 + 2);
          }
        }
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= a3 )
          break;
        v13 = v50;
      }
      v26 = a9;
      if ( (_BYTE)v47 && a9 )
      {
        (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)this + 8LL))(this);
        v27 = *v26;
        while ( (__int64 *)v27 != v26 )
        {
          if ( *(ExecutionModel::BaseResourceSet **)(v27 + 16) == this )
          {
            v42 = (__int64 *)v27;
            v27 = *(_QWORD *)v27;
            utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::erase(
              (__int64)v26,
              &v47,
              v42);
          }
          else
          {
            v27 = *(_QWORD *)v27;
          }
        }
        v28 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)this + 16LL);
        if ( v28 == ExecutionModel::BaseResourceSet::Release )
          ExecutionModel::BaseResourceSet::Release(this);
        else
          v28(this);
        (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)this + 8LL))(this);
        v29 = *v26;
        v30 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
        v31 = v30;
        if ( v30 )
        {
          v30[2] = (__int64)this;
          (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)this + 8LL))(this);
          v32 = *(__int64 ***)(v29 + 8);
          v31[1] = (__int64)v32;
          *v31 = v29;
          *v32 = v31;
          *(_QWORD *)(v29 + 8) = v31;
          v26 = a9;
          ++a9[2];
          v33 = 0;
        }
        else
        {
          v26 = a9;
          v33 = 1;
        }
        v34 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)this + 16LL);
        if ( v34 == ExecutionModel::BaseResourceSet::Release )
          ExecutionModel::BaseResourceSet::Release(this);
        else
          v34(this);
        if ( v33 )
          return 2147500037LL;
        a3 = v49;
      }
      v13 = v50;
      v12 = a8;
    }
    else
    {
      v26 = a9;
    }
    v35 = 0;
    if ( a3 )
    {
      v36 = (_QWORD *)(v13 + 8);
      while ( !*v36 )
      {
        ++v35;
        v36 += 3;
        if ( v35 >= a3 )
          goto LABEL_36;
      }
      *a7 = 1;
      for ( i = (char *)this + 160; i != *((char **)this + 20); i = *v44 )
      {
        v44 = (char **)(i + 8);
        result = ExecutionModel::BaseResourceSet::RecursiveVisit(
                   *(ExecutionModel::BaseResourceSet **)(*((_QWORD *)i + 1) + 16LL),
                   a5,
                   a6,
                   (__int64)&v47,
                   (__int64)v12,
                   (__int64)v26,
                   a10);
        if ( (int)result < 0 )
          return result;
        v12 = a8;
        if ( *a8 )
          break;
      }
    }
    else
    {
LABEL_36:
      v37 = a7;
      *v12 = 1;
      *v37 = 0;
    }
  }
  return 0LL;
}
