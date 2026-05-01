/*
 * XREFs of ?GetResourceSetInfo@ResourceSetClientProxy@@UEBAJPEAPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x1800130D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180005B30 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180008770 (__security_check_cookie.c)
 *     memset_0 @ 0x180008DF8 (memset_0.c)
 */

__int64 __fastcall ResourceSetClientProxy::GetResourceSetInfo(
        ResourceSetClientProxy *this,
        struct ExecutionModel::_ResourceSetInfo **a2)
{
  int Pointer; // ebx
  _OWORD *v5; // rax
  __int64 v6; // r8
  _OWORD *v7; // rcx
  _OWORD *v8; // rdx
  __int64 v9; // r10
  _OWORD *v10; // rcx
  _DWORD v12[88]; // [rsp+50h] [rbp-178h] BYREF

  Pointer = 0;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v12);
  if ( *((_DWORD *)this + 6) )
  {
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_180016730,
                              0x13u,
                              0LL,
                              *((_QWORD *)this + 2),
                              *((_DWORD *)this + 6),
                              v12).Pointer;
  }
  else
  {
    memset_0(v12, 0, sizeof(v12));
    v12[0] = *((_DWORD *)this + 7);
  }
  if ( Pointer >= 0 )
  {
    v5 = malloc(0x160uLL);
    v6 = 2LL;
    if ( v5 )
    {
      v7 = v5;
      v8 = v12;
      v9 = 2LL;
      do
      {
        *v7 = *v8;
        v7[1] = v8[1];
        v7[2] = v8[2];
        v7[3] = v8[3];
        v7[4] = v8[4];
        v7[5] = v8[5];
        v7[6] = v8[6];
        v7 += 8;
        *(v7 - 1) = v8[7];
        v8 += 8;
        --v9;
      }
      while ( v9 );
      *v7 = *v8;
      v7[1] = v8[1];
      v7[2] = v8[2];
      v7[3] = v8[3];
      v7[4] = v8[4];
      v7[5] = v8[5];
    }
    *a2 = (struct ExecutionModel::_ResourceSetInfo *)v5;
    if ( v5 )
    {
      v10 = v12;
      do
      {
        *v5 = *v10;
        v5[1] = v10[1];
        v5[2] = v10[2];
        v5[3] = v10[3];
        v5[4] = v10[4];
        v5[5] = v10[5];
        v5[6] = v10[6];
        v5 += 8;
        *(v5 - 1) = v10[7];
        v10 += 8;
        --v6;
      }
      while ( v6 );
      *v5 = *v10;
      v5[1] = v10[1];
      v5[2] = v10[2];
      v5[3] = v10[3];
      v5[4] = v10[4];
      v5[5] = v10[5];
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  return (unsigned int)Pointer;
}
