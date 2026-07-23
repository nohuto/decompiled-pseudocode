/*
 * XREFs of EtwpEnableDisableSpecialGuids @ 0x140491978
 * Callers:
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x140491D18 (EtwpCheckGuidAccess.c)
 *     WmiTraceRundownNotify @ 0x1404AC86C (WmiTraceRundownNotify.c)
 *     EtwpEnableDisableUMGL @ 0x14069FE60 (EtwpEnableDisableUMGL.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1406A6CD4 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1406A6DB8 (EtwpCheckLoggerAccessAndDoRundown.c)
 */

__int64 __fastcall EtwpEnableDisableSpecialGuids(
        __int64 a1,
        __int64 *a2,
        unsigned __int16 a3,
        int a4,
        int a5,
        __int64 a6,
        _BYTE *a7)
{
  bool v7; // zf
  char v8; // r11
  int v12; // r10d
  __int64 v13; // rdx
  char v14; // bl
  char v15; // bp
  __int64 v16; // rcx
  GUID **v17; // r9
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 result; // rax
  __int64 v22; // rcx
  unsigned int v23; // ebx
  __int64 v24; // rax

  v7 = a1 == EtwpHostSiloState;
  v8 = 1;
  v12 = -1073741275;
  *a7 = 1;
  if ( !v7 )
  {
    result = 3221225506LL;
    goto LABEL_21;
  }
  v13 = 2LL;
  if ( a4 == 2 )
  {
    v22 = *(_QWORD *)&SystemTraceControlGuid.Data1 - *a2;
    if ( *(_QWORD *)&SystemTraceControlGuid.Data1 == *a2 )
      v22 = *(_QWORD *)SystemTraceControlGuid.Data4 - a2[1];
    v23 = 0;
    if ( v22 )
    {
LABEL_20:
      result = 3221226021LL;
LABEL_21:
      *a7 = 0;
      return result;
    }
    if ( a5 != 1 )
    {
      if ( a5 != 2 )
        return v23;
      v8 = 0;
    }
    return (unsigned int)EtwpCheckGuidAccessAndDoRundown(a1, 2, a3, a6, v8);
  }
  v14 = 0;
  if ( a4 != 1 )
  {
    if ( !a4 )
    {
      v15 = 0;
      goto LABEL_6;
    }
    goto LABEL_20;
  }
  v15 = 1;
LABEL_6:
  v16 = 0LL;
  v17 = &EtwpUmglProviders;
  while ( 1 )
  {
    v18 = *a2;
    v19 = *(_QWORD *)&(*v17)->Data1 - *a2;
    if ( !v19 )
      v19 = *(_QWORD *)(*v17)->Data4 - a2[1];
    if ( !v19 )
      break;
    v16 = (unsigned int)(v16 + 1);
    v17 += 2;
    if ( (unsigned int)v16 >= 0xA )
    {
      v20 = *(_QWORD *)&KernelRundownGuid.Data1 - v18;
      if ( *(_QWORD *)&KernelRundownGuid.Data1 == v18 )
        v20 = *(_QWORD *)KernelRundownGuid.Data4 - a2[1];
      if ( v20 )
      {
        *a7 = 0;
        return (unsigned int)v12;
      }
      if ( v15 != 1 )
        return 0;
      if ( a5 != 1 )
      {
        switch ( a5 )
        {
          case 2:
            v13 = (unsigned __int16)EtwpSystemLogger[0];
            break;
          case 4:
LABEL_39:
            v14 = 1;
            break;
          case 16:
            v12 = EtwpCheckGuidAccess(&FileProvGuid, 128LL, 0LL);
            if ( v12 >= 0 )
            {
              v12 = WmiTraceRundownNotify(a3);
              if ( v12 >= 0 )
                return 0;
            }
            return (unsigned int)v12;
          default:
            break;
        }
        LOBYTE(v17) = v14;
        return (unsigned int)EtwpCheckLoggerAccessAndDoRundown(a1, v13, a3, v17);
      }
      v13 = (unsigned __int16)EtwpSystemLogger[0];
      goto LABEL_39;
    }
  }
  v24 = (unsigned int)v16;
  LOBYTE(v16) = v15;
  return EtwpEnableDisableUMGL(v16, a3, (unsigned __int8)a5, *((unsigned __int8 *)&(&EtwpUmglProviders)[2 * v24] + 8));
}
