/*
 * XREFs of ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0040AA0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIsCompartmentAccessibleByClient @ 0x1C000D2AC (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C000D2C0 (ndisGetNsiClientInfo.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiEnumerateAllCompartments(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  KIRQL v2; // al
  struct _LIST_ENTRY *Flink; // r11
  KIRQL v4; // r12
  unsigned int v5; // ebx
  struct _LIST_ENTRY **v6; // r11
  unsigned int v7; // ebp
  bool v8; // cf
  __int64 v9; // r15
  _OWORD *v10; // r14
  unsigned int v11; // ebx
  struct _LIST_ENTRY *v12; // r11
  unsigned int v13; // esi
  __int64 v14; // r11
  __int64 v15; // rdx
  _OWORD *v16; // rax
  _OWORD *v17; // rcx
  __int128 v18; // xmm1
  KIRQL v20; // [rsp+20h] [rbp-58h]
  _BYTE v21[24]; // [rsp+28h] [rbp-50h] BYREF

  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_q(0x86u, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, (__int64)a1);
  ndisGetNsiClientInfo((__int64)v21);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Flink = ndisIfCompartmentList.Flink;
  v4 = v2;
  v20 = v2;
  v5 = 0;
  if ( ndisIfCompartmentList.Flink != &ndisIfCompartmentList )
  {
    do
    {
      if ( ndisIsCompartmentAccessibleByClient((__int64)Flink, (__int64)v21, 1) )
        ++v5;
      Flink = *v6;
    }
    while ( Flink != &ndisIfCompartmentList );
    v4 = v20;
  }
  v7 = *((_DWORD *)a1 + 22);
  *((_DWORD *)a1 + 22) = v5;
  if ( v7 )
  {
    v9 = *((_QWORD *)a1 + 2);
    v10 = (_OWORD *)*((_QWORD *)a1 + 5);
    if ( v9 && *((_DWORD *)a1 + 6) != 4 || v10 && *((_DWORD *)a1 + 12) < 0x668u )
    {
      v11 = -1073741306;
      goto LABEL_29;
    }
    v12 = ndisIfCompartmentList.Flink;
    v13 = 0;
    do
    {
      if ( v12 == &ndisIfCompartmentList )
        break;
      if ( ndisIsCompartmentAccessibleByClient((__int64)v12, (__int64)v21, 1) )
      {
        if ( *((_QWORD *)a1 + 2) )
          *(_DWORD *)(v9 + 4LL * v13) = *(_DWORD *)(v14 + 16);
        if ( *((_QWORD *)a1 + 5) )
        {
          v15 = 12LL;
          v16 = (_OWORD *)(v14 + 64);
          v17 = v10;
          do
          {
            *v17 = *v16;
            v17[1] = v16[1];
            v17[2] = v16[2];
            v17[3] = v16[3];
            v17[4] = v16[4];
            v17[5] = v16[5];
            v17[6] = v16[6];
            v17 += 8;
            v18 = v16[7];
            v16 += 8;
            *(v17 - 1) = v18;
            --v15;
          }
          while ( v15 );
          *v17 = *v16;
          v17[1] = v16[1];
          v17[2] = v16[2];
          v17[3] = v16[3];
          v17[4] = v16[4];
          v17[5] = v16[5];
          *((_QWORD *)v17 + 12) = *((_QWORD *)v16 + 12);
          v10 = (_OWORD *)((char *)v10 + *((unsigned int *)a1 + 12));
        }
        ++v13;
      }
      v12 = *(struct _LIST_ENTRY **)v14;
    }
    while ( v13 < v7 );
    v4 = v20;
    v8 = v13 < v5;
  }
  else
  {
    v8 = v5 != 0;
  }
  v11 = v8 ? 0x105 : 0;
LABEL_29:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qD(135LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, v11);
  return v11;
}
