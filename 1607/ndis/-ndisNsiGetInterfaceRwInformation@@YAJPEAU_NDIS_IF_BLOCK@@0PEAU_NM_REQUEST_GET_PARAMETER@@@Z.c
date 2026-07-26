/*
 * XREFs of ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C009A5E0
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0007260 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0008B30 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C00446D4 (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRwInformation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  struct _NM_REQUEST_GET_PARAMETER *v3; // r15
  struct _NDIS_IF_BLOCK *v4; // r8
  unsigned int v5; // esi
  bool v6; // zf
  struct _NDIS_IF_BLOCK *v7; // rdx
  int v8; // r14d
  int v9; // edi
  char v10; // al
  char *v11; // r15
  _IF_PHYSICAL_ADDRESS_LH *p_ifPhysAddress; // rbx
  unsigned int v13; // r12d
  unsigned int v14; // ebp
  int v15; // r13d
  unsigned int v16; // ecx
  int v17; // r14d
  void *ProviderIfContext; // rcx
  int (__fastcall *QueryObjectHandler)(void *, unsigned int, unsigned int *, void *); // rax
  unsigned int v21; // ecx
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  __int64 v23; // r13
  unsigned __int16 v24; // cx
  char *v25; // r9
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rdx
  unsigned int v27; // eax
  unsigned int Interrupt_low; // ecx
  __int64 v29; // rbx
  char *v30; // rcx
  char v31; // [rsp+30h] [rbp-298h]
  unsigned int v32; // [rsp+34h] [rbp-294h]
  unsigned int v33; // [rsp+38h] [rbp-290h] BYREF
  void *v34; // [rsp+40h] [rbp-288h]
  struct _NDIS_IF_BLOCK *v35; // [rsp+48h] [rbp-280h]
  struct _NDIS_IF_BLOCK *v36; // [rsp+50h] [rbp-278h]
  struct _NDIS_IF_BLOCK *v37; // [rsp+58h] [rbp-270h]
  _NDIS_MINIPORT_BLOCK *v38; // [rsp+60h] [rbp-268h]
  struct _NM_REQUEST_GET_PARAMETER *v39; // [rsp+68h] [rbp-260h]
  _WORD v40[264]; // [rsp+70h] [rbp-258h] BYREF

  v3 = a3;
  v39 = a3;
  v4 = a2;
  v37 = a2;
  v5 = 0;
  v36 = a1;
  v6 = a2 == 0LL;
  v7 = a1;
  if ( !v6 )
    a1 = v4;
  v35 = a1;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
  {
    WPP_SF_qqq(0x4Au, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, v7, v4, v3);
    a1 = v35;
    v7 = v36;
    v4 = v37;
  }
  v8 = *((_DWORD *)v3 + 13);
  v9 = *((_DWORD *)v3 + 12);
  v34 = (void *)*((_QWORD *)v3 + 5);
  if ( v34 )
  {
    v10 = 0;
    v31 = 0;
    if ( v9 > 0 )
    {
      v11 = (char *)v34;
      while ( 1 )
      {
        if ( v10 )
        {
LABEL_22:
          v3 = v39;
          v4 = v37;
          break;
        }
        p_ifPhysAddress = 0LL;
        v13 = 0;
        if ( v8 )
        {
          if ( v8 == 16 )
          {
            v14 = 4;
            v13 = 66184;
            v15 = 20;
          }
          else
          {
            if ( v8 != 20 )
            {
              if ( v8 == 536 )
              {
                v14 = 34;
                if ( v7->bNdisIsProvider )
                  p_ifPhysAddress = &a1->ifPhysAddress;
                else
                  v13 = 16843010;
                v15 = 570;
              }
              else
              {
                if ( v8 != 570 )
                  goto LABEL_28;
                v14 = 516;
                v31 = 1;
                v15 = 1086;
                if ( v7->ifL2NetworkInfo )
                {
                  p_ifPhysAddress = (_IF_PHYSICAL_ADDRESS_LH *)v7->ifL2NetworkInfo;
                }
                else
                {
                  if ( v9 < 516 )
                    goto LABEL_28;
                  memset(v11, 0, 0x204uLL);
                  v11 += 516;
                  v8 = 1086;
                  v9 -= 516;
                }
              }
              goto LABEL_17;
            }
            v14 = 516;
            if ( v7->bNdisIsProvider )
            {
              if ( v7->IsNdisFilter )
              {
                Miniport = v7->Miniport;
                v38 = Miniport;
                if ( (unsigned __int8)byte_1C00895DD >= 4u )
                  WPP_SF_qq(0xCBu, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, Miniport, v40);
                memset(v40, 0, 0x204uLL);
                v40[0] = LOWORD(Miniport->BaseMiniport->Interrupt)
                       + *(_WORD *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4096LL) + 596LL)
                       + 12;
                if ( v40[0] > 0x200u )
                  v40[0] = 512;
                memmove(
                  &v40[1],
                  (const void *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4096LL) + 598LL),
                  *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4096LL) + 596LL));
                v23 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4096LL) + 596LL);
                v24 = v40[0];
                v25 = (char *)&v40[1] + v23;
                v34 = (char *)&v40[1] + v23;
                if ( v40[0] - (unsigned int)v23 >= 2 )
                {
                  LODWORD(v23) = v23 + 2;
                  *(_WORD *)v25 = 45;
                  v25 += 2;
                  v24 = v40[0];
                  v34 = v25;
                }
                if ( v24 > (unsigned int)v23 )
                {
                  BaseMiniport = Miniport->BaseMiniport;
                  v27 = v24 - (_DWORD)v23;
                  Interrupt_low = LOWORD(BaseMiniport->Interrupt);
                  v32 = Interrupt_low;
                  if ( v27 <= Interrupt_low )
                  {
                    Interrupt_low = v27;
                    v32 = v27;
                  }
                  v29 = Interrupt_low;
                  memmove(v25, *(const void **)&BaseMiniport->Flags, Interrupt_low);
                  v24 = v40[0];
                  v25 = (char *)v34 + v29;
                  LODWORD(v23) = v32 + v23;
                  Miniport = v38;
                }
                if ( v24 - (unsigned int)v23 >= 2 )
                {
                  LODWORD(v23) = v23 + 2;
                  *(_WORD *)v25 = 45;
                  v25 += 2;
                  v24 = v40[0];
                }
                if ( v24 - (unsigned int)v23 >= 8 )
                  *(_QWORD *)v25 = *(_QWORD *)(*((_QWORD *)Miniport->Reserved4.Buffer + 2)
                                             + 2 * (((unsigned __int64)Miniport->Reserved4.Buffer[4] - 8) >> 1));
                if ( (unsigned __int8)byte_1C00895DD >= 4u )
                  WPP_SF_qq(0xCCu, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, Miniport, v40);
                p_ifPhysAddress = (_IF_PHYSICAL_ADDRESS_LH *)v40;
                v15 = 536;
                goto LABEL_17;
              }
              p_ifPhysAddress = (_IF_PHYSICAL_ADDRESS_LH *)&v7->ifAlias;
            }
            else
            {
              v13 = 66185;
            }
            v15 = 536;
          }
        }
        else
        {
          v14 = 16;
          p_ifPhysAddress = (_IF_PHYSICAL_ADDRESS_LH *)&v7->NetworkGuid;
          v15 = 16;
        }
LABEL_17:
        if ( v9 < (int)v14 )
          goto LABEL_28;
        if ( v13 )
        {
          ProviderIfContext = v35->ProviderIfContext;
          QueryObjectHandler = v35->ProviderHandle->ProviderCharacteristics.QueryObjectHandler;
          v33 = v14;
          if ( QueryObjectHandler(ProviderIfContext, v13, &v33, v11) )
          {
            v30 = v11;
          }
          else
          {
            if ( v33 >= v14 )
            {
LABEL_40:
              v21 = v15 - v8;
              v8 = v15;
              v11 += v21;
              v10 = v31;
              v9 -= v21;
              goto LABEL_21;
            }
            v14 -= v33;
            v30 = &v11[v33];
          }
          memset(v30, 0, v14);
          goto LABEL_40;
        }
        if ( !p_ifPhysAddress )
        {
LABEL_28:
          v10 = 1;
          v31 = 1;
          goto LABEL_21;
        }
        memmove(v11, p_ifPhysAddress, v14);
        v16 = v15 - v8;
        v8 = v15;
        v11 += v16;
        v10 = v31;
        v9 -= v16;
LABEL_21:
        a1 = v35;
        v7 = v36;
        if ( v9 <= 0 )
          goto LABEL_22;
      }
    }
    v17 = v8 - *((_DWORD *)v3 + 13);
    *((_DWORD *)v3 + 12) = v17;
    if ( !v17 )
      v5 = -1073741811;
  }
  else
  {
    *((_DWORD *)v3 + 12) = 0;
  }
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qqqL(0x4Bu, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, v7, v4, v3, v5);
  return v5;
}
