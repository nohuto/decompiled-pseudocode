/*
 * XREFs of ndisOidRequestComplete @ 0x1C0006CB0
 * Callers:
 *     ndisFOidRequestCompleteInternal @ 0x1C0004BD0 (ndisFOidRequestCompleteInternal.c)
 *     ndisFDoOidRequestInternal @ 0x1C0006A40 (ndisFDoOidRequestInternal.c)
 *     ndisPreProcessOid @ 0x1C0007250 (ndisPreProcessOid.c)
 *     ndisMDoOidRequest @ 0x1C00078B0 (ndisMDoOidRequest.c)
 *     ndisMAbortRequests @ 0x1C000F50C (ndisMAbortRequests.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C003F83C (ndisCancelOidRequestOnFilter.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C003F9CC (ndisCancelOidRequestOnMiniport.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0040E6C (ndisMOidRequestCompleteInternal.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C00535B0 (ndisFDirectOidRequestCompleteInternal.c)
 *     ndisPMAddRemoveAsync @ 0x1C00CA900 (ndisPMAddRemoveAsync.c)
 * Callees:
 *     ndisFreeRefCount @ 0x1C000ED8C (ndisFreeRefCount.c)
 *     ndisDereferenceRef @ 0x1C00172CC (ndisDereferenceRef.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 *     Template_jqxq @ 0x1C003A110 (Template_jqxq.c)
 *     ?ndisCheckOidBufferIntegrity@@YAXPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1C003EA70 (-ndisCheckOidBufferIntegrity@@YAXPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     Template_jqxqqq @ 0x1C003F10C (Template_jqxqqq.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     WPP_SF_qLq @ 0x1C003F298 (WPP_SF_qLq.c)
 *     WPP_SF_qqqqDL @ 0x1C003F678 (WPP_SF_qqqqDL.c)
 *     ndisBugCheckEx @ 0x1C0049E68 (ndisBugCheckEx.c)
 *     WPP_SF_qLqL @ 0x1C0053274 (WPP_SF_qLqL.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C0053AFC (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisInvokeDirectOidRequestComplete @ 0x1C0056880 (ndisInvokeDirectOidRequestComplete.c)
 *     ndisMResetCompleteStage2 @ 0x1C005AA8C (ndisMResetCompleteStage2.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0066D40 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0066DDC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisMFinishClose @ 0x1C00E7034 (ndisMFinishClose.c)
 */

