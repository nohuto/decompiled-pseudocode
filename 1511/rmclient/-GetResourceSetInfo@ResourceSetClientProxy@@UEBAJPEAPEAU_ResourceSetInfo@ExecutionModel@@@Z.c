/*
 * XREFs of ?GetResourceSetInfo@ResourceSetClientProxy@@UEBAJPEAPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180013E00
 * Callers:
 *     <none>
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180004630 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180008E40 (__security_check_cookie.c)
 *     memset_0 @ 0x1800095EC (memset_0.c)
 */

__int64 __fastcall ResourceSetClientProxy::GetResourceSetInfo(
        ResourceSetClientProxy *this,
        struct ExecutionModel::_ResourceSetInfo **a2)
{
  int Pointer; // ebx
  struct ExecutionModel::_ResourceSetInfo *v5; // rax
  struct ExecutionModel::_ResourceSetInfo *v6; // rcx
  __int64 v7; // r8
  struct ExecutionModel::_ResourceSetInfo *v8; // rdx
  _OWORD *v9; // rax
  __int64 v10; // r10
  _OWORD *v11; // rax
  _DWORD v13[92]; // [rsp+50h] [rbp-188h] BYREF

  Pointer = 0;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v13);
  if ( *((_DWORD *)this + 6) )
  {
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_1800176B0,
                              0x13u,
                              0LL,
                              *((_QWORD *)this + 2),
                              *((_DWORD *)this + 6),
                              v13).Pointer;
  }
  else
  {
    memset_0(v13, 0, 0x168uLL);
    v13[0] = *((_DWORD *)this + 7);
  }
  if ( Pointer >= 0 )
  {
    v5 = (struct ExecutionModel::_ResourceSetInfo *)malloc(0x168uLL);
    v6 = v5;
    v7 = 2LL;
    if ( v5 )
    {
      v8 = v5;
      v9 = v13;
      v10 = 2LL;
      do
      {
        *(_OWORD *)v8 = *v9;
        *((_OWORD *)v8 + 1) = v9[1];
        *((_OWORD *)v8 + 2) = v9[2];
        *((_OWORD *)v8 + 3) = v9[3];
        *((_OWORD *)v8 + 4) = v9[4];
        *((_OWORD *)v8 + 5) = v9[5];
        *((_OWORD *)v8 + 6) = v9[6];
        v8 = (struct ExecutionModel::_ResourceSetInfo *)((char *)v8 + 128);
        *((_OWORD *)v8 - 1) = v9[7];
        v9 += 8;
        --v10;
      }
      while ( v10 );
      *(_OWORD *)v8 = *v9;
      *((_OWORD *)v8 + 1) = v9[1];
      *((_OWORD *)v8 + 2) = v9[2];
      *((_OWORD *)v8 + 3) = v9[3];
      *((_OWORD *)v8 + 4) = v9[4];
      *((_OWORD *)v8 + 5) = v9[5];
      *((_QWORD *)v8 + 12) = *((_QWORD *)v9 + 12);
    }
    else
    {
      v6 = 0LL;
    }
    *a2 = v6;
    if ( v6 )
    {
      v11 = v13;
      do
      {
        *(_OWORD *)v6 = *v11;
        *((_OWORD *)v6 + 1) = v11[1];
        *((_OWORD *)v6 + 2) = v11[2];
        *((_OWORD *)v6 + 3) = v11[3];
        *((_OWORD *)v6 + 4) = v11[4];
        *((_OWORD *)v6 + 5) = v11[5];
        *((_OWORD *)v6 + 6) = v11[6];
        v6 = (struct ExecutionModel::_ResourceSetInfo *)((char *)v6 + 128);
        *((_OWORD *)v6 - 1) = v11[7];
        v11 += 8;
        --v7;
      }
      while ( v7 );
      *(_OWORD *)v6 = *v11;
      *((_OWORD *)v6 + 1) = v11[1];
      *((_OWORD *)v6 + 2) = v11[2];
      *((_OWORD *)v6 + 3) = v11[3];
      *((_OWORD *)v6 + 4) = v11[4];
      *((_OWORD *)v6 + 5) = v11[5];
      *((_QWORD *)v6 + 12) = *((_QWORD *)v11 + 12);
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  return (unsigned int)Pointer;
}
