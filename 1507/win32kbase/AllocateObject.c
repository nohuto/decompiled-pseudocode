/*
 * XREFs of AllocateObject @ 0x1C004C110
 * Callers:
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C000C43C (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0025680 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CC70 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003D0A0 (-bCompute@DC@@QEAAHXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049FFC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C004AA70 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C004AF60 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C004B680 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C004C060 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     HmgAlloc @ 0x1C0067040 (HmgAlloc.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C007BC6C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00B1320 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B1E40 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C08 (IsWin32AllocateFromPagedLookasideListImplSupported_0.c)
 *     Win32AllocateFromPagedLookasideListImpl_0 @ 0x1C0002C10 (Win32AllocateFromPagedLookasideListImpl_0.c)
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall AllocateObject(size_t Size, unsigned int a2, int a3)
{
  unsigned int v4; // r14d
  int v5; // edi
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int32 v9; // [rsp+40h] [rbp+8h]

  v4 = Size;
  if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type && a2 == *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
  {
    v5 = 1;
    v4 = Size + 160;
  }
  else
  {
    v5 = 0;
  }
  if ( *((_DWORD *)&laSize + a2) >= v4 && (int)IsWin32AllocateFromPagedLookasideListImplSupported_0() >= 0 )
  {
    v6 = (_QWORD *)Win32AllocateFromPagedLookasideListImpl_0();
    v7 = (__int64)v6;
    if ( v6 )
    {
      if ( a3 )
      {
        memset(v6, 0, v4);
      }
      else
      {
        *v6 = 0LL;
        v6[1] = 0LL;
        v6[2] = 0LL;
      }
      if ( v5 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v4 + v7 - 160), 0LL);
      LOWORD(v9) = *(_WORD *)(v7 + 12);
      HIWORD(v9) = *(_WORD *)(v7 + 14) | 0x8000;
      _InterlockedExchange((volatile __int32 *)(v7 + 12), v9);
      return v7;
    }
  }
  if ( a3 )
  {
    v7 = PALLOCMEM2(v4);
  }
  else
  {
    v7 = PALLOCMEM2(v4);
    if ( !v7 )
      goto LABEL_22;
    *(_QWORD *)v7 = 0LL;
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_QWORD *)(v7 + 16) = 0LL;
  }
  if ( v7 )
  {
    if ( v5 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v4 + v7 - 160), 0LL);
    return v7;
  }
LABEL_22:
  EngSetLastError(8u);
  return 0LL;
}
