/*
 * XREFs of ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C006EC2C
 * Callers:
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C006D730 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006DAA4 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C006E81C (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00DCEDC (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C000A5C0 (ndisQuerySetMiniportEx.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     Template_qxzzxxxxxx @ 0x1C006F254 (Template_qxzzxxxxxx.c)
 */

void __fastcall ndisUpdateMiniportCsTrafficStatistics(_QWORD *MiniportAdapterHandle, int a2)
{
  bool v4; // zf
  KSPIN_LOCK *v5; // rbx
  KSPIN_LOCK v6; // rdi
  KSPIN_LOCK v7; // rsi
  KSPIN_LOCK v8; // r14
  KSPIN_LOCK v9; // r15
  KSPIN_LOCK v10; // r12
  KSPIN_LOCK v11; // r13
  KIRQL v12; // al
  char *v13; // rcx
  KSPIN_LOCK v14; // r11
  KSPIN_LOCK v15; // r10
  KSPIN_LOCK v16; // r9
  KSPIN_LOCK v17; // r8
  KSPIN_LOCK v18; // rdx
  KSPIN_LOCK v19; // rax
  signed __int64 v20; // rdx
  __int64 v21; // r8
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  const wchar_t *v24; // rcx
  const wchar_t *v25; // rax
  bool v26; // [rsp+70h] [rbp-90h]
  KIRQL NewIrql; // [rsp+71h] [rbp-8Fh]
  _QWORD v29[6]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v30; // [rsp+A8h] [rbp-58h]
  __int128 v31; // [rsp+B0h] [rbp-50h]
  __int128 v32; // [rsp+C0h] [rbp-40h]
  __int128 v33; // [rsp+D0h] [rbp-30h]
  struct _NDIS_OID_REQUEST Request; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v35[20]; // [rsp+1E0h] [rbp+E0h] BYREF

  v30 = MiniportAdapterHandle;
  memset((char *)v35 + 1, 0, 0x97uLL);
  v35[0] = 9961856LL;
  v4 = a2 == 0;
  v5 = (KSPIN_LOCK *)MiniportAdapterHandle[565];
  v26 = v4;
  memset(&Request, 0, 0xF8uLL);
  *(_DWORD *)&Request.NdisReserved[16] |= 8u;
  *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqGeneric;
  Request.DATA.QUERY_INFORMATION.InformationBuffer = v35;
  Request.Header = (NDIS_OBJECT_HEADER)15466902;
  Request.DATA.QUERY_INFORMATION.Oid = 131334;
  *(_QWORD *)&Request.RequestType = 2LL;
  Request.DATA.QUERY_INFORMATION.InformationBufferLength = 152;
  if ( !(unsigned int)ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Request, 0, 0LL, 0LL) )
  {
    memset(v29, 0, sizeof(v29));
    v6 = v35[4];
    v7 = v35[8];
    v8 = v35[5];
    v9 = v35[9];
    v10 = v35[6];
    v11 = v35[10];
    *(_QWORD *)&v31 = v35[4];
    *((_QWORD *)&v31 + 1) = v35[8];
    *(_QWORD *)&v32 = v35[5];
    *((_QWORD *)&v32 + 1) = v35[9];
    *(_QWORD *)&v33 = v35[6];
    *((_QWORD *)&v33 + 1) = v35[10];
    v12 = KeAcquireSpinLockRaiseToDpc(v5);
    NewIrql = v12;
    v13 = (char *)&v5[6 * a2 + 100];
    if ( v26 )
    {
      v11 = v29[5];
      v10 = v29[4];
      v9 = v29[3];
      v8 = v29[2];
      v7 = v29[1];
      v6 = v29[0];
    }
    else
    {
      v14 = v5[100];
      if ( v6 >= v14 )
      {
        v15 = v5[101];
        if ( v7 >= v15 )
        {
          v16 = v5[102];
          if ( v8 >= v16 )
          {
            v17 = v5[103];
            if ( v9 >= v17 )
            {
              v18 = v5[104];
              if ( v10 >= v18 )
              {
                v19 = v5[105];
                if ( v11 >= v19 )
                {
                  v6 -= v14;
                  v7 -= v15;
                  v8 -= v16;
                  v9 -= v17;
                  v10 -= v18;
                  v11 -= v19;
                }
              }
            }
          }
        }
      }
      v29[5] = v11;
      v20 = (char *)v29 - v13;
      v29[4] = v10;
      v29[3] = v9;
      v21 = 6LL;
      v29[2] = v8;
      v29[1] = v7;
      v29[0] = v6;
      do
      {
        *(_QWORD *)v13 += *(_QWORD *)&v13[v20];
        v13 += 8;
        --v21;
      }
      while ( v21 );
      v12 = NewIrql;
    }
    v22 = v32;
    *((_OWORD *)v5 + 50) = v31;
    v23 = v33;
    *((_OWORD *)v5 + 51) = v22;
    *((_OWORD *)v5 + 52) = v23;
    KeReleaseSpinLock(v5, v12);
    if ( !v26 && (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
    {
      if ( a2 == 1 )
      {
        v24 = L"DX";
        v25 = L"D0";
      }
      else
      {
        v24 = L"D0";
        v25 = L"DX";
      }
      Template_qxzzxxxxxx(
        v24,
        v30,
        v30 + 508,
        *((unsigned int *)v30 + 1028),
        v30[510],
        v25,
        v24,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
    }
  }
}
