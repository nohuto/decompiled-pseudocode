/*
 * XREFs of ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C006A09C
 * Callers:
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0068CD0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0069040 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0069D1C (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00D6F28 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C00059E8 (ndisQuerySetMiniportEx.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     Template_qxzzxxxxxx @ 0x1C006A648 (Template_qxzzxxxxxx.c)
 */

void __fastcall ndisUpdateMiniportCsTrafficStatistics(_QWORD *MiniportAdapterHandle, int a2)
{
  KSPIN_LOCK v4; // r13
  bool v5; // zf
  KSPIN_LOCK *v6; // rbx
  KSPIN_LOCK v7; // rdi
  KSPIN_LOCK v8; // rsi
  KSPIN_LOCK v9; // r14
  KSPIN_LOCK v10; // r15
  KSPIN_LOCK v11; // r12
  KIRQL v12; // al
  char *v13; // rcx
  KSPIN_LOCK v14; // r11
  KSPIN_LOCK v15; // r10
  KSPIN_LOCK v16; // r9
  KSPIN_LOCK v17; // r8
  KSPIN_LOCK v18; // rdx
  signed __int64 v19; // rdx
  __int64 v20; // r8
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  const wchar_t *v23; // rcx
  const wchar_t *v24; // rax
  bool v25; // [rsp+70h] [rbp-90h]
  KSPIN_LOCK v26; // [rsp+78h] [rbp-88h]
  KSPIN_LOCK v27; // [rsp+80h] [rbp-80h]
  KSPIN_LOCK v29; // [rsp+90h] [rbp-70h]
  KSPIN_LOCK v30; // [rsp+98h] [rbp-68h]
  KSPIN_LOCK v31; // [rsp+A0h] [rbp-60h]
  _QWORD v32[6]; // [rsp+A8h] [rbp-58h] BYREF
  KSPIN_LOCK v33; // [rsp+D8h] [rbp-28h]
  _QWORD *v34; // [rsp+E0h] [rbp-20h]
  KSPIN_LOCK v35; // [rsp+E8h] [rbp-18h]
  __int128 v36; // [rsp+F0h] [rbp-10h]
  __int128 v37; // [rsp+100h] [rbp+0h]
  __int128 v38; // [rsp+110h] [rbp+10h]
  struct _NDIS_OID_REQUEST Request; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v40[20]; // [rsp+220h] [rbp+120h] BYREF

  v34 = MiniportAdapterHandle;
  memset((char *)v40 + 1, 0, 0x97uLL);
  v4 = 0LL;
  v40[0] = 9961856LL;
  v5 = a2 == 0;
  v6 = (KSPIN_LOCK *)MiniportAdapterHandle[565];
  v25 = v5;
  memset(&Request, 0, 0xF8uLL);
  *(_DWORD *)&Request.NdisReserved[16] |= 8u;
  *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqGeneric;
  Request.DATA.QUERY_INFORMATION.InformationBuffer = v40;
  Request.Header = (NDIS_OBJECT_HEADER)15466902;
  Request.DATA.QUERY_INFORMATION.Oid = 131334;
  *(_QWORD *)&Request.RequestType = 2LL;
  Request.DATA.QUERY_INFORMATION.InformationBufferLength = 152;
  if ( (unsigned int)ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Request, 0, 0LL, 0LL) )
    return;
  v33 = v40[4];
  v7 = 0LL;
  *(_QWORD *)&v36 = v40[4];
  v8 = 0LL;
  v9 = 0LL;
  v31 = v40[8];
  v10 = 0LL;
  *((_QWORD *)&v36 + 1) = v40[8];
  v11 = 0LL;
  v30 = v40[5];
  *(_QWORD *)&v37 = v40[5];
  v29 = v40[9];
  *((_QWORD *)&v37 + 1) = v40[9];
  v27 = v40[6];
  *(_QWORD *)&v38 = v40[6];
  v26 = v40[10];
  *((_QWORD *)&v38 + 1) = v40[10];
  v12 = KeAcquireSpinLockRaiseToDpc(v6);
  v13 = (char *)&v6[6 * a2 + 100];
  if ( !v25 )
  {
    v8 = v31;
    v9 = v30;
    v35 = v6[100];
    if ( v33 < v35 || (v14 = v6[101], v31 < v14) )
    {
      v10 = v29;
    }
    else
    {
      v15 = v6[102];
      v10 = v29;
      if ( v30 >= v15 )
      {
        v16 = v6[103];
        v11 = v27;
        v4 = v26;
        if ( v29 >= v16 )
        {
          v17 = v6[104];
          if ( v27 >= v17 )
          {
            v18 = v6[105];
            if ( v26 >= v18 )
            {
              v8 = v31 - v14;
              v7 = v33 - v35;
              v9 = v30 - v15;
              v10 = v29 - v16;
              v32[0] = v33 - v35;
              v11 = v27 - v17;
              v4 = v26 - v18;
              goto LABEL_13;
            }
          }
        }
LABEL_12:
        v7 = v33;
        v32[0] = v33;
LABEL_13:
        v32[5] = v4;
        v19 = (char *)v32 - v13;
        v32[4] = v11;
        v32[3] = v10;
        v20 = 6LL;
        v32[2] = v9;
        v32[1] = v8;
        do
        {
          *(_QWORD *)v13 += *(_QWORD *)&v13[v19];
          v13 += 8;
          --v20;
        }
        while ( v20 );
        goto LABEL_15;
      }
    }
    v11 = v27;
    v4 = v26;
    goto LABEL_12;
  }
LABEL_15:
  v21 = v37;
  *((_OWORD *)v6 + 50) = v36;
  v22 = v38;
  *((_OWORD *)v6 + 51) = v21;
  *((_OWORD *)v6 + 52) = v22;
  KeReleaseSpinLock(v6, v12);
  if ( !v25 && (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
  {
    if ( a2 == 1 )
    {
      v23 = L"DX";
      v24 = L"D0";
    }
    else
    {
      v23 = L"D0";
      v24 = L"DX";
    }
    Template_qxzzxxxxxx(
      v23,
      v34,
      v34 + 508,
      *((unsigned int *)v34 + 1028),
      v34[510],
      v24,
      v23,
      v7,
      v8,
      v9,
      v10,
      v11,
      v4);
  }
}
