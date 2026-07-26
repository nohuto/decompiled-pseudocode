/*
 * XREFs of ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0020A00
 * Callers:
 *     <none>
 * Callees:
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C0020C94 (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     ndisIfFindCompartmentBlock @ 0x1C0020D08 (ndisIfFindCompartmentBlock.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiGetCompartmentInfo(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  __int64 CompartmentBlock; // rbp
  int v3; // esi
  unsigned int v4; // ebx
  KIRQL v5; // al
  int v6; // ecx
  KIRQL v7; // r10
  int v8; // ecx
  char *v9; // r13
  unsigned int v10; // r14d
  int v11; // r15d
  char v12; // r12
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // r14d
  KIRQL v16; // bl
  _LIST_ENTRY *Flink; // rax
  char v19; // [rsp+50h] [rbp+8h]

  CompartmentBlock = 0LL;
  v3 = 0;
  v19 = 0;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_q(132LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) == 4 && *((_DWORD *)a1 + 12) && *((_QWORD *)a1 + 5) )
  {
    v4 = **((_DWORD **)a1 + 2);
    v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    v6 = *((_DWORD *)a1 + 14);
    v7 = v5;
    if ( v6 )
    {
      v8 = v6 - 1;
      if ( !v8 )
      {
        v4 = 0;
        goto LABEL_40;
      }
      if ( v8 == 1 )
      {
        while ( 1 )
        {
LABEL_40:
          CompartmentBlock = 0LL;
          Flink = ndisIfCompartmentList.Flink;
          if ( ndisIfCompartmentList.Flink != &ndisIfCompartmentList )
          {
            while ( LODWORD(Flink[1].Flink) <= v4 )
            {
              Flink = Flink->Flink;
              if ( Flink == &ndisIfCompartmentList )
                goto LABEL_43;
            }
            CompartmentBlock = (__int64)Flink;
          }
LABEL_43:
          if ( !CompartmentBlock )
            break;
          v4 = *(_DWORD *)(CompartmentBlock + 16);
          if ( (*(_DWORD *)(CompartmentBlock + 1680) & 2) == 0 )
            goto LABEL_10;
        }
      }
      else
      {
        v3 = -1073741808;
      }
    }
    else
    {
      CompartmentBlock = ndisIfFindCompartmentBlock(v4);
LABEL_10:
      if ( CompartmentBlock )
      {
        _InterlockedIncrement((volatile signed __int32 *)(CompartmentBlock + 44));
        v19 = 1;
        **((_DWORD **)a1 + 2) = *(_DWORD *)(CompartmentBlock + 16);
      }
    }
    KeReleaseSpinLock(&ndisIfListLock, v7);
    if ( v3 >= 0 )
    {
      if ( CompartmentBlock )
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
            if ( v11 > 0 )
            {
              while ( 1 )
              {
                if ( v12 )
                  goto LABEL_32;
                if ( !v10 )
                  break;
                switch ( v10 )
                {
                  case 8u:
                    v14 = 8;
                    v13 = 16;
                    break;
                  case 0x10u:
                    v14 = 16;
                    v13 = 32;
                    break;
                  case 0x20u:
                    v14 = 16;
                    v13 = 48;
                    break;
                  case 0x30u:
                    v14 = 516;
                    v13 = 564;
                    break;
                  case 0x234u:
                    v14 = 516;
                    v13 = 1080;
                    break;
                  case 0x438u:
                    v14 = 16;
                    v13 = 1096;
                    break;
                  case 0x448u:
                    v14 = 516;
                    v13 = 1616;
                    break;
                  case 0x650u:
                    v13 = 1620;
                    v12 = 1;
                    goto LABEL_28;
                  default:
                    goto LABEL_59;
                }
LABEL_29:
                if ( v11 < v14 )
                {
LABEL_59:
                  v12 = 1;
                  goto LABEL_31;
                }
                memmove(v9, (const void *)(v10 + CompartmentBlock + 64), (unsigned int)v14);
                v9 += v13 - v10;
                v11 += v10 - v13;
                v10 = v13;
LABEL_31:
                if ( v11 <= 0 )
                  goto LABEL_32;
              }
              v13 = 8;
LABEL_28:
              v14 = 4;
              goto LABEL_29;
            }
LABEL_32:
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
    if ( v19 )
    {
      v16 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      COMPARTMENTBLOCK_DECREMENT_REF(CompartmentBlock);
      KeReleaseSpinLock(&ndisIfListLock, v16);
    }
  }
  else
  {
    v3 = -1073741808;
  }
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qD(133LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1, (unsigned int)v3);
  return (unsigned int)v3;
}
