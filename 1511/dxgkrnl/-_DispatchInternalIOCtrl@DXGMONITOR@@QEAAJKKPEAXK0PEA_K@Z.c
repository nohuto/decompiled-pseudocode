/*
 * XREFs of ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C009C328
 * Callers:
 *     MonitorHandleInternalIOCtrl @ 0x1C00C39EC (MonitorHandleInternalIOCtrl.c)
 * Callees:
 *     EDIDV1_ObtainMonitorUserFriendlyName @ 0x1C000D228 (EDIDV1_ObtainMonitorUserFriendlyName.c)
 *     EDIDV1_ObtainMonitorSerialNumber @ 0x1C000E918 (EDIDV1_ObtainMonitorSerialNumber.c)
 *     EDIDV1_ObtainMonitorProductCodeID @ 0x1C000E9E8 (EDIDV1_ObtainMonitorProductCodeID.c)
 *     EDIDV1_ObtainMonitorManufacturerName @ 0x1C000EA58 (EDIDV1_ObtainMonitorManufacturerName.c)
 *     EDIDV1_ObtainSupportedMonitorFrequencyRanges @ 0x1C000EABC (EDIDV1_ObtainSupportedMonitorFrequencyRanges.c)
 *     EDIDV1_ObtainSupportedMonitorSourceModes @ 0x1C000EBBC (EDIDV1_ObtainSupportedMonitorSourceModes.c)
 *     EDIDV1_ObtainMonitorBasicDisplayParams @ 0x1C000FA20 (EDIDV1_ObtainMonitorBasicDisplayParams.c)
 *     EDIDV1_ObtainMonitorManufactureDate @ 0x1C000FACC (EDIDV1_ObtainMonitorManufactureDate.c)
 *     EDIDV1_ObtainMonitorAnalogVideoInputParams @ 0x1C001032C (EDIDV1_ObtainMonitorAnalogVideoInputParams.c)
 *     EDIDV1_ObtainMonitorDigitalVideoInputParams @ 0x1C0010460 (EDIDV1_ObtainMonitorDigitalVideoInputParams.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     EDIDV1_ObtainMonitorColorCharacteristics @ 0x1C002C7FC (EDIDV1_ObtainMonitorColorCharacteristics.c)
 *     ?DxgkConvertStringToWideString@@YAJPEAD_KPEAG@Z @ 0x1C00C4338 (-DxgkConvertStringToWideString@@YAJPEAD_KPEAG@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00E2184 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     MonitorLogBadEDID @ 0x1C0186E88 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_DispatchInternalIOCtrl(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int a5,
        char *a6,
        unsigned __int64 *a7)
{
  unsigned int v8; // r12d
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // rax
  unsigned int v32; // edx
  int v33; // eax
  __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  __int64 v36; // rcx
  int v37; // eax
  unsigned __int16 *v38; // rbx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdi
  int v48; // eax
  __int64 v49; // r8
  int v50; // eax
  _BYTE *v51; // rbx
  _WORD *v52; // rbx
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rbx
  _QWORD *v71; // rax
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rbx
  __int64 v80; // rcx
  __int64 v81; // r13
  unsigned int v82; // r12d
  __int64 v83; // rax
  char *v84; // rdi
  char *v85; // rdi
  unsigned int v86; // ebx
  unsigned int i; // r8d
  __int64 v88; // rcx
  __int64 v89; // rdx
  unsigned __int16 v90; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 *v91; // [rsp+38h] [rbp-28h]
  int v92; // [rsp+40h] [rbp-20h]
  __int16 v93; // [rsp+44h] [rbp-1Ch]
  char SourceString[16]; // [rsp+48h] [rbp-18h] BYREF

  v8 = a3;
  v91 = a7;
  v10 = (unsigned int)a2;
  LODWORD(v11) = -1073741637;
  v12 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v12 + 24) = v10;
  *(_QWORD *)(v12 + 32) = this;
  v16 = v10 - 2302979;
  if ( v16 )
  {
    v17 = v16 - 12;
    if ( v17 )
    {
      v18 = v17 - 4;
      if ( v18 )
      {
        v19 = v18 - 4;
        if ( v19 )
        {
          v20 = v19 - 4;
          if ( v20 )
          {
            v21 = v20 - 4;
            if ( v21 )
            {
              v22 = v21 - 4;
              if ( v22 )
              {
                v23 = v22 - 4;
                if ( v23 )
                {
                  if ( v23 != 4 )
                    return (unsigned int)v11;
                  v24 = *((_QWORD *)this + 16);
                  if ( v24 )
                  {
                    if ( v8 >= 0x10 && a5 >= 0x10 )
                    {
                      LOBYTE(v90) = 0;
                      v25 = EDIDV1_ObtainMonitorDigitalVideoInputParams((_QWORD *)(v24 + 24));
                      v11 = v25;
                      if ( v25 < 0 )
                        goto LABEL_14;
                      if ( *(_QWORD *)a4 )
                      {
                        v51 = (_BYTE *)*((_QWORD *)a4 + 1);
                        memset(v51, 0, *(_QWORD *)a4);
                        *v51 = v90;
                      }
                      else
                      {
                        LODWORD(v11) = -2147483643;
                      }
                      *(_QWORD *)a6 = 1LL;
                      goto LABEL_22;
                    }
                    goto LABEL_53;
                  }
                }
                else
                {
                  v36 = *((_QWORD *)this + 16);
                  if ( v36 )
                  {
                    if ( v8 >= 0x10 && a5 >= 0x10 )
                    {
                      v92 = 0;
                      v93 = 0;
                      v37 = EDIDV1_ObtainMonitorAnalogVideoInputParams((_QWORD *)(v36 + 24));
                      v11 = v37;
                      if ( v37 < 0 )
                      {
LABEL_14:
                        if ( (_DWORD)v11 != -1073741275 )
                          goto LABEL_81;
                        return (unsigned int)v11;
                      }
                      if ( *(_QWORD *)a4 >= 6uLL )
                      {
                        v52 = (_WORD *)*((_QWORD *)a4 + 1);
                        memset(v52, 0, *(_QWORD *)a4);
                        *(_DWORD *)v52 = v92;
                        v52[2] = v93;
                      }
                      else
                      {
                        LODWORD(v11) = -2147483643;
                      }
                      *(_QWORD *)a6 = 6LL;
LABEL_22:
                      *v91 = 16LL;
                      return (unsigned int)v11;
                    }
LABEL_53:
                    LODWORD(v11) = -1073741789;
                    return (unsigned int)v11;
                  }
                }
              }
              else if ( *((_QWORD *)this + 16) )
              {
                if ( v8 >= 0x10 && a5 >= 0x10 )
                {
                  if ( *(_QWORD *)a4 >= 0xBuLL )
                  {
                    memset(*((void **)a4 + 1), 0, *(_QWORD *)a4);
                    v53 = EDIDV1_ObtainMonitorBasicDisplayParams((_QWORD *)(*((_QWORD *)this + 16) + 24LL));
                    v11 = v53;
                    if ( v53 < 0 )
                    {
                      v58 = WdLogNewEntry5_WdWarning(v55, v54, v56, v57);
                      *(_QWORD *)(v58 + 24) = *((_QWORD *)this + 16) + 24LL;
                      *(_QWORD *)(v58 + 32) = v11;
                      WdLogEvent5_WdWarning(v58);
                      MonitorLogBadEDID(*((_QWORD *)this + 16) + 24LL, (unsigned int)v11);
                    }
                  }
                  else
                  {
                    LODWORD(v11) = -2147483643;
                  }
                  *(_QWORD *)a6 = 11LL;
                  goto LABEL_22;
                }
                goto LABEL_53;
              }
            }
            else if ( *((_QWORD *)this + 16) )
            {
              if ( v8 >= 0x10 && a5 >= 0x10 )
              {
                if ( *(_QWORD *)a4 >= 0x10uLL )
                {
                  memset(*((void **)a4 + 1), 0, *(_QWORD *)a4);
                  v59 = EDIDV1_ObtainMonitorColorCharacteristics((_QWORD *)(*((_QWORD *)this + 16) + 24LL));
                  v11 = v59;
                  if ( v59 < 0 )
                  {
                    v64 = WdLogNewEntry5_WdWarning(v61, v60, v62, v63);
                    *(_QWORD *)(v64 + 24) = *((_QWORD *)this + 16) + 24LL;
                    *(_QWORD *)(v64 + 32) = v11;
                    WdLogEvent5_WdWarning(v64);
                    MonitorLogBadEDID(*((_QWORD *)this + 16) + 24LL, (unsigned int)v11);
                  }
                }
                else
                {
                  LODWORD(v11) = -2147483643;
                }
                *(_QWORD *)a6 = 16LL;
                goto LABEL_22;
              }
              goto LABEL_53;
            }
LABEL_96:
            LODWORD(v11) = -1071841279;
            return (unsigned int)v11;
          }
          if ( !*((_QWORD *)this + 16) )
            goto LABEL_96;
          if ( v8 < 0x10 || a5 < 0x10 )
            goto LABEL_53;
          if ( *(_QWORD *)a4 < 0x82uLL )
          {
            LODWORD(v11) = -2147483643;
LABEL_21:
            *(_QWORD *)a6 = 130LL;
            goto LABEL_22;
          }
          v38 = (unsigned __int16 *)*((_QWORD *)a4 + 1);
          memset(v38, 0, *(_QWORD *)a4);
          v39 = EDIDV1_ObtainMonitorProductCodeID((_QWORD *)(*((_QWORD *)this + 16) + 24LL));
          v11 = v39;
          if ( v39 >= 0 )
          {
            LODWORD(v11) = DxgkConvertStringToWideString(SourceString, 0x20uLL, v38);
            if ( (int)v11 < 0 )
              return (unsigned int)v11;
            v40 = EDIDV1_ObtainMonitorSerialNumber((_QWORD *)(*((_QWORD *)this + 16) + 24LL), SourceString);
            v11 = v40;
            if ( v40 == -1073741275 )
            {
              v66 = WdLogNewEntry5_WdDmmEvent(v27);
              *(_QWORD *)(v66 + 24) = *((_QWORD *)this + 16) + 24LL;
              WdLogEvent5_WdDmmEvent(v66);
            }
            else
            {
              if ( v40 < 0 )
                goto LABEL_81;
              LODWORD(v11) = DxgkConvertStringToWideString(SourceString, 0x20uLL, v38 + 16);
              if ( (int)v11 < 0 )
                return (unsigned int)v11;
            }
            v41 = EDIDV1_ObtainMonitorManufacturerName((_QWORD *)(*((_QWORD *)this + 16) + 24LL));
            v11 = v41;
            if ( v41 >= 0 )
            {
              LODWORD(v11) = DxgkConvertStringToWideString(SourceString, 0x20uLL, v38 + 32);
              if ( (int)v11 < 0 )
                return (unsigned int)v11;
              v42 = EDIDV1_ObtainMonitorManufactureDate((_QWORD *)(*((_QWORD *)this + 16) + 24LL));
              v47 = v42;
              if ( v42 < 0 )
              {
                v67 = WdLogNewEntry5_WdWarning(v44, v43, v45, v46);
                *(_QWORD *)(v67 + 24) = *((_QWORD *)this + 16) + 24LL;
                *(_QWORD *)(v67 + 32) = v47;
                WdLogEvent5_WdWarning(v67);
                MonitorLogBadEDID(*((_QWORD *)this + 16) + 24LL, (unsigned int)v47);
              }
              v48 = EDIDV1_ObtainMonitorUserFriendlyName((_QWORD *)(*((_QWORD *)this + 16) + 24LL), SourceString);
              v11 = v48;
              if ( v48 == -1073741275 )
              {
                v68 = WdLogNewEntry5_WdDmmEvent(v27);
                *(_QWORD *)(v68 + 24) = *((_QWORD *)this + 16) + 24LL;
                WdLogEvent5_WdDmmEvent(v68);
                v38[50] = 0;
                LODWORD(v11) = 0;
                goto LABEL_21;
              }
              if ( v48 >= 0 )
              {
                LODWORD(v11) = DxgkConvertStringToWideString(SourceString, 0x1CuLL, v38 + 51);
                if ( (int)v11 < 0 )
                  return (unsigned int)v11;
                v38[50] = 13;
                goto LABEL_21;
              }
            }
          }
LABEL_81:
          v65 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
          *(_QWORD *)(v65 + 24) = *((_QWORD *)this + 16) + 24LL;
          *(_QWORD *)(v65 + 32) = v11;
          WdLogEvent5_WdWarning(v65);
          MonitorLogBadEDID(*((_QWORD *)this + 16) + 24LL, (unsigned int)v11);
          return (unsigned int)v11;
        }
        if ( !*((_QWORD *)this + 16) )
          goto LABEL_96;
        if ( v8 < 0x88 || a5 < 0x88 )
          goto LABEL_53;
        v69 = *(unsigned __int8 *)a4;
        if ( (unsigned int)v69 >= *((_DWORD *)this + 28) )
          goto LABEL_96;
        v70 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v69);
        if ( !v70 )
          goto LABEL_96;
        *a6 = v69;
        a6[1] = *(_BYTE *)(v70 + 12);
        ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v70 + 8), a6 + 132);
        v71 = v91;
        *(_OWORD *)(a6 + 2) = *(_OWORD *)(v70 + 24);
        *(_OWORD *)(a6 + 18) = *(_OWORD *)(v70 + 40);
        *(_OWORD *)(a6 + 34) = *(_OWORD *)(v70 + 56);
        *(_OWORD *)(a6 + 50) = *(_OWORD *)(v70 + 72);
        *(_OWORD *)(a6 + 66) = *(_OWORD *)(v70 + 88);
        *(_OWORD *)(a6 + 82) = *(_OWORD *)(v70 + 104);
        *(_OWORD *)(a6 + 98) = *(_OWORD *)(v70 + 120);
        *(_OWORD *)(a6 + 114) = *(_OWORD *)(v70 + 136);
        *v71 = 136LL;
LABEL_111:
        LODWORD(v11) = 0;
        return (unsigned int)v11;
      }
      v72 = *((_QWORD *)this + 16);
      if ( !v72 )
        goto LABEL_96;
      if ( v8 < 0x10 || a5 < 0x10 )
        goto LABEL_53;
      v90 = 0;
      v73 = EDIDV1_ObtainSupportedMonitorFrequencyRanges((_QWORD *)(v72 + 24));
      v11 = v73;
      if ( v73 == -1073741275 )
        goto LABEL_96;
      v34 = 0x80000000LL;
      if ( (int)(v73 + 0x80000000) < 0 || v73 == -2147483643 )
      {
        v35 = 52LL * (v90 - 1) + 56;
        if ( *(_QWORD *)a4 >= v35 )
        {
          **((_WORD **)a4 + 1) = v90;
          v50 = EDIDV1_ObtainSupportedMonitorFrequencyRanges((_QWORD *)(*((_QWORD *)this + 16) + 24LL));
LABEL_70:
          v11 = v50;
          if ( v50 < 0 )
            goto LABEL_97;
LABEL_31:
          *(_QWORD *)a6 = v35;
          goto LABEL_22;
        }
        goto LABEL_30;
      }
    }
    else
    {
      v31 = *((_QWORD *)this + 16);
      if ( !v31 )
        goto LABEL_96;
      if ( v8 < 0x10 || a5 < 0x10 )
        goto LABEL_53;
      v32 = *(_DWORD *)(v31 + 8);
      v90 = 0;
      v33 = EDIDV1_ObtainSupportedMonitorSourceModes((_QWORD *)(v31 + 24), v32, &v90, 0LL, 0LL);
      v34 = 0x80000000LL;
      v11 = v33;
      if ( (int)(v33 + 0x80000000) < 0 || v33 == -2147483643 )
      {
        if ( !v90 )
          goto LABEL_96;
        v35 = 56LL * (v90 - 1) + 60;
        if ( *(_QWORD *)a4 >= v35 )
        {
          v49 = *((_QWORD *)a4 + 1);
          *(_WORD *)v49 = v90;
          v50 = EDIDV1_ObtainSupportedMonitorSourceModes(
                  (_QWORD *)(*((_QWORD *)this + 16) + 24LL),
                  *(_DWORD *)(*((_QWORD *)this + 16) + 8LL),
                  (unsigned __int16 *)v49,
                  (unsigned __int16 *)(v49 + 2),
                  (struct _VideoModeDescriptor *)(v49 + 4));
          goto LABEL_70;
        }
LABEL_30:
        LODWORD(v11) = -2147483643;
        goto LABEL_31;
      }
    }
LABEL_97:
    v74 = WdLogNewEntry5_WdError(v34);
    *(_QWORD *)(v74 + 24) = v11;
    WdLogEvent5_WdError(v74);
    return (unsigned int)v11;
  }
  if ( a4 )
  {
    if ( v8 >= 0x10 )
    {
      v77 = *((unsigned int *)this + 28);
      if ( (_DWORD)v77 )
      {
        v79 = *a4 >> 7;
        v80 = a4[1] + *a4;
        v81 = *a4 & 0x7F;
        v82 = (unsigned int)(v80 - 1) >> 7;
        v91 = (unsigned __int64 *)((*((_BYTE *)a4 + 4) + *(_BYTE *)a4 - 1) & 0x7F);
        if ( v82 < (unsigned int)v77 )
        {
          v84 = (char *)*((_QWORD *)a4 + 1);
          memmove(v84, (const void *)(*(_QWORD *)(*((_QWORD *)this + 15) + 8 * v79) + v81 + 24), 128 - v81);
          v85 = &v84[128 - v81];
          v86 = v79 + 1;
          for ( i = v86 + 1; i < v82; ++i )
          {
            v88 = v86;
            v86 = i;
            v89 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v88);
            *(_OWORD *)v85 = *(_OWORD *)(v89 + 24);
            *((_OWORD *)v85 + 1) = *(_OWORD *)(v89 + 40);
            *((_OWORD *)v85 + 2) = *(_OWORD *)(v89 + 56);
            *((_OWORD *)v85 + 3) = *(_OWORD *)(v89 + 72);
            *((_OWORD *)v85 + 4) = *(_OWORD *)(v89 + 88);
            *((_OWORD *)v85 + 5) = *(_OWORD *)(v89 + 104);
            *((_OWORD *)v85 + 6) = *(_OWORD *)(v89 + 120);
            *((_OWORD *)v85 + 7) = *(_OWORD *)(v89 + 136);
            v85 += 128;
          }
          if ( v86 < v82 )
            memmove(v85, (const void *)(*(_QWORD *)(*((_QWORD *)this + 15) + 8LL * v86) + 24LL), (size_t)v91 + 1);
          goto LABEL_111;
        }
        v83 = WdLogNewEntry5_WdWarning(v80, v77, v14, v15);
        *(_QWORD *)(v83 + 24) = *a4;
        *(_QWORD *)(v83 + 32) = a4[1];
        WdLogEvent5_WdWarning(v83);
        return 3223126024LL;
      }
      else
      {
        v78 = WdLogNewEntry5_WdWarning(v13, v77, v14, v15);
        *(_QWORD *)(v78 + 24) = this;
        WdLogEvent5_WdWarning(v78);
        return 3223126017LL;
      }
    }
    else
    {
      v76 = WdLogNewEntry5_WdError(v13);
      WdLogEvent5_WdError(v76);
      return 3221225507LL;
    }
  }
  else
  {
    v75 = WdLogNewEntry5_WdError(v13);
    WdLogEvent5_WdError(v75);
    return 3221225485LL;
  }
}
