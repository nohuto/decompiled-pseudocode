/*
 * XREFs of ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0021B10
 * Callers:
 *     <none>
 * Callees:
 *     ndisIsCompartmentAccessibleByClient @ 0x1C000D2AC (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C000D2C0 (ndisGetNsiClientInfo.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiEnumerateAllNetworks(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  KIRQL v2; // al
  _LIST_ENTRY *Flink; // r11
  KIRQL v4; // r12
  unsigned int v5; // ebx
  _LIST_ENTRY **v6; // r11
  unsigned int v7; // r14d
  __int64 v8; // r15
  _OWORD *v9; // rbp
  _LIST_ENTRY *v10; // r11
  unsigned int v11; // esi
  __int64 v12; // r11
  __int64 v13; // rdx
  _OWORD *v14; // rcx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  bool v17; // cf
  unsigned int v18; // ebx
  KIRQL v20; // [rsp+20h] [rbp-58h]
  _BYTE v21[24]; // [rsp+28h] [rbp-50h] BYREF

  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_q(120LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1);
  ndisGetNsiClientInfo((__int64)v21);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Flink = ndisIfNetworkList.Flink;
  v4 = v2;
  v20 = v2;
  v5 = 0;
  if ( ndisIfNetworkList.Flink != &ndisIfNetworkList )
  {
    do
    {
      if ( ndisIsCompartmentAccessibleByClient((__int64)Flink[3].Flink, (__int64)v21, 0) )
        ++v5;
      Flink = *v6;
    }
    while ( Flink != &ndisIfNetworkList );
    v4 = v20;
  }
  v7 = *((_DWORD *)a1 + 22);
  *((_DWORD *)a1 + 22) = v5;
  if ( !v7 )
  {
    v17 = v5 != 0;
LABEL_26:
    v18 = v17 ? 0x105 : 0;
    goto LABEL_27;
  }
  v8 = *((_QWORD *)a1 + 2);
  v9 = (_OWORD *)*((_QWORD *)a1 + 5);
  if ( (!v8 || *((_DWORD *)a1 + 6) == 16) && (!v9 || *((_DWORD *)a1 + 12) >= 0x210u) )
  {
    v10 = ndisIfNetworkList.Flink;
    v11 = 0;
    do
    {
      if ( v10 == &ndisIfNetworkList )
        break;
      if ( ndisIsCompartmentAccessibleByClient((__int64)v10[3].Flink, (__int64)v21, 0) )
      {
        if ( *((_QWORD *)a1 + 2) )
          *(_OWORD *)(v8 + 16LL * v11) = *(_OWORD *)(v12 + 32);
        if ( *((_QWORD *)a1 + 5) )
        {
          v13 = 4LL;
          v14 = (_OWORD *)(v12 + 80);
          v15 = v9;
          do
          {
            *v15 = *v14;
            v15[1] = v14[1];
            v15[2] = v14[2];
            v15[3] = v14[3];
            v15[4] = v14[4];
            v15[5] = v14[5];
            v15[6] = v14[6];
            v15 += 8;
            v16 = v14[7];
            v14 += 8;
            *(v15 - 1) = v16;
            --v13;
          }
          while ( v13 );
          *v15 = *v14;
          v9 = (_OWORD *)((char *)v9 + *((unsigned int *)a1 + 12));
        }
        ++v11;
      }
      v10 = *(_LIST_ENTRY **)v12;
    }
    while ( v11 < v7 );
    v4 = v20;
    v17 = v11 < v5;
    goto LABEL_26;
  }
  v18 = -1073741306;
LABEL_27:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qD(121LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, v18);
  return v18;
}
