/*
 * XREFs of EtwpEnableDisableSpecialGuids @ 0x1404D5EA8
 * Callers:
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 *     EtwpCheckGuidAccess @ 0x1404D4700 (EtwpCheckGuidAccess.c)
 *     WmiTraceRundownNotify @ 0x1405332B4 (WmiTraceRundownNotify.c)
 *     EtwpEnableDisableUMGL @ 0x1406E26D4 (EtwpEnableDisableUMGL.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1406E82C4 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1406E8394 (EtwpCheckLoggerAccessAndDoRundown.c)
 */

__int64 __fastcall EtwpEnableDisableSpecialGuids(
        __int64 *a1,
        unsigned __int16 a2,
        int a3,
        int a4,
        __int64 a5,
        _BYTE *a6)
{
  char v6; // bp
  __int64 v10; // r9
  unsigned int v11; // esi
  char v12; // bl
  unsigned __int8 v13; // r14
  unsigned int v14; // edx
  GUID **v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // r8
  unsigned int v21; // ebx
  __int64 v22; // r8
  int v23; // edi
  int v24; // edi
  int v25; // edi
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8

  v6 = 1;
  v10 = 3221226021LL;
  v11 = 2;
  *a6 = 1;
  if ( a3 == 2 )
  {
    v20 = *(_QWORD *)&SystemTraceControlGuid.Data1 - *a1;
    if ( *(_QWORD *)&SystemTraceControlGuid.Data1 == *a1 )
      v20 = *(_QWORD *)SystemTraceControlGuid.Data4 - a1[1];
    v21 = 0;
    if ( v20 )
    {
LABEL_12:
      *a6 = 0;
      return (unsigned int)v10;
    }
    if ( a4 != 1 )
    {
      if ( a4 != 2 )
        return v21;
      v6 = 0;
    }
    LOBYTE(v10) = v6;
    return (unsigned int)EtwpCheckGuidAccessAndDoRundown(a1, a2, a5, v10);
  }
  v12 = 0;
  if ( a3 == 1 )
  {
    v13 = 1;
  }
  else
  {
    if ( a3 )
      goto LABEL_12;
    v13 = 0;
  }
  v14 = 0;
  v15 = &EtwpUmglProviders;
  do
  {
    v16 = *a1;
    v17 = *(_QWORD *)&(*v15)->Data1 - *a1;
    if ( !v17 )
      v17 = *(_QWORD *)(*v15)->Data4 - a1[1];
    if ( !v17 )
    {
      LOBYTE(v15) = a4;
      return EtwpEnableDisableUMGL(v13, a2, v15, *((unsigned __int8 *)&(&EtwpUmglProviders)[2 * v14] + 8));
    }
    ++v14;
    v15 += 2;
  }
  while ( v14 < 0xA );
  v18 = *(_QWORD *)&KernelRundownGuid.Data1 - v16;
  if ( *(_QWORD *)&KernelRundownGuid.Data1 == v16 )
    v18 = *(_QWORD *)KernelRundownGuid.Data4 - a1[1];
  if ( v18 )
    goto LABEL_12;
  if ( PsIsCurrentThreadInServerSilo() )
  {
    LODWORD(v10) = -1073741727;
    return (unsigned int)v10;
  }
  if ( v13 != 1 )
  {
    LODWORD(v10) = 0;
    return (unsigned int)v10;
  }
  v23 = a4 - 1;
  if ( !v23 )
  {
    v11 = (unsigned __int16)EtwpSystemLogger[0];
    goto LABEL_37;
  }
  v24 = v23 - 1;
  if ( !v24 )
  {
    v11 = (unsigned __int16)EtwpSystemLogger[0];
    goto LABEL_38;
  }
  v25 = v24 - 2;
  if ( !v25 )
  {
LABEL_37:
    v12 = 1;
    goto LABEL_38;
  }
  if ( v25 != 12 )
  {
LABEL_38:
    LOBYTE(v22) = v12;
    LODWORD(v10) = EtwpCheckLoggerAccessAndDoRundown(v11, a2, v22);
    return (unsigned int)v10;
  }
  v26 = EtwpCheckGuidAccess(&FileProvGuid.Data1, 0x80u, 0LL);
  LODWORD(v10) = v26;
  if ( v26 >= 0 )
  {
    LODWORD(v10) = WmiTraceRundownNotify(a2, v27, v28, (unsigned int)v26);
    if ( (int)v10 >= 0 )
      LODWORD(v10) = 0;
  }
  return (unsigned int)v10;
}
