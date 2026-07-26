/*
 * XREFs of ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0095148
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0004F10 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0005B90 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00094B0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ?ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z @ 0x1C0095EE4 (-ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRodEnumObject(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  struct _NM_REQUEST_GET_PARAMETER *v3; // rbx
  unsigned int v4; // edi
  struct _NDIS_IF_BLOCK *v5; // r8
  char *v7; // r15
  unsigned int v8; // r14d
  int v9; // r12d
  char v10; // r9
  _WORD *p_XmitLinkSpeed; // rax
  unsigned int v12; // ecx
  int v13; // ebx
  unsigned int v14; // esi
  unsigned int v15; // ecx
  unsigned int v16; // r14d
  __int64 v18; // rdx
  void *ProviderIfContext; // rcx
  int (__fastcall *QueryObjectHandler)(void *, unsigned int, unsigned int *, void *); // rax
  _NDIS_MINIPORT_BLOCK *Miniport; // r12
  __int64 v22; // r14
  unsigned __int16 v23; // cx
  _WORD *v24; // r15
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rdx
  size_t v26; // r8
  unsigned int Interrupt_low; // eax
  const void *v28; // rdx
  __int64 v29; // rbx
  char *v30; // rcx
  char v31; // [rsp+30h] [rbp-D0h]
  int v32; // [rsp+34h] [rbp-CCh]
  int v33; // [rsp+38h] [rbp-C8h]
  unsigned int v34; // [rsp+3Ch] [rbp-C4h]
  unsigned int v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+44h] [rbp-BCh]
  char *v37; // [rsp+48h] [rbp-B8h]
  struct _NDIS_IF_BLOCK *v38; // [rsp+50h] [rbp-B0h]
  struct _NDIS_IF_BLOCK *v39; // [rsp+58h] [rbp-A8h]
  struct _NM_REQUEST_GET_PARAMETER *v40; // [rsp+60h] [rbp-A0h]
  _WORD v41[264]; // [rsp+70h] [rbp-90h] BYREF

  v3 = a3;
  v39 = a2;
  v4 = 0;
  v40 = a3;
  v5 = a1;
  if ( a2 )
    v5 = a2;
  v38 = v5;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
  {
    WPP_SF_qq(0x56u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1, v3);
    a2 = v39;
    v5 = v38;
  }
  v7 = (char *)*((_QWORD *)v3 + 5);
  v8 = *((_DWORD *)v3 + 13);
  v9 = *((_DWORD *)v3 + 12);
  v34 = v8;
  v33 = v9;
  v37 = v7;
  if ( v7 )
  {
    v31 = 0;
    v10 = 0;
    if ( v9 > 0 )
    {
      while ( 1 )
      {
        if ( v10 )
        {
LABEL_24:
          v3 = v40;
          break;
        }
        v32 = 0;
        p_XmitLinkSpeed = 0LL;
        if ( v8 > 0x246 )
        {
          switch ( v8 )
          {
            case 0x268u:
              v12 = 66184;
              v13 = 624;
              goto LABEL_17;
            case 0x270u:
              v14 = 8;
              if ( a2 )
              {
                p_XmitLinkSpeed = &ndisGetMiniportIfBlock(a2)->XmitLinkSpeed;
                v12 = 0;
              }
              else
              {
                v12 = 66180;
              }
              v13 = 632;
              break;
            case 0x278u:
              v14 = 8;
              if ( a2 )
              {
                p_XmitLinkSpeed = &ndisGetMiniportIfBlock(a2)->RcvLinkSpeed;
                v12 = 0;
              }
              else
              {
                v12 = 66181;
              }
              v13 = 640;
              break;
            case 0x280u:
              v14 = 1;
              if ( a1->bNdisIsProvider )
              {
                p_XmitLinkSpeed = &ndisGetMiniportIfBlock(a1)->ifPromiscuousMode;
                v12 = 0;
              }
              else
              {
                v12 = 66176;
              }
              v13 = 641;
              break;
            case 0x281u:
              v14 = 1;
              p_XmitLinkSpeed = &a1->ifDeviceWakeUpEnable;
              v13 = 644;
              goto LABEL_44;
            case 0x284u:
              v14 = 4;
              if ( a2 )
              {
                p_XmitLinkSpeed = &ndisGetMiniportIfBlock(a2)->MediaConnectState;
                v12 = 0;
              }
              else
              {
                v12 = 66186;
              }
              v13 = 648;
              break;
            case 0x288u:
              v14 = 4;
              if ( a2 )
              {
                p_XmitLinkSpeed = &ndisGetMiniportIfBlock(a2)->MediaDuplexState;
                v12 = 0;
              }
              else
              {
                v12 = 66188;
              }
              v13 = 652;
              v31 = 1;
              break;
            default:
              goto LABEL_102;
          }
        }
        else
        {
          switch ( v8 )
          {
            case 0x246u:
              v14 = 34;
              if ( a1->bNdisIsProvider )
                p_XmitLinkSpeed = &v5->PermanentPhysAddress.Length;
              else
                v32 = 16843009;
              v13 = 616;
LABEL_48:
              v12 = v32;
              goto LABEL_18;
            case 0u:
              p_XmitLinkSpeed = &a1->_NDIS_NSI_INTERFACE_ENUM_ROD;
              v13 = 4;
              v12 = 0;
              goto LABEL_17;
            case 4u:
              v14 = 16;
              p_XmitLinkSpeed = &a1->NetworkGuid;
              v13 = 20;
LABEL_44:
              v12 = 0;
              goto LABEL_18;
          }
          if ( v8 != 20 )
          {
            switch ( v8 )
            {
              case 0x218u:
                v12 = 66179;
                v13 = 540;
                goto LABEL_17;
              case 0x21Cu:
                v14 = 4;
                p_XmitLinkSpeed = &ndisGetMiniportIfBlock(v5)->ifOperStatusFlags;
                v13 = 544;
                goto LABEL_44;
              case 0x220u:
                v12 = 65798;
                v13 = 548;
LABEL_17:
                v14 = 4;
                goto LABEL_18;
            }
            if ( v8 != 548 )
            {
LABEL_102:
              v10 = 1;
              v31 = 1;
              goto LABEL_23;
            }
            v14 = 34;
            if ( a1->bNdisIsProvider )
              p_XmitLinkSpeed = &v5->ifPhysAddress.Length;
            else
              v32 = 16843010;
            v13 = 582;
            goto LABEL_48;
          }
          v14 = 516;
          if ( a1->bNdisIsProvider )
          {
            if ( a1->IsNdisFilter )
            {
              Miniport = a1->Miniport;
              if ( (unsigned __int8)byte_1C008371D >= 4u )
                WPP_SF_qq(0xC9u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1->Miniport, v41);
              memset(v41, 0, 0x204uLL);
              v41[0] = LOWORD(Miniport->BaseMiniport->Interrupt)
                     + 12
                     + *(_WORD *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4096LL) + 596LL);
              if ( v41[0] > 0x200u )
                v41[0] = 512;
              memmove(
                &v41[1],
                (const void *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4096LL) + 598LL),
                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4096LL) + 596LL));
              v22 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4096LL) + 596LL);
              v23 = v41[0];
              v24 = (_WORD *)((char *)&v41[1] + v22);
              if ( v41[0] - (unsigned int)v22 >= 2 )
              {
                *v24 = 45;
                LODWORD(v22) = v22 + 2;
                v23 = v41[0];
                ++v24;
              }
              if ( v23 > (unsigned int)v22 )
              {
                BaseMiniport = Miniport->BaseMiniport;
                v26 = v23 - (unsigned int)v22;
                Interrupt_low = LOWORD(BaseMiniport->Interrupt);
                v28 = *(const void **)&BaseMiniport->Flags;
                if ( (unsigned int)v26 > Interrupt_low )
                  v26 = Interrupt_low;
                v36 = v26;
                v29 = (unsigned int)v26;
                memmove(v24, v28, v26);
                v23 = v41[0];
                v24 = (_WORD *)((char *)v24 + v29);
                LODWORD(v22) = v36 + v22;
              }
              if ( v23 - (unsigned int)v22 >= 2 )
              {
                *v24 = 45;
                LODWORD(v22) = v22 + 2;
                v23 = v41[0];
                ++v24;
              }
              if ( v23 - (unsigned int)v22 >= 8 )
                *(_QWORD *)v24 = *(_QWORD *)(*((_QWORD *)Miniport->Reserved4.Buffer + 2)
                                           + 2 * (((unsigned __int64)Miniport->Reserved4.Buffer[4] - 8) >> 1));
              if ( (unsigned __int8)byte_1C008371D >= 4u )
                WPP_SF_qq(0xCAu, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, Miniport, v41);
              v8 = v34;
              p_XmitLinkSpeed = v41;
              v7 = v37;
              v12 = 0;
              v9 = v33;
            }
            else
            {
              p_XmitLinkSpeed = &a1->ifAlias.Length;
              v12 = 0;
            }
          }
          else
          {
            v12 = 66185;
          }
          v13 = 536;
        }
LABEL_18:
        if ( v9 < (int)v14 )
          goto LABEL_102;
        if ( v12 )
        {
          v18 = v12;
          ProviderIfContext = v38->ProviderIfContext;
          QueryObjectHandler = v38->ProviderHandle->ProviderCharacteristics.QueryObjectHandler;
          v35 = v14;
          if ( QueryObjectHandler(ProviderIfContext, v18, &v35, v7) )
          {
            v30 = v7;
            goto LABEL_101;
          }
          if ( v35 < v14 )
          {
            v14 -= v35;
            v30 = &v7[v35];
LABEL_101:
            memset(v30, 0, v14);
          }
        }
        else
        {
          if ( !p_XmitLinkSpeed )
            goto LABEL_102;
          memmove(v7, p_XmitLinkSpeed, v14);
        }
        v10 = v31;
        v15 = v13 - v8;
        v34 = v13;
        v8 = v13;
        v7 += v15;
        v9 -= v15;
        v37 = v7;
        v33 = v9;
LABEL_23:
        a2 = v39;
        v5 = v38;
        if ( v9 <= 0 )
          goto LABEL_24;
      }
    }
    v16 = v8 - *((_DWORD *)v3 + 13);
    *((_DWORD *)v3 + 12) = v16;
    if ( !v16 )
      v4 = -1073741811;
  }
  else
  {
    *((_DWORD *)v3 + 12) = 0;
  }
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qqd(0x57u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1, v3, v4);
  return v4;
}
