/*
 * XREFs of ?AcquireTransitionalResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x180004AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoAcquireResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAPEAXPEAXKKPEBU_RPC_ActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAVResourceSetProxy@2@@Z @ 0x180004570 (-DoAcquireResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJW4RmResourceSetType@@PEAT_R.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineProxy::AcquireTransitionalResourceSet(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        PSID Sid,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11)
{
  int v14; // edx
  __int64 v15; // rbx
  char *v16; // rax
  __int64 v17; // rdi
  int v18; // esi
  _QWORD *v20; // [rsp+70h] [rbp-68h]
  _QWORD v21[2]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v22; // [rsp+88h] [rbp-50h] BYREF
  __int64 v23; // [rsp+90h] [rbp-48h]
  __int64 v24; // [rsp+98h] [rbp-40h]
  ULONG v27; // [rsp+128h] [rbp+50h]

  if ( a10 )
  {
    v21[0] = a5;
    v27 = 0;
    v22 = 0LL;
    *a11 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    v20 = 0LL;
    v21[1] = 0LL;
    if ( a8 && *(int *)a8 <= 5 && *(_QWORD *)(a8 + 8) )
    {
      if ( a9 )
      {
        if ( !Sid )
        {
LABEL_9:
          v14 = *(_DWORD *)a8;
          v24 = *(_QWORD *)(a8 + 16);
          LODWORD(v22) = v14;
          v23 = *(_QWORD *)(a8 + 8);
          if ( a4 )
            v20 = v21;
          v15 = *(_QWORD *)(a1 + 16);
          if ( v15 )
          {
            v16 = (char *)malloc(0x60uLL);
            v17 = (__int64)v16;
            if ( v16 )
            {
              *((_QWORD *)v16 + 2) = v15;
              *(_QWORD *)v16 = &ExecutionModel::ResourceSetProxy::`vftable';
              *((_DWORD *)v16 + 2) = 1;
              *((_QWORD *)v16 + 3) = 0LL;
              *((_DWORD *)v16 + 8) = -1;
              *((_QWORD *)v16 + 5) = 0LL;
              *((_QWORD *)v16 + 6) = a1;
              InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v16 + 56), 0, 0);
              v18 = ExecutionModel::ResourcePolicyEngineProxy::DoAcquireResourceSet(
                      a1,
                      a2,
                      a3,
                      a4,
                      (__int64)v20,
                      (__int64)Sid,
                      v27,
                      a7,
                      (__int64)&v22,
                      0,
                      a9,
                      a10,
                      v17);
              if ( v18 < 0 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
              else
                *a11 = v17;
            }
            else
            {
              return (unsigned int)-2147024882;
            }
          }
          else
          {
            return (unsigned int)-2147467259;
          }
          return (unsigned int)v18;
        }
        if ( RtlValidSid(Sid) )
        {
          v27 = RtlLengthSid(Sid);
          goto LABEL_9;
        }
      }
      return (unsigned int)-2147024809;
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  return 2147942487LL;
}
