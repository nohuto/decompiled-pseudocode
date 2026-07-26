/*
 * XREFs of ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0095F04
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0004F10 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0005B90 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qqq @ 0x1C00384C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0040C54 (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRwInformation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  struct _NDIS_IF_BLOCK *v3; // rbx
  unsigned int v4; // edi
  bool v5; // zf
  struct _NDIS_IF_BLOCK *v6; // rdx
  struct _NM_REQUEST_GET_PARAMETER *v7; // r15
  int v9; // r12d
  int v10; // ecx
  char v11; // al
  char *v12; // r15
  _WORD *p_Length; // rsi
  unsigned int v14; // r14d
  int v15; // ebx
  __int64 v16; // rdx
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  __int64 v18; // rsi
  unsigned __int16 v19; // cx
  _WORD *v20; // r12
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rdx
  size_t v22; // r8
  unsigned int Interrupt_low; // eax
  const void *v24; // rdx
  __int64 v25; // rbx
  unsigned int v26; // ecx
  int v27; // r12d
  void *ProviderIfContext; // rcx
  int (__fastcall *QueryObjectHandler)(void *, unsigned int, unsigned int *, void *); // rax
  char *v31; // rcx
  char v32; // [rsp+30h] [rbp-D0h]
  int v33; // [rsp+34h] [rbp-CCh]
  unsigned int v34; // [rsp+38h] [rbp-C8h]
  int v35; // [rsp+3Ch] [rbp-C4h]
  unsigned int v36; // [rsp+40h] [rbp-C0h] BYREF
  void *v37; // [rsp+48h] [rbp-B8h]
  struct _NDIS_IF_BLOCK *v38; // [rsp+50h] [rbp-B0h]
  struct _NM_REQUEST_GET_PARAMETER *v39; // [rsp+58h] [rbp-A8h]
  struct _NDIS_IF_BLOCK *v40; // [rsp+60h] [rbp-A0h]
  _NDIS_MINIPORT_BLOCK *v41; // [rsp+68h] [rbp-98h]
  _WORD v42[264]; // [rsp+70h] [rbp-90h] BYREF

  v3 = a2;
  v40 = a2;
  v4 = 0;
  v39 = a3;
  v5 = a2 == 0LL;
  v6 = a1;
  v7 = a3;
  if ( !v5 )
    v6 = v3;
  v38 = v6;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
  {
    WPP_SF_qqq(0x4Au, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1, v3, a3);
    v6 = v38;
  }
  v9 = *((_DWORD *)v7 + 13);
  v10 = *((_DWORD *)v7 + 12);
  v35 = v9;
  v33 = v10;
  v37 = (void *)*((_QWORD *)v7 + 5);
  if ( v37 )
  {
    v11 = 0;
    v32 = 0;
    if ( v10 > 0 )
    {
      v12 = (char *)v37;
      while ( 1 )
      {
        if ( v11 )
        {
LABEL_42:
          v7 = v39;
          v3 = v40;
          goto LABEL_43;
        }
        v34 = 0;
        p_Length = 0LL;
        if ( !v9 )
          break;
        switch ( v9 )
        {
          case 16:
            v15 = 20;
            v16 = 66184LL;
            v14 = 4;
            goto LABEL_36;
          case 20:
            v14 = 516;
            if ( a1->bNdisIsProvider )
            {
              if ( a1->IsNdisFilter )
              {
                Miniport = a1->Miniport;
                v41 = Miniport;
                if ( (unsigned __int8)byte_1C008371D >= 4u )
                  WPP_SF_qq(0xC9u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, Miniport, v42);
                memset(v42, 0, 0x204uLL);
                v42[0] = LOWORD(Miniport->BaseMiniport->Interrupt)
                       + 12
                       + *(_WORD *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4096LL) + 596LL);
                if ( v42[0] > 0x200u )
                  v42[0] = 512;
                memmove(
                  &v42[1],
                  (const void *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4096LL) + 598LL),
                  *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4096LL) + 596LL));
                v18 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4096LL) + 596LL);
                v19 = v42[0];
                v20 = (_WORD *)((char *)&v42[1] + v18);
                if ( v42[0] - (unsigned int)v18 >= 2 )
                {
                  LODWORD(v18) = v18 + 2;
                  *v20++ = 45;
                  v19 = v42[0];
                }
                if ( v19 > (unsigned int)v18 )
                {
                  BaseMiniport = Miniport->BaseMiniport;
                  v22 = v19 - (unsigned int)v18;
                  Interrupt_low = LOWORD(BaseMiniport->Interrupt);
                  v24 = *(const void **)&BaseMiniport->Flags;
                  if ( (unsigned int)v22 > Interrupt_low )
                    v22 = Interrupt_low;
                  LODWORD(v37) = v22;
                  v25 = (unsigned int)v22;
                  memmove(v20, v24, v22);
                  v19 = v42[0];
                  v20 = (_WORD *)((char *)v20 + v25);
                  LODWORD(v18) = (_DWORD)v37 + v18;
                  Miniport = v41;
                }
                if ( v19 - (unsigned int)v18 >= 2 )
                {
                  LODWORD(v18) = v18 + 2;
                  *v20++ = 45;
                  v19 = v42[0];
                }
                if ( v19 - (unsigned int)v18 >= 8 )
                  *(_QWORD *)v20 = *(_QWORD *)(*((_QWORD *)Miniport->Reserved4.Buffer + 2)
                                             + 2 * (((unsigned __int64)Miniport->Reserved4.Buffer[4] - 8) >> 1));
                if ( (unsigned __int8)byte_1C008371D >= 4u )
                  WPP_SF_qq(0xCAu, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, Miniport, v42);
                v9 = v35;
                p_Length = v42;
                v10 = v33;
              }
              else
              {
                p_Length = &a1->ifAlias.Length;
              }
            }
            else
            {
              v34 = 66185;
            }
            v15 = 536;
            goto LABEL_35;
          case 536:
            v14 = 34;
            if ( a1->bNdisIsProvider )
              p_Length = &v6->ifPhysAddress.Length;
            else
              v34 = 16843010;
            v15 = 570;
LABEL_35:
            v16 = v34;
            goto LABEL_36;
        }
        if ( v9 != 570 )
          goto LABEL_48;
        v14 = 516;
        v32 = 1;
        v15 = 1086;
        if ( a1->ifL2NetworkInfo )
        {
          p_Length = &a1->ifL2NetworkInfo->Length;
          goto LABEL_57;
        }
        if ( v10 < 516 )
          goto LABEL_48;
        memset(v12, 0, 0x204uLL);
        v12 += 516;
        v35 = 1086;
        v10 = v33 - 516;
        v9 = 1086;
        v33 -= 516;
        v16 = 0LL;
LABEL_36:
        if ( v10 < (int)v14 )
          goto LABEL_48;
        if ( (_DWORD)v16 )
        {
          ProviderIfContext = v38->ProviderIfContext;
          QueryObjectHandler = v38->ProviderHandle->ProviderCharacteristics.QueryObjectHandler;
          v36 = v14;
          if ( QueryObjectHandler(ProviderIfContext, v16, &v36, v12) )
          {
            v31 = v12;
            goto LABEL_66;
          }
          if ( v36 < v14 )
          {
            v14 -= v36;
            v31 = &v12[v36];
LABEL_66:
            memset(v31, 0, v14);
          }
        }
        else
        {
          if ( !p_Length )
          {
LABEL_48:
            v11 = 1;
            v32 = 1;
            goto LABEL_41;
          }
          memmove(v12, p_Length, v14);
        }
        v35 = v15;
        v26 = v15 - v9;
        v9 = v15;
        v12 += v26;
        v33 -= v26;
        v10 = v33;
        v11 = v32;
LABEL_41:
        v6 = v38;
        if ( v10 <= 0 )
          goto LABEL_42;
      }
      v14 = 16;
      p_Length = &a1->NetworkGuid;
      v15 = 16;
LABEL_57:
      v16 = 0LL;
      goto LABEL_36;
    }
LABEL_43:
    v27 = v9 - *((_DWORD *)v7 + 13);
    *((_DWORD *)v7 + 12) = v27;
    if ( !v27 )
      v4 = -1073741811;
  }
  else
  {
    *((_DWORD *)v7 + 12) = 0;
  }
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qqqL(0x4Bu, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1, v3, v7, v4);
  return v4;
}
