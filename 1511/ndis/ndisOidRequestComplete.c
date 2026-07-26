/*
 * XREFs of ndisOidRequestComplete @ 0x1C0008250
 * Callers:
 *     ndisFOidRequestCompleteInternal @ 0x1C00066F0 (ndisFOidRequestCompleteInternal.c)
 *     ndisFDoOidRequestInternal @ 0x1C0007FE0 (ndisFDoOidRequestInternal.c)
 *     ndisPreProcessOid @ 0x1C0008850 (ndisPreProcessOid.c)
 *     ndisMDoOidRequest @ 0x1C0008EC8 (ndisMDoOidRequest.c)
 *     ndisMAbortRequests @ 0x1C001366C (ndisMAbortRequests.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0025A0C (ndisMOidRequestCompleteInternal.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C0040F38 (ndisCancelOidRequestOnFilter.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C00410C8 (ndisCancelOidRequestOnMiniport.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C00539A0 (ndisFDirectOidRequestCompleteInternal.c)
 *     ndisPMAddRemoveAsync @ 0x1C00C3D20 (ndisPMAddRemoveAsync.c)
 * Callees:
 *     ndisFreeRefCount @ 0x1C0013468 (ndisFreeRefCount.c)
 *     ndisDereferenceRef @ 0x1C001C6C4 (ndisDereferenceRef.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C00384C4 (WPP_SF_qqq.c)
 *     Template_jqxq @ 0x1C003AE50 (Template_jqxq.c)
 *     Template_jqxqqq @ 0x1C004084C (Template_jqxqqq.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 *     WPP_SF_qLq @ 0x1C00409D8 (WPP_SF_qLq.c)
 *     WPP_SF_qqqqDL @ 0x1C0040D74 (WPP_SF_qqqqDL.c)
 *     ndisBugCheckEx @ 0x1C004A708 (ndisBugCheckEx.c)
 *     WPP_SF_qLqL @ 0x1C0053664 (WPP_SF_qLqL.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C0053EEC (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisInvokeDirectOidRequestComplete @ 0x1C0056710 (ndisInvokeDirectOidRequestComplete.c)
 *     ndisMResetCompleteStage2 @ 0x1C005AA2C (ndisMResetCompleteStage2.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0065E54 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0065EF0 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisMFinishClose @ 0x1C00E1498 (ndisMFinishClose.c)
 */

__int64 __fastcall ndisOidRequestComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  char v5; // r12
  _BYTE *v7; // r14
  _BYTE *v8; // r15
  _BYTE *v9; // rdi
  int v10; // eax
  bool v11; // r13
  _DWORD *v12; // r8
  ULONG_PTR v13; // rdx
  ULONG_PTR v14; // rdx
  __int64 v15; // rcx
  unsigned __int8 v16; // al
  __int64 v17; // rcx
  unsigned __int8 v18; // al
  int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned __int8 v22; // al
  void (__fastcall *v23)(__int64); // rax
  ULONG_PTR v24; // rbp
  int v25; // edx
  bool v26; // di
  ULONG_PTR v27; // rdi
  __int64 v28; // rdi
  KIRQL v29; // al
  __int64 v30; // rdi
  KIRQL v31; // al
  ULONG_PTR v32; // r8
  KIRQL v33; // bp
  __int64 v34; // r10
  unsigned __int8 v35; // r9
  unsigned __int8 v36; // cl
  _BYTE *v37; // rdx
  bool v38; // zf
  __int64 v39; // rdi
  unsigned int v40; // esi
  __int64 v41; // rbp
  unsigned int v42; // r14d
  __int64 result; // rax
  KIRQL v44; // bp
  int v45; // ecx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rdi
  KIRQL v49; // r15
  ULONG_PTR v50; // r8
  __int64 v51; // r10
  unsigned __int8 v52; // r9
  unsigned __int8 v53; // cl
  _BYTE *v54; // rdx
  char v55; // si
  int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // ecx
  KIRQL v59; // al
  __int64 v60; // rsi
  ULONG_PTR v61; // rsi
  KIRQL v62; // r14
  int v63; // edx
  ULONG_PTR v64; // rsi
  unsigned int v65; // edx
  ULONG_PTR v66; // rsi
  unsigned int v67; // edx
  ULONG_PTR v68; // r8
  char v69; // [rsp+A0h] [rbp+8h]
  _BYTE *v70; // [rsp+A8h] [rbp+10h]
  _BYTE *v71; // [rsp+B0h] [rbp+18h]
  _DWORD *v72; // [rsp+B8h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 32);
  v5 = 0;
  v70 = 0LL;
  v7 = 0LL;
  v71 = 0LL;
  v8 = 0LL;
  v69 = 0;
  v9 = *(_BYTE **)(v4 + 104);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqqqDL(
      a1,
      a2,
      *(_QWORD *)a1,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 24),
      v4,
      *(_DWORD *)(v4 + 32),
      *(_DWORD *)(a1 + 40));
  *(_DWORD *)(v4 + 88) |= 1u;
  v10 = *(_DWORD *)(v4 + 88);
  v11 = (v10 & 0x200000) != 0;
  v12 = *(_DWORD **)(a1 + 32);
  v72 = v12;
  if ( (v10 & 0x220) != 0 )
  {
    *(_QWORD *)(a1 + 24) = v9;
    v7 = v9;
    v70 = v9;
    if ( (*(_DWORD *)(v4 + 88) & 0x200) == 0 )
      goto LABEL_6;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    if ( *v9 == 5 )
    {
      v8 = v9;
      v71 = v9;
      *(_QWORD *)(a1 + 8) = v9;
      goto LABEL_6;
    }
  }
  v69 = 1;
