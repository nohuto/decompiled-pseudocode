/*
 * XREFs of EtwTraceTrappedAppContainerRender @ 0x1C0004800
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00CBEC0 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     Template_szsz @ 0x1C00CC4EC (Template_szsz.c)
 */

void __fastcall EtwTraceTrappedAppContainerRender(PEPROCESS Process, PEPROCESS a2)
{
  unsigned int v4; // edx
  PACCESS_TOKEN v5; // r15
  PACCESS_TOKEN v6; // rsi
  int v7; // eax
  char v8; // cl
  const WCHAR *v9; // rsi
  const WCHAR *v10; // r12
  __int64 *ProcessImageFileName; // r14
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  const WCHAR *v16; // [rsp+40h] [rbp-20h] BYREF
  const WCHAR *v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  __int64 v19; // [rsp+58h] [rbp-8h] BYREF
  char v20; // [rsp+A0h] [rbp+40h] BYREF
  char v21; // [rsp+A8h] [rbp+48h] BYREF

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
  {
    v18 = 256LL;
    v19 = 256LL;
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v17, (unsigned int)a2);
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v16, v4);
    if ( v17 )
    {
      if ( !v16 )
      {
LABEL_23:
        if ( v17 )
          Win32FreePool(v17);
        return;
      }
      v21 = 0;
      v20 = 0;
      v5 = 0LL;
      v6 = PsReferencePrimaryToken(Process);
      RtlQueryPackageIdentity(v6, v17, &v18, 0LL, 0LL, &v21);
      PsDereferencePrimaryToken(v6);
      if ( a2 )
      {
        v5 = PsReferencePrimaryToken(a2);
        v7 = RtlQueryPackageIdentity(v5, v16, &v19, 0LL, 0LL, &v20);
        v8 = v20;
        if ( v7 < 0 )
          v8 = 0;
        v20 = v8;
      }
      else
      {
        v8 = v20;
      }
      if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
      {
        v9 = &pwsz;
        v10 = &pwsz;
        if ( v8 )
          v10 = v16;
        if ( a2 )
          ProcessImageFileName = (__int64 *)PsGetProcessImageFileName(a2);
        else
          ProcessImageFileName = qword_1C008ECF0;
        if ( v21 )
          v9 = v17;
        v12 = PsGetProcessImageFileName(Process);
        Template_szsz(v14, v13, v15, v12, (__int64)v9, (__int64)ProcessImageFileName, (__int64)v10);
      }
      if ( v5 )
        PsDereferencePrimaryToken(v5);
    }
    if ( v16 )
      Win32FreePool(v16);
    goto LABEL_23;
  }
}
