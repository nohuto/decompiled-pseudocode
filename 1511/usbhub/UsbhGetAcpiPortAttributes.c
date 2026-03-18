/*
 * XREFs of UsbhGetAcpiPortAttributes @ 0x1C0022E20
 * Callers:
 *     UsbhGetExtendedHubInformation @ 0x1C0022C30 (UsbhGetExtendedHubInformation.c)
 * Callees:
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C0004D20 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000F030 (UsbhEtwLogHubIrpEvent.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhAcpiEnumChildren @ 0x1C0023290 (UsbhAcpiEnumChildren.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     WPP_RECORDER_SF_dD @ 0x1C003D0A8 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhGetAcpiPortAttributes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // r13
  __int64 result; // rax
  unsigned int v7; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // r14
  int v10; // ebx
  _DWORD *v11; // rax
  _DWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rax
  PVOID v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // rax
  _DWORD *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  _WORD *v26; // r15
  unsigned __int16 v27; // si
  unsigned int v28; // r11d
  unsigned __int64 v29; // r10
  __int64 v30; // r8
  char *v31; // rax
  _BYTE *v32; // r9
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // eax
  unsigned int v38; // ecx
  bool v39; // zf
  int v40; // edx
  unsigned int v41; // ecx
  int v42; // ecx
  __int64 v43; // rcx
  const EVENT_DESCRIPTOR *v44; // r9
  int v45; // [rsp+40h] [rbp-59h]
  unsigned int i; // [rsp+44h] [rbp-55h]
  _DWORD *v48; // [rsp+50h] [rbp-49h]
  unsigned __int16 v49; // [rsp+58h] [rbp-41h] BYREF
  __int16 v50; // [rsp+5Ah] [rbp-3Fh]
  _DWORD *v51; // [rsp+60h] [rbp-39h]
  __int64 v52; // [rsp+68h] [rbp-31h] BYREF
  int v53; // [rsp+70h] [rbp-29h]
  char v54[4]; // [rsp+78h] [rbp-21h] BYREF
  SIZE_T NumberOfBytes; // [rsp+7Ch] [rbp-1Dh]
  int v56; // [rsp+90h] [rbp-9h]
  _DWORD v57[7]; // [rsp+94h] [rbp-5h]

  v57[3] = 4;
  v57[4] = 4;
  v57[6] = 4;
  v56 = 0;
  v57[0] = 1;
  v57[1] = 1;
  v57[2] = 1;
  v57[5] = 8;
  v5 = FdoExt(a1, a2, a3, a4);
  result = UsbhAcpiEnumChildren(a1, v54, 20LL);
  if ( (_DWORD)result == -2147483643 )
  {
    v7 = NumberOfBytes;
    if ( (unsigned int)NumberOfBytes < 0x14 )
    {
      return 3222536207LL;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned int)NumberOfBytes, 0x42554855u);
      v48 = PoolWithTag;
      v9 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v7);
        v10 = UsbhAcpiEnumChildren(a1, v9, v7);
        if ( v10 >= 0 )
        {
          v11 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x414uLL, 0x42554855u);
          v12 = v11;
          if ( v11 )
          {
            memset(v11, 0, 0x414uLL);
            if ( !*((_QWORD *)v5 + 378) )
            {
              v16 = FdoExt(a1, v13, v14, v15);
              v17 = ExAllocatePoolWithTag(
                      ExDefaultNonPagedPoolType,
                      28LL * (*((unsigned __int8 *)v16 + 2938) + 1),
                      0x42554855u);
              *((_QWORD *)v5 + 378) = v17;
              if ( v17 )
              {
                v21 = FdoExt(a1, v18, v19, v20);
                memset(*((void **)v5 + 378), 0, 28LL * (*((unsigned __int8 *)v21 + 2938) + 1));
              }
            }
            v22 = v9 + 2;
            for ( i = 1; i < v48[1]; ++i )
            {
              v22 = (_DWORD *)((char *)v22 + (unsigned int)v22[1] + 8);
              if ( (*v22 & 1) == 0 || !v22[1] )
                continue;
              v51 = v22 + 2;
              v50 = *((_WORD *)v22 + 2);
              v49 = v50 - 1;
              v10 = UsbhAcpiEvalAcpiMethodEx(a1, &v49, 1380204895LL, v12);
              if ( v10 < 0 )
              {
                v10 = 0;
                continue;
              }
              if ( !v12[2] )
                continue;
              v26 = v12 + 3;
              if ( *((_WORD *)v12 + 6) )
                continue;
              v27 = *((_WORD *)v12 + 8);
              if ( !v27 || v27 > *((unsigned __int8 *)FdoExt(a1, v23, v24, v25) + 2938) )
                continue;
              v45 = UsbhAcpiEvalAcpiMethodEx(a1, &v49, 1129338207LL, v12);
              if ( v45 < 0 )
              {
LABEL_54:
                v44 = &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE;
LABEL_56:
                UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, v44);
                v10 = 0;
                continue;
              }
              v28 = v12[2];
              if ( v28 )
              {
                v29 = (unsigned __int64)v12 + (unsigned int)v12[1];
                v52 = 0LL;
                v30 = 0LL;
                v53 = 0;
                v31 = (char *)(v12 + 3);
                if ( (unsigned __int64)v26 < v29 )
                {
                  do
                  {
                    if ( (unsigned int)v30 >= v28 )
                      break;
                    if ( (unsigned int)v30 >= 4 || *(_WORD *)v31 )
                      goto LABEL_54;
                    v32 = (char *)&v52 + (unsigned int)v57[2 * v30 - 1];
                    v33 = v57[2 * v30];
                    if ( v33 == 1 )
                    {
                      *v32 = v31[4];
                    }
                    else
                    {
                      if ( v33 != 4 )
                        goto LABEL_54;
                      *(_DWORD *)v32 = *((_DWORD *)v31 + 1);
                    }
                    LOWORD(v34) = *((_WORD *)v31 + 1);
                    v34 = (unsigned __int16)v34 < 4u ? 4LL : (unsigned __int16)v34;
                    v30 = (unsigned int)(v30 + 1);
                    v31 += v34 + 4;
                  }
                  while ( (unsigned __int64)v31 < v29 );
                }
                v35 = *((_QWORD *)v5 + 378);
                if ( v35 )
                {
                  v36 = 28LL * v27 + v35;
                  v37 = v53;
                  *(_QWORD *)v36 = v52;
                  *(_DWORD *)(v36 + 8) = v37;
                  *(_DWORD *)(a2 + 4LL * v27) |= 0x20u;
                }
                v38 = *(_DWORD *)(a2 + 4LL * v27) & 0xFFFFFFF0;
                v39 = (_BYTE)v52 == 0;
                *(_DWORD *)(a2 + 4LL * v27) = v38;
                if ( !v39 )
                {
                  v40 = BYTE1(v52);
                  v41 = v38 & 0xFFFFFFEF;
                  *(_DWORD *)(a2 + 4LL * v27) = v41;
                  if ( v40 == 255 )
                  {
                    v42 = v41 | 8;
                    goto LABEL_33;
                  }
                  if ( v40 )
                  {
                    if ( v40 == 1 )
                    {
                      v42 = v41 | 4;
                    }
                    else
                    {
                      if ( v40 != 2 )
                      {
                        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                          WPP_RECORDER_SF_dD(
                            WPP_GLOBAL_Control->DeviceExtension,
                            v40,
                            v40 - 1,
                            39,
                            (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids,
                            v27,
                            v40);
                        goto LABEL_34;
                      }
                      v42 = v41 | 2;
                    }
LABEL_33:
                    *(_DWORD *)(a2 + 4LL * v27) = v42;
                  }
LABEL_34:
                  v45 = UsbhAcpiEvalAcpiMethodEx(a1, &v49, 1145851999LL, v12);
                  if ( v45 < 0 )
                  {
                    v44 = &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE;
                    goto LABEL_56;
                  }
                  if ( !v12[2] || *v26 != 2 || *((_WORD *)v12 + 7) < 0x10u )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_d(
                        WPP_GLOBAL_Control->DeviceExtension,
                        0,
                        1,
                        40,
                        (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids,
                        v27);
                    v10 = v45;
                    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE);
                    continue;
                  }
                  v43 = *((_QWORD *)v5 + 378);
                  if ( v43 )
                  {
                    *(_OWORD *)(28LL * v27 + v43 + 12) = *((_OWORD *)v12 + 1);
                    *(_DWORD *)(a2 + 4LL * v27) |= 0x40u;
                  }
                  if ( (v12[6] & 1) == 0 )
                    *(_DWORD *)(a2 + 4LL * v27) |= 0x10u;
                  v5[641] |= 1u;
                  goto LABEL_43;
                }
                *(_DWORD *)(a2 + 4LL * v27) = v38 | 0x11;
              }
              else
              {
                UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE);
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    38,
                    (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids,
                    v27);
              }
LABEL_43:
              v10 = v45;
            }
            ExFreePoolWithTag(v12, 0);
            v9 = v48;
          }
          else
          {
            v10 = -1073741670;
          }
        }
        ExFreePoolWithTag(v9, 0);
        return (unsigned int)v10;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
