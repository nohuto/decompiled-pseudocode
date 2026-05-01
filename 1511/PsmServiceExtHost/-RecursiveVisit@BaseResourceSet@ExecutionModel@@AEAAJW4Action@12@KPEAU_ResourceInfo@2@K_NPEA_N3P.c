/*
 * XREFs of ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000B450
 * Callers:
 *     ?ReassignResources@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAV12@@Z @ 0x18000332C (-ReassignResources@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_S.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180003708 (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000B450 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000B760 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 * Callees:
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000B3D0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000B450 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?erase@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18001FD2C (-erase@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::RecursiveVisit(
        ExecutionModel::BaseResourceSet *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        _BYTE *a7,
        _BYTE *a8,
        __int64 **a9,
        __int64 a10)
{
  bool v10; // zf
  __int64 v11; // rbx
  unsigned int v12; // r10d
  __int64 v14; // rdi
  unsigned __int64 v15; // rbp
  int *v16; // rbx
  char *v17; // r11
  char v18; // al
  __int64 v19; // rax
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rcx
  __int64 **v22; // rbp
  __int64 *v23; // rbx
  __int64 (__fastcall *v24)(ExecutionModel::BaseResourceSet *); // rbx
  __int64 *v25; // rbx
  _QWORD *v26; // rax
  _QWORD *v27; // rbp
  _QWORD *v28; // rax
  char v29; // di
  __int64 (__fastcall *v30)(ExecutionModel::BaseResourceSet *); // rbx
  unsigned int v31; // ecx
  _QWORD *v32; // rax
  __int64 result; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 *v36; // r8
  char *i; // rax
  char **v38; // rbx
  bool (__fastcall *v39)(ExecutionModel::BaseResourceSet *, struct ExecutionModel::_ResourceInfo *); // [rsp+50h] [rbp-38h]
  char *v40; // [rsp+58h] [rbp-30h]
  __int64 v41; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v42; // [rsp+98h] [rbp+10h]
  unsigned int v43; // [rsp+A0h] [rbp+18h]
  __int64 v44; // [rsp+A8h] [rbp+20h]

  v44 = a4;
  v43 = a3;
  v42 = a2;
  v10 = *((_DWORD *)this + 338) == 2;
  v11 = a4;
  v12 = a3;
  *a8 = 0;
  if ( v10 )
  {
    v14 = 0LL;
    LOBYTE(v41) = 0;
    if ( (_DWORD)a3 )
    {
      while ( 1 )
      {
        v15 = *(unsigned int *)(v11 + 24 * v14);
        v16 = (int *)(v11 + 24 * v14);
        if ( (unsigned int)v15 <= 0x2F )
        {
          a3 = 24LL * (int)v15 + 192;
          v17 = (char *)this + a3;
          v40 = (char *)this + a3;
          if ( *(_QWORD *)((char *)this + a3 + 8) )
          {
            a2 = (unsigned int)v16[4];
            if ( (int)a2 >= 101 )
            {
              a2 = v42;
            }
            else if ( !a6
                   || ((v39 = *(bool (__fastcall **)(ExecutionModel::BaseResourceSet *, struct ExecutionModel::_ResourceInfo *))(*(_QWORD *)this + 96LL),
                        v39 != ExecutionModel::BaseResourceSet::HasLowerPrecedenceThan)
                     ? (v18 = ((__int64 (__fastcall *)(ExecutionModel::BaseResourceSet *, int *, _QWORD, bool (__fastcall *)(ExecutionModel::BaseResourceSet *, struct ExecutionModel::_ResourceInfo *)))v39)(
                                this,
                                v16,
                                a5,
                                ExecutionModel::BaseResourceSet::HasLowerPrecedenceThan),
                        v12 = v43,
                        v17 = v40)
                     : (char *)(v18 = (int)a2 < *((_DWORD *)this + 6 * (int)v15 + 52)),
                       v18) )
            {
              v19 = *((_QWORD *)this + 168);
              if ( _bittest64(&v19, v15) )
                LOBYTE(a3) = 1;
              else
                LOBYTE(a3) = 0;
              v20 = *((_QWORD *)v17 + 1);
              v21 = *((_QWORD *)v16 + 1);
              if ( v20 < v21 )
                v21 = *((_QWORD *)v17 + 1);
              if ( (_BYTE)a3 )
                v21 = *((_QWORD *)v16 + 1);
              a2 = v42;
              if ( v42 )
              {
                if ( v42 != 1 )
                  __fastfail(0xC0000001);
                if ( !(_BYTE)a3 )
                  *((_QWORD *)v17 + 1) = v20 - v21;
                a2 = a10;
                v34 = 3 * (*v16 + 8LL);
                *(_OWORD *)(a10 + 8 * v34) = *(_OWORD *)v16;
                *(_QWORD *)(a2 + 8 * v34 + 16) = *((_QWORD *)v16 + 2);
              }
              else
              {
                LOBYTE(v41) = 1;
              }
              *((_QWORD *)v16 + 1) -= v21;
            }
          }
          else if ( !*((_QWORD *)v16 + 1) && (_DWORD)a2 == 1 )
          {
            v35 = a10;
            *(_OWORD *)(a3 + a10) = *(_OWORD *)v16;
            *(_QWORD *)(a3 + v35 + 16) = *((_QWORD *)v16 + 2);
          }
        }
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= v12 )
          break;
        a2 = v42;
        v11 = v44;
      }
      v22 = a9;
      if ( (_BYTE)v41 && a9 )
      {
        (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *, __int64, __int64, bool (__fastcall *)(ExecutionModel::BaseResourceSet *, struct ExecutionModel::_ResourceInfo *)))(*(_QWORD *)this + 8LL))(
          this,
          a2,
          a3,
          ExecutionModel::BaseResourceSet::HasLowerPrecedenceThan);
        v23 = *v22;
        while ( v23 != (__int64 *)v22 )
        {
          if ( (ExecutionModel::BaseResourceSet *)v23[2] == this )
          {
            v36 = v23;
            v23 = (__int64 *)*v23;
            utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::erase(
              v22,
              &v41,
              v36);
          }
          else
          {
            v23 = (__int64 *)*v23;
          }
        }
        v24 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)this + 16LL);
        if ( v24 == ExecutionModel::BaseResourceSet::Release )
          ExecutionModel::BaseResourceSet::Release(this);
        else
          v24(this);
        (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)this + 8LL))(this);
        v25 = *v22;
        v26 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
        v27 = v26;
        if ( v26 )
        {
          v26[2] = this;
          (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)this + 8LL))(this);
          v28 = (_QWORD *)v25[1];
          v27[1] = v28;
          *v27 = v25;
          *v28 = v27;
          v25[1] = (__int64)v27;
          v22 = a9;
          a9[2] = (__int64 *)((char *)a9[2] + 1);
          v29 = 0;
        }
        else
        {
          v22 = a9;
          v29 = 1;
        }
        v30 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)this + 16LL);
        if ( v30 == ExecutionModel::BaseResourceSet::Release )
          ExecutionModel::BaseResourceSet::Release(this);
        else
          v30(this);
        if ( v29 )
          return 2147500037LL;
        v12 = v43;
      }
      v11 = v44;
    }
    else
    {
      v22 = a9;
    }
    v31 = 0;
    if ( v12 )
    {
      v32 = (_QWORD *)(v11 + 8);
      while ( !*v32 )
      {
        ++v31;
        v32 += 3;
        if ( v31 >= v12 )
          goto LABEL_37;
      }
      *a7 = 1;
      for ( i = (char *)this + 160; i != *((char **)this + 20); i = *v38 )
      {
        v38 = (char **)(i + 8);
        result = ExecutionModel::BaseResourceSet::RecursiveVisit(
                   *(ExecutionModel::BaseResourceSet **)(*((_QWORD *)i + 1) + 16LL),
                   a5,
                   a6,
                   (__int64)&v41,
                   (__int64)a8,
                   (__int64)v22,
                   a10);
        if ( (int)result < 0 )
          return result;
        if ( *a8 )
          break;
      }
    }
    else
    {
LABEL_37:
      *a7 = 0;
      *a8 = 1;
    }
  }
  return 0LL;
}
