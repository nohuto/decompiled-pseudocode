/*
 * XREFs of ?NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEAPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x1C00DEE20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisGetNextPDCounterId@@YAKXZ @ 0x1C00240FC (-ndisGetNextPDCounterId@@YAKXZ.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 *     WPP_SF_qdSS @ 0x1C006D5D4 (WPP_SF_qdSS.c)
 *     ??_GNDIS_PD_COUNTER@@QEAAPEAXI@Z @ 0x1C00DDECC (--_GNDIS_PD_COUNTER@@QEAAPEAXI@Z.c)
 *     ?ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYPE@@PEAUNDIS_PD_ASSOCIATION@@E@Z @ 0x1C00E11E4 (-ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYP.c)
 */

__int64 __fastcall NdisPDPIAllocateCounter(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        const struct _NDIS_PD_COUNTER_PARAMETERS *a2,
        struct NDIS_PD_COUNTER_HANDLE__ **a3)
{
  _QWORD *v4; // rbx
  const wchar_t *v7; // rax
  int v8; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rax
  const WCHAR *v11; // rdx
  __int64 v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
  {
    v7 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 96) )
      v7 = L" ";
    WPP_SF_qdSS((__int64)L" ", (__int64)a2, (__int64)a1, *((_DWORD *)a2 + 4), *((const wchar_t **)a2 + 1), v7);
  }
  if ( *((_BYTE *)a1 + 96) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_COUNTER_PARAMETERS *, struct NDIS_PD_COUNTER_HANDLE__ **))(*((_QWORD *)a1 + 11) + 40LL))(
           *((_QWORD *)a1 + 10),
           a2,
           a3);
    if ( v8 >= 0 )
      *((_QWORD *)*a3 + 6) = a1;
  }
  else
  {
    *a3 = 0LL;
    if ( *(_BYTE *)a2 == 0x80
      && *((_BYTE *)a2 + 1) == 1
      && *((_WORD *)a2 + 1) >= 0x14u
      && !*((_DWORD *)a2 + 1)
      && (unsigned int)(*((_DWORD *)a2 + 4) - 1) <= 2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x6E41444Eu);
      v4 = PoolWithTag;
      if ( PoolWithTag )
      {
        PoolWithTag[5] = 0LL;
        PoolWithTag[6] = 0LL;
        PoolWithTag[7] = 0LL;
        *((_DWORD *)PoolWithTag + 16) = 0;
        *((_BYTE *)PoolWithTag + 68) = 0;
        PoolWithTag[9] = 0LL;
        PoolWithTag[2] = 0LL;
        PoolWithTag[1] = 0LL;
        PoolWithTag[4] = 0LL;
        PoolWithTag[3] = 0LL;
        v10 = PoolWithTag + 10;
        v10[1] = v10;
        *v10 = v10;
        *((_DWORD *)v4 + 24) = 0;
        v4[13] = 0LL;
      }
      else
      {
        v4 = 0LL;
      }
      if ( !v4 )
      {
        v8 = -1073741670;
        goto LABEL_26;
      }
      *((_DWORD *)v4 + 19) = ndisGetNextPDCounterId();
      v11 = (const WCHAR *)*((_QWORD *)a2 + 1);
      if ( !v11 || RtlCreateUnicodeString((PUNICODE_STRING)v4 + 6, v11) )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_COUNTER_PARAMETERS *, __int64 *))(*((_QWORD *)a1 + 11) + 40LL))(
               *((_QWORD *)a1 + 10),
               a2,
               &v14);
        if ( v8 >= 0 )
        {
          LOBYTE(v13) = 0;
          ndisSetupPDCounter(v4, v14, *((unsigned int *)a2 + 4), a1, v13);
          *a3 = (struct NDIS_PD_COUNTER_HANDLE__ *)v4;
          goto LABEL_26;
        }
      }
      else
      {
        v8 = -1073741670;
      }
    }
    else
    {
      v8 = -1073741811;
    }
    if ( v4 )
      NDIS_PD_COUNTER::`scalar deleting destructor'((_UNICODE_STRING *)v4);
  }
LABEL_26:
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
  {
    LODWORD(v13) = v8;
    WPP_SF_qqd(0x2Bu, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, a1, *a3, v13);
  }
  return (unsigned int)v8;
}