__int64 __fastcall ndisOidRequestComplete(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  char v5; // r12
  _BYTE *v7; // r14
  _BYTE *v8; // r15
  _BYTE *v9; // rdi
  int v10; // eax
  bool v11; // r13
  ULONG_PTR v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 v15; // al
  __int64 v16; // rcx
  unsigned __int8 v17; // al
  unsigned __int8 v18; // al
  void (__fastcall *v19)(__int64 *); // rax
  __int64 v20; // rbp
  int v21; // edx
  bool v22; // di
  __int64 v23; // rdi
  __int64 v24; // rdi
  KIRQL v25; // al
  __int64 v26; // rdi
  KIRQL v27; // al
  ULONG_PTR v28; // r8
  KIRQL v29; // bp
  __int64 v30; // r10
  unsigned __int8 v31; // r9
  unsigned __int8 v32; // cl
  _BYTE *v33; // rdx
  bool v34; // zf
  __int64 v35; // rdi
  unsigned int v36; // esi
  __int64 v37; // rbp
  unsigned int v38; // r14d
  __int64 result; // rax
  KIRQL v40; // bp
  int v41; // ecx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rsi
  KIRQL v45; // r15
  ULONG_PTR v46; // r10
  __int64 v47; // r9
  unsigned __int8 v48; // r8
  unsigned __int8 v49; // cl
  _BYTE *v50; // rdx
  char v51; // di
  KIRQL v52; // al
  __int64 v53; // rsi
  __int64 v54; // rsi
  KIRQL v55; // r14
  int v56; // edx
  ULONG_PTR v57; // rsi
  unsigned int v58; // edx
  ULONG_PTR v59; // rdi
  unsigned int v60; // edx
  __int64 v61; // r8
  char v62; // [rsp+A0h] [rbp+8h]
  _BYTE *v63; // [rsp+A8h] [rbp+10h]
  _BYTE *v64; // [rsp+B0h] [rbp+18h]
  ULONG_PTR v65; // [rsp+B8h] [rbp+20h]

  v4 = a1[4];
  v5 = 0;
  v63 = 0LL;
  v7 = 0LL;
  v64 = 0LL;
  v8 = 0LL;
  v62 = 0;
  v9 = *(_BYTE **)(v4 + 104);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqqqDL(a1, a2, *a1, a1[2], a1[3], v4, *(_DWORD *)(v4 + 32), *((_DWORD *)a1 + 10));
  *(_DWORD *)(v4 + 88) |= 1u;
  v10 = *(_DWORD *)(v4 + 88);
  v11 = (v10 & 0x200000) != 0;
  v12 = a1[4];
  v65 = v12;
  if ( (v10 & 0x220) != 0 )
  {
    a1[3] = (__int64)v9;
    v7 = v9;
    v63 = v9;
    if ( (*(_DWORD *)(v4 + 88) & 0x200) == 0 )
      goto LABEL_6;
  }
  else
  {
    a1[3] = 0LL;
    if ( *v9 == 5 )
    {
      v8 = v9;
      v64 = v9;
      a1[1] = (__int64)v9;
      goto LABEL_6;
    }
  }
  v62 = 1;
LABEL_6:
  v13 = *a1;
  if ( *a1 )
  {
    v18 = *(_BYTE *)(v13 + 32);
    if ( (v18 > 6u || v18 == 6 && *(_BYTE *)(v13 + 33) >= 0x28u) && !*((_DWORD *)a1 + 10) )
      goto LABEL_99;
  }
  else
  {
    v13 = a1[2];
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 16);
      v15 = *(_BYTE *)(v14 + 100);
      if ( v15 > 6u || v15 == 6 && *(_BYTE *)(v14 + 101) >= 0x28u )
      {
        v16 = *(_QWORD *)(v13 + 32);
        v17 = *(_BYTE *)(v16 + 32);
        if ( (v17 > 6u || v17 == 6 && *(_BYTE *)(v16 + 33) >= 0x28u) && !*((_DWORD *)a1 + 10) )
LABEL_99:
          ndisCheckOidBufferIntegrity(v12, (struct _NDIS_OBJECT_HEADER *)v13);
      }
    }
  }
  if ( (*(_DWORD *)(v4 + 88) & 0x40004) == 4 && !v11 && (*(_DWORD *)(v4 + 88) & 0x1000000) == 0 )
  {
    v19 = (void (__fastcall *)(__int64 *))*((_QWORD *)&unk_1C0071CD0 + 3 * *(unsigned int *)(v4 + 92));
    if ( v19 )
      v19(a1);
  }
  v20 = *a1;
  if ( *a1 && *(_DWORD *)(a1[4] + 32) == -50265855 && *((_DWORD *)a1 + 10) )
  {
    v52 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 3928));
    *(_DWORD *)(v20 + 3936) = *(_DWORD *)(v20 + 3940);
    *(_DWORD *)(v20 + 3940) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 3928), v52);
  }
  v21 = *(_DWORD *)(v4 + 88);
  LOBYTE(a4) = (v21 & 0x100) != 0;
  v22 = *(_DWORD *)(a1[4] + 4) == 1;
  if ( (v21 & 0x2000000) != 0 )
    v5 = 1;
  if ( (v21 & 8) != 0 )
  {
    *(_DWORD *)(v4 + 80) = *((_DWORD *)a1 + 10);
    KeSetEvent((PRKEVENT)(v4 + 112), 0, 0);
    a1[4] = 0LL;
  }
  else if ( (v21 & 2) != 0 )
  {
    if ( (v21 & 0x100) != 0 )
    {
      v53 = a1[2];
      if ( v53 )
        v54 = *(_QWORD *)(v53 + 32);
      else
        v54 = *a1;
      v55 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v54 + 96));
      *(_QWORD *)(v54 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v54 + 1856) = 2296878;
      if ( v22 && (*(_DWORD *)(v54 + 120) & 0x200000) != 0 )
      {
        v56 = *((_DWORD *)a1 + 10);
        if ( v56 && v56 != -1073676276 && (unsigned __int8)byte_1C0085312 >= 3u )
          WPP_SF_qdD(43LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v54, *(unsigned int *)(a1[4] + 32), v56);
        ndisMResetCompleteStage2((NDIS_HANDLE)v54);
      }
      *(_DWORD *)(v54 + 120) &= ~0x1000000u;
      *(_QWORD *)(v54 + 520) = 0LL;
      *(_DWORD *)(v54 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v54 + 96), v55);
      v7 = v63;
    }
    ExFreePoolWithTag((PVOID)a1[4], 0);
    a1[4] = 0LL;
  }
  v23 = *a1;
  if ( *a1 )
  {
    v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + 96));
    *(_QWORD *)(v23 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v23 + 1856) = 2296935;
    if ( !v11 )
    {
      *(_DWORD *)(v23 + 4484) &= ~2u;
      v41 = *((_DWORD *)a1 + 11);
      if ( (v41 & 1) == 0 )
      {
        if ( (unsigned __int8)byte_1C0085312 >= 4u )
          WPP_SF_q(44LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v23);
        if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
          Template_jqxq(
            v41,
            (unsigned int)&ClearingOidRequest,
            v23 + 4064,
            v23 + 4064,
            *(_DWORD *)(v23 + 4112),
            *(_QWORD *)(v23 + 4080),
            125);
        *(_DWORD *)(v23 + 4484) &= ~1u;
        *(_QWORD *)(v23 + 2224) = 0LL;
      }
      if ( (*((_DWORD *)a1 + 11) & 1) == 0 && *(_QWORD *)(v23 + 2216) )
        *(_QWORD *)(v23 + 2216) = 0LL;
    }
    *(_QWORD *)(v23 + 520) = 0LL;
    *(_DWORD *)(v23 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v23 + 96), v40);
    *(_WORD *)(v23 + 1822) = 0;
  }
  else
  {
    v24 = a1[2];
    if ( v24 )
    {
      if ( (*((_DWORD *)a1 + 11) & 1) == 0 )
      {
        v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v24 + 144));
        *(_QWORD *)(v24 + 152) = KeGetCurrentThread();
        *(_DWORD *)(v24 + 160) = 2296993;
        if ( v11 )
        {
          --*(_DWORD *)(v24 + 848);
        }
        else
        {
          *(_DWORD *)(v24 + 56) &= ~0x800u;
          *(_QWORD *)(v24 + 184) = 0LL;
        }
        *(_QWORD *)(v24 + 152) = 0LL;
        *(_DWORD *)(v24 + 160) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 144), v25);
      }
      if ( v11 )
      {
        ndisDereferenceRef((PKSPIN_LOCK)(v24 + 312));
      }
      else
      {
        v26 = v24 + 312;
        v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v26);
        v28 = *(_QWORD *)(v26 + 16);
        v29 = v27;
        if ( v28 )
        {
          if ( *(_BYTE *)(v28 + 1) )
          {
            if ( *(_BYTE *)(v28 + 1) == 1 )
            {
              v57 = v28 + 968;
              v58 = *(_DWORD *)(v28 + 1024);
              if ( v58 >> 17 < 0x3FFE && (unsigned __int16)v58 >> 1 == (v58 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v28 + 968));
                *(_DWORD *)(v57 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v58 & 0xFFFE) == 0 && (v58 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v28, 0xFuLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v28 + 968), 0);
              }
            }
          }
          else
          {
            v30 = *(_QWORD *)(v28 + 8);
            if ( v30 && (v31 = *(_BYTE *)(v28 + 3), v32 = 0, v31) )
            {
              while ( 1 )
              {
                v33 = (_BYTE *)(v30 + 2LL * v32);
                if ( *v33 == 15 )
                {
                  if ( v33[1] )
                    break;
                }
                if ( ++v32 >= v31 )
                  goto LABEL_41;
              }
              --v33[1];
            }
            else
            {
LABEL_41:
              if ( !_bittestandreset((signed __int32 *)(v28 + 16), 0xFu) )
                ndisBugCheckEx(0x1EuLL, 0LL, v28, 0xFuLL);
            }
          }
        }
        v34 = (*(_WORD *)(v26 + 8))-- == 1;
        if ( v34 && !*(_BYTE *)(v26 + 11) )
        {
          ndisFreeRefCount(*(PVOID *)(v26 + 16));
          *(_QWORD *)(v26 + 16) = 0LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v26, v29);
      }
    }
  }
  if ( v7 && !v5 )
  {
    if ( !v62 )
    {
      v42 = *((unsigned int *)a1 + 10);
      v43 = a1[4];
      if ( v11 )
        ndisInvokeDirectOidRequestComplete(v7, v43, v42, a4);
      else
        (*((void (__fastcall **)(_BYTE *, __int64, __int64, __int64))v7 + 98))(v7, v43, v42, a4);
    }
    v44 = *((_QWORD *)v7 + 2);
    v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v44 + 96));
    *(_QWORD *)(v44 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v44 + 1856) = 1442229;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v63 + 87);
    v46 = *((_QWORD *)v63 + 86);
    if ( v46 )
    {
      if ( *(_BYTE *)(v46 + 1) )
      {
        if ( *(_BYTE *)(v46 + 1) == 1 )
        {
          v59 = v46 + 392;
          v60 = *(_DWORD *)(v46 + 448);
          if ( v60 >> 17 < 0x3FFE && (unsigned __int16)v60 >> 1 == (v60 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v46 + 392));
            *(_DWORD *)(v59 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v60 & 0xFFFE) == 0 && (v60 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v46, 6uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v46 + 392), 0);
          }
        }
      }
      else
      {
        v47 = *(_QWORD *)(v46 + 8);
        if ( v47 && (v48 = *(_BYTE *)(v46 + 3), v49 = 0, v48) )
        {
          while ( 1 )
          {
            v50 = (_BYTE *)(v47 + 2LL * v49);
            if ( *v50 == 6 )
            {
              if ( v50[1] )
                break;
            }
            if ( ++v49 >= v48 )
              goto LABEL_86;
          }
          --v50[1];
        }
        else
        {
LABEL_86:
          if ( !_bittestandreset((signed __int32 *)(v46 + 16), 6u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v46, 6uLL);
        }
      }
    }
    v34 = (*((_DWORD *)v63 + 57))-- == 1;
    v51 = v34;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v63 + 87);
    if ( v51 )
      ndisMFinishClose(v63);
    *(_QWORD *)(v44 + 520) = 0LL;
    *(_DWORD *)(v44 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v44 + 96), v45);
    v8 = v64;
  }
  if ( v8 && !v5 )
  {
    if ( (unsigned __int8)byte_1C0085312 >= 4u )
      WPP_SF_qq(45LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1[4], v8);
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
      Template_jqxqqq(
        a1[4],
        (unsigned int)&CompletingOidRequestFilterEx,
        (_DWORD)v8 + 808,
        (_DWORD)v8 + 808,
        *((_DWORD *)v8 + 206),
        *(_QWORD *)(*((_QWORD *)v8 + 104) + 1312LL),
        *(_DWORD *)(a1[4] + 32),
        *((_DWORD *)a1 + 10),
        229);
    if ( v11 )
    {
      ndisFInvokeDirectOidRequestComplete(v8, a1[4], *((unsigned int *)a1 + 10), a4);
    }
    else
    {
      v35 = a1[4];
      v36 = *((_DWORD *)a1 + 10);
      v37 = *((_QWORD *)v8 + 2);
      v38 = *(_DWORD *)(v35 + 32);
      if ( (unsigned __int8)byte_1C0085312 >= 4u )
        WPP_SF_qLqL(123LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, v8, v38, v35, *((_DWORD *)a1 + 10));
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(v37 + 256))(*((_QWORD *)v8 + 3), v35, v36, a4);
      if ( (unsigned __int8)byte_1C0085312 >= 4u )
        WPP_SF_qLq(124LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, v8, v38, v35);
    }
  }
  result = 0LL;
  a1[4] = 0LL;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    v61 = *a1;
    if ( !*a1 )
      v61 = a1[2];
    return WPP_SF_qqq(46LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v61, v65, a1[3]);
  }
  return result;
}