LABEL_6:
  v13 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v22 = *(_BYTE *)(v13 + 32);
    if ( (v22 > 6u || v22 == 6 && *(_BYTE *)(v13 + 33) >= 0x28u) && !*(_DWORD *)(a1 + 40) )
    {
      v56 = v12[1];
      if ( (v56 & 0xFFFFFFFD) != 0 )
      {
        if ( v56 != 12 )
          goto LABEL_22;
        v57 = v12[13];
        v58 = v12[15];
      }
      else
      {
        v57 = v12[12];
        v58 = v12[13];
      }
      if ( v58 > v57 )
        ndisBugCheckEx(0x1DuLL, v13, (ULONG_PTR)v12, 0LL);
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 16);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 16);
      v16 = *(_BYTE *)(v15 + 100);
      if ( v16 > 6u || v16 == 6 && *(_BYTE *)(v15 + 101) >= 0x28u )
      {
        v17 = *(_QWORD *)(v14 + 32);
        v18 = *(_BYTE *)(v17 + 32);
        if ( (v18 > 6u || v18 == 6 && *(_BYTE *)(v17 + 33) >= 0x28u) && !*(_DWORD *)(a1 + 40) )
        {
          v19 = v12[1];
          if ( (v19 & 0xFFFFFFFD) != 0 )
          {
            if ( v19 != 12 )
              goto LABEL_22;
            v20 = v12[13];
            v21 = v12[15];
          }
          else
          {
            v20 = v12[12];
            v21 = v12[13];
          }
          if ( v21 > v20 )
            ndisBugCheckEx(0x1DuLL, v14, (ULONG_PTR)v12, 0LL);
        }
      }
    }
  }
