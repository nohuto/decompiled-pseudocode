/*
 * XREFs of ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000D400
 * Callers:
 *     <none>
 * Callees:
 *     ndisIsCompartmentAccessibleByClient @ 0x1C000D2AC (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C000D2C0 (ndisGetNsiClientInfo.c)
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C000D73C (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     ndisIfFindCompartmentBlock @ 0x1C000D750 (ndisIfFindCompartmentBlock.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiGetCompartmentInfo(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  __int64 v1; // rbp
  int v3; // esi
  unsigned int v4; // ebx
  KIRQL v5; // al
  int v6; // ecx
  KIRQL v7; // r14
  __int64 CompartmentBlock; // rax
  char *v9; // r13
  unsigned int v10; // ebx
  int v11; // r15d
  char v12; // r12
  int v13; // r14d
  int v14; // eax
  unsigned int v15; // ebx
  KIRQL v16; // bl
  int v18; // ecx
  struct _LIST_ENTRY *Flink; // r11
  struct _LIST_ENTRY *v20; // rax
  char v21; // [rsp+20h] [rbp-58h]
  _BYTE v22[24]; // [rsp+28h] [rbp-50h] BYREF

  v1 = 0LL;
  v3 = 0;
  v21 = 0;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_q(132LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) != 4 || !*((_DWORD *)a1 + 12) || !*((_QWORD *)a1 + 5) )
  {
    v3 = -1073741808;
    goto LABEL_31;
  }
  v4 = **((_DWORD **)a1 + 2);
  ndisGetNsiClientInfo((__int64)v22);
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v6 = *((_DWORD *)a1 + 14);
  v7 = v5;
  if ( !v6 )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(v4);
    v1 = CompartmentBlock;
    if ( CompartmentBlock )
    {
      v1 = -(__int64)ndisIsCompartmentAccessibleByClient(CompartmentBlock, (__int64)v22, 1) & CompartmentBlock;
LABEL_9:
      if ( v1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v1 + 44));
        v21 = 1;
        **((_DWORD **)a1 + 2) = *(_DWORD *)(v1 + 16);
      }
    }
    goto LABEL_11;
  }
  v18 = v6 - 1;
  if ( !v18 )
  {
    v4 = 0;
LABEL_42:
    Flink = ndisIfCompartmentList.Flink;
    while ( 1 )
    {
      v1 = 0LL;
      v20 = Flink;
      if ( Flink != &ndisIfCompartmentList )
      {
        while ( LODWORD(v20[1].Flink) <= v4 )
        {
          v20 = v20->Flink;
          if ( v20 == &ndisIfCompartmentList )
            goto LABEL_46;
        }
        v1 = (__int64)v20;
      }
LABEL_46:
      if ( !v1 )
        goto LABEL_11;
      v4 = *(_DWORD *)(v1 + 16);
      if ( ndisIsCompartmentAccessibleByClient(v1, (__int64)v22, 1) )
        goto LABEL_9;
    }
  }
  if ( v18 == 1 )
    goto LABEL_42;
  v3 = -1073741808;
LABEL_11:
  KeReleaseSpinLock(&ndisIfListLock, v7);
  if ( v3 >= 0 )
  {
    if ( v1 )
    {
      if ( *((_DWORD *)a1 + 8) )
      {
        v3 = -1073741808;
      }
      else
      {
        v9 = (char *)*((_QWORD *)a1 + 5);
        v10 = *((_DWORD *)a1 + 13);
        v11 = *((_DWORD *)a1 + 12);
        if ( v9 )
        {
          v12 = 0;
          while ( v11 > 0 )
          {
            if ( v12 )
              break;
            if ( v10 <= 0x234 )
            {
              if ( v10 == 564 )
              {
                v14 = 516;
                v13 = 1080;
              }
              else if ( v10 )
              {
                switch ( v10 )
                {
                  case 8u:
                    v14 = 8;
                    v13 = 16;
                    break;
                  case 0x10u:
                    v13 = 32;
                    goto LABEL_23;
                  case 0x20u:
                    v13 = 48;
LABEL_23:
                    v14 = 16;
                    break;
                  case 0x30u:
                    v14 = 516;
                    v13 = 564;
                    break;
                  default:
LABEL_61:
                    v12 = 1;
                    continue;
                }
              }
              else
              {
                v14 = 4;
                v13 = 8;
              }
            }
            else
            {
              switch ( v10 )
              {
                case 0x438u:
                  v13 = 1096;
                  goto LABEL_23;
                case 0x448u:
                  v14 = 516;
                  v13 = 1616;
                  break;
                case 0x650u:
                  v14 = 4;
                  v13 = 1620;
                  break;
                case 0x654u:
                  v13 = 1636;
                  v12 = 1;
                  goto LABEL_23;
                default:
                  goto LABEL_61;
              }
            }
            if ( v11 < v14 )
              goto LABEL_61;
            memmove(v9, (const void *)(v1 + v10 + 64LL), (unsigned int)v14);
            v9 += v13 - v10;
            v11 += v10 - v13;
            v10 = v13;
          }
          v15 = v10 - *((_DWORD *)a1 + 13);
          *((_DWORD *)a1 + 12) = v15;
          if ( !v15 )
            v3 = -1073741811;
        }
        else
        {
          *((_DWORD *)a1 + 12) = 0;
        }
      }
    }
    else
    {
      v3 = *((_DWORD *)a1 + 14) != 0 ? -2147483622 : -1073741772;
    }
  }
  if ( v21 )
  {
    v16 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    COMPARTMENTBLOCK_DECREMENT_REF(v1);
    KeReleaseSpinLock(&ndisIfListLock, v16);
  }
LABEL_31:
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qD(133LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, (unsigned int)v3);
  return (unsigned int)v3;
}
