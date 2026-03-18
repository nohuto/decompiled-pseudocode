/*
 * XREFs of AllocateObject @ 0x1C002B640
 * Callers:
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0028890 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C002A290 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C002A760 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C002AE80 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C002B390 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C002B590 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002C950 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C002CD50 (-bCompute@DC@@QEAAHXZ.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C005D124 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C005DC98 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C006F560 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     HmgAlloc @ 0x1C0080B30 (HmgAlloc.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B5010 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     IsWin32AllocPoolImplSupported_0 @ 0x1C0002BE8 (IsWin32AllocPoolImplSupported_0.c)
 *     Win32AllocPoolImpl_0 @ 0x1C0002BF0 (Win32AllocPoolImpl_0.c)
 *     IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C38 (IsWin32AllocateFromPagedLookasideListImplSupported_0.c)
 *     Win32AllocateFromPagedLookasideListImpl_0 @ 0x1C0002C40 (Win32AllocateFromPagedLookasideListImpl_0.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall AllocateObject(size_t Size, unsigned int a2, int a3)
{
  unsigned int v5; // r14d
  int v6; // edi
  _QWORD *v7; // rax
  __int64 v8; // rbx
  int v10; // ebp
  __int32 v11; // [rsp+40h] [rbp+8h]

  v5 = Size;
  if ( LODWORD(WPP_MAIN_CB.SecurityDescriptor) && a2 == LODWORD(WPP_MAIN_CB.SecurityDescriptor) )
  {
    v6 = 1;
    v5 = Size + 160;
  }
  else
  {
    v6 = 0;
  }
  if ( *((_DWORD *)&laSize + a2) >= v5 && (int)IsWin32AllocateFromPagedLookasideListImplSupported_0() >= 0 )
  {
    v7 = (_QWORD *)Win32AllocateFromPagedLookasideListImpl_0();
    v8 = (__int64)v7;
    if ( v7 )
    {
      if ( a3 )
      {
        memset(v7, 0, v5);
      }
      else
      {
        *v7 = 0LL;
        v7[1] = 0LL;
        v7[2] = 0LL;
      }
      if ( v6 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v5 + v8 - 160), 0LL);
      LOWORD(v11) = *(_WORD *)(v8 + 12);
      HIWORD(v11) = *(_WORD *)(v8 + 14) | 0x8000;
      _InterlockedExchange((volatile __int32 *)(v8 + 12), v11);
      return v8;
    }
  }
  v10 = a2 << 24;
  if ( a3 )
  {
    v8 = (__int64)PALLOCMEM2(v5, (unsigned int)(v10 + 808478791), 1);
  }
  else
  {
    v8 = 0LL;
    if ( v5 && (int)IsWin32AllocPoolImplSupported_0() >= 0 )
      v8 = Win32AllocPoolImpl_0();
    if ( !v8 )
      goto LABEL_25;
    *(_QWORD *)v8 = 0LL;
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 16) = 0LL;
  }
  if ( v8 )
  {
    if ( v6 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v5 + v8 - 160), 0LL);
    return v8;
  }
LABEL_25:
  EngSetLastError(8u);
  return 0LL;
}
