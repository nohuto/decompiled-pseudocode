/*
 * XREFs of NtGdiSelectClipPath @ 0x140228790
 * Callers:
 *     <none>
 * Callees:
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x14006D6CC (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vDestroy@DC@@QEAAXXZ @ 0x1401142AC (-vDestroy@DC@@QEAAXXZ.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1401142D4 (-bInactive@DC@@QEBAHXZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140114328 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140114F5C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 */

_BOOL8 __fastcall NtGdiSelectClipPath(HDC a1, int a2)
{
  BOOL v3; // ebx
  ULONG v4; // ecx
  unsigned int v6; // r8d
  DC *v7[14]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v8[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v9; // [rsp+98h] [rbp-68h]
  _BYTE v10[48]; // [rsp+E0h] [rbp-20h] BYREF
  struct REGION *v11; // [rsp+130h] [rbp+30h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v7, a1);
  v3 = 0;
  if ( !v7[0] || (unsigned int)(a2 - 1) > 4 )
  {
    v4 = 87;
LABEL_3:
    EngSetLastError(v4);
LABEL_4:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
    return 0LL;
  }
  if ( !(unsigned int)DC::bInactive(v7[0]) )
  {
    v4 = 1003;
    goto LABEL_3;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v8, v7);
  if ( !v9 )
  {
    EngSetLastError(8u);
    DC::vDestroy(v7[0]);
    EPATHOBJ::vUnlock((EPATHOBJ *)v8);
    CAutoTGO::vUnguard((CAutoTGO *)v10);
    goto LABEL_4;
  }
  v6 = *(unsigned __int8 *)(*((_QWORD *)v7[0] + 122) + 214LL);
  v11 = 0LL;
  RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v11, (struct EPATHOBJ *)v8, v6, 0LL);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v11);
  if ( v11 )
    v3 = DC::iSelect(v7[0], v11, a2) != 0;
  DC::vDestroy(v7[0]);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v11);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
  EPATHOBJ::vUnlock((EPATHOBJ *)v8);
  CAutoTGO::vUnguard((CAutoTGO *)v10);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
  return v3;
}
