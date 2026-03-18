/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00654E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DE9C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DED4 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF24 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C00652AC (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C00689C8 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Allocate(
        VIDMM_RECYCLE_HEAP_MGR **a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        unsigned __int8 *a7,
        unsigned __int8 a8)
{
  unsigned int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // ebx
  VIDMM_RECYCLE_HEAP_MGR **v16; // rcx
  int v17; // eax
  _BYTE v19[16]; // [rsp+40h] [rbp-38h] BYREF
  char v20; // [rsp+80h] [rbp+8h]
  int v21; // [rsp+98h] [rbp+20h]

  v21 = a4;
  v10 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(a1 + 52), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19, v11);
  LOBYTE(v14) = 0;
  v15 = v21;
  while ( 1 )
  {
    v20 = v14;
    switch ( v21 )
    {
      case 1:
        v16 = a1 + 2;
        goto LABEL_14;
      case 2:
        v16 = a1 + 10;
        goto LABEL_14;
      case 3:
        v16 = a1 + 18;
        goto LABEL_14;
      case 4:
        v16 = a1 + 26;
        goto LABEL_14;
      case 5:
        v16 = a1 + 34;
        goto LABEL_14;
      case 6:
        v16 = a1 + 42;
LABEL_14:
        v17 = VIDMM_RECYCLE_HEAP::Allocate(v16, a2, v10, (struct VIDMM_RECYCLE_MULTIRANGE **)a5, a6, a7, a8);
        LOBYTE(v14) = v20;
        v15 = v17;
        break;
    }
    if ( v15 >= 0 || (_BYTE)v14 )
      break;
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList((VIDMM_RECYCLE_HEAP_MGR *)a1, 0, 0);
    LOBYTE(v14) = 1;
  }
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19, v14, v12, v13);
  return (unsigned int)v15;
}
