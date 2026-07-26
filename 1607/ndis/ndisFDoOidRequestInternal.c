/*
 * XREFs of ndisFDoOidRequestInternal @ 0x1C000B8D0
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C0059150 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000BB40 (ndisOidRequestComplete.c)
 *     ndisPreProcessOid @ 0x1C000C130 (ndisPreProcessOid.c)
 *     ndisOidCloneForCompatibility @ 0x1C000C368 (ndisOidCloneForCompatibility.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C000C7DC (ndisOidFreeInternalCloneRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qqDD @ 0x1C003C3D8 (WPP_SF_qqDD.c)
 *     WPP_SF_qqDDD @ 0x1C00445B0 (WPP_SF_qqDDD.c)
 *     WPP_SF_qLq @ 0x1C004EBD8 (WPP_SF_qLq.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     WPP_SF_qLqL @ 0x1C0058224 (WPP_SF_qLqL.c)
 */

void __fastcall ndisFDoOidRequestInternal(KSPIN_LOCK *Parameter)
{
  int v2; // r15d
  __int64 *v3; // rdi
  KIRQL v4; // al
  int v5; // edx
  __int64 **v6; // rcx
  __int64 v7; // rdx
  int v8; // ebp
  __int64 *v9; // r14
  unsigned __int8 v10; // al
  char v11; // di
  KIRQL v12; // al
  bool v13; // zf
  KIRQL v14; // al
  __int64 v15; // r8
  KSPIN_LOCK v16; // r15
  unsigned int v17; // r12d
  int v18; // eax
  __int64 v19; // r8
  __int64 *v20; // rbp
  int v21; // edi
  __int64 *v22; // rdx
  char v23; // bp
  _QWORD v24[6]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v25[6]; // [rsp+70h] [rbp-68h] BYREF
  unsigned int v26; // [rsp+E0h] [rbp+8h] BYREF
  __int64 *v27; // [rsp+E8h] [rbp+10h] BYREF

  v26 = 0;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_q(47LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, Parameter);
  while ( 1 )
  {
    v2 = -1073741823;
    v3 = 0LL;
    v4 = KeAcquireSpinLockRaiseToDpc(Parameter + 18);
    v5 = *((_DWORD *)Parameter + 14);
    Parameter[19] = (KSPIN_LOCK)KeGetCurrentThread();
    *((_DWORD *)Parameter + 40) = 2297213;
    if ( (v5 & 0x800) == 0 )
    {
      v6 = (__int64 **)(Parameter + 21);
      if ( *v6 != (__int64 *)v6 )
      {
        *((_DWORD *)Parameter + 14) = v5 | 0x800;
        v3 = *v6;
        v7 = **v6;
        if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v7 + 8) != v3 )
          __fastfail(3u);
        *v6 = (__int64 *)v7;
        *(_QWORD *)(v7 + 8) = v6;
      }
    }
    Parameter[19] = 0LL;
    *((_DWORD *)Parameter + 40) = 0;
    KeReleaseSpinLock(Parameter + 18, v4);
    if ( !v3 )
      break;
    v8 = *((_DWORD *)v3 - 10);
    v9 = v3 - 9;
    v10 = ndisPreProcessOid(Parameter, v3 - 9, 5LL, &v26);
    v11 = v10;
    if ( (unsigned __int8)byte_1C00895D2 >= 4u )
      WPP_SF_qqDDD(48LL, v26, Parameter, v9, v8, v10, v26);
    if ( v11 != 1 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc(Parameter + 18);
      v13 = (Parameter[7] & 0x10000) == 0;
      Parameter[19] = (KSPIN_LOCK)KeGetCurrentThread();
      *((_DWORD *)Parameter + 40) = 2297263;
      if ( !v13 )
      {
        v11 = 1;
        v2 = -1073676286;
      }
      Parameter[19] = 0LL;
      *((_DWORD *)Parameter + 40) = 0;
      KeReleaseSpinLock(Parameter + 18, v12);
      if ( v11 == 1 )
      {
        memset(v24, 0, sizeof(v24));
        v24[4] = v9;
        v24[2] = Parameter;
        LODWORD(v24[5]) = v2;
        ndisOidRequestComplete(v24);
      }
      else
      {
        *((_DWORD *)v9 + 22) |= 0x20000u;
        v14 = KeAcquireSpinLockRaiseToDpc(Parameter + 18);
        Parameter[23] = (KSPIN_LOCK)v9;
        Parameter[19] = 0LL;
        *((_DWORD *)Parameter + 40) = 0;
        KeReleaseSpinLock(Parameter + 18, v14);
        v16 = Parameter[2];
        v17 = *((_DWORD *)v9 + 8);
        v27 = 0LL;
        if ( (unsigned __int8)byte_1C00895D2 >= 4u )
          WPP_SF_qLq(120LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, Parameter, v17, v9);
        LOBYTE(v15) = 1;
        v18 = ndisOidCloneForCompatibility(Parameter, v9, v15, &v27);
        v20 = v27;
        v21 = v18;
        if ( !v18 )
        {
          if ( v27 )
          {
            if ( (unsigned __int8)byte_1C00895D2 >= 4u )
              WPP_SF_qqd(121LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, v9, v27, *((_DWORD *)v27 + 8));
            v22 = v20;
          }
          else
          {
            v22 = v9;
          }
          v21 = (*(__int64 (__fastcall **)(KSPIN_LOCK, __int64 *))(v16 + 248))(Parameter[3], v22);
        }
        if ( v21 != 259 && v20 )
        {
          LOBYTE(v19) = 1;
          ndisOidFreeInternalCloneRequest(Parameter, v20, v19, 0LL);
        }
        v23 = byte_1C00895D2;
        if ( (unsigned __int8)byte_1C00895D2 >= 4u )
        {
          WPP_SF_qLqL(122LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, Parameter, v17, v9, v21);
          v23 = byte_1C00895D2;
        }
        if ( v21 != 259 )
        {
          memset(v25, 0, sizeof(v25));
          if ( (unsigned __int8)v23 >= 4u )
            WPP_SF_qqDD(49LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, Parameter, v9, *((_DWORD *)v9 + 8), v21);
          v25[4] = v9;
          v25[2] = Parameter;
          LODWORD(v25[5]) = v21;
          ndisOidRequestComplete(v25);
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_q(50LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, Parameter);
}
