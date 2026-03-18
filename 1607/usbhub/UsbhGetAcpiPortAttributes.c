/*
 * XREFs of UsbhGetAcpiPortAttributes @ 0x1C001EDC0
 * Callers:
 *     UsbhGetExtendedHubInformation @ 0x1C001EBD0 (UsbhGetExtendedHubInformation.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001CFC0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C001F230 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhAcpiEnumChildren @ 0x1C001F3DC (UsbhAcpiEnumChildren.c)
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     memset @ 0x1C0029900 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0046AAC (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall UsbhGetAcpiPortAttributes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // r13
  __int64 result; // rax
  unsigned int v7; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // r14
  int v10; // ebx
  char *v11; // rax
  char *v12; // rdi
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
  int v28; // ecx
  unsigned int v29; // r11d
  unsigned __int64 v30; // r10
  __int64 v31; // r8
  char *v32; // rax
  _BYTE *v33; // r9
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // eax
  unsigned int v39; // ecx
  bool v40; // zf
  int v41; // edx
  unsigned int v42; // ecx
  int v43; // ecx
  __int64 v44; // rcx
  const EVENT_DESCRIPTOR *v45; // r9
  int v46; // [rsp+20h] [rbp-79h]
  int v47; // [rsp+28h] [rbp-71h]
  int v48; // [rsp+40h] [rbp-59h]
  unsigned int i; // [rsp+44h] [rbp-55h]
  _DWORD *v51; // [rsp+50h] [rbp-49h]
  __int16 v52; // [rsp+58h] [rbp-41h] BYREF
  __int16 v53; // [rsp+5Ah] [rbp-3Fh]
  _DWORD *v54; // [rsp+60h] [rbp-39h]
  __int64 v55; // [rsp+68h] [rbp-31h] BYREF
  int v56; // [rsp+70h] [rbp-29h]
  char v57[4]; // [rsp+78h] [rbp-21h] BYREF
  SIZE_T NumberOfBytes; // [rsp+7Ch] [rbp-1Dh]
  int v59; // [rsp+90h] [rbp-9h]
  _DWORD v60[7]; // [rsp+94h] [rbp-5h]

  v60[3] = 4;
  v60[4] = 4;
  v60[6] = 4;
  v59 = 0;
  v60[0] = 1;
  v60[1] = 1;
  v60[2] = 1;
  v60[5] = 8;
  v5 = FdoExt(a1, a2, a3, a4);
  result = UsbhAcpiEnumChildren(a1, v57, 20LL);
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
      v51 = PoolWithTag;
      v9 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v7);
        v10 = UsbhAcpiEnumChildren(a1, v9, v7);
        if ( v10 >= 0 )
        {
          v11 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x414uLL, 0x42554855u);
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
            for ( i = 1; i < v51[1]; ++i )
            {
              v22 = (_DWORD *)((char *)v22 + (unsigned int)v22[1] + 8);
              if ( (*v22 & 1) == 0 || !v22[1] )
                continue;
              v54 = v22 + 2;
              v53 = *((_WORD *)v22 + 2);
              v52 = v53 - 1;
              v10 = UsbhAcpiEvalAcpiMethodEx(a1, &v52, 1380204895LL, v12, v46, v47);
              if ( v10 < 0 )
              {
                v10 = 0;
                continue;
              }
              if ( !*((_DWORD *)v12 + 2) )
                continue;
              v26 = v12 + 12;
              if ( *((_WORD *)v12 + 6) )
                continue;
              v27 = *((_WORD *)v12 + 8);
              if ( !v27 || v27 > *((unsigned __int8 *)FdoExt(a1, v23, v24, v25) + 2938) )
                continue;
              v48 = UsbhAcpiEvalAcpiMethodEx(a1, &v52, 1129338207LL, v12, v46, v47);
              v28 = v48;
              if ( v48 < 0 )
              {
LABEL_55:
                v45 = &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE;
LABEL_57:
                v47 = v28;
                v46 = v27;
                UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, v45);
                v10 = 0;
                continue;
              }
              v29 = *((_DWORD *)v12 + 2);
              if ( v29 )
              {
                v30 = (unsigned __int64)&v12[*((unsigned int *)v12 + 1)];
                v55 = 0LL;
                v31 = 0LL;
                v56 = 0;
                v32 = v12 + 12;
                if ( (unsigned __int64)v26 < v30 )
                {
                  while ( (unsigned int)v31 < v29 )
                  {
                    if ( (unsigned int)v31 >= 4 )
                    {
                      v28 = -1072431093;
                      goto LABEL_55;
                    }
                    if ( *(_WORD *)v32 )
                    {
                      v28 = -1072431096;
                      goto LABEL_55;
                    }
                    v33 = (char *)&v55 + (unsigned int)v60[2 * v31 - 1];
                    v34 = v60[2 * v31];
                    if ( v34 == 1 )
                    {
                      *v33 = v32[4];
                    }
                    else
                    {
                      if ( v34 != 4 )
                      {
                        v28 = -1072431089;
                        goto LABEL_55;
                      }
                      *(_DWORD *)v33 = *((_DWORD *)v32 + 1);
                    }
                    LOWORD(v35) = *((_WORD *)v32 + 1);
                    if ( (unsigned __int16)v35 < 4u )
                      v35 = 4LL;
                    else
                      v35 = (unsigned __int16)v35;
                    v31 = (unsigned int)(v31 + 1);
                    v32 += v35 + 4;
                    if ( (unsigned __int64)v32 >= v30 )
                      break;
                  }
                }
                v36 = *((_QWORD *)v5 + 378);
                if ( v36 )
                {
                  v37 = 28LL * v27 + v36;
                  v38 = v56;
                  *(_QWORD *)v37 = v55;
                  *(_DWORD *)(v37 + 8) = v38;
                  *(_DWORD *)(a2 + 4LL * v27) |= 0x20u;
                }
                v39 = *(_DWORD *)(a2 + 4LL * v27) & 0xFFFFFFF0;
                v40 = (_BYTE)v55 == 0;
                *(_DWORD *)(a2 + 4LL * v27) = v39;
                if ( !v40 )
                {
                  v41 = BYTE1(v55);
                  v42 = v39 & 0xFFFFFFEF;
                  *(_DWORD *)(a2 + 4LL * v27) = v42;
                  if ( v41 == 255 )
                  {
                    v43 = v42 | 8;
                    goto LABEL_33;
                  }
                  if ( v41 )
                  {
                    if ( v41 == 1 )
                    {
                      v43 = v42 | 4;
                    }
                    else
                    {
                      if ( v41 != 2 )
                      {
                        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                          WPP_RECORDER_SF_dD(
                            WPP_GLOBAL_Control->DeviceExtension,
                            v41,
                            v41 - 1,
                            39,
                            (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
                            v27,
                            v41);
                        goto LABEL_34;
                      }
                      v43 = v42 | 2;
                    }
LABEL_33:
                    *(_DWORD *)(a2 + 4LL * v27) = v43;
                  }
LABEL_34:
                  v48 = UsbhAcpiEvalAcpiMethodEx(a1, &v52, 1145851999LL, v12, v46, v47);
                  v28 = v48;
                  if ( v48 < 0 )
                  {
                    v45 = &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE;
                    goto LABEL_57;
                  }
                  if ( !*((_DWORD *)v12 + 2) || *v26 != 2 || *((_WORD *)v12 + 7) < 0x10u )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_d(
                        WPP_GLOBAL_Control->DeviceExtension,
                        0,
                        1,
                        40,
                        (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
                        v27);
                    v10 = v48;
                    v47 = v48;
                    v46 = v27;
                    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE);
                    continue;
                  }
                  v44 = *((_QWORD *)v5 + 378);
                  if ( v44 )
                  {
                    *(_OWORD *)(28LL * v27 + v44 + 12) = *((_OWORD *)v12 + 1);
                    *(_DWORD *)(a2 + 4LL * v27) |= 0x40u;
                  }
                  if ( (v12[24] & 1) == 0 )
                    *(_DWORD *)(a2 + 4LL * v27) |= 0x10u;
                  v5[641] |= 1u;
                  goto LABEL_43;
                }
                *(_DWORD *)(a2 + 4LL * v27) = v39 | 0x11;
              }
              else
              {
                v47 = -1072431093;
                v46 = v27;
                UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE);
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    38,
                    (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
                    v27);
              }
LABEL_43:
              v10 = v48;
            }
            ExFreePoolWithTag(v12, 0);
            v9 = v51;
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