LABEL_22:
  if ( (*(_DWORD *)(v4 + 88) & 0x40004) == 4 && !v11 && (*(_DWORD *)(v4 + 88) & 0x1000000) == 0 )
  {
    v23 = (void (__fastcall *)(__int64))*((_QWORD *)&unk_1C0070CE0 + 3 * *(unsigned int *)(v4 + 92));
    if ( v23 )
      v23(a1);
  }
  v24 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 && *(_DWORD *)(*(_QWORD *)(a1 + 32) + 32LL) == -50265855 && *(_DWORD *)(a1 + 40) )
  {
    v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v24 + 3928));
    *(_DWORD *)(v24 + 3936) = *(_DWORD *)(v24 + 3940);
    *(_DWORD *)(v24 + 3940) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 3928), v59);
  }
  v25 = *(_DWORD *)(v4 + 88);
  LOBYTE(a4) = (v25 & 0x100) != 0;
  v26 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL) == 1;
  if ( (v25 & 0x2000000) != 0 )
    v5 = 1;
  if ( (v25 & 8) != 0 )
  {
    *(_DWORD *)(v4 + 80) = *(_DWORD *)(a1 + 40);
    KeSetEvent((PRKEVENT)(v4 + 112), 0, 0);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  else if ( (v25 & 2) != 0 )
  {
    if ( (v25 & 0x100) != 0 )
    {
      v60 = *(_QWORD *)(a1 + 16);
      if ( v60 )
        v61 = *(_QWORD *)(v60 + 32);
      else
        v61 = *(_QWORD *)a1;
      v62 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v61 + 96));
      *(_QWORD *)(v61 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v61 + 1856) = 2296878;
      if ( v26 && (*(_DWORD *)(v61 + 120) & 0x200000) != 0 )
      {
        v63 = *(_DWORD *)(a1 + 40);
        if ( v63 && v63 != -1073676276 && (unsigned __int8)byte_1C0083712 >= 3u )
          WPP_SF_qdD(
            43LL,
            &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids,
            v61,
            *(unsigned int *)(*(_QWORD *)(a1 + 32) + 32LL),
            v63);
        ndisMResetCompleteStage2((NDIS_HANDLE)v61);
      }
      *(_DWORD *)(v61 + 120) &= ~0x1000000u;
      *(_QWORD *)(v61 + 520) = 0LL;
      *(_DWORD *)(v61 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v61 + 96), v62);
      v7 = v70;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 32), 0);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v27 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v27 + 96));
    *(_QWORD *)(v27 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v27 + 1856) = 2296935;
    if ( !v11 )
    {
      *(_DWORD *)(v27 + 4484) &= ~2u;
      v45 = *(_DWORD *)(a1 + 44);
      if ( (v45 & 1) == 0 )
      {
        if ( (unsigned __int8)byte_1C0083712 >= 4u )
          WPP_SF_q(44LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v27);
        if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
          Template_jqxq(
            v45,
            (unsigned int)&ClearingOidRequest,
            v27 + 4064,
            v27 + 4064,
            *(_DWORD *)(v27 + 4112),
            *(_QWORD *)(v27 + 4080),
            125);
        *(_DWORD *)(v27 + 4484) &= ~1u;
        *(_QWORD *)(v27 + 2224) = 0LL;
      }
      if ( (*(_DWORD *)(a1 + 44) & 1) == 0 && *(_QWORD *)(v27 + 2216) )
        *(_QWORD *)(v27 + 2216) = 0LL;
    }
    *(_QWORD *)(v27 + 520) = 0LL;
    *(_DWORD *)(v27 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v27 + 96), v44);
    *(_WORD *)(v27 + 1822) = 0;
  }
  else
  {
    v28 = *(_QWORD *)(a1 + 16);
    if ( v28 )
    {
      if ( (*(_DWORD *)(a1 + 44) & 1) == 0 )
      {
        v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v28 + 144));
        *(_QWORD *)(v28 + 152) = KeGetCurrentThread();
        *(_DWORD *)(v28 + 160) = 2296993;
        if ( v11 )
        {
          --*(_DWORD *)(v28 + 848);
        }
        else
        {
          *(_DWORD *)(v28 + 56) &= ~0x800u;
          *(_QWORD *)(v28 + 184) = 0LL;
        }
        *(_QWORD *)(v28 + 152) = 0LL;
        *(_DWORD *)(v28 + 160) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v28 + 144), v29);
      }
      if ( v11 )
      {
        ndisDereferenceRef((PKSPIN_LOCK)(v28 + 312));
      }
      else
      {
        v30 = v28 + 312;
        v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v30);
        v32 = *(_QWORD *)(v30 + 16);
        v33 = v31;
        if ( v32 )
        {
          if ( *(_BYTE *)(v32 + 1) )
          {
            if ( *(_BYTE *)(v32 + 1) == 1 )
            {
              v64 = v32 + 968;
              v65 = *(_DWORD *)(v32 + 1024);
              if ( v65 >> 17 < 0x3FFE && (unsigned __int16)v65 >> 1 == (v65 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v32 + 968));
                *(_DWORD *)(v64 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v65 & 0xFFFE) == 0 && (v65 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v32, 0xFuLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v32 + 968), 0);
              }
            }
          }
          else
          {
            v34 = *(_QWORD *)(v32 + 8);
            if ( v34 && (v35 = *(_BYTE *)(v32 + 3), v36 = 0, v35) )
            {
              while ( 1 )
              {
                v37 = (_BYTE *)(v34 + 2LL * v36);
                if ( *v37 == 15 )
                {
                  if ( v37[1] )
                    break;
                }
                if ( ++v36 >= v35 )
                  goto LABEL_45;
              }
              --v37[1];
            }
            else
            {
LABEL_45:
              if ( !_bittestandreset((signed __int32 *)(v32 + 16), 0xFu) )
                ndisBugCheckEx(0x1EuLL, 0LL, v32, 0xFuLL);
            }
          }
        }
        v38 = (*(_WORD *)(v30 + 8))-- == 1;
        if ( v38 && !*(_BYTE *)(v30 + 11) )
        {
          ndisFreeRefCount(*(PVOID *)(v30 + 16));
          *(_QWORD *)(v30 + 16) = 0LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v30, v33);
      }
    }
  }
  if ( v7 && !v5 )
  {
    if ( !v69 )
    {
      v46 = *(unsigned int *)(a1 + 40);
      v47 = *(_QWORD *)(a1 + 32);
      if ( v11 )
        ndisInvokeDirectOidRequestComplete(v7, v47, v46, a4);
      else
        (*((void (__fastcall **)(_BYTE *, __int64, __int64, __int64))v7 + 98))(v7, v47, v46, a4);
    }
    v48 = *((_QWORD *)v7 + 2);
    v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v48 + 96));
    *(_QWORD *)(v48 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v48 + 1856) = 1442229;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v70 + 87);
    v50 = *((_QWORD *)v70 + 86);
    if ( v50 )
    {
      if ( *(_BYTE *)(v50 + 1) )
      {
        if ( *(_BYTE *)(v50 + 1) == 1 )
        {
          v66 = v50 + 392;
          v67 = *(_DWORD *)(v50 + 448);
          if ( v67 >> 17 < 0x3FFE && (unsigned __int16)v67 >> 1 == (v67 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v50 + 392));
            *(_DWORD *)(v66 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v67 & 0xFFFE) == 0 && (v67 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v50, 6uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v50 + 392), 0);
          }
        }
      }
      else
      {
        v51 = *(_QWORD *)(v50 + 8);
        if ( v51 && (v52 = *(_BYTE *)(v50 + 3), v53 = 0, v52) )
        {
          while ( 1 )
          {
            v54 = (_BYTE *)(v51 + 2LL * v53);
            if ( *v54 == 6 )
            {
              if ( v54[1] )
                break;
            }
            if ( ++v53 >= v52 )
              goto LABEL_90;
          }
          --v54[1];
        }
        else
        {
LABEL_90:
          if ( !_bittestandreset((signed __int32 *)(v50 + 16), 6u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v50, 6uLL);
        }
      }
    }
    v38 = (*((_DWORD *)v70 + 57))-- == 1;
    v55 = v38;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v70 + 87);
    if ( v55 )
      ndisMFinishClose(v70);
    *(_QWORD *)(v48 + 520) = 0LL;
    *(_DWORD *)(v48 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v48 + 96), v49);
    v8 = v71;
  }
  if ( v8 && !v5 )
  {
    if ( (unsigned __int8)byte_1C0083712 >= 4u )
      WPP_SF_qq(45LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, *(_QWORD *)(a1 + 32), v8);
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
      Template_jqxqqq(
        *(_QWORD *)(a1 + 32),
        (unsigned int)&CompletingOidRequestFilterEx,
        (_DWORD)v8 + 808,
        (_DWORD)v8 + 808,
        *((_DWORD *)v8 + 206),
        *(_QWORD *)(*((_QWORD *)v8 + 104) + 1312LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 32LL),
        *(_DWORD *)(a1 + 40),
        229);
    if ( v11 )
    {
      ndisFInvokeDirectOidRequestComplete(v8, *(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 40), a4);
    }
    else
    {
      v39 = *(_QWORD *)(a1 + 32);
      v40 = *(_DWORD *)(a1 + 40);
      v41 = *((_QWORD *)v8 + 2);
      v42 = *(_DWORD *)(v39 + 32);
      if ( (unsigned __int8)byte_1C0083712 >= 4u )
        WPP_SF_qLqL(123LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, v8, v42, v39, *(_DWORD *)(a1 + 40));
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(v41 + 256))(*((_QWORD *)v8 + 3), v39, v40, a4);
      if ( (unsigned __int8)byte_1C0083712 >= 4u )
        WPP_SF_qLq(124LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, v8, v42, v39);
    }
  }
  result = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
  {
    v68 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      v68 = *(_QWORD *)(a1 + 16);
    return WPP_SF_qqq(46LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v68, v72, *(_QWORD *)(a1 + 24));
  }
  return result;
}
